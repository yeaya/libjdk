#include <com/apple/laf/AquaNativeResources.h>
#include <com/apple/laf/AquaNativeResources$1.h>
#include <com/apple/laf/AquaNativeResources$2.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $AquaNativeResources$1 = ::com::apple::laf::AquaNativeResources$1;
using $AquaNativeResources$2 = ::com::apple::laf::AquaNativeResources$2;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingleton* AquaNativeResources::sBackgroundColor = nullptr;

void AquaNativeResources::init$() {
}

int64_t AquaNativeResources::getWindowBackgroundColor() {
	$init(AquaNativeResources);
	$prepareNativeStatic(getWindowBackgroundColor, int64_t);
	int64_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$Color* AquaNativeResources::getWindowBackgroundColorUIResource() {
	$init(AquaNativeResources);
	return $cast($Color, AquaNativeResources::sBackgroundColor->get());
}

$BufferedImage* AquaNativeResources::getRadioButtonSizerImage() {
	$init(AquaNativeResources);
	$useLocalObjectStack();
	$var($BufferedImage, img, $new($BufferedImage, 20, 20, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($Graphics, g, img->getGraphics());
	$init($Color);
	$nc(g)->setColor($Color::pink);
	g->fillRect(0, 0, 20, 20);
	g->dispose();
	return img;
}

void AquaNativeResources::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged($$new($AquaNativeResources$1));
	}
	$assignStatic(AquaNativeResources::sBackgroundColor, $new($AquaNativeResources$2));
}

AquaNativeResources::AquaNativeResources() {
}

$Class* AquaNativeResources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sBackgroundColor", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/awt/Color;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaNativeResources, sBackgroundColor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaNativeResources, init$, void)},
		{"getRadioButtonSizerImage", "()Ljava/awt/image/BufferedImage;", nullptr, $STATIC, $staticMethod(AquaNativeResources, getRadioButtonSizerImage, $BufferedImage*)},
		{"getWindowBackgroundColor", "()J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(AquaNativeResources, getWindowBackgroundColor, int64_t)},
		{"getWindowBackgroundColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaNativeResources, getWindowBackgroundColorUIResource, $Color*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaNativeResources$CColorPaintUIResource", "com.apple.laf.AquaNativeResources", "CColorPaintUIResource", $STATIC},
		{"com.apple.laf.AquaNativeResources$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaNativeResources$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaNativeResources",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaNativeResources$CColorPaintUIResource,com.apple.laf.AquaNativeResources$2,com.apple.laf.AquaNativeResources$1"
	};
	$loadClass(AquaNativeResources, name, initialize, &classInfo$$, AquaNativeResources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaNativeResources);
	});
	return class$;
}

$Class* AquaNativeResources::class$ = nullptr;

		} // laf
	} // apple
} // com