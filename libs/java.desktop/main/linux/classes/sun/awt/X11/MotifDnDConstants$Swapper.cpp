#include <sun/awt/X11/MotifDnDConstants$Swapper.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/MotifDnDConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MotifDnDConstants = ::sun::awt::X11::MotifDnDConstants;

namespace sun {
	namespace awt {
		namespace X11 {

void MotifDnDConstants$Swapper::init$() {
}

int16_t MotifDnDConstants$Swapper::swap(int16_t s) {
	return (int16_t)(((int32_t)((uint32_t)(s & 0xff00) >> 8)) | ((s & 0xff) << 8));
}

int32_t MotifDnDConstants$Swapper::swap(int32_t i) {
	return ((((int32_t)((uint32_t)(i & (int32_t)0xff000000) >> 24)) | ((int32_t)((uint32_t)(i & 0x00ff0000) >> 8))) | ((i & 0xff00) << 8)) | ((i & 0xff) << 24);
}

int16_t MotifDnDConstants$Swapper::getShort(int64_t data, int8_t order) {
	$init($MotifDnDConstants);
	int16_t s = $nc($MotifDnDConstants::unsafe)->getShort(data);
	if (order != $MotifDnDConstants::getByteOrderByte()) {
		return swap(s);
	} else {
		return s;
	}
}

int32_t MotifDnDConstants$Swapper::getInt(int64_t data, int8_t order) {
	$init($MotifDnDConstants);
	int32_t i = $nc($MotifDnDConstants::unsafe)->getInt(data);
	if (order != $MotifDnDConstants::getByteOrderByte()) {
		return swap(i);
	} else {
		return i;
	}
}

MotifDnDConstants$Swapper::MotifDnDConstants$Swapper() {
}

$Class* MotifDnDConstants$Swapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MotifDnDConstants$Swapper, init$, void)},
		{"getInt", "(JB)I", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifDnDConstants$Swapper, getInt, int32_t, int64_t, int8_t)},
		{"getShort", "(JB)S", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifDnDConstants$Swapper, getShort, int16_t, int64_t, int8_t)},
		{"swap", "(S)S", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifDnDConstants$Swapper, swap, int16_t, int16_t)},
		{"swap", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifDnDConstants$Swapper, swap, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.MotifDnDConstants$Swapper", "sun.awt.X11.MotifDnDConstants", "Swapper", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.X11.MotifDnDConstants$Swapper",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.MotifDnDConstants"
	};
	$loadClass(MotifDnDConstants$Swapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifDnDConstants$Swapper);
	});
	return class$;
}

$Class* MotifDnDConstants$Swapper::class$ = nullptr;

		} // X11
	} // awt
} // sun