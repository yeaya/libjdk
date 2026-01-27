#include <sun/lwawt/LWComponentPeer$DelegateContainer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWComponentPeer$DelegateContainer_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWComponentPeer$DelegateContainer, this$0)},
	{}
};

$MethodInfo _LWComponentPeer$DelegateContainer_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWComponentPeer;)V", nullptr, $PRIVATE, $method(LWComponentPeer$DelegateContainer, init$, void, $LWComponentPeer*)},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, getLocation, $Point*)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, getLocationOnScreen, $Point*)},
	{"getX", "()I", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, getX, int32_t)},
	{"getY", "()I", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, getY, int32_t)},
	{"isLightweight", "()Z", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, isLightweight, bool)},
	{}
};

$InnerClassInfo _LWComponentPeer$DelegateContainer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWComponentPeer$DelegateContainer", "sun.lwawt.LWComponentPeer", "DelegateContainer", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWComponentPeer$DelegateContainer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWComponentPeer$DelegateContainer",
	"java.awt.Container",
	nullptr,
	_LWComponentPeer$DelegateContainer_FieldInfo_,
	_LWComponentPeer$DelegateContainer_MethodInfo_,
	nullptr,
	nullptr,
	_LWComponentPeer$DelegateContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWComponentPeer"
};

$Object* allocate$LWComponentPeer$DelegateContainer($Class* clazz) {
	return $of($alloc(LWComponentPeer$DelegateContainer));
}

void LWComponentPeer$DelegateContainer::init$($LWComponentPeer* this$0) {
	$set(this, this$0, this$0);
	$Container::init$();
	{
		enableEvents(-1);
	}
}

bool LWComponentPeer$DelegateContainer::isLightweight() {
	return false;
}

$Point* LWComponentPeer$DelegateContainer::getLocation() {
	return getLocationOnScreen();
}

$Point* LWComponentPeer$DelegateContainer::getLocationOnScreen() {
	return this->this$0->getLocationOnScreen();
}

int32_t LWComponentPeer$DelegateContainer::getX() {
	return $nc($(getLocation()))->x;
}

int32_t LWComponentPeer$DelegateContainer::getY() {
	return $nc($(getLocation()))->y;
}

LWComponentPeer$DelegateContainer::LWComponentPeer$DelegateContainer() {
}

$Class* LWComponentPeer$DelegateContainer::load$($String* name, bool initialize) {
	$loadClass(LWComponentPeer$DelegateContainer, name, initialize, &_LWComponentPeer$DelegateContainer_ClassInfo_, allocate$LWComponentPeer$DelegateContainer);
	return class$;
}

$Class* LWComponentPeer$DelegateContainer::class$ = nullptr;

	} // lwawt
} // sun