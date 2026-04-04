#include <javax/swing/plaf/metal/MetalHighContrastTheme.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$ColorUIResource* MetalHighContrastTheme::primary1 = nullptr;
$ColorUIResource* MetalHighContrastTheme::primary2 = nullptr;
$ColorUIResource* MetalHighContrastTheme::primary3 = nullptr;
$ColorUIResource* MetalHighContrastTheme::primaryHighlight = nullptr;
$ColorUIResource* MetalHighContrastTheme::secondary2 = nullptr;
$ColorUIResource* MetalHighContrastTheme::secondary3 = nullptr;

void MetalHighContrastTheme::init$() {
	$DefaultMetalTheme::init$();
}

$String* MetalHighContrastTheme::getName() {
	return "Contrast"_s;
}

$ColorUIResource* MetalHighContrastTheme::getPrimary1() {
	return MetalHighContrastTheme::primary1;
}

$ColorUIResource* MetalHighContrastTheme::getPrimary2() {
	return MetalHighContrastTheme::primary2;
}

$ColorUIResource* MetalHighContrastTheme::getPrimary3() {
	return MetalHighContrastTheme::primary3;
}

$ColorUIResource* MetalHighContrastTheme::getPrimaryControlHighlight() {
	return MetalHighContrastTheme::primaryHighlight;
}

$ColorUIResource* MetalHighContrastTheme::getSecondary2() {
	return MetalHighContrastTheme::secondary2;
}

$ColorUIResource* MetalHighContrastTheme::getSecondary3() {
	return MetalHighContrastTheme::secondary3;
}

$ColorUIResource* MetalHighContrastTheme::getControlHighlight() {
	return MetalHighContrastTheme::secondary2;
}

$ColorUIResource* MetalHighContrastTheme::getFocusColor() {
	return getBlack();
}

$ColorUIResource* MetalHighContrastTheme::getTextHighlightColor() {
	return getBlack();
}

$ColorUIResource* MetalHighContrastTheme::getHighlightedTextColor() {
	return getWhite();
}

$ColorUIResource* MetalHighContrastTheme::getMenuSelectedBackground() {
	return getBlack();
}

$ColorUIResource* MetalHighContrastTheme::getMenuSelectedForeground() {
	return getWhite();
}

$ColorUIResource* MetalHighContrastTheme::getAcceleratorForeground() {
	return getBlack();
}

$ColorUIResource* MetalHighContrastTheme::getAcceleratorSelectedForeground() {
	return getWhite();
}

void MetalHighContrastTheme::addCustomEntriesToTable($UIDefaults* table) {
	$useLocalObjectStack();
	$var($Border, blackLineBorder, $new($BorderUIResource, $$new($LineBorder, $(getBlack()))));
	$var($Border, whiteLineBorder, $new($BorderUIResource, $$new($LineBorder, $(getWhite()))));
	$var($Object, textBorder, $new($BorderUIResource, $$new($CompoundBorder, blackLineBorder, $$new($BasicBorders$MarginBorder))));
	$var($ObjectArray, defaults, $new($ObjectArray, {
		"ToolTip.border"_s,
		blackLineBorder,
		"TitledBorder.border"_s,
		blackLineBorder,
		"TextField.border"_s,
		textBorder,
		"PasswordField.border"_s,
		textBorder,
		"TextArea.border"_s,
		textBorder,
		"TextPane.border"_s,
		textBorder,
		"EditorPane.border"_s,
		textBorder,
		"ComboBox.background"_s,
		$(getWindowBackground()),
		"ComboBox.foreground"_s,
		$(getUserTextColor()),
		"ComboBox.selectionBackground"_s,
		$(getTextHighlightColor()),
		"ComboBox.selectionForeground"_s,
		$(getHighlightedTextColor()),
		"ProgressBar.foreground"_s,
		$(getUserTextColor()),
		"ProgressBar.background"_s,
		$(getWindowBackground()),
		"ProgressBar.selectionForeground"_s,
		$(getWindowBackground()),
		"ProgressBar.selectionBackground"_s,
		$(getUserTextColor()),
		"OptionPane.errorDialog.border.background"_s,
		$(getPrimary1()),
		"OptionPane.errorDialog.titlePane.foreground"_s,
		$(getPrimary3()),
		"OptionPane.errorDialog.titlePane.background"_s,
		$(getPrimary1()),
		"OptionPane.errorDialog.titlePane.shadow"_s,
		$(getPrimary2()),
		"OptionPane.questionDialog.border.background"_s,
		$(getPrimary1()),
		"OptionPane.questionDialog.titlePane.foreground"_s,
		$(getPrimary3()),
		"OptionPane.questionDialog.titlePane.background"_s,
		$(getPrimary1()),
		"OptionPane.questionDialog.titlePane.shadow"_s,
		$(getPrimary2()),
		"OptionPane.warningDialog.border.background"_s,
		$(getPrimary1()),
		"OptionPane.warningDialog.titlePane.foreground"_s,
		$(getPrimary3()),
		"OptionPane.warningDialog.titlePane.background"_s,
		$(getPrimary1()),
		"OptionPane.warningDialog.titlePane.shadow"_s,
		$(getPrimary2())
	}));
	$nc(table)->putDefaults(defaults);
}

