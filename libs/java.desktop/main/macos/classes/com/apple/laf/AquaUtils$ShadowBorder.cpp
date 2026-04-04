#include <com/apple/laf/AquaUtils$ShadowBorder.h>
#include <com/apple/laf/AquaUtils$Painter.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ConvolveOp.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/Kernel.h>
#include <jcpp.h>

#undef KEY_ALPHA_INTERPOLATION
#undef KEY_INTERPOLATION
#undef TYPE_INT_ARGB_PRE
#undef VALUE_ALPHA_INTERPOLATION_QUALITY
#undef VALUE_INTERPOLATION_BICUBIC

using $AquaUtils$Painter = ::com::apple::laf::AquaUtils$Painter;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $RenderingHints = ::java::awt::RenderingHints;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ConvolveOp = ::java::awt::image::ConvolveOp;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Kernel = ::java::awt::image::Kernel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtils$ShadowBorder::init$($AquaUtils$Painter* prePainter, $AquaUtils$Painter* postPainter, int32_t offsetX, int32_t offsetY, float distance, float intensity, int32_t blur) {
	$useLocalObjectStack();
	$set(this, prePainter, prePainter);
	$set(this, postPainter, postPainter);
	this->offsetX = offsetX;
	this->offsetY = offsetY;
	this->distance = distance;
	this->blur = blur;
	int32_t halfBlur = blur / 2;
	$set(this, insets, $new($Insets, halfBlur - offsetY, halfBlur - offsetX, halfBlur + offsetY, halfBlur + offsetX));
	float blurry = intensity / (blur * blur);
	$var($floats, blurKernel, $new($floats, blur * blur));
	for (int32_t i = 0; i < blurKernel->length; ++i) {
		blurKernel->set(i, blurry);
	}
	$set(this, blurOp, $new($ConvolveOp, $$new($Kernel, blur, blur, blurKernel)));
}

bool AquaUtils$ShadowBorder::isBorderOpaque() {
	return false;
}

$Insets* AquaUtils$ShadowBorder::getBorderInsets($Component* c) {
	return this->insets;
}

void AquaUtils$ShadowBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($BufferedImage, img, $new($BufferedImage, width + this->blur * 2, height + this->blur * 2, $BufferedImage::TYPE_INT_ARGB_PRE));
	paintToImage(img, x, y, width, height);
	$nc(g)->drawImage(img, -this->blur, -this->blur, nullptr);
}

void AquaUtils$ShadowBorder::paintToImage($BufferedImage* img, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Graphics2D, imgG, $cast($Graphics2D, $nc(img)->getGraphics()));
	$init($AlphaComposite);
	$nc(imgG)->setComposite($AlphaComposite::Clear);
	$init($Color);
	imgG->setColor($Color::black);
	imgG->fillRect(0, 0, width + this->blur * 2, height + this->blur * 2);
	int32_t adjX = $cast(int32_t, (x + this->blur + this->offsetX + (this->insets->left * this->distance)));
	int32_t adjY = $cast(int32_t, (y + this->blur + this->offsetY + (this->insets->top * this->distance)));
	int32_t adjW = $cast(int32_t, (width - (this->insets->left + this->insets->right) * this->distance));
	int32_t adjH = $cast(int32_t, (height - (this->insets->top + this->insets->bottom) * this->distance));
	imgG->setComposite($AlphaComposite::DstAtop);
	if (this->prePainter != nullptr) {
		this->prePainter->paint(imgG, adjX, adjY, adjW, adjH);
	}
	imgG->dispose();
	$assign(imgG, $cast($Graphics2D, img->getGraphics()));
	$nc(imgG)->setComposite($AlphaComposite::DstAtop);
	$init($RenderingHints);
	imgG->setRenderingHint($RenderingHints::KEY_INTERPOLATION, $RenderingHints::VALUE_INTERPOLATION_BICUBIC);
	imgG->setRenderingHint($RenderingHints::KEY_ALPHA_INTERPOLATION, $RenderingHints::VALUE_ALPHA_INTERPOLATION_QUALITY);
	imgG->drawImage(img, this->blurOp, 0, 0);
	if (this->postPainter != nullptr) {
		this->postPainter->paint(imgG, adjX, adjY, adjW, adjH);
	}
	imgG->dispose();
}

AquaUtils$ShadowBorder::AquaUtils$ShadowBorder() {
}

$Class* AquaUtils$ShadowBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prePainter", "Lcom/apple/laf/AquaUtils$Painter;", nullptr, $PRIVATE | $FINAL, $field(AquaUtils$ShadowBorder, prePainter)},
		{"postPainter", "Lcom/apple/laf/AquaUtils$Painter;", nullptr, $PRIVATE | $FINAL, $field(AquaUtils$ShadowBorder, postPainter)},
		{"offsetX", "I", nullptr, $PRIVATE | $FINAL, $field(AquaUtils$ShadowBorder, offsetX)},
		{"offsetY", "I", nullptr, $PRIVATE | $FINAL, $field(AquaUtils$ShadowBorder, offsetY)},
		{"distance", "F", nullptr, $PRIVATE | $FINAL, $field(AquaUtils$ShadowBorder, distance)},
		{"blur", "I", nullptr, $PRIVATE | $FINAL, $field(AquaUtils$ShadowBorder, blur)},
		{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $FINAL, $field(AquaUtils$ShadowBorder, insets)},
		{"blurOp", "Ljava/awt/image/ConvolveOp;", nullptr, $PRIVATE | $FINAL, $field(AquaUtils$ShadowBorder, blurOp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaUtils$Painter;Lcom/apple/laf/AquaUtils$Painter;IIFFI)V", nullptr, 0, $method(AquaUtils$ShadowBorder, init$, void, $AquaUtils$Painter*, $AquaUtils$Painter*, int32_t, int32_t, float, float, int32_t)},
		{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AquaUtils$ShadowBorder, getBorderInsets, $Insets*, $Component*)},
		{"isBorderOpaque", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AquaUtils$ShadowBorder, isBorderOpaque, bool)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(AquaUtils$ShadowBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"paintToImage", "(Ljava/awt/image/BufferedImage;IIII)V", nullptr, $PRIVATE, $method(AquaUtils$ShadowBorder, paintToImage, void, $BufferedImage*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$ShadowBorder", "com.apple.laf.AquaUtils", "ShadowBorder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaUtils$ShadowBorder",
		"java.lang.Object",
		"javax.swing.border.Border",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$ShadowBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$ShadowBorder);
	});
	return class$;
}

$Class* AquaUtils$ShadowBorder::class$ = nullptr;

		} // laf
	} // apple
} // com