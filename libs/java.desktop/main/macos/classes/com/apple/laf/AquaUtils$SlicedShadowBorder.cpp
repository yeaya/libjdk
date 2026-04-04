#include <com/apple/laf/AquaUtils$SlicedShadowBorder.h>
#include <com/apple/laf/AquaImageFactory$SlicedImageControl.h>
#include <com/apple/laf/AquaUtils$Painter.h>
#include <com/apple/laf/AquaUtils$ShadowBorder.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $AquaImageFactory$SlicedImageControl = ::com::apple::laf::AquaImageFactory$SlicedImageControl;
using $AquaUtils$Painter = ::com::apple::laf::AquaUtils$Painter;
using $AquaUtils$ShadowBorder = ::com::apple::laf::AquaUtils$ShadowBorder;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtils$SlicedShadowBorder::init$($AquaUtils$Painter* prePainter, $AquaUtils$Painter* postPainter, int32_t offsetX, int32_t offsetY, float distance, float intensity, int32_t blur, int32_t templateWidth, int32_t templateHeight, int32_t leftCut, int32_t topCut, int32_t rightCut, int32_t bottomCut) {
	$useLocalObjectStack();
	$AquaUtils$ShadowBorder::init$(prePainter, postPainter, offsetX, offsetY, distance, intensity, blur);
	$var($BufferedImage, i, $new($BufferedImage, templateWidth, templateHeight, $BufferedImage::TYPE_INT_ARGB_PRE));
	$AquaUtils$ShadowBorder::paintBorder(nullptr, $(i->getGraphics()), 0, 0, templateWidth, templateHeight);
	$set(this, slices, $new($AquaImageFactory$SlicedImageControl, i, leftCut, topCut, rightCut, bottomCut, false));
}

void AquaUtils$SlicedShadowBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	this->slices->paint(g, x, y, width, height);
}

AquaUtils$SlicedShadowBorder::AquaUtils$SlicedShadowBorder() {
}

$Class* AquaUtils$SlicedShadowBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"slices", "Lcom/apple/laf/AquaImageFactory$SlicedImageControl;", nullptr, $PRIVATE | $FINAL, $field(AquaUtils$SlicedShadowBorder, slices)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaUtils$Painter;Lcom/apple/laf/AquaUtils$Painter;IIFFIIIIIII)V", nullptr, 0, $method(AquaUtils$SlicedShadowBorder, init$, void, $AquaUtils$Painter*, $AquaUtils$Painter*, int32_t, int32_t, float, float, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(AquaUtils$SlicedShadowBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$SlicedShadowBorder", "com.apple.laf.AquaUtils", "SlicedShadowBorder", $STATIC},
		{"com.apple.laf.AquaUtils$ShadowBorder", "com.apple.laf.AquaUtils", "ShadowBorder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaUtils$SlicedShadowBorder",
		"com.apple.laf.AquaUtils$ShadowBorder",
		nullptr,
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
	$loadClass(AquaUtils$SlicedShadowBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$SlicedShadowBorder);
	});
	return class$;
}

$Class* AquaUtils$SlicedShadowBorder::class$ = nullptr;

		} // laf
	} // apple
} // com