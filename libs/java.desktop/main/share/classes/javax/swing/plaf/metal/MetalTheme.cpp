#include <javax/swing/plaf/metal/MetalTheme.h>

#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <jcpp.h>

#undef CONTROL_TEXT_FONT
#undef MENU_TEXT_FONT
#undef SUB_TEXT_FONT
#undef SYSTEM_TEXT_FONT
#undef USER_TEXT_FONT
#undef WINDOW_TITLE_FONT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTheme_FieldInfo_[] = {
	{"CONTROL_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, CONTROL_TEXT_FONT)},
	{"SYSTEM_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, SYSTEM_TEXT_FONT)},
	{"USER_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, USER_TEXT_FONT)},
	{"MENU_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, MENU_TEXT_FONT)},
	{"WINDOW_TITLE_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, WINDOW_TITLE_FONT)},
	{"SUB_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, SUB_TEXT_FONT)},
	{"white", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $STATIC, $staticField(MetalTheme, white)},
	{"black", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC, $staticField(MetalTheme, black)},
	{}
};

$MethodInfo _MetalTheme_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(MetalTheme, init$, void)},
	{"addCustomEntriesToTable", "(Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC, $virtualMethod(MetalTheme, addCustomEntriesToTable, void, $UIDefaults*)},
	{"getAcceleratorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getAcceleratorForeground, $ColorUIResource*)},
	{"getAcceleratorSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getAcceleratorSelectedForeground, $ColorUIResource*)},
	{"getBlack", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(MetalTheme, getBlack, $ColorUIResource*)},
	{"getControl", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getControl, $ColorUIResource*)},
	{"getControlDarkShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getControlDarkShadow, $ColorUIResource*)},
	{"getControlDisabled", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getControlDisabled, $ColorUIResource*)},
	{"getControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getControlHighlight, $ColorUIResource*)},
	{"getControlInfo", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getControlInfo, $ColorUIResource*)},
	{"getControlShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getControlShadow, $ColorUIResource*)},
	{"getControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getControlTextColor, $ColorUIResource*)},
	{"getControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetalTheme, getControlTextFont, $FontUIResource*)},
	{"getDesktopColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getDesktopColor, $ColorUIResource*)},
	{"getFocusColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getFocusColor, $ColorUIResource*)},
	{"getHighlightedTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getHighlightedTextColor, $ColorUIResource*)},
	{"getInactiveControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getInactiveControlTextColor, $ColorUIResource*)},
	{"getInactiveSystemTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getInactiveSystemTextColor, $ColorUIResource*)},
	{"getMenuBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getMenuBackground, $ColorUIResource*)},
	{"getMenuDisabledForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getMenuDisabledForeground, $ColorUIResource*)},
	{"getMenuForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getMenuForeground, $ColorUIResource*)},
	{"getMenuSelectedBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getMenuSelectedBackground, $ColorUIResource*)},
	{"getMenuSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getMenuSelectedForeground, $ColorUIResource*)},
	{"getMenuTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetalTheme, getMenuTextFont, $FontUIResource*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetalTheme, getName, $String*)},
	{"getPrimary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(MetalTheme, getPrimary1, $ColorUIResource*)},
	{"getPrimary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(MetalTheme, getPrimary2, $ColorUIResource*)},
	{"getPrimary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(MetalTheme, getPrimary3, $ColorUIResource*)},
	{"getPrimaryControl", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getPrimaryControl, $ColorUIResource*)},
	{"getPrimaryControlDarkShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getPrimaryControlDarkShadow, $ColorUIResource*)},
	{"getPrimaryControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getPrimaryControlHighlight, $ColorUIResource*)},
	{"getPrimaryControlInfo", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getPrimaryControlInfo, $ColorUIResource*)},
	{"getPrimaryControlShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getPrimaryControlShadow, $ColorUIResource*)},
	{"getSecondary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(MetalTheme, getSecondary1, $ColorUIResource*)},
	{"getSecondary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(MetalTheme, getSecondary2, $ColorUIResource*)},
	{"getSecondary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(MetalTheme, getSecondary3, $ColorUIResource*)},
	{"getSeparatorBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getSeparatorBackground, $ColorUIResource*)},
	{"getSeparatorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getSeparatorForeground, $ColorUIResource*)},
	{"getSubTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetalTheme, getSubTextFont, $FontUIResource*)},
	{"getSystemTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getSystemTextColor, $ColorUIResource*)},
	{"getSystemTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetalTheme, getSystemTextFont, $FontUIResource*)},
	{"getTextHighlightColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getTextHighlightColor, $ColorUIResource*)},
	{"getUserTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getUserTextColor, $ColorUIResource*)},
	{"getUserTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetalTheme, getUserTextFont, $FontUIResource*)},
	{"getWhite", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(MetalTheme, getWhite, $ColorUIResource*)},
	{"getWindowBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getWindowBackground, $ColorUIResource*)},
	{"getWindowTitleBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getWindowTitleBackground, $ColorUIResource*)},
	{"getWindowTitleFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetalTheme, getWindowTitleFont, $FontUIResource*)},
	{"getWindowTitleForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getWindowTitleForeground, $ColorUIResource*)},
	{"getWindowTitleInactiveBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getWindowTitleInactiveBackground, $ColorUIResource*)},
	{"getWindowTitleInactiveForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalTheme, getWindowTitleInactiveForeground, $ColorUIResource*)},
	{"install", "()V", nullptr, 0, $virtualMethod(MetalTheme, install, void)},
	{"isSystemTheme", "()Z", nullptr, 0, $virtualMethod(MetalTheme, isSystemTheme, bool)},
	{}
};

$ClassInfo _MetalTheme_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.metal.MetalTheme",
	"java.lang.Object",
	nullptr,
	_MetalTheme_FieldInfo_,
	_MetalTheme_MethodInfo_
};

$Object* allocate$MetalTheme($Class* clazz) {
	return $of($alloc(MetalTheme));
}

$ColorUIResource* MetalTheme::white = nullptr;
$ColorUIResource* MetalTheme::black = nullptr;

void MetalTheme::init$() {
}

$ColorUIResource* MetalTheme::getWhite() {
	return MetalTheme::white;
}

$ColorUIResource* MetalTheme::getBlack() {
	return MetalTheme::black;
}

$ColorUIResource* MetalTheme::getFocusColor() {
	return getPrimary2();
}

$ColorUIResource* MetalTheme::getDesktopColor() {
	return getPrimary2();
}

$ColorUIResource* MetalTheme::getControl() {
	return getSecondary3();
}

$ColorUIResource* MetalTheme::getControlShadow() {
	return getSecondary2();
}

$ColorUIResource* MetalTheme::getControlDarkShadow() {
	return getSecondary1();
}

$ColorUIResource* MetalTheme::getControlInfo() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getControlHighlight() {
	return getWhite();
}

$ColorUIResource* MetalTheme::getControlDisabled() {
	return getSecondary2();
}

$ColorUIResource* MetalTheme::getPrimaryControl() {
	return getPrimary3();
}

$ColorUIResource* MetalTheme::getPrimaryControlShadow() {
	return getPrimary2();
}

$ColorUIResource* MetalTheme::getPrimaryControlDarkShadow() {
	return getPrimary1();
}

$ColorUIResource* MetalTheme::getPrimaryControlInfo() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getPrimaryControlHighlight() {
	return getWhite();
}

$ColorUIResource* MetalTheme::getSystemTextColor() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getControlTextColor() {
	return getControlInfo();
}

$ColorUIResource* MetalTheme::getInactiveControlTextColor() {
	return getControlDisabled();
}

$ColorUIResource* MetalTheme::getInactiveSystemTextColor() {
	return getSecondary2();
}

$ColorUIResource* MetalTheme::getUserTextColor() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getTextHighlightColor() {
	return getPrimary3();
}

$ColorUIResource* MetalTheme::getHighlightedTextColor() {
	return getControlTextColor();
}

$ColorUIResource* MetalTheme::getWindowBackground() {
	return getWhite();
}

$ColorUIResource* MetalTheme::getWindowTitleBackground() {
	return getPrimary3();
}

$ColorUIResource* MetalTheme::getWindowTitleForeground() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getWindowTitleInactiveBackground() {
	return getSecondary3();
}

$ColorUIResource* MetalTheme::getWindowTitleInactiveForeground() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getMenuBackground() {
	return getSecondary3();
}

$ColorUIResource* MetalTheme::getMenuForeground() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getMenuSelectedBackground() {
	return getPrimary2();
}

$ColorUIResource* MetalTheme::getMenuSelectedForeground() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getMenuDisabledForeground() {
	return getSecondary2();
}

$ColorUIResource* MetalTheme::getSeparatorBackground() {
	return getWhite();
}

$ColorUIResource* MetalTheme::getSeparatorForeground() {
	return getPrimary1();
}

$ColorUIResource* MetalTheme::getAcceleratorForeground() {
	return getPrimary1();
}

$ColorUIResource* MetalTheme::getAcceleratorSelectedForeground() {
	return getBlack();
}

void MetalTheme::addCustomEntriesToTable($UIDefaults* table) {
}

void MetalTheme::install() {
}

bool MetalTheme::isSystemTheme() {
	return false;
}

void clinit$MetalTheme($Class* class$) {
	$assignStatic(MetalTheme::white, $new($ColorUIResource, 255, 255, 255));
	$assignStatic(MetalTheme::black, $new($ColorUIResource, 0, 0, 0));
}

MetalTheme::MetalTheme() {
}

$Class* MetalTheme::load$($String* name, bool initialize) {
	$loadClass(MetalTheme, name, initialize, &_MetalTheme_ClassInfo_, clinit$MetalTheme, allocate$MetalTheme);
	return class$;
}

$Class* MetalTheme::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax