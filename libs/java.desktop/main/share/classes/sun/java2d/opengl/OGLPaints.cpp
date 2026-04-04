#include <sun/java2d/opengl/OGLPaints.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/opengl/OGLPaints$Gradient.h>
#include <sun/java2d/opengl/OGLPaints$LinearGradient.h>
#include <sun/java2d/opengl/OGLPaints$RadialGradient.h>
#include <sun/java2d/opengl/OGLPaints$Texture.h>
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
using $OGLPaints$Gradient = ::sun::java2d::opengl::OGLPaints$Gradient;
using $OGLPaints$LinearGradient = ::sun::java2d::opengl::OGLPaints$LinearGradient;
using $OGLPaints$RadialGradient = ::sun::java2d::opengl::OGLPaints$RadialGradient;
using $OGLPaints$Texture = ::sun::java2d::opengl::OGLPaints$Texture;

namespace sun {
	namespace java2d {
		namespace opengl {

$Map* OGLPaints::impls = nullptr;

void OGLPaints::init$() {
}

bool OGLPaints::isValid($SunGraphics2D* sg2d) {
	$init(OGLPaints);
	$useLocalObjectStack();
	$var(OGLPaints, impl, $cast(OGLPaints, $nc(OGLPaints::impls)->get($($Integer::valueOf($nc(sg2d)->paintState)))));
	return (impl != nullptr && impl->isPaintValid(sg2d));
}

void OGLPaints::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(OGLPaints::impls, $new($HashMap, 4, 1.0f));
	{
		$var($Object, var$0, $Integer::valueOf($SunGraphics2D::PAINT_GRADIENT));
		OGLPaints::impls->put(var$0, $$new($OGLPaints$Gradient));
		$var($Object, var$1, $Integer::valueOf($SunGraphics2D::PAINT_LIN_GRADIENT));
		OGLPaints::impls->put(var$1, $$new($OGLPaints$LinearGradient));
		$var($Object, var$2, $Integer::valueOf($SunGraphics2D::PAINT_RAD_GRADIENT));
		OGLPaints::impls->put(var$2, $$new($OGLPaints$RadialGradient));
		$var($Object, var$3, $Integer::valueOf($SunGraphics2D::PAINT_TEXTURE));
		OGLPaints::impls->put(var$3, $$new($OGLPaints$Texture));
	}
}

OGLPaints::OGLPaints() {
}

$Class* OGLPaints::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"impls", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lsun/java2d/opengl/OGLPaints;>;", $PRIVATE | $STATIC, $staticField(OGLPaints, impls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(OGLPaints, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $ABSTRACT, $virtualMethod(OGLPaints, isPaintValid, bool, $SunGraphics2D*)},
		{"isValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $STATIC, $staticMethod(OGLPaints, isValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.OGLPaints$RadialGradient", "sun.java2d.opengl.OGLPaints", "RadialGradient", $PRIVATE | $STATIC},
		{"sun.java2d.opengl.OGLPaints$LinearGradient", "sun.java2d.opengl.OGLPaints", "LinearGradient", $PRIVATE | $STATIC},
		{"sun.java2d.opengl.OGLPaints$MultiGradient", "sun.java2d.opengl.OGLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
		{"sun.java2d.opengl.OGLPaints$Texture", "sun.java2d.opengl.OGLPaints", "Texture", $PRIVATE | $STATIC},
		{"sun.java2d.opengl.OGLPaints$Gradient", "sun.java2d.opengl.OGLPaints", "Gradient", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.java2d.opengl.OGLPaints",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.opengl.OGLPaints$RadialGradient,sun.java2d.opengl.OGLPaints$LinearGradient,sun.java2d.opengl.OGLPaints$MultiGradient,sun.java2d.opengl.OGLPaints$Texture,sun.java2d.opengl.OGLPaints$Gradient"
	};
	$loadClass(OGLPaints, name, initialize, &classInfo$$, OGLPaints::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OGLPaints);
	});
	return class$;
}

$Class* OGLPaints::class$ = nullptr;

		} // opengl
	} // java2d
} // sun