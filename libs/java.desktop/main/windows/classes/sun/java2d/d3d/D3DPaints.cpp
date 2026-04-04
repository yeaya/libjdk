#include <sun/java2d/d3d/D3DPaints.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/d3d/D3DPaints$Gradient.h>
#include <sun/java2d/d3d/D3DPaints$LinearGradient.h>
#include <sun/java2d/d3d/D3DPaints$RadialGradient.h>
#include <sun/java2d/d3d/D3DPaints$Texture.h>
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
using $D3DPaints$Gradient = ::sun::java2d::d3d::D3DPaints$Gradient;
using $D3DPaints$LinearGradient = ::sun::java2d::d3d::D3DPaints$LinearGradient;
using $D3DPaints$RadialGradient = ::sun::java2d::d3d::D3DPaints$RadialGradient;
using $D3DPaints$Texture = ::sun::java2d::d3d::D3DPaints$Texture;

namespace sun {
	namespace java2d {
		namespace d3d {

$Map* D3DPaints::impls = nullptr;

void D3DPaints::init$() {
}

bool D3DPaints::isValid($SunGraphics2D* sg2d) {
	$init(D3DPaints);
	$useLocalObjectStack();
	$var(D3DPaints, impl, $cast(D3DPaints, $nc(D3DPaints::impls)->get($($Integer::valueOf($nc(sg2d)->paintState)))));
	return (impl != nullptr && impl->isPaintValid(sg2d));
}

void D3DPaints::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(D3DPaints::impls, $new($HashMap, 4, 1.0f));
	{
		$var($Object, var$0, $Integer::valueOf($SunGraphics2D::PAINT_GRADIENT));
		D3DPaints::impls->put(var$0, $$new($D3DPaints$Gradient));
		$var($Object, var$1, $Integer::valueOf($SunGraphics2D::PAINT_LIN_GRADIENT));
		D3DPaints::impls->put(var$1, $$new($D3DPaints$LinearGradient));
		$var($Object, var$2, $Integer::valueOf($SunGraphics2D::PAINT_RAD_GRADIENT));
		D3DPaints::impls->put(var$2, $$new($D3DPaints$RadialGradient));
		$var($Object, var$3, $Integer::valueOf($SunGraphics2D::PAINT_TEXTURE));
		D3DPaints::impls->put(var$3, $$new($D3DPaints$Texture));
	}
}

D3DPaints::D3DPaints() {
}

$Class* D3DPaints::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"impls", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lsun/java2d/d3d/D3DPaints;>;", $PRIVATE | $STATIC, $staticField(D3DPaints, impls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(D3DPaints, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $ABSTRACT, $virtualMethod(D3DPaints, isPaintValid, bool, $SunGraphics2D*)},
		{"isValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $STATIC, $staticMethod(D3DPaints, isValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DPaints$RadialGradient", "sun.java2d.d3d.D3DPaints", "RadialGradient", $PRIVATE | $STATIC},
		{"sun.java2d.d3d.D3DPaints$LinearGradient", "sun.java2d.d3d.D3DPaints", "LinearGradient", $PRIVATE | $STATIC},
		{"sun.java2d.d3d.D3DPaints$MultiGradient", "sun.java2d.d3d.D3DPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
		{"sun.java2d.d3d.D3DPaints$Texture", "sun.java2d.d3d.D3DPaints", "Texture", $PRIVATE | $STATIC},
		{"sun.java2d.d3d.D3DPaints$Gradient", "sun.java2d.d3d.D3DPaints", "Gradient", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.java2d.d3d.D3DPaints",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.d3d.D3DPaints$RadialGradient,sun.java2d.d3d.D3DPaints$LinearGradient,sun.java2d.d3d.D3DPaints$MultiGradient,sun.java2d.d3d.D3DPaints$Texture,sun.java2d.d3d.D3DPaints$Gradient"
	};
	$loadClass(D3DPaints, name, initialize, &classInfo$$, D3DPaints::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(D3DPaints);
	});
	return class$;
}

$Class* D3DPaints::class$ = nullptr;

		} // d3d
	} // java2d
} // sun