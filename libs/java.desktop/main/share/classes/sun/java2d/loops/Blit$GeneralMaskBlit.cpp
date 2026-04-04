#include <sun/java2d/loops/Blit$GeneralMaskBlit.h>
#include <java/awt/Composite.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

void Blit$GeneralMaskBlit::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$Blit::init$(srctype, comptype, dsttype);
	$set(this, performop, $MaskBlit::locate(srctype, comptype, dsttype));
}

void Blit$GeneralMaskBlit::Blit$($SurfaceData* srcData, $SurfaceData* dstData, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$nc(this->performop)->MaskBlit$(srcData, dstData, comp, clip, srcx, srcy, dstx, dsty, width, height, nullptr, 0, 0);
}

Blit$GeneralMaskBlit::Blit$GeneralMaskBlit() {
}

$Class* Blit$GeneralMaskBlit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"performop", "Lsun/java2d/loops/MaskBlit;", nullptr, 0, $field(Blit$GeneralMaskBlit, performop)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(Blit$GeneralMaskBlit, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(Blit$GeneralMaskBlit, Blit$, void, $SurfaceData*, $SurfaceData*, $Composite*, $Region*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.Blit$GeneralMaskBlit", "sun.java2d.loops.Blit", "GeneralMaskBlit", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.Blit$GeneralMaskBlit",
		"sun.java2d.loops.Blit",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.Blit"
	};
	$loadClass(Blit$GeneralMaskBlit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Blit$GeneralMaskBlit);
	});
	return class$;
}

$Class* Blit$GeneralMaskBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun