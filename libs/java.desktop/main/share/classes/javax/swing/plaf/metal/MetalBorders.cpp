#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/border/MatteBorder.h>
#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ButtonBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$Flush3DBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$RolloverButtonBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$RolloverMarginBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$TextFieldBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ToggleButtonBorder.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <jcpp.h>

#undef NO_BUTTON_ROLLOVER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $MatteBorder = ::javax::swing::border::MatteBorder;
using $BorderUIResource$CompoundBorderUIResource = ::javax::swing::plaf::BorderUIResource$CompoundBorderUIResource;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $MetalBorders$ButtonBorder = ::javax::swing::plaf::metal::MetalBorders$ButtonBorder;
using $MetalBorders$Flush3DBorder = ::javax::swing::plaf::metal::MetalBorders$Flush3DBorder;
using $MetalBorders$RolloverButtonBorder = ::javax::swing::plaf::metal::MetalBorders$RolloverButtonBorder;
using $MetalBorders$RolloverMarginBorder = ::javax::swing::plaf::metal::MetalBorders$RolloverMarginBorder;
using $MetalBorders$TextFieldBorder = ::javax::swing::plaf::metal::MetalBorders$TextFieldBorder;
using $MetalBorders$ToggleButtonBorder = ::javax::swing::plaf::metal::MetalBorders$ToggleButtonBorder;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$Object* MetalBorders::NO_BUTTON_ROLLOVER = nullptr;
$Border* MetalBorders::buttonBorder = nullptr;
$Border* MetalBorders::textBorder = nullptr;
$Border* MetalBorders::textFieldBorder = nullptr;
$Border* MetalBorders::toggleButtonBorder = nullptr;

void MetalBorders::init$() {
}

