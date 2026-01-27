#include <sun/awt/image/VSyncedBSManager$NoLimitVSyncBSMgr.h>

#include <java/awt/image/BufferStrategy.h>
#include <sun/awt/image/VSyncedBSManager.h>
#include <jcpp.h>

using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VSyncedBSManager = ::sun::awt::image::VSyncedBSManager;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _VSyncedBSManager$NoLimitVSyncBSMgr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(VSyncedBSManager$NoLimitVSyncBSMgr, init$, void)},
	{"checkAllowed", "(Ljava/awt/image/BufferStrategy;)Z", nullptr, 0, $virtualMethod(VSyncedBSManager$NoLimitVSyncBSMgr, checkAllowed, bool, $BufferStrategy*)},
	{"relinquishVsync", "(Ljava/awt/image/BufferStrategy;)V", nullptr, 0, $virtualMethod(VSyncedBSManager$NoLimitVSyncBSMgr, relinquishVsync, void, $BufferStrategy*)},
	{}
};

$InnerClassInfo _VSyncedBSManager$NoLimitVSyncBSMgr_InnerClassesInfo_[] = {
	{"sun.awt.image.VSyncedBSManager$NoLimitVSyncBSMgr", "sun.awt.image.VSyncedBSManager", "NoLimitVSyncBSMgr", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _VSyncedBSManager$NoLimitVSyncBSMgr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.image.VSyncedBSManager$NoLimitVSyncBSMgr",
	"sun.awt.image.VSyncedBSManager",
	nullptr,
	nullptr,
	_VSyncedBSManager$NoLimitVSyncBSMgr_MethodInfo_,
	nullptr,
	nullptr,
	_VSyncedBSManager$NoLimitVSyncBSMgr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.VSyncedBSManager"
};

$Object* allocate$VSyncedBSManager$NoLimitVSyncBSMgr($Class* clazz) {
	return $of($alloc(VSyncedBSManager$NoLimitVSyncBSMgr));
}

void VSyncedBSManager$NoLimitVSyncBSMgr::init$() {
	$VSyncedBSManager::init$();
}

bool VSyncedBSManager$NoLimitVSyncBSMgr::checkAllowed($BufferStrategy* bs) {
	return true;
}

void VSyncedBSManager$NoLimitVSyncBSMgr::relinquishVsync($BufferStrategy* bs) {
}

VSyncedBSManager$NoLimitVSyncBSMgr::VSyncedBSManager$NoLimitVSyncBSMgr() {
}

$Class* VSyncedBSManager$NoLimitVSyncBSMgr::load$($String* name, bool initialize) {
	$loadClass(VSyncedBSManager$NoLimitVSyncBSMgr, name, initialize, &_VSyncedBSManager$NoLimitVSyncBSMgr_ClassInfo_, allocate$VSyncedBSManager$NoLimitVSyncBSMgr);
	return class$;
}

$Class* VSyncedBSManager$NoLimitVSyncBSMgr::class$ = nullptr;

		} // image
	} // awt
} // sun