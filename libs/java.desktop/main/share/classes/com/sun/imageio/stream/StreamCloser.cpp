#include <com/sun/imageio/stream/StreamCloser.h>
#include <com/sun/imageio/stream/StreamCloser$1.h>
#include <com/sun/imageio/stream/StreamCloser$CloseAction.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/WeakHashMap.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <jcpp.h>

using $StreamCloser$1 = ::com::sun::imageio::stream::StreamCloser$1;
using $StreamCloser$CloseAction = ::com::sun::imageio::stream::StreamCloser$CloseAction;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

class StreamCloser$$Lambda$lambda$addToQueue$0 : public $PrivilegedAction {
	$class(StreamCloser$$Lambda$lambda$addToQueue$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Runnable* streamCloserRunnable) {
		$set(this, streamCloserRunnable, streamCloserRunnable);
	}
	virtual $Object* run() override {
		return StreamCloser::lambda$addToQueue$0(streamCloserRunnable);
	}
	$Runnable* streamCloserRunnable = nullptr;
};
$Class* StreamCloser$$Lambda$lambda$addToQueue$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"streamCloserRunnable", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(StreamCloser$$Lambda$lambda$addToQueue$0, streamCloserRunnable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(StreamCloser$$Lambda$lambda$addToQueue$0, init$, void, $Runnable*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StreamCloser$$Lambda$lambda$addToQueue$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.imageio.stream.StreamCloser$$Lambda$lambda$addToQueue$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StreamCloser$$Lambda$lambda$addToQueue$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamCloser$$Lambda$lambda$addToQueue$0);
	});
	return class$;
}
$Class* StreamCloser$$Lambda$lambda$addToQueue$0::class$ = nullptr;

$WeakHashMap* StreamCloser::toCloseQueue = nullptr;
$Thread* StreamCloser::streamCloser = nullptr;

void StreamCloser::init$() {
}

void StreamCloser::addToQueue($StreamCloser$CloseAction* ca) {
	$useLocalObjectStack();
	$load(StreamCloser);
	$beforeCallerSensitive();
	$synchronized(StreamCloser::class$) {
		$init(StreamCloser);
		if (StreamCloser::toCloseQueue == nullptr) {
			$assignStatic(StreamCloser::toCloseQueue, $new($WeakHashMap));
		}
		$nc(StreamCloser::toCloseQueue)->put(ca, nullptr);
		if (StreamCloser::streamCloser == nullptr) {
			$var($Runnable, streamCloserRunnable, $new($StreamCloser$1));
			$AccessController::doPrivileged($cast($PrivilegedAction, $$new(StreamCloser$$Lambda$lambda$addToQueue$0, streamCloserRunnable)));
		}
	}
}

void StreamCloser::removeFromQueue($StreamCloser$CloseAction* ca) {
	$load(StreamCloser);
	$synchronized(StreamCloser::class$) {
		$init(StreamCloser);
		if (StreamCloser::toCloseQueue != nullptr) {
			StreamCloser::toCloseQueue->remove(ca);
		}
	}
}

$StreamCloser$CloseAction* StreamCloser::createCloseAction($ImageInputStream* iis) {
	return $new($StreamCloser$CloseAction, iis);
}

$Object* StreamCloser::lambda$addToQueue$0($Runnable* streamCloserRunnable) {
	$useLocalObjectStack();
	$var($ThreadGroup, tg, $ThreadGroupUtils::getRootThreadGroup());
	$init(StreamCloser);
	$assignStatic(StreamCloser::streamCloser, $new($Thread, tg, streamCloserRunnable, "StreamCloser"_s, 0, false));
	StreamCloser::streamCloser->setContextClassLoader(nullptr);
	$$nc($Runtime::getRuntime())->addShutdownHook(StreamCloser::streamCloser);
	return nullptr;
}

StreamCloser::StreamCloser() {
}

$Class* StreamCloser::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.imageio.stream.StreamCloser$$Lambda$lambda$addToQueue$0")) {
			return StreamCloser$$Lambda$lambda$addToQueue$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"toCloseQueue", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Lcom/sun/imageio/stream/StreamCloser$CloseAction;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(StreamCloser, toCloseQueue)},
		{"streamCloser", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(StreamCloser, streamCloser)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StreamCloser, init$, void)},
		{"addToQueue", "(Lcom/sun/imageio/stream/StreamCloser$CloseAction;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StreamCloser, addToQueue, void, $StreamCloser$CloseAction*)},
		{"createCloseAction", "(Ljavax/imageio/stream/ImageInputStream;)Lcom/sun/imageio/stream/StreamCloser$CloseAction;", nullptr, $PUBLIC | $STATIC, $staticMethod(StreamCloser, createCloseAction, $StreamCloser$CloseAction*, $ImageInputStream*)},
		{"lambda$addToQueue$0", "(Ljava/lang/Runnable;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(StreamCloser, lambda$addToQueue$0, $Object*, $Runnable*)},
		{"removeFromQueue", "(Lcom/sun/imageio/stream/StreamCloser$CloseAction;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StreamCloser, removeFromQueue, void, $StreamCloser$CloseAction*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.stream.StreamCloser$CloseAction", "com.sun.imageio.stream.StreamCloser", "CloseAction", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.imageio.stream.StreamCloser$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.stream.StreamCloser",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.imageio.stream.StreamCloser$CloseAction,com.sun.imageio.stream.StreamCloser$1"
	};
	$loadClass(StreamCloser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamCloser);
	});
	return class$;
}

$Class* StreamCloser::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com