$Border* MetalBorders::getButtonBorder() {
	$init(MetalBorders);
	$useLocalObjectStack();
	if (MetalBorders::buttonBorder == nullptr) {
		$var($Border, var$0, $new($MetalBorders$ButtonBorder));
		$assignStatic(MetalBorders::buttonBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	}
	return MetalBorders::buttonBorder;
}

$Border* MetalBorders::getTextBorder() {
	$init(MetalBorders);
	$useLocalObjectStack();
	if (MetalBorders::textBorder == nullptr) {
		$var($Border, var$0, $new($MetalBorders$Flush3DBorder));
		$assignStatic(MetalBorders::textBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	}
	return MetalBorders::textBorder;
}

$Border* MetalBorders::getTextFieldBorder() {
	$init(MetalBorders);
	$useLocalObjectStack();
	if (MetalBorders::textFieldBorder == nullptr) {
		$var($Border, var$0, $new($MetalBorders$TextFieldBorder));
		$assignStatic(MetalBorders::textFieldBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	}
	return MetalBorders::textFieldBorder;
}

$Border* MetalBorders::getToggleButtonBorder() {
	$init(MetalBorders);
	$useLocalObjectStack();
	if (MetalBorders::toggleButtonBorder == nullptr) {
		$var($Border, var$0, $new($MetalBorders$ToggleButtonBorder));
		$assignStatic(MetalBorders::toggleButtonBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	}
	return MetalBorders::toggleButtonBorder;
}

$Border* MetalBorders::getDesktopIconBorder() {
	$init(MetalBorders);
	$useLocalObjectStack();
	$var($Border, var$0, $new($LineBorder, $($MetalLookAndFeel::getControlDarkShadow()), 1));
	return $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($MatteBorder, 2, 2, 1, 2, $($MetalLookAndFeel::getControl())));
}

$Border* MetalBorders::getToolBarRolloverBorder() {
	$init(MetalBorders);
	$useLocalObjectStack();
	if ($MetalLookAndFeel::usingOcean()) {
		$var($Border, var$0, $new($MetalBorders$ButtonBorder));
		return $new($CompoundBorder, var$0, $$new($MetalBorders$RolloverMarginBorder));
	}
	$var($Border, var$1, $new($MetalBorders$RolloverButtonBorder));
	return $new($CompoundBorder, var$1, $$new($MetalBorders$RolloverMarginBorder));
}

$Border* MetalBorders::getToolBarNonrolloverBorder() {
	$init(MetalBorders);
	$useLocalObjectStack();
	if ($MetalLookAndFeel::usingOcean()) {
		$var($Border, var$0, $new($MetalBorders$ButtonBorder));
		$new($CompoundBorder, var$0, $$new($MetalBorders$RolloverMarginBorder));
	}
	$var($Border, var$1, $new($MetalBorders$ButtonBorder));
	return $new($CompoundBorder, var$1, $$new($MetalBorders$RolloverMarginBorder));
}

void MetalBorders::clinit$($Class* clazz) {
	$assignStatic(MetalBorders::NO_BUTTON_ROLLOVER, $new($StringUIClientPropertyKey, "NoButtonRollover"_s));
}

MetalBorders::MetalBorders() {
}

$Class* MetalBorders::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_BUTTON_ROLLOVER", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(MetalBorders, NO_BUTTON_ROLLOVER)},
		{"buttonBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MetalBorders, buttonBorder)},
		{"textBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MetalBorders, textBorder)},
		{"textFieldBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MetalBorders, textFieldBorder)},
		{"toggleButtonBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MetalBorders, toggleButtonBorder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalBorders, init$, void)},
		{"getButtonBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalBorders, getButtonBorder, $Border*)},
		{"getDesktopIconBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalBorders, getDesktopIconBorder, $Border*)},
		{"getTextBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalBorders, getTextBorder, $Border*)},
		{"getTextFieldBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalBorders, getTextFieldBorder, $Border*)},
		{"getToggleButtonBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalBorders, getToggleButtonBorder, $Border*)},
		{"getToolBarNonrolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $STATIC, $staticMethod(MetalBorders, getToolBarNonrolloverBorder, $Border*)},
		{"getToolBarRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $STATIC, $staticMethod(MetalBorders, getToolBarRolloverBorder, $Border*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalBorders$TableHeaderBorder", "javax.swing.plaf.metal.MetalBorders", "TableHeaderBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$ToggleButtonBorder", "javax.swing.plaf.metal.MetalBorders", "ToggleButtonBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$ScrollPaneBorder", "javax.swing.plaf.metal.MetalBorders", "ScrollPaneBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$TextFieldBorder", "javax.swing.plaf.metal.MetalBorders", "TextFieldBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$ToolBarBorder", "javax.swing.plaf.metal.MetalBorders", "ToolBarBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder", "javax.swing.plaf.metal.MetalBorders", "RolloverMarginBorder", $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$RolloverButtonBorder", "javax.swing.plaf.metal.MetalBorders", "RolloverButtonBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$PopupMenuBorder", "javax.swing.plaf.metal.MetalBorders", "PopupMenuBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$MenuItemBorder", "javax.swing.plaf.metal.MetalBorders", "MenuItemBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$MenuBarBorder", "javax.swing.plaf.metal.MetalBorders", "MenuBarBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$OptionDialogBorder", "javax.swing.plaf.metal.MetalBorders", "OptionDialogBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$PaletteBorder", "javax.swing.plaf.metal.MetalBorders", "PaletteBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$WarningDialogBorder", "javax.swing.plaf.metal.MetalBorders", "WarningDialogBorder", $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder", "javax.swing.plaf.metal.MetalBorders", "QuestionDialogBorder", $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder", "javax.swing.plaf.metal.MetalBorders", "ErrorDialogBorder", $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$DialogBorder", "javax.swing.plaf.metal.MetalBorders", "DialogBorder", $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$FrameBorder", "javax.swing.plaf.metal.MetalBorders", "FrameBorder", $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$InternalFrameBorder", "javax.swing.plaf.metal.MetalBorders", "InternalFrameBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$ButtonBorder", "javax.swing.plaf.metal.MetalBorders", "ButtonBorder", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalBorders$Flush3DBorder", "javax.swing.plaf.metal.MetalBorders", "Flush3DBorder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalBorders",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalBorders$TableHeaderBorder,javax.swing.plaf.metal.MetalBorders$ToggleButtonBorder,javax.swing.plaf.metal.MetalBorders$ScrollPaneBorder,javax.swing.plaf.metal.MetalBorders$TextFieldBorder,javax.swing.plaf.metal.MetalBorders$ToolBarBorder,javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder,javax.swing.plaf.metal.MetalBorders$RolloverButtonBorder,javax.swing.plaf.metal.MetalBorders$PopupMenuBorder,javax.swing.plaf.metal.MetalBorders$MenuItemBorder,javax.swing.plaf.metal.MetalBorders$MenuBarBorder,javax.swing.plaf.metal.MetalBorders$OptionDialogBorder,javax.swing.plaf.metal.MetalBorders$PaletteBorder,javax.swing.plaf.metal.MetalBorders$WarningDialogBorder,javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder,javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder,javax.swing.plaf.metal.MetalBorders$DialogBorder,javax.swing.plaf.metal.MetalBorders$FrameBorder,javax.swing.plaf.metal.MetalBorders$InternalFrameBorder,javax.swing.plaf.metal.MetalBorders$ButtonBorder,javax.swing.plaf.metal.MetalBorders$Flush3DBorder"
	};
	$loadClass(MetalBorders, name, initialize, &classInfo$$, MetalBorders::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetalBorders);
	});
	return class$;
}

$Class* MetalBorders::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax