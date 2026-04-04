#include <com/apple/laf/AquaButtonBorder$Toolbar.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <jcpp.h>

#undef TOOLBAR_ITEM_WELL

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonBorder$Toolbar::init$() {
	$useLocalObjectStack();
	$AquaButtonBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant)->alterMargins(5, 5, 5, 5))));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::TOOLBAR_ITEM_WELL);
}

void AquaButtonBorder$Toolbar::init$(AquaButtonBorder$Toolbar* other) {
	$AquaButtonBorder::init$(other);
}

void AquaButtonBorder$Toolbar::doButtonPaint($AbstractButton* b, $ButtonModel* model, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (!$nc(model)->isSelected()) {
		return;
	}
	$AquaButtonBorder::doButtonPaint(b, model, g, x, y, w, h);
}

AquaButtonBorder$Toolbar::AquaButtonBorder$Toolbar() {
}

$Class* AquaButtonBorder$Toolbar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaButtonBorder$Toolbar, init$, void)},
		{"<init>", "(Lcom/apple/laf/AquaButtonBorder$Toolbar;)V", nullptr, $PUBLIC, $method(AquaButtonBorder$Toolbar, init$, void, AquaButtonBorder$Toolbar*)},
		{"doButtonPaint", "(Ljavax/swing/AbstractButton;Ljavax/swing/ButtonModel;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED, $virtualMethod(AquaButtonBorder$Toolbar, doButtonPaint, void, $AbstractButton*, $ButtonModel*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonBorder$Toolbar", "com.apple.laf.AquaButtonBorder", "Toolbar", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaButtonBorder$Toolbar",
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
	$loadClass(AquaButtonBorder$Toolbar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonBorder$Toolbar));
	});
	return class$;
}

$Class* AquaButtonBorder$Toolbar::class$ = nullptr;

		} // laf
	} // apple
} // com