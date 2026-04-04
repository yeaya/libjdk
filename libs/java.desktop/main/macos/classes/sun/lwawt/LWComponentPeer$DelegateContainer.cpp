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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWComponentPeer$DelegateContainer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWComponentPeer;)V", nullptr, $PRIVATE, $method(LWComponentPeer$DelegateContainer, init$, void, $LWComponentPeer*)},
		{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, getLocation, $Point*)},
		{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, getLocationOnScreen, $Point*)},
		{"getX", "()I", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, getX, int32_t)},
		{"getY", "()I", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, getY, int32_t)},
		{"isLightweight", "()Z", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$DelegateContainer, isLightweight, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWComponentPeer$DelegateContainer", "sun.lwawt.LWComponentPeer", "DelegateContainer", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.LWComponentPeer$DelegateContainer",
		"java.awt.Container",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWComponentPeer"
	};
	$loadClass(LWComponentPeer$DelegateContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWComponentPeer$DelegateContainer));
	});
	return class$;
}

$Class* LWComponentPeer$DelegateContainer::class$ = nullptr;

	} // lwawt
} // sun