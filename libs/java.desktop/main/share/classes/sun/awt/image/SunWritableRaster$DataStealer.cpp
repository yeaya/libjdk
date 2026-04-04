#include <sun/awt/image/SunWritableRaster$DataStealer.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace sun {
	namespace awt {
		namespace image {

$Class* SunWritableRaster$DataStealer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getData", "(Ljava/awt/image/DataBufferByte;I)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunWritableRaster$DataStealer, getData, $bytes*, $DataBufferByte*, int32_t)},
		{"getData", "(Ljava/awt/image/DataBufferUShort;I)[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunWritableRaster$DataStealer, getData, $shorts*, $DataBufferUShort*, int32_t)},
		{"getData", "(Ljava/awt/image/DataBufferInt;I)[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunWritableRaster$DataStealer, getData, $ints*, $DataBufferInt*, int32_t)},
		{"getTrackable", "(Ljava/awt/image/DataBuffer;)Lsun/java2d/StateTrackableDelegate;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunWritableRaster$DataStealer, getTrackable, $StateTrackableDelegate*, $DataBuffer*)},
		{"setTrackable", "(Ljava/awt/image/DataBuffer;Lsun/java2d/StateTrackableDelegate;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunWritableRaster$DataStealer, setTrackable, void, $DataBuffer*, $StateTrackableDelegate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.SunWritableRaster$DataStealer", "sun.awt.image.SunWritableRaster", "DataStealer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.image.SunWritableRaster$DataStealer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.SunWritableRaster"
	};
	$loadClass(SunWritableRaster$DataStealer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunWritableRaster$DataStealer);
	});
	return class$;
}

$Class* SunWritableRaster$DataStealer::class$ = nullptr;

		} // image
	} // awt
} // sun