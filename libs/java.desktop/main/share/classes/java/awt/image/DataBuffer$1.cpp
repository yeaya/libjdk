#include <java/awt/image/DataBuffer$1.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace java {
	namespace awt {
		namespace image {

void DataBuffer$1::init$() {
}

$bytes* DataBuffer$1::getData($DataBufferByte* dbb, int32_t bank) {
	return $nc($nc(dbb)->bankdata)->get(bank);
}

$shorts* DataBuffer$1::getData($DataBufferUShort* dbus, int32_t bank) {
	return $nc($nc(dbus)->bankdata)->get(bank);
}

$ints* DataBuffer$1::getData($DataBufferInt* dbi, int32_t bank) {
	return $nc($nc(dbi)->bankdata)->get(bank);
}

$StateTrackableDelegate* DataBuffer$1::getTrackable($DataBuffer* db) {
	return $nc(db)->theTrackable;
}

void DataBuffer$1::setTrackable($DataBuffer* db, $StateTrackableDelegate* trackable) {
	$set($nc(db), theTrackable, trackable);
}

DataBuffer$1::DataBuffer$1() {
}

$Class* DataBuffer$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DataBuffer$1, init$, void)},
		{"getData", "(Ljava/awt/image/DataBufferByte;I)[B", nullptr, $PUBLIC, $virtualMethod(DataBuffer$1, getData, $bytes*, $DataBufferByte*, int32_t)},
		{"getData", "(Ljava/awt/image/DataBufferUShort;I)[S", nullptr, $PUBLIC, $virtualMethod(DataBuffer$1, getData, $shorts*, $DataBufferUShort*, int32_t)},
		{"getData", "(Ljava/awt/image/DataBufferInt;I)[I", nullptr, $PUBLIC, $virtualMethod(DataBuffer$1, getData, $ints*, $DataBufferInt*, int32_t)},
		{"getTrackable", "(Ljava/awt/image/DataBuffer;)Lsun/java2d/StateTrackableDelegate;", nullptr, $PUBLIC, $virtualMethod(DataBuffer$1, getTrackable, $StateTrackableDelegate*, $DataBuffer*)},
		{"setTrackable", "(Ljava/awt/image/DataBuffer;Lsun/java2d/StateTrackableDelegate;)V", nullptr, $PUBLIC, $virtualMethod(DataBuffer$1, setTrackable, void, $DataBuffer*, $StateTrackableDelegate*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.image.DataBuffer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.image.DataBuffer$1", nullptr, nullptr, 0},
		{"sun.awt.image.SunWritableRaster$DataStealer", "sun.awt.image.SunWritableRaster", "DataStealer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.image.DataBuffer$1",
		"java.lang.Object",
		"sun.awt.image.SunWritableRaster$DataStealer",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.image.DataBuffer"
	};
	$loadClass(DataBuffer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DataBuffer$1);
	});
	return class$;
}

$Class* DataBuffer$1::class$ = nullptr;

		} // image
	} // awt
} // java