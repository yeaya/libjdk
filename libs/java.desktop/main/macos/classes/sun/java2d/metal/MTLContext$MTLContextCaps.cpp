#include <sun/java2d/metal/MTLContext$MTLContextCaps.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <jcpp.h>

#undef CAPS_DOUBLEBUFFERED
#undef CAPS_EXT_BIOP_SHADER
#undef CAPS_EXT_GRAD_SHADER
#undef CAPS_EXT_LCD_SHADER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLContext$MTLContextCaps::init$(int32_t caps, $String* adapterId) {
	$ContextCapabilities::init$(caps, adapterId);
}

$String* MTLContext$MTLContextCaps::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, $($ContextCapabilities::toString())));
	if ((this->caps & MTLContext$MTLContextCaps::CAPS_DOUBLEBUFFERED) != 0) {
		sb->append("CAPS_DOUBLEBUFFERED|"_s);
	}
	if ((this->caps & MTLContext$MTLContextCaps::CAPS_EXT_LCD_SHADER) != 0) {
		sb->append("CAPS_EXT_LCD_SHADER|"_s);
	}
	if ((this->caps & MTLContext$MTLContextCaps::CAPS_EXT_BIOP_SHADER) != 0) {
		sb->append("CAPS_BIOP_SHADER|"_s);
	}
	if ((this->caps & MTLContext$MTLContextCaps::CAPS_EXT_GRAD_SHADER) != 0) {
		sb->append("CAPS_EXT_GRAD_SHADER|"_s);
	}
	return sb->toString();
}

MTLContext$MTLContextCaps::MTLContext$MTLContextCaps() {
}

$Class* MTLContext$MTLContextCaps::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CAPS_DOUBLEBUFFERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLContext$MTLContextCaps, CAPS_DOUBLEBUFFERED)},
		{"CAPS_EXT_LCD_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(MTLContext$MTLContextCaps, CAPS_EXT_LCD_SHADER)},
		{"CAPS_EXT_BIOP_SHADER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLContext$MTLContextCaps, CAPS_EXT_BIOP_SHADER)},
		{"CAPS_EXT_GRAD_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(MTLContext$MTLContextCaps, CAPS_EXT_GRAD_SHADER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(MTLContext$MTLContextCaps, init$, void, int32_t, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MTLContext$MTLContextCaps, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLContext$MTLContextCaps", "sun.java2d.metal.MTLContext", "MTLContextCaps", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.metal.MTLContext$MTLContextCaps",
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
		"sun.java2d.metal.MTLContext"
	};
	$loadClass(MTLContext$MTLContextCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLContext$MTLContextCaps);
	});
	return class$;
}

$Class* MTLContext$MTLContextCaps::class$ = nullptr;

		} // metal
	} // java2d
} // sun