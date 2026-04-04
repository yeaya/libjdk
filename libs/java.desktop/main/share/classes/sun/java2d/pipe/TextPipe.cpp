#include <sun/java2d/pipe/TextPipe.h>
#include <java/awt/font/GlyphVector.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

using $GlyphVector = ::java::awt::font::GlyphVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace sun {
	namespace java2d {
		namespace pipe {

$Class* TextPipe::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"drawChars", "(Lsun/java2d/SunGraphics2D;[CIIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextPipe, drawChars, void, $SunGraphics2D*, $chars*, int32_t, int32_t, int32_t, int32_t)},
		{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextPipe, drawGlyphVector, void, $SunGraphics2D*, $GlyphVector*, float, float)},
		{"drawString", "(Lsun/java2d/SunGraphics2D;Ljava/lang/String;DD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextPipe, drawString, void, $SunGraphics2D*, $String*, double, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.pipe.TextPipe",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TextPipe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextPipe);
	});
	return class$;
}

$Class* TextPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun