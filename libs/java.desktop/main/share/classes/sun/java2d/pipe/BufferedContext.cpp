#include <sun/java2d/pipe/BufferedContext.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/InternalError.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/pipe/BufferedPaints.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef NO_CONTEXT_FLAGS
#undef SRC_IS_OPAQUE
#undef USE_MASK

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $BufferedPaints = ::sun::java2d::pipe::BufferedPaints;
using $Region = ::sun::java2d::pipe::Region;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace pipe {

BufferedContext* BufferedContext::currentContext = nullptr;

void BufferedContext::init$($RenderQueue* rq) {
	$set(this, validSrcDataRef, $new($WeakReference, nullptr));
	$set(this, validDstDataRef, $new($WeakReference, nullptr));
	$set(this, validClipRef, $new($WeakReference, nullptr));
	$set(this, validCompRef, $new($WeakReference, nullptr));
	$set(this, validPaintRef, $new($WeakReference, nullptr));
	$set(this, rq, rq);
	$set(this, buf, $nc(rq)->getBuffer());
}

void BufferedContext::validateContext($AccelSurface* srcData, $AccelSurface* dstData, $Region* clip, $Composite* comp, $AffineTransform* xform, $Paint* paint, $SunGraphics2D* sg2d, int32_t flags) {
	$var(BufferedContext, context, $nc(dstData)->getContext());
	$nc(context)->validate(srcData, dstData, clip, comp, xform, paint, sg2d, flags);
}

void BufferedContext::validateContext($AccelSurface* surface) {
	validateContext(surface, surface, nullptr, nullptr, nullptr, nullptr, nullptr, BufferedContext::NO_CONTEXT_FLAGS);
}

void BufferedContext::validate($AccelSurface* srcData, $AccelSurface* dstData, $Region* clip, $Composite* comp, $AffineTransform* xform, $Paint* paint, $SunGraphics2D* sg2d, int32_t flags) {
	$useLocalObjectStack();
	bool updateClip = false;
	bool updatePaint = false;
	bool var$1 = !$nc(dstData)->isValid();
	bool var$0 = var$1 || dstData->isSurfaceLost();
	if (var$0 || $nc(srcData)->isSurfaceLost()) {
		invalidateContext();
		$throwNew($InvalidPipeException, "bounds changed or surface lost"_s);
	}
	if ($instanceOf($Color, paint)) {
		int32_t newRGB = $cast($Color, paint)->getRGB();
		if (this->isValidatedPaintJustAColor) {
			if (newRGB != this->validatedRGB) {
				this->validatedRGB = newRGB;
				updatePaint = true;
			}
		} else {
			this->validatedRGB = newRGB;
			updatePaint = true;
			this->isValidatedPaintJustAColor = true;
		}
	} else if (!$equals($nc(this->validPaintRef)->get(), paint)) {
		updatePaint = true;
		this->isValidatedPaintJustAColor = false;
	}
	$var($AccelSurface, validatedSrcData, $cast($AccelSurface, $nc(this->validSrcDataRef)->get()));
	$var($AccelSurface, validatedDstData, $cast($AccelSurface, $nc(this->validDstDataRef)->get()));
	if ((BufferedContext::currentContext != this) || (srcData != validatedSrcData) || (dstData != validatedDstData)) {
		if (dstData != validatedDstData) {
			updateClip = true;
		}
		if (paint == nullptr) {
			updatePaint = true;
		}
		setSurfaces(srcData, dstData);
		$assignStatic(BufferedContext::currentContext, this);
		$set(this, validSrcDataRef, $new($WeakReference, srcData));
		$set(this, validDstDataRef, $new($WeakReference, dstData));
	}
	$var($Region, validatedClip, $cast($Region, $nc(this->validClipRef)->get()));
	if ((clip != validatedClip) || updateClip) {
		if (clip != nullptr) {
			bool var$3 = updateClip || validatedClip == nullptr;
			if (!var$3) {
				bool var$4 = validatedClip->isRectangular();
				var$3 = !(var$4 && clip->isRectangular());
			}
			bool var$2 = var$3;
			if (!var$2) {
				int32_t var$8 = clip->getLoX();
				bool var$7 = var$8 != $nc(validatedClip)->getLoX();
				if (!var$7) {
					int32_t var$9 = clip->getLoY();
					var$7 = var$9 != validatedClip->getLoY();
				}
				bool var$6 = var$7;
				if (!var$6) {
					int32_t var$10 = clip->getHiX();
					var$6 = var$10 != validatedClip->getHiX();
				}
				bool var$5 = var$6;
				if (!var$5) {
					int32_t var$11 = clip->getHiY();
					var$5 = var$11 != validatedClip->getHiY();
				}
				var$2 = var$5;
			}
			if (var$2) {
				setClip(clip);
			}
		} else {
			resetClip();
		}
		$set(this, validClipRef, $new($WeakReference, clip));
	}
	if ((!$equals(comp, $nc(this->validCompRef)->get())) || (flags != this->validatedFlags)) {
		if (comp != nullptr) {
			setComposite(comp, flags);
		} else {
			resetComposite();
		}
		updatePaint = true;
		$set(this, validCompRef, $new($WeakReference, comp));
		this->validatedFlags = flags;
	}
	bool txChanged = false;
	if (xform == nullptr) {
		if (this->xformInUse) {
			resetTransform();
			this->xformInUse = false;
			txChanged = true;
		} else if (sg2d != nullptr && !$nc(sg2d->transform$)->equals(this->transform)) {
			txChanged = true;
		}
		if (sg2d != nullptr && txChanged) {
			$set(this, transform, $new($AffineTransform, sg2d->transform$));
		}
	} else {
		setTransform(xform);
		this->xformInUse = true;
		txChanged = true;
	}
	if (!this->isValidatedPaintJustAColor && txChanged) {
		updatePaint = true;
	}
	if (updatePaint) {
		if (paint != nullptr) {
			$BufferedPaints::setPaint(this->rq, sg2d, paint, flags);
		} else {
			$BufferedPaints::resetPaint(this->rq);
		}
		$set(this, validPaintRef, $new($WeakReference, paint));
	}
	dstData->markDirty();
}

void BufferedContext::setSurfaces($AccelSurface* srcData, $AccelSurface* dstData) {
	$nc(this->rq)->ensureCapacityAndAlignment(20, 4);
	$nc(this->buf)->putInt(70);
	this->buf->putLong($nc(srcData)->getNativeOps());
	this->buf->putLong($nc(dstData)->getNativeOps());
}

void BufferedContext::resetClip() {
	$nc(this->rq)->ensureCapacity(4);
	$nc(this->buf)->putInt(55);
}

void BufferedContext::setClip($Region* clip) {
	$useLocalObjectStack();
	if ($nc(clip)->isRectangular()) {
		$nc(this->rq)->ensureCapacity(20);
		$nc(this->buf)->putInt(51);
		$$nc(this->buf->putInt(clip->getLoX()))->putInt(clip->getLoY());
		$$nc(this->buf->putInt(clip->getHiX()))->putInt(clip->getHiY());
	} else {
		$nc(this->rq)->ensureCapacity(28);
		$nc(this->buf)->putInt(52);
		this->buf->putInt(53);
		int32_t countIndex = this->buf->position();
		this->buf->putInt(0);
		int32_t spanCount = 0;
		int32_t remainingSpans = this->buf->remaining() / 16;
		$var($ints, span, $new($ints, 4));
		$var($SpanIterator, si, clip->getSpanIterator());
		while ($nc(si)->nextSpan(span)) {
			if (remainingSpans == 0) {
				this->buf->putInt(countIndex, spanCount);
				this->rq->flushNow();
				this->buf->putInt(53);
				countIndex = this->buf->position();
				this->buf->putInt(0);
				spanCount = 0;
				remainingSpans = this->buf->remaining() / 16;
			}
			this->buf->putInt(span->get(0));
			this->buf->putInt(span->get(1));
			this->buf->putInt(span->get(2));
			this->buf->putInt(span->get(3));
			++spanCount;
			--remainingSpans;
		}
		this->buf->putInt(countIndex, spanCount);
		this->rq->ensureCapacity(4);
		this->buf->putInt(54);
	}
}

void BufferedContext::resetComposite() {
	$nc(this->rq)->ensureCapacity(4);
	$nc(this->buf)->putInt(58);
}

void BufferedContext::setComposite($Composite* comp, int32_t flags) {
	if ($instanceOf($AlphaComposite, comp)) {
		$var($AlphaComposite, ac, $cast($AlphaComposite, comp));
		$nc(this->rq)->ensureCapacity(16);
		$nc(this->buf)->putInt(56);
		this->buf->putInt(ac->getRule());
		this->buf->putFloat(ac->getAlpha());
		this->buf->putInt(flags);
	} else if ($instanceOf($XORComposite, comp)) {
		int32_t xorPixel = $cast($XORComposite, comp)->getXorPixel();
		$nc(this->rq)->ensureCapacity(8);
		$nc(this->buf)->putInt(57);
		this->buf->putInt(xorPixel);
	} else {
		$throwNew($InternalError, "not yet implemented"_s);
	}
}

void BufferedContext::resetTransform() {
	$nc(this->rq)->ensureCapacity(4);
	$nc(this->buf)->putInt(60);
}

void BufferedContext::setTransform($AffineTransform* xform) {
	$nc(this->rq)->ensureCapacityAndAlignment(52, 4);
	$nc(this->buf)->putInt(59);
	this->buf->putDouble($nc(xform)->getScaleX());
	this->buf->putDouble(xform->getShearY());
	this->buf->putDouble(xform->getShearX());
	this->buf->putDouble(xform->getScaleY());
	this->buf->putDouble(xform->getTranslateX());
	this->buf->putDouble(xform->getTranslateY());
}

void BufferedContext::invalidateContext() {
	resetTransform();
	resetComposite();
	resetClip();
	$BufferedPaints::resetPaint(this->rq);
	$nc(this->validSrcDataRef)->clear();
	$nc(this->validDstDataRef)->clear();
	$nc(this->validCompRef)->clear();
	$nc(this->validClipRef)->clear();
	$nc(this->validPaintRef)->clear();
	this->isValidatedPaintJustAColor = false;
	this->xformInUse = false;
}

$RenderQueue* BufferedContext::getRenderQueue() {
	return this->rq;
}

BufferedContext::BufferedContext() {
}

$Class* BufferedContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_CONTEXT_FLAGS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedContext, NO_CONTEXT_FLAGS)},
		{"SRC_IS_OPAQUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedContext, SRC_IS_OPAQUE)},
		{"USE_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedContext, USE_MASK)},
		{"rq", "Lsun/java2d/pipe/RenderQueue;", nullptr, $PRIVATE | $FINAL, $field(BufferedContext, rq)},
		{"buf", "Lsun/java2d/pipe/RenderBuffer;", nullptr, $PRIVATE | $FINAL, $field(BufferedContext, buf)},
		{"currentContext", "Lsun/java2d/pipe/BufferedContext;", nullptr, $PROTECTED | $STATIC, $staticField(BufferedContext, currentContext)},
		{"validSrcDataRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Lsun/java2d/pipe/hw/AccelSurface;>;", $PRIVATE, $field(BufferedContext, validSrcDataRef)},
		{"validDstDataRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Lsun/java2d/pipe/hw/AccelSurface;>;", $PRIVATE, $field(BufferedContext, validDstDataRef)},
		{"validClipRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Lsun/java2d/pipe/Region;>;", $PRIVATE, $field(BufferedContext, validClipRef)},
		{"validCompRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/awt/Composite;>;", $PRIVATE, $field(BufferedContext, validCompRef)},
		{"validPaintRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/awt/Paint;>;", $PRIVATE, $field(BufferedContext, validPaintRef)},
		{"isValidatedPaintJustAColor", "Z", nullptr, $PRIVATE, $field(BufferedContext, isValidatedPaintJustAColor)},
		{"validatedRGB", "I", nullptr, $PRIVATE, $field(BufferedContext, validatedRGB)},
		{"validatedFlags", "I", nullptr, $PRIVATE, $field(BufferedContext, validatedFlags)},
		{"xformInUse", "Z", nullptr, $PRIVATE, $field(BufferedContext, xformInUse)},
		{"transform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(BufferedContext, transform)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $PROTECTED, $method(BufferedContext, init$, void, $RenderQueue*)},
		{"getRenderQueue", "()Lsun/java2d/pipe/RenderQueue;", nullptr, $PUBLIC | $FINAL, $method(BufferedContext, getRenderQueue, $RenderQueue*)},
		{"invalidateContext", "()V", nullptr, $PUBLIC | $FINAL, $method(BufferedContext, invalidateContext, void)},
		{"resetClip", "()V", nullptr, $PRIVATE, $method(BufferedContext, resetClip, void)},
		{"resetComposite", "()V", nullptr, $PRIVATE, $method(BufferedContext, resetComposite, void)},
		{"resetTransform", "()V", nullptr, $PRIVATE, $method(BufferedContext, resetTransform, void)},
		{"setClip", "(Lsun/java2d/pipe/Region;)V", nullptr, $PRIVATE, $method(BufferedContext, setClip, void, $Region*)},
		{"setComposite", "(Ljava/awt/Composite;I)V", nullptr, $PRIVATE, $method(BufferedContext, setComposite, void, $Composite*, int32_t)},
		{"setSurfaces", "(Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/hw/AccelSurface;)V", nullptr, $PRIVATE, $method(BufferedContext, setSurfaces, void, $AccelSurface*, $AccelSurface*)},
		{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(BufferedContext, setTransform, void, $AffineTransform*)},
		{"validate", "(Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/Region;Ljava/awt/Composite;Ljava/awt/geom/AffineTransform;Ljava/awt/Paint;Lsun/java2d/SunGraphics2D;I)V", nullptr, $PRIVATE, $method(BufferedContext, validate, void, $AccelSurface*, $AccelSurface*, $Region*, $Composite*, $AffineTransform*, $Paint*, $SunGraphics2D*, int32_t)},
		{"validateContext", "(Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/hw/AccelSurface;Lsun/java2d/pipe/Region;Ljava/awt/Composite;Ljava/awt/geom/AffineTransform;Ljava/awt/Paint;Lsun/java2d/SunGraphics2D;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BufferedContext, validateContext, void, $AccelSurface*, $AccelSurface*, $Region*, $Composite*, $AffineTransform*, $Paint*, $SunGraphics2D*, int32_t)},
		{"validateContext", "(Lsun/java2d/pipe/hw/AccelSurface;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BufferedContext, validateContext, void, $AccelSurface*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.java2d.pipe.BufferedContext",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BufferedContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferedContext);
	});
	return class$;
}

$Class* BufferedContext::class$ = nullptr;

		} // pipe
	} // java2d
} // sun