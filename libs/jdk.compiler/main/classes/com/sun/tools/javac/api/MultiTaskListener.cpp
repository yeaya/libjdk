#include <com/sun/tools/javac/api/MultiTaskListener.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef EMPTY_LISTENERS

using $TaskListenerArray = $Array<::com::sun::source::util::TaskListener>;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$Handler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$Context$Key* MultiTaskListener::taskListenerKey = nullptr;
$TaskListenerArray* MultiTaskListener::EMPTY_LISTENERS = nullptr;

MultiTaskListener* MultiTaskListener::instance($Context* context) {
	$init(MultiTaskListener);
	$var(MultiTaskListener, instance, $cast(MultiTaskListener, $nc(context)->get(MultiTaskListener::taskListenerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(MultiTaskListener, context));
	}
	return instance;
}

void MultiTaskListener::init$($Context* context) {
	$set(this, listeners, MultiTaskListener::EMPTY_LISTENERS);
	$nc(context)->put(MultiTaskListener::taskListenerKey, this);
	$set(this, ccw, $ClientCodeWrapper::instance(context));
	$set(this, dcfh, $DeferredCompletionFailureHandler::instance(context));
}

$Collection* MultiTaskListener::getTaskListeners() {
	return $Arrays::asList(this->listeners);
}

bool MultiTaskListener::isEmpty() {
	return this->listeners == MultiTaskListener::EMPTY_LISTENERS;
}

void MultiTaskListener::add($TaskListener* listener) {
	$useLocalObjectStack();
	{
		$var($TaskListenerArray, arr$, this->listeners);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($TaskListener, l, arr$->get(i$));
			if ($nc(this->ccw)->unwrap(l) == listener) {
				$throwNew($IllegalStateException);
			}
		}
	}
	$set(this, listeners, $cast($TaskListenerArray, $Arrays::copyOf(this->listeners, $nc(this->listeners)->length + 1)));
	this->listeners->set(this->listeners->length - 1, $($nc(this->ccw)->wrap(listener)));
}

void MultiTaskListener::remove($TaskListener* listener) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->listeners)->length; ++i) {
		if ($nc(this->ccw)->unwrap(this->listeners->get(i)) == listener) {
			if ($nc(this->listeners)->length == 1) {
				$set(this, listeners, MultiTaskListener::EMPTY_LISTENERS);
			} else {
				$var($TaskListenerArray, newListeners, $new($TaskListenerArray, this->listeners->length - 1));
				$System::arraycopy(this->listeners, 0, newListeners, 0, i);
				$System::arraycopy(this->listeners, i + 1, newListeners, i, newListeners->length - i);
				$set(this, listeners, newListeners);
			}
			break;
		}
	}
}

void MultiTaskListener::started($TaskEvent* e) {
	$useLocalObjectStack();
	$var($DeferredCompletionFailureHandler$Handler, prevDeferredHandler, $nc(this->dcfh)->setHandler($nc(this->dcfh)->userCodeHandler));
	$var($Throwable, var$0, nullptr);
	try {
		$var($TaskListenerArray, ll, this->listeners);
		{
			$var($TaskListenerArray, arr$, ll);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($TaskListener, l, arr$->get(i$));
				$nc(l)->started(e);
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->dcfh->setHandler(prevDeferredHandler);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void MultiTaskListener::finished($TaskEvent* e) {
	$useLocalObjectStack();
	$var($DeferredCompletionFailureHandler$Handler, prevDeferredHandler, $nc(this->dcfh)->setHandler($nc(this->dcfh)->userCodeHandler));
	$var($Throwable, var$0, nullptr);
	try {
		$var($TaskListenerArray, ll, this->listeners);
		{
			$var($TaskListenerArray, arr$, ll);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($TaskListener, l, arr$->get(i$));
				$nc(l)->finished(e);
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->dcfh->setHandler(prevDeferredHandler);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$String* MultiTaskListener::toString() {
	return $Arrays::toString(this->listeners);
}

void MultiTaskListener::clear() {
	$set(this, listeners, MultiTaskListener::EMPTY_LISTENERS);
}

void MultiTaskListener::clinit$($Class* clazz) {
	$assignStatic(MultiTaskListener::taskListenerKey, $new($Context$Key));
	$assignStatic(MultiTaskListener::EMPTY_LISTENERS, $new($TaskListenerArray, 0));
}

MultiTaskListener::MultiTaskListener() {
}

$Class* MultiTaskListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"taskListenerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/api/MultiTaskListener;>;", $PUBLIC | $STATIC | $FINAL, $staticField(MultiTaskListener, taskListenerKey)},
		{"EMPTY_LISTENERS", "[Lcom/sun/source/util/TaskListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MultiTaskListener, EMPTY_LISTENERS)},
		{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $PRIVATE | $FINAL, $field(MultiTaskListener, dcfh)},
		{"listeners", "[Lcom/sun/source/util/TaskListener;", nullptr, 0, $field(MultiTaskListener, listeners)},
		{"ccw", "Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, 0, $field(MultiTaskListener, ccw)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(MultiTaskListener, init$, void, $Context*)},
		{"add", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC, $virtualMethod(MultiTaskListener, add, void, $TaskListener*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(MultiTaskListener, clear, void)},
		{"finished", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC, $virtualMethod(MultiTaskListener, finished, void, $TaskEvent*)},
		{"getTaskListeners", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lcom/sun/source/util/TaskListener;>;", $PUBLIC, $virtualMethod(MultiTaskListener, getTaskListeners, $Collection*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/api/MultiTaskListener;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiTaskListener, instance, MultiTaskListener*, $Context*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(MultiTaskListener, isEmpty, bool)},
		{"remove", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC, $virtualMethod(MultiTaskListener, remove, void, $TaskListener*)},
		{"started", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC, $virtualMethod(MultiTaskListener, started, void, $TaskEvent*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultiTaskListener, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.api.MultiTaskListener",
		"java.lang.Object",
		"com.sun.source.util.TaskListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultiTaskListener, name, initialize, &classInfo$$, MultiTaskListener::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MultiTaskListener);
	});
	return class$;
}

$Class* MultiTaskListener::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com