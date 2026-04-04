#include <sun/java2d/loops/FillPath.h>
#include <java/awt/geom/Path2D$Float.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillPath$TraceFillPath.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillPath$TraceFillPath = ::sun::java2d::loops::FillPath$TraceFillPath;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$String* FillPath::methodSignature = nullptr;
int32_t FillPath::primTypeID = 0;

FillPath* FillPath::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(FillPath);
	return $cast(FillPath, $GraphicsPrimitiveMgr::locate(FillPath::primTypeID, srctype, comptype, dsttype));
}

void FillPath::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(FillPath::methodSignature, FillPath::primTypeID, srctype, comptype, dsttype);
}

void FillPath::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, FillPath::methodSignature, FillPath::primTypeID, srctype, comptype, dsttype);
}

void FillPath::FillPath$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df) {
	$prepareNative(FillPath, void, $SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df);
	$invokeNative(sg2d, sData, transX, transY, p2df);
	$finishNative();
}

$GraphicsPrimitive* FillPath::traceWrap() {
	return $new($FillPath$TraceFillPath, this);
}

void FillPath::clinit$($Class* clazz) {
	$assignStatic(FillPath::methodSignature, "FillPath(...)"_s->toString());
	FillPath::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

FillPath::FillPath() {
}

$Class* FillPath::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillPath, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillPath, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(FillPath, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(FillPath, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"FillPath", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IILjava/awt/geom/Path2D$Float;)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(FillPath, FillPath$, void, $SunGraphics2D*, $SurfaceData*, int32_t, int32_t, $Path2D$Float*)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/FillPath;", nullptr, $PUBLIC | $STATIC, $staticMethod(FillPath, locate, FillPath*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(FillPath, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.FillPath$TraceFillPath", "sun.java2d.loops.FillPath", "TraceFillPath", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.FillPath",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.FillPath$TraceFillPath"
	};
	$loadClass(FillPath, name, initialize, &classInfo$$, FillPath::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FillPath);
	});
	return class$;
}

$Class* FillPath::class$ = nullptr;

		} // loops
	} // java2d
} // sun