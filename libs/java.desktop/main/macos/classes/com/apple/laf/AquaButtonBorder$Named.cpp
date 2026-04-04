#include <com/apple/laf/AquaButtonBorder$Named.h>
#include <apple/laf/JRSUIConstants$BooleanValue.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <jcpp.h>

#undef NO
#undef YES

using $JRSUIConstants$BooleanValue = ::apple::laf::JRSUIConstants$BooleanValue;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonBorder$Named::init$($JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaButtonBorder::init$(sizeDescriptor);
	$nc($nc(this->painter)->state)->set(widget);
}

void AquaButtonBorder$Named::init$(AquaButtonBorder$Named* sizeDescriptor) {
	$AquaButtonBorder::init$(sizeDescriptor);
}

void AquaButtonBorder$Named::doButtonPaint($AbstractButton* b, $ButtonModel* model, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init($JRSUIConstants$BooleanValue);
	$nc($nc(this->painter)->state)->set($nc(model)->isSelected() ? $JRSUIConstants$BooleanValue::YES : $JRSUIConstants$BooleanValue::NO);
	$AquaButtonBorder::doButtonPaint(b, model, g, x, y, width, height);
}

AquaButtonBorder$Named::AquaButtonBorder$Named() {
}

$Class* AquaButtonBorder$Named::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, $PUBLIC, $method(AquaButtonBorder$Named, init$, void, $JRSUIConstants$Widget*, $AquaUtilControlSize$SizeDescriptor*)},
		{"<init>", "(Lcom/apple/laf/AquaButtonBorder$Named;)V", nullptr, $PUBLIC, $method(AquaButtonBorder$Named, init$, void, AquaButtonBorder$Named*)},
		{"doButtonPaint", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonBorder$Named, doButtonPaint, void, $AbstractButton*, $ButtonModel*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonBorder$Named", "com.apple.laf.AquaButtonBorder", "Named", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaButtonBorder$Named",
		"com.apple.laf.AquaButtonBorder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonBorder"
	};
	$loadClass(AquaButtonBorder$Named, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonBorder$Named));
	});
	return class$;
}

$Class* AquaButtonBorder$Named::class$ = nullptr;

		} // laf
	} // apple
} // com