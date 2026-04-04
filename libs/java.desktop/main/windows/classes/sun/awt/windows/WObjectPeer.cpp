#include <sun/awt/windows/WObjectPeer.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $WeakHashMap = ::java::util::WeakHashMap;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

void WObjectPeer::init$() {
	$set(this, createError, nullptr);
	$set(this, stateLock, $new($Object));
}

WObjectPeer* WObjectPeer::getPeerForTarget(Object$* t) {
	$init(WObjectPeer);
	$var(WObjectPeer, peer, $cast(WObjectPeer, $WToolkit::targetToPeer(t)));
	return peer;
}

int64_t WObjectPeer::getData() {
	return this->pData;
}

$Object* WObjectPeer::getTarget() {
	return this->target;
}

$Object* WObjectPeer::getStateLock() {
	return this->stateLock;
}

void WObjectPeer::dispose() {
	bool call_disposeImpl = false;
	$synchronized(this) {
		if (!this->disposed) {
			this->disposed = (call_disposeImpl = true);
		}
	}
	if (call_disposeImpl) {
		if (this->childPeers != nullptr) {
			disposeChildPeers();
		}
		disposeImpl();
	}
}

bool WObjectPeer::isDisposed() {
	return this->disposed;
}

void WObjectPeer::initIDs() {
	$init(WObjectPeer);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WObjectPeer::addChildPeer(WObjectPeer* child) {
	$synchronized(getStateLock()) {
		if (this->childPeers == nullptr) {
			$set(this, childPeers, $new($WeakHashMap));
		}
		if (isDisposed()) {
			$throwNew($IllegalStateException, "Parent peer is disposed"_s);
		}
		$nc(this->childPeers)->put(child, this);
	}
}

void WObjectPeer::disposeChildPeers() {
	$useLocalObjectStack();
	$synchronized(getStateLock()) {
		$var($Iterator, i$, $$nc($nc(this->childPeers)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(WObjectPeer, child, $cast(WObjectPeer, i$->next()));
			if (child != nullptr) {
				try {
					child->dispose();
				} catch ($Exception& e) {
				}
			}
		}
	}
}

void WObjectPeer::clinit$($Class* clazz) {
	{
		WObjectPeer::initIDs();
	}
}

WObjectPeer::WObjectPeer() {
}

$Class* WObjectPeer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pData", "J", nullptr, $VOLATILE, $field(WObjectPeer, pData)},
		{"destroyed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WObjectPeer, destroyed)},
		{"target", "Ljava/lang/Object;", nullptr, $VOLATILE, $field(WObjectPeer, target)},
		{"disposed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WObjectPeer, disposed)},
		{"createError", "Ljava/lang/Error;", nullptr, $VOLATILE, $field(WObjectPeer, createError)},
		{"stateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(WObjectPeer, stateLock)},
		{"childPeers", "Ljava/util/Map;", "Ljava/util/Map<Lsun/awt/windows/WObjectPeer;Lsun/awt/windows/WObjectPeer;>;", $PRIVATE | $VOLATILE, $field(WObjectPeer, childPeers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WObjectPeer, init$, void)},
		{"addChildPeer", "(Lsun/awt/windows/WObjectPeer;)V", nullptr, $FINAL, $method(WObjectPeer, addChildPeer, void, WObjectPeer*)},
		{"dispose", "()V", nullptr, $PUBLIC | $FINAL, $method(WObjectPeer, dispose, void)},
		{"disposeChildPeers", "()V", nullptr, $PRIVATE, $method(WObjectPeer, disposeChildPeers, void)},
		{"disposeImpl", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(WObjectPeer, disposeImpl, void)},
		{"getData", "()J", nullptr, $PUBLIC, $virtualMethod(WObjectPeer, getData, int64_t)},
		{"getPeerForTarget", "(Ljava/lang/Object;)Lsun/awt/windows/WObjectPeer;", nullptr, $PUBLIC | $STATIC, $staticMethod(WObjectPeer, getPeerForTarget, WObjectPeer*, Object$*)},
		{"getStateLock", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(WObjectPeer, getStateLock, $Object*)},
		{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WObjectPeer, getTarget, $Object*)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WObjectPeer, initIDs, void)},
		{"isDisposed", "()Z", nullptr, $PROTECTED | $FINAL, $method(WObjectPeer, isDisposed, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.awt.windows.WObjectPeer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WObjectPeer, name, initialize, &classInfo$$, WObjectPeer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WObjectPeer);
	});
	return class$;
}

$Class* WObjectPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun