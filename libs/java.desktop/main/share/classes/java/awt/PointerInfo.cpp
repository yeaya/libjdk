#include <java/awt/PointerInfo.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Point.h>
#include <jcpp.h>

using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void PointerInfo::init$($GraphicsDevice* device, $Point* location) {
	$set(this, device, device);
	$set(this, location, location);
}

$GraphicsDevice* PointerInfo::getDevice() {
	return this->device;
}

$Point* PointerInfo::getLocation() {
	return this->location;
}

PointerInfo::PointerInfo() {
}

$Class* PointerInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"device", "Ljava/awt/GraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(PointerInfo, device)},
		{"location", "Ljava/awt/Point;", nullptr, $PRIVATE | $FINAL, $field(PointerInfo, location)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/GraphicsDevice;Ljava/awt/Point;)V", nullptr, 0, $method(PointerInfo, init$, void, $GraphicsDevice*, $Point*)},
		{"getDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC, $virtualMethod(PointerInfo, getDevice, $GraphicsDevice*)},
		{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(PointerInfo, getLocation, $Point*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.PointerInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PointerInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PointerInfo);
	});
	return class$;
}

$Class* PointerInfo::class$ = nullptr;

	} // awt
} // java