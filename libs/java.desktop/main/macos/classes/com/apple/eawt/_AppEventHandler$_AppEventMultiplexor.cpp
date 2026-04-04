#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler$_AppEventMultiplexor$1.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/util/ArrayList.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventMultiplexor$1 = ::com::apple::eawt::_AppEventHandler$_AppEventMultiplexor$1;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ArrayList = ::java::util::ArrayList;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace com {
	namespace apple {
		namespace eawt {

void _AppEventHandler$_AppEventMultiplexor::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$set(this, listenerToAppContext, $new($IdentityHashMap));
}

void _AppEventHandler$_AppEventMultiplexor::dispatch($_AppEventHandler$_NativeEvent* event, $ObjectArray* args) {
	$useLocalObjectStack();
	$var($ArrayList, localEntries, nullptr);
	$synchronized(this) {
		if (this->listenerToAppContext->size() == 0) {
			return;
		}
		$assign(localEntries, $new($ArrayList, this->listenerToAppContext->size()));
		localEntries->addAll($(this->listenerToAppContext->entrySet()));
	}
	{
		$var($Iterator, i$, localEntries->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Object, listener, $nc(e)->getKey());
				$var($AppContext, listenerContext, $cast($AppContext, e->getValue()));
				$SunToolkit::invokeLaterOnAppContext(listenerContext, $$new($_AppEventHandler$_AppEventMultiplexor$1, this, listener, event));
			}
		}
	}
}

void _AppEventHandler$_AppEventMultiplexor::addListener(Object$* listener) {
	$synchronized(this) {
		setListenerContext(listener, $($AppContext::getAppContext()));
		if (!this->nativeListenerRegistered) {
			registerNativeListener();
			this->nativeListenerRegistered = true;
		}
	}
}

void _AppEventHandler$_AppEventMultiplexor::removeListener(Object$* listener) {
	$synchronized(this) {
		this->listenerToAppContext->remove(listener);
	}
}

void _AppEventHandler$_AppEventMultiplexor::registerNativeListener() {
}

void _AppEventHandler$_AppEventMultiplexor::setListenerContext(Object$* listener, $AppContext* listenerContext) {
	if (listenerContext == nullptr) {
		$throwNew($RuntimeException, "Attempting to add a listener from a thread group without AppContext"_s);
	}
	this->listenerToAppContext->put(listener, $($AppContext::getAppContext()));
}

_AppEventHandler$_AppEventMultiplexor::_AppEventHandler$_AppEventMultiplexor() {
}

$Class* _AppEventHandler$_AppEventMultiplexor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppEventMultiplexor, this$0)},
		{"listenerToAppContext", "Ljava/util/Map;", "Ljava/util/Map<TL;Lsun/awt/AppContext;>;", $PRIVATE | $FINAL, $field(_AppEventHandler$_AppEventMultiplexor, listenerToAppContext)},
		{"nativeListenerRegistered", "Z", nullptr, 0, $field(_AppEventHandler$_AppEventMultiplexor, nativeListenerRegistered)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$_AppEventMultiplexor, init$, void, $_AppEventHandler*)},
		{"addListener", "(Ljava/lang/Object;)V", "(TL;)V", $SYNCHRONIZED, $virtualMethod(_AppEventHandler$_AppEventMultiplexor, addListener, void, Object$*)},
		{"dispatch", "(Lcom/apple/eawt/_AppEventHandler$_NativeEvent;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $virtualMethod(_AppEventHandler$_AppEventMultiplexor, dispatch, void, $_AppEventHandler$_NativeEvent*, $ObjectArray*)},
		{"performOnListener", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", "(TL;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", $ABSTRACT, $virtualMethod(_AppEventHandler$_AppEventMultiplexor, performOnListener, void, Object$*, $_AppEventHandler$_NativeEvent*)},
		{"registerNativeListener", "()V", nullptr, 0, $virtualMethod(_AppEventHandler$_AppEventMultiplexor, registerNativeListener, void)},
		{"removeListener", "(Ljava/lang/Object;)V", "(TL;)V", $SYNCHRONIZED, $virtualMethod(_AppEventHandler$_AppEventMultiplexor, removeListener, void, Object$*)},
		{"setListenerContext", "(Ljava/lang/Object;Lsun/awt/AppContext;)V", "(TL;Lsun/awt/AppContext;)V", $PRIVATE, $method(_AppEventHandler$_AppEventMultiplexor, setListenerContext, void, Object$*, $AppContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_AppEventMultiplexor", $ABSTRACT},
		{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.eawt._AppEventHandler$_AppEventMultiplexor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<L:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$_AppEventMultiplexor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$_AppEventMultiplexor);
	});
	return class$;
}

$Class* _AppEventHandler$_AppEventMultiplexor::class$ = nullptr;

		} // eawt
	} // apple
} // com