#include <sun/java2d/loops/GraphicsPrimitive$GeneralUnaryOp.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$Class* GraphicsPrimitive$GeneralUnaryOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCompositeType", "()Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsPrimitive$GeneralUnaryOp, getCompositeType, $CompositeType*)},
		{"getDestType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsPrimitive$GeneralUnaryOp, getDestType, $SurfaceType*)},
		{"getPrimTypeID", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsPrimitive$GeneralUnaryOp, getPrimTypeID, int32_t)},
		{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsPrimitive$GeneralUnaryOp, getSignature, $String*)},
		{"setPrimitives", "(Lsun/java2d/loops/Blit;Lsun/java2d/loops/GraphicsPrimitive;Lsun/java2d/loops/Blit;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GraphicsPrimitive$GeneralUnaryOp, setPrimitives, void, $Blit*, $GraphicsPrimitive*, $Blit*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.GraphicsPrimitive$GeneralUnaryOp", "sun.java2d.loops.GraphicsPrimitive", "GeneralUnaryOp", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.loops.GraphicsPrimitive$GeneralUnaryOp",
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
		"sun.java2d.loops.GraphicsPrimitive"
	};
	$loadClass(GraphicsPrimitive$GeneralUnaryOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsPrimitive$GeneralUnaryOp);
	});
	return class$;
}

$Class* GraphicsPrimitive$GeneralUnaryOp::class$ = nullptr;

		} // loops
	} // java2d
} // sun