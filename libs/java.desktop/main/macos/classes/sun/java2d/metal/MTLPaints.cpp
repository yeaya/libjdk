#include <sun/java2d/metal/MTLPaints.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/metal/MTLPaints$Gradient.h>
#include <sun/java2d/metal/MTLPaints$LinearGradient.h>
#include <sun/java2d/metal/MTLPaints$RadialGradient.h>
#include <sun/java2d/metal/MTLPaints$Texture.h>
#include <jcpp.h>

#undef PAINT_GRADIENT
#undef PAINT_LIN_GRADIENT
#undef PAINT_RAD_GRADIENT
#undef PAINT_TEXTURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $MTLPaints$Gradient = ::sun::java2d::metal::MTLPaints$Gradient;
using $MTLPaints$LinearGradient = ::sun::java2d::metal::MTLPaints$LinearGradient;
using $MTLPaints$RadialGradient = ::sun::java2d::metal::MTLPaints$RadialGradient;
using $MTLPaints$Texture = ::sun::java2d::metal::MTLPaints$Texture;

namespace sun {
	namespace java2d {
		namespace metal {

$Map* MTLPaints::impls = nullptr;

void MTLPaints::init$() {
}

bool MTLPaints::isValid($SunGraphics2D* sg2d) {
	$init(MTLPaints);
	$useLocalObjectStack();
	$var(MTLPaints, impl, $cast(MTLPaints, $nc(MTLPaints::impls)->get($($Integer::valueOf($nc(sg2d)->paintState)))));
	return (impl != nullptr && impl->isPaintValid(sg2d));
}

void MTLPaints::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MTLPaints::impls, $new($HashMap, 4, 1.0f));
	{
		$var($Object, var$0, $Integer::valueOf($SunGraphics2D::PAINT_GRADIENT));
		MTLPaints::impls->put(var$0, $$new($MTLPaints$Gradient));
		$var($Object, var$1, $Integer::valueOf($SunGraphics2D::PAINT_LIN_GRADIENT));
		MTLPaints::impls->put(var$1, $$new($MTLPaints$LinearGradient));
		$var($Object, var$2, $Integer::valueOf($SunGraphics2D::PAINT_RAD_GRADIENT));
		MTLPaints::impls->put(var$2, $$new($MTLPaints$RadialGradient));
		$var($Object, var$3, $Integer::valueOf($SunGraphics2D::PAINT_TEXTURE));
		MTLPaints::impls->put(var$3, $$new($MTLPaints$Texture));
	}
}

MTLPaints::MTLPaints() {
}

$Class* MTLPaints::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"impls", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lsun/java2d/metal/MTLPaints;>;", $PRIVATE | $STATIC, $staticField(MTLPaints, impls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MTLPaints, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $ABSTRACT, $virtualMethod(MTLPaints, isPaintValid, bool, $SunGraphics2D*)},
		{"isValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $STATIC, $staticMethod(MTLPaints, isValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLPaints$RadialGradient", "sun.java2d.metal.MTLPaints", "RadialGradient", $PRIVATE | $STATIC},
		{"sun.java2d.metal.MTLPaints$LinearGradient", "sun.java2d.metal.MTLPaints", "LinearGradient", $PRIVATE | $STATIC},
		{"sun.java2d.metal.MTLPaints$MultiGradient", "sun.java2d.metal.MTLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
		{"sun.java2d.metal.MTLPaints$Texture", "sun.java2d.metal.MTLPaints", "Texture", $PRIVATE | $STATIC},
		{"sun.java2d.metal.MTLPaints$Gradient", "sun.java2d.metal.MTLPaints", "Gradient", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.java2d.metal.MTLPaints",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.metal.MTLPaints$RadialGradient,sun.java2d.metal.MTLPaints$LinearGradient,sun.java2d.metal.MTLPaints$MultiGradient,sun.java2d.metal.MTLPaints$Texture,sun.java2d.metal.MTLPaints$Gradient"
	};
	$loadClass(MTLPaints, name, initialize, &classInfo$$, MTLPaints::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MTLPaints);
	});
	return class$;
}

$Class* MTLPaints::class$ = nullptr;

		} // metal
	} // java2d
} // sun