bool MetalHighContrastTheme::isSystemTheme() {
	return ($of(this)->getClass() == MetalHighContrastTheme::class$);
}

void MetalHighContrastTheme::clinit$($Class* clazz) {
	$assignStatic(MetalHighContrastTheme::primary1, $new($ColorUIResource, 0, 0, 0));
	$assignStatic(MetalHighContrastTheme::primary2, $new($ColorUIResource, 204, 204, 204));
	$assignStatic(MetalHighContrastTheme::primary3, $new($ColorUIResource, 255, 255, 255));
	$assignStatic(MetalHighContrastTheme::primaryHighlight, $new($ColorUIResource, 102, 102, 102));
	$assignStatic(MetalHighContrastTheme::secondary2, $new($ColorUIResource, 204, 204, 204));
	$assignStatic(MetalHighContrastTheme::secondary3, $new($ColorUIResource, 255, 255, 255));
}

MetalHighContrastTheme::MetalHighContrastTheme() {
}

$Class* MetalHighContrastTheme::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"primary1", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, primary1)},
		{"primary2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, primary2)},
		{"primary3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, primary3)},
		{"primaryHighlight", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, primaryHighlight)},
		{"secondary2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, secondary2)},
		{"secondary3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, secondary3)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetalHighContrastTheme, init$, void)},
		{"addCustomEntriesToTable", "(Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, addCustomEntriesToTable, void, $UIDefaults*)},
		{"getAcceleratorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getAcceleratorForeground, $ColorUIResource*)},
		{"getAcceleratorSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getAcceleratorSelectedForeground, $ColorUIResource*)},
		{"getControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getControlHighlight, $ColorUIResource*)},
		{"getFocusColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getFocusColor, $ColorUIResource*)},
		{"getHighlightedTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getHighlightedTextColor, $ColorUIResource*)},
		{"getMenuSelectedBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getMenuSelectedBackground, $ColorUIResource*)},
		{"getMenuSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getMenuSelectedForeground, $ColorUIResource*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getName, $String*)},
		{"getPrimary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(MetalHighContrastTheme, getPrimary1, $ColorUIResource*)},
		{"getPrimary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(MetalHighContrastTheme, getPrimary2, $ColorUIResource*)},
		{"getPrimary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(MetalHighContrastTheme, getPrimary3, $ColorUIResource*)},
		{"getPrimaryControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getPrimaryControlHighlight, $ColorUIResource*)},
		{"getSecondary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(MetalHighContrastTheme, getSecondary2, $ColorUIResource*)},
		{"getSecondary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(MetalHighContrastTheme, getSecondary3, $ColorUIResource*)},
		{"getTextHighlightColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(MetalHighContrastTheme, getTextHighlightColor, $ColorUIResource*)},
		{"isSystemTheme", "()Z", nullptr, 0, $virtualMethod(MetalHighContrastTheme, isSystemTheme, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalHighContrastTheme",
		"javax.swing.plaf.metal.DefaultMetalTheme",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalHighContrastTheme, name, initialize, &classInfo$$, MetalHighContrastTheme::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetalHighContrastTheme);
	});
	return class$;
}

$Class* MetalHighContrastTheme::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax