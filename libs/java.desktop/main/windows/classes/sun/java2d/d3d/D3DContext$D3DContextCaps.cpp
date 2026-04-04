#include <sun/java2d/d3d/D3DContext$D3DContextCaps.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <jcpp.h>

#undef CAPS_AA_SHADER
#undef CAPS_BIOP_SHADER
#undef CAPS_DEVICE_OK
#undef CAPS_LCD_SHADER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DContext$D3DContextCaps::init$(int32_t caps, $String* adapterId) {
	$ContextCapabilities::init$(caps, adapterId);
}

$String* D3DContext$D3DContextCaps::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder, $($ContextCapabilities::toString())));
	if ((this->caps & D3DContext$D3DContextCaps::CAPS_LCD_SHADER) != 0) {
		buf->append("CAPS_LCD_SHADER|"_s);
	}
	if ((this->caps & D3DContext$D3DContextCaps::CAPS_BIOP_SHADER) != 0) {
		buf->append("CAPS_BIOP_SHADER|"_s);
	}
	if ((this->caps & D3DContext$D3DContextCaps::CAPS_AA_SHADER) != 0) {
		buf->append("CAPS_AA_SHADER|"_s);
	}
	if ((this->caps & D3DContext$D3DContextCaps::CAPS_DEVICE_OK) != 0) {
		buf->append("CAPS_DEVICE_OK|"_s);
	}
	return buf->toString();
}

D3DContext$D3DContextCaps::D3DContext$D3DContextCaps() {
}

$Class* D3DContext$D3DContextCaps::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CAPS_LCD_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(D3DContext$D3DContextCaps, CAPS_LCD_SHADER)},
		{"CAPS_BIOP_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(D3DContext$D3DContextCaps, CAPS_BIOP_SHADER)},
		{"CAPS_DEVICE_OK", "I", nullptr, $STATIC | $FINAL, $constField(D3DContext$D3DContextCaps, CAPS_DEVICE_OK)},
		{"CAPS_AA_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(D3DContext$D3DContextCaps, CAPS_AA_SHADER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;)V", nullptr, 0, $method(D3DContext$D3DContextCaps, init$, void, int32_t, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(D3DContext$D3DContextCaps, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DContext$D3DContextCaps", "sun.java2d.d3d.D3DContext", "D3DContextCaps", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DContext$D3DContextCaps",
		"sun.java2d.pipe.hw.ContextCapabilities",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.d3d.D3DContext"
	};
	$loadClass(D3DContext$D3DContextCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DContext$D3DContextCaps);
	});
	return class$;
}

$Class* D3DContext$D3DContextCaps::class$ = nullptr;

		} // d3d
	} // java2d
} // sun