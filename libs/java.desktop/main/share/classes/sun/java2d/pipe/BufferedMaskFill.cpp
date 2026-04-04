#include <sun/java2d/pipe/BufferedMaskFill.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/BufferedMaskFill$1.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

#undef SRC_OVER
#undef USE_MASK

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $BufferedMaskFill$1 = ::sun::java2d::pipe::BufferedMaskFill$1;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace pipe {

void BufferedMaskFill::init$($RenderQueue* rq, $SurfaceType* srcType, $CompositeType* compType, $SurfaceType* dstType) {
	$MaskFill::init$(srcType, compType, dstType);
	$set(this, rq, rq);
}

void BufferedMaskFill::MaskFill$($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp$renamed, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t maskoff, int32_t maskscan) {
	$useLocalObjectStack();
	$var($Composite, comp, comp$renamed);
	$var($AlphaComposite, acomp, $cast($AlphaComposite, comp));
	if ($nc(acomp)->getRule() != $AlphaComposite::SRC_OVER) {
		$assign(comp, $AlphaComposite::SrcOver);
	}
	$nc(this->rq)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		validateContext(sg2d, comp, $BufferedContext::USE_MASK);
		int32_t maskBytesRequired = 0;
		if (mask != nullptr) {
			maskBytesRequired = (mask->length + 3) & (~3);
		} else {
			maskBytesRequired = 0;
		}
		int32_t totalBytesRequired = 32 + maskBytesRequired;
		$var($RenderBuffer, buf, this->rq->getBuffer());
		if (totalBytesRequired <= $nc(buf)->capacity()) {
			if (totalBytesRequired > buf->remaining()) {
				this->rq->flushNow();
			}
			buf->putInt(32);
			$$nc($$nc($$nc(buf->putInt(x))->putInt(y))->putInt(w))->putInt(h);
			buf->putInt(maskoff);
			buf->putInt(maskscan);
			buf->putInt(maskBytesRequired);
			if (mask != nullptr) {
				int32_t padding = maskBytesRequired - mask->length;
				buf->put(mask);
				if (padding != 0) {
					buf->position(buf->position() + padding);
				}
			}
		} else {
			this->rq->flushAndInvokeNow($$new($BufferedMaskFill$1, this, x, y, w, h, maskoff, maskscan, mask));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->rq->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

BufferedMaskFill::BufferedMaskFill() {
}

$Class* BufferedMaskFill::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rq", "Lsun/java2d/pipe/RenderQueue;", nullptr, $PROTECTED | $FINAL, $field(BufferedMaskFill, rq)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(BufferedMaskFill, init$, void, $RenderQueue*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"MaskFill", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;IIII[BII)V", nullptr, $PUBLIC, $virtualMethod(BufferedMaskFill, MaskFill$, void, $SunGraphics2D*, $SurfaceData*, $Composite*, int32_t, int32_t, int32_t, int32_t, $bytes*, int32_t, int32_t)},
		{"maskFill", "(IIIIIII[B)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(BufferedMaskFill, maskFill, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;I)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(BufferedMaskFill, validateContext, void, $SunGraphics2D*, $Composite*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.pipe.BufferedMaskFill$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.java2d.pipe.BufferedMaskFill",
		"sun.java2d.loops.MaskFill",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.pipe.BufferedMaskFill$1"
	};
	$loadClass(BufferedMaskFill, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferedMaskFill);
	});
	return class$;
}

$Class* BufferedMaskFill::class$ = nullptr;

		} // pipe
	} // java2d
} // sun