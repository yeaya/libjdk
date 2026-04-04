#include <sun/awt/image/VSyncedBSManager$SingleVSyncedBSMgr.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/image/VSyncedBSManager.h>
#include <jcpp.h>

using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $VSyncedBSManager = ::sun::awt::image::VSyncedBSManager;

namespace sun {
	namespace awt {
		namespace image {

void VSyncedBSManager$SingleVSyncedBSMgr::init$() {
	$VSyncedBSManager::init$();
}

bool VSyncedBSManager$SingleVSyncedBSMgr::checkAllowed($BufferStrategy* bs) {
	$synchronized(this) {
		if (this->strategy != nullptr) {
			$var($BufferStrategy, current, $cast($BufferStrategy, this->strategy->get()));
			if (current != nullptr) {
				return (current == bs);
			}
		}
		$set(this, strategy, $new($WeakReference, bs));
		return true;
	}
}

void VSyncedBSManager$SingleVSyncedBSMgr::relinquishVsync($BufferStrategy* bs) {
	$synchronized(this) {
		if (this->strategy != nullptr) {
			$var($BufferStrategy, b, $cast($BufferStrategy, this->strategy->get()));
			if (b == bs) {
				$nc(this->strategy)->clear();
				$set(this, strategy, nullptr);
			}
		}
	}
}

VSyncedBSManager$SingleVSyncedBSMgr::VSyncedBSManager$SingleVSyncedBSMgr() {
}

$Class* VSyncedBSManager$SingleVSyncedBSMgr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"strategy", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/BufferStrategy;>;", $PRIVATE, $field(VSyncedBSManager$SingleVSyncedBSMgr, strategy)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(VSyncedBSManager$SingleVSyncedBSMgr, init$, void)},
		{"checkAllowed", "(Ljava/awt/image/BufferStrategy;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(VSyncedBSManager$SingleVSyncedBSMgr, checkAllowed, bool, $BufferStrategy*)},
		{"relinquishVsync", "(Ljava/awt/image/BufferStrategy;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(VSyncedBSManager$SingleVSyncedBSMgr, relinquishVsync, void, $BufferStrategy*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.VSyncedBSManager$SingleVSyncedBSMgr", "sun.awt.image.VSyncedBSManager", "SingleVSyncedBSMgr", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.image.VSyncedBSManager$SingleVSyncedBSMgr",
		"sun.awt.image.VSyncedBSManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.VSyncedBSManager"
	};
	$loadClass(VSyncedBSManager$SingleVSyncedBSMgr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VSyncedBSManager$SingleVSyncedBSMgr);
	});
	return class$;
}

$Class* VSyncedBSManager$SingleVSyncedBSMgr::class$ = nullptr;

		} // image
	} // awt
} // sun