#include <sun/awt/image/VSyncedBSManager.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/security/AccessController.h>
#include <sun/awt/image/VSyncedBSManager$NoLimitVSyncBSMgr.h>
#include <sun/awt/image/VSyncedBSManager$SingleVSyncedBSMgr.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $VSyncedBSManager$NoLimitVSyncBSMgr = ::sun::awt::image::VSyncedBSManager$NoLimitVSyncBSMgr;
using $VSyncedBSManager$SingleVSyncedBSMgr = ::sun::awt::image::VSyncedBSManager$SingleVSyncedBSMgr;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace image {

VSyncedBSManager* VSyncedBSManager::theInstance = nullptr;
bool VSyncedBSManager::vSyncLimit = false;

void VSyncedBSManager::init$() {
}

VSyncedBSManager* VSyncedBSManager::getInstance(bool create) {
	$init(VSyncedBSManager);
	if (VSyncedBSManager::theInstance == nullptr && create) {
		$assignStatic(VSyncedBSManager::theInstance, VSyncedBSManager::vSyncLimit ? $cast(VSyncedBSManager, $new($VSyncedBSManager$SingleVSyncedBSMgr)) : $cast(VSyncedBSManager, $new($VSyncedBSManager$NoLimitVSyncBSMgr)));
	}
	return VSyncedBSManager::theInstance;
}

bool VSyncedBSManager::vsyncAllowed($BufferStrategy* bs) {
	$init(VSyncedBSManager);
	$var(VSyncedBSManager, bsm, getInstance(true));
	return $nc(bsm)->checkAllowed(bs);
}

void VSyncedBSManager::releaseVsync($BufferStrategy* bs) {
	$init(VSyncedBSManager);
	$synchronized(class$) {
		$var(VSyncedBSManager, bsm, getInstance(false));
		if (bsm != nullptr) {
			bsm->relinquishVsync(bs);
		}
	}
}

void VSyncedBSManager::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	VSyncedBSManager::vSyncLimit = $($Boolean::valueOf($$cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "sun.java2d.vsynclimit"_s, "true"_s)))))->booleanValue();
}

VSyncedBSManager::VSyncedBSManager() {
}

$Class* VSyncedBSManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theInstance", "Lsun/awt/image/VSyncedBSManager;", nullptr, $PRIVATE | $STATIC, $staticField(VSyncedBSManager, theInstance)},
		{"vSyncLimit", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VSyncedBSManager, vSyncLimit)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VSyncedBSManager, init$, void)},
		{"checkAllowed", "(Ljava/awt/image/BufferStrategy;)Z", nullptr, $ABSTRACT, $virtualMethod(VSyncedBSManager, checkAllowed, bool, $BufferStrategy*)},
		{"getInstance", "(Z)Lsun/awt/image/VSyncedBSManager;", nullptr, $PRIVATE | $STATIC, $staticMethod(VSyncedBSManager, getInstance, VSyncedBSManager*, bool)},
		{"releaseVsync", "(Ljava/awt/image/BufferStrategy;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(VSyncedBSManager, releaseVsync, void, $BufferStrategy*)},
		{"relinquishVsync", "(Ljava/awt/image/BufferStrategy;)V", nullptr, $ABSTRACT, $virtualMethod(VSyncedBSManager, relinquishVsync, void, $BufferStrategy*)},
		{"vsyncAllowed", "(Ljava/awt/image/BufferStrategy;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(VSyncedBSManager, vsyncAllowed, bool, $BufferStrategy*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.VSyncedBSManager$SingleVSyncedBSMgr", "sun.awt.image.VSyncedBSManager", "SingleVSyncedBSMgr", $PRIVATE | $STATIC | $FINAL},
		{"sun.awt.image.VSyncedBSManager$NoLimitVSyncBSMgr", "sun.awt.image.VSyncedBSManager", "NoLimitVSyncBSMgr", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.image.VSyncedBSManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.image.VSyncedBSManager$SingleVSyncedBSMgr,sun.awt.image.VSyncedBSManager$NoLimitVSyncBSMgr"
	};
	$loadClass(VSyncedBSManager, name, initialize, &classInfo$$, VSyncedBSManager::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VSyncedBSManager);
	});
	return class$;
}

$Class* VSyncedBSManager::class$ = nullptr;

		} // image
	} // awt
} // sun