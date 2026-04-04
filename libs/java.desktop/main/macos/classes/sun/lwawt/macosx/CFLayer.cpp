#include <sun/lwawt/macosx/CFLayer.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

#undef OPAQUE
#undef TRANSLUCENT

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CFLayer::init$(int64_t ptr, bool disposeOnAppKitThread) {
	$CFRetainedResource::init$(ptr, disposeOnAppKitThread);
}

void CFLayer::dispose() {
	$CFRetainedResource::dispose();
}

int64_t CFLayer::getPointer() {
	return this->ptr;
}

$SurfaceData* CFLayer::getSurfaceData() {
	return this->surfaceData;
}

$Rectangle* CFLayer::getBounds() {
	return $nc(this->peer)->getBounds();
}

$GraphicsConfiguration* CFLayer::getGraphicsConfiguration() {
	return $nc(this->peer)->getGraphicsConfiguration();
}

bool CFLayer::isOpaque() {
	return !$nc(this->peer)->isTranslucent();
}

int32_t CFLayer::getTransparency() {
	return isOpaque() ? $Transparency::OPAQUE : $Transparency::TRANSLUCENT;
}

$Object* CFLayer::getDestination() {
	return $of($nc(this->peer)->getTarget());
}

CFLayer::CFLayer() {
}

$Class* CFLayer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"surfaceData", "Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $field(CFLayer, surfaceData)},
		{"peer", "Lsun/lwawt/LWWindowPeer;", nullptr, $PROTECTED, $field(CFLayer, peer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JZ)V", nullptr, $PROTECTED, $method(CFLayer, init$, void, int64_t, bool)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(CFLayer, dispose, void)},
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(CFLayer, getBounds, $Rectangle*)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CFLayer, getDestination, $Object*)},
		{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $virtualMethod(CFLayer, getGraphicsConfiguration, $GraphicsConfiguration*)},
		{"getPointer", "()J", nullptr, $PUBLIC, $virtualMethod(CFLayer, getPointer, int64_t)},
		{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(CFLayer, getSurfaceData, $SurfaceData*)},
		{"getTransparency", "()I", nullptr, $PUBLIC, $virtualMethod(CFLayer, getTransparency, int32_t)},
		{"isOpaque", "()Z", nullptr, $PUBLIC, $virtualMethod(CFLayer, isOpaque, bool)},
		{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CFLayer, replaceSurfaceData, $SurfaceData*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.lwawt.macosx.CFLayer",
		"sun.lwawt.macosx.CFRetainedResource",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CFLayer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CFLayer);
	});
	return class$;
}

$Class* CFLayer::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun