#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef EMPTY_INSETS
#undef NO_CACHING

using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractRegionPainter$PaintContext$CacheMode = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$Insets* AbstractRegionPainter$PaintContext::EMPTY_INSETS = nullptr;

void AbstractRegionPainter$PaintContext::init$($Insets* insets, $Dimension* canvasSize, bool inverted) {
	AbstractRegionPainter$PaintContext::init$(insets, canvasSize, inverted, nullptr, 1, 1);
}

void AbstractRegionPainter$PaintContext::init$($Insets* insets, $Dimension* canvasSize, bool inverted, $AbstractRegionPainter$PaintContext$CacheMode* cacheMode, double maxH, double maxV) {
	if (maxH < 1 || maxV < 1) {
		$throwNew($IllegalArgumentException, "Both maxH and maxV must be >= 1"_s);
	}
	$set(this, stretchingInsets, insets == nullptr ? AbstractRegionPainter$PaintContext::EMPTY_INSETS : insets);
	$set(this, canvasSize, canvasSize);
	this->inverted = inverted;
	$init($AbstractRegionPainter$PaintContext$CacheMode);
	$set(this, cacheMode, cacheMode == nullptr ? $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING : cacheMode);
	this->maxHorizontalScaleFactor = maxH;
	this->maxVerticalScaleFactor = maxV;
	if (canvasSize != nullptr) {
		this->a = (float)$nc(this->stretchingInsets)->left;
		this->b = (float)(canvasSize->width - this->stretchingInsets->right);
		this->c = (float)this->stretchingInsets->top;
		this->d = (float)(canvasSize->height - this->stretchingInsets->bottom);
		$set(this, canvasSize, canvasSize);
		this->inverted = inverted;
		if (inverted) {
			float available = canvasSize->width - (this->b - this->a);
			this->aPercent = available > 0.0f ? this->a / available : 0.0f;
			this->bPercent = available > 0.0f ? this->b / available : 0.0f;
			available = canvasSize->height - (this->d - this->c);
			this->cPercent = available > 0.0f ? this->c / available : 0.0f;
			this->dPercent = available > 0.0f ? this->d / available : 0.0f;
		}
	}
}

void AbstractRegionPainter$PaintContext::clinit$($Class* clazz) {
	$assignStatic(AbstractRegionPainter$PaintContext::EMPTY_INSETS, $new($Insets, 0, 0, 0, 0));
}

AbstractRegionPainter$PaintContext::AbstractRegionPainter$PaintContext() {
}

$Class* AbstractRegionPainter$PaintContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY_INSETS", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractRegionPainter$PaintContext, EMPTY_INSETS)},
		{"stretchingInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, stretchingInsets)},
		{"canvasSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, canvasSize)},
		{"inverted", "Z", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, inverted)},
		{"cacheMode", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, cacheMode)},
		{"maxHorizontalScaleFactor", "D", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, maxHorizontalScaleFactor)},
		{"maxVerticalScaleFactor", "D", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, maxVerticalScaleFactor)},
		{"a", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, a)},
		{"b", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, b)},
		{"c", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, c)},
		{"d", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, d)},
		{"aPercent", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, aPercent)},
		{"bPercent", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, bPercent)},
		{"cPercent", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, cPercent)},
		{"dPercent", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter$PaintContext, dPercent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Insets;Ljava/awt/Dimension;Z)V", nullptr, $PUBLIC, $method(AbstractRegionPainter$PaintContext, init$, void, $Insets*, $Dimension*, bool)},
		{"<init>", "(Ljava/awt/Insets;Ljava/awt/Dimension;ZLjavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;DD)V", nullptr, $PUBLIC, $method(AbstractRegionPainter$PaintContext, init$, void, $Insets*, $Dimension*, bool, $AbstractRegionPainter$PaintContext$CacheMode*, double, double)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext", "javax.swing.plaf.nimbus.AbstractRegionPainter", "PaintContext", $PROTECTED | $STATIC},
		{"javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext$CacheMode", "javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext", "CacheMode", $PROTECTED | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.AbstractRegionPainter"
	};
	$loadClass(AbstractRegionPainter$PaintContext, name, initialize, &classInfo$$, AbstractRegionPainter$PaintContext::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractRegionPainter$PaintContext);
	});
	return class$;
}

$Class* AbstractRegionPainter$PaintContext::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax