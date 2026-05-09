#include <javax/swing/plaf/metal/OceanTheme.h>
#include <java/awt/Color.h>
#include <java/awt/Insets.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <javax/swing/plaf/metal/OceanTheme$1.h>
#include <javax/swing/plaf/metal/OceanTheme$2.h>
#include <javax/swing/plaf/metal/OceanTheme$3.h>
#include <javax/swing/plaf/metal/OceanTheme$4.h>
#include <javax/swing/plaf/metal/OceanTheme$5.h>
#include <javax/swing/plaf/metal/OceanTheme$6.h>
#include <sun/swing/PrintColorUIResource.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BLACK
#undef CONTROL_TEXT_COLOR
#undef FALSE
#undef INACTIVE_CONTROL_TEXT_COLOR
#undef MENU_DISABLED_FOREGROUND
#undef OCEAN_BLACK
#undef OCEAN_DROP
#undef PRIMARY1
#undef PRIMARY2
#undef PRIMARY3
#undef SECONDARY1
#undef SECONDARY2
#undef SECONDARY3
#undef TRUE

using $Color = ::java::awt::Color;
using $Insets = ::java::awt::Insets;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Icon = ::javax::swing::Icon;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;
using $OceanTheme$1 = ::javax::swing::plaf::metal::OceanTheme$1;
using $OceanTheme$2 = ::javax::swing::plaf::metal::OceanTheme$2;
using $OceanTheme$3 = ::javax::swing::plaf::metal::OceanTheme$3;
using $OceanTheme$4 = ::javax::swing::plaf::metal::OceanTheme$4;
using $OceanTheme$5 = ::javax::swing::plaf::metal::OceanTheme$5;
using $OceanTheme$6 = ::javax::swing::plaf::metal::OceanTheme$6;
using $PrintColorUIResource = ::sun::swing::PrintColorUIResource;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0 : public $UIDefaults$LazyValue {
	$class(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(OceanTheme* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return $nc(inst$)->lambda$addCustomEntriesToTable$0(t);
	}
	OceanTheme* inst$ = nullptr;
};
$Class* OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/OceanTheme;)V", nullptr, $PUBLIC, $method(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, init$, void, OceanTheme*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0);
	});
	return class$;
}
$Class* OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::class$ = nullptr;

$ColorUIResource* OceanTheme::PRIMARY1 = nullptr;
$ColorUIResource* OceanTheme::PRIMARY2 = nullptr;
$ColorUIResource* OceanTheme::PRIMARY3 = nullptr;
$ColorUIResource* OceanTheme::SECONDARY1 = nullptr;
$ColorUIResource* OceanTheme::SECONDARY2 = nullptr;
$ColorUIResource* OceanTheme::SECONDARY3 = nullptr;
$ColorUIResource* OceanTheme::CONTROL_TEXT_COLOR = nullptr;
$ColorUIResource* OceanTheme::INACTIVE_CONTROL_TEXT_COLOR = nullptr;
$ColorUIResource* OceanTheme::MENU_DISABLED_FOREGROUND = nullptr;
$ColorUIResource* OceanTheme::OCEAN_BLACK = nullptr;
$ColorUIResource* OceanTheme::OCEAN_DROP = nullptr;

void OceanTheme::init$() {
	$DefaultMetalTheme::init$();
}

void OceanTheme::addCustomEntriesToTable($UIDefaults* table) {
	$useLocalObjectStack();
	$var($UIDefaults$LazyValue, focusBorder, $new(OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0, this));
	$var($List, buttonGradient, $Arrays::asList($$new($ObjectArray, {
		$($Float::valueOf(0.3f)),
		$($Float::valueOf(0.0f)),
		$$new($ColorUIResource, 0x00dde8f3),
		$(getWhite()),
		$(getSecondary2())
	})));
	$var($Color, cccccc, $new($ColorUIResource, 0x00cccccc));
	$var($Color, dadada, $new($ColorUIResource, 0x00dadada));
	$var($Color, c8ddf2, $new($ColorUIResource, 0x00c8ddf2));
	$var($Object, directoryIcon, getIconResource("icons/ocean/directory.gif"_s));
	$var($Object, fileIcon, getIconResource("icons/ocean/file.gif"_s));
	$var($List, sliderGradient, $Arrays::asList($$new($ObjectArray, {
		$($Float::valueOf(0.3f)),
		$($Float::valueOf(0.2f)),
		c8ddf2,
		$(getWhite()),
		$$new($ColorUIResource, OceanTheme::SECONDARY2)
	})));
	$var($ObjectArray, defaults, $new($ObjectArray, {
		"Button.gradient"_s,
		buttonGradient,
		"Button.rollover"_s,
		$Boolean::TRUE,
		"Button.toolBarBorderBackground"_s,
		OceanTheme::INACTIVE_CONTROL_TEXT_COLOR,
		"Button.disabledToolBarBorderBackground"_s,
		cccccc,
		"Button.rolloverIconType"_s,
		"ocean"_s,
		"CheckBox.rollover"_s,
		$Boolean::TRUE,
		"CheckBox.gradient"_s,
		buttonGradient,
		"CheckBoxMenuItem.gradient"_s,
		buttonGradient,
		"FileChooser.homeFolderIcon"_s,
		$(getIconResource("icons/ocean/homeFolder.gif"_s)),
		"FileChooser.newFolderIcon"_s,
		$(getIconResource("icons/ocean/newFolder.gif"_s)),
		"FileChooser.upFolderIcon"_s,
		$(getIconResource("icons/ocean/upFolder.gif"_s)),
		"FileView.computerIcon"_s,
		$(getIconResource("icons/ocean/computer.gif"_s)),
		"FileView.directoryIcon"_s,
		directoryIcon,
		"FileView.hardDriveIcon"_s,
		$(getIconResource("icons/ocean/hardDrive.gif"_s)),
		"FileView.fileIcon"_s,
		fileIcon,
		"FileView.floppyDriveIcon"_s,
		$(getIconResource("icons/ocean/floppy.gif"_s)),
		"Label.disabledForeground"_s,
		$(getInactiveControlTextColor()),
		"Menu.opaque"_s,
		$Boolean::FALSE,
		"MenuBar.gradient"_s,
		$($Arrays::asList($$new($ObjectArray, {
			$($Float::valueOf(1.0f)),
			$($Float::valueOf(0.0f)),
			$(getWhite()),
			dadada,
			$$new($ColorUIResource, dadada)
		}))),
		"MenuBar.borderColor"_s,
		cccccc,
		"InternalFrame.activeTitleGradient"_s,
		buttonGradient,
		"InternalFrame.closeIcon"_s,
		$$new($OceanTheme$1, this),
		"InternalFrame.iconifyIcon"_s,
		$$new($OceanTheme$2, this),
		"InternalFrame.minimizeIcon"_s,
		$$new($OceanTheme$3, this),
		"InternalFrame.icon"_s,
		$(getIconResource("icons/ocean/menu.gif"_s)),
		"InternalFrame.maximizeIcon"_s,
		$$new($OceanTheme$4, this),
		"InternalFrame.paletteCloseIcon"_s,
		$$new($OceanTheme$5, this),
		"List.focusCellHighlightBorder"_s,
		focusBorder,
		"MenuBarUI"_s,
		"javax.swing.plaf.metal.MetalMenuBarUI"_s,
		"OptionPane.errorIcon"_s,
		$(getIconResource("icons/ocean/error.png"_s)),
		"OptionPane.informationIcon"_s,
		$(getIconResource("icons/ocean/info.png"_s)),
		"OptionPane.questionIcon"_s,
		$(getIconResource("icons/ocean/question.png"_s)),
		"OptionPane.warningIcon"_s,
		$(getIconResource("icons/ocean/warning.png"_s)),
		"RadioButton.gradient"_s,
		buttonGradient,
		"RadioButton.rollover"_s,
		$Boolean::TRUE,
		"RadioButtonMenuItem.gradient"_s,
		buttonGradient,
		"ScrollBar.gradient"_s,
		buttonGradient,
		"Slider.altTrackColor"_s,
		$$new($ColorUIResource, 0x00d2e2ef),
		"Slider.gradient"_s,
		sliderGradient,
		"Slider.focusGradient"_s,
		sliderGradient,
		"SplitPane.oneTouchButtonsOpaque"_s,
		$Boolean::FALSE,
		"SplitPane.dividerFocusColor"_s,
		c8ddf2,
		"TabbedPane.borderHightlightColor"_s,
		$(getPrimary1()),
		"TabbedPane.contentAreaColor"_s,
		c8ddf2,
		"TabbedPane.contentBorderInsets"_s,
		$$new($Insets, 4, 2, 3, 3),
		"TabbedPane.selected"_s,
		c8ddf2,
		"TabbedPane.tabAreaBackground"_s,
		dadada,
		"TabbedPane.tabAreaInsets"_s,
		$$new($Insets, 2, 2, 0, 6),
		"TabbedPane.unselectedBackground"_s,
		OceanTheme::SECONDARY3,
		"Table.focusCellHighlightBorder"_s,
		focusBorder,
		"Table.gridColor"_s,
		OceanTheme::SECONDARY1,
		"TableHeader.focusCellBackground"_s,
		c8ddf2,
		"ToggleButton.gradient"_s,
		buttonGradient,
		"ToolBar.borderColor"_s,
		cccccc,
		"ToolBar.isRollover"_s,
		$Boolean::TRUE,
		"Tree.closedIcon"_s,
		directoryIcon,
		"Tree.collapsedIcon"_s,
		$$new($OceanTheme$6, this),
		"Tree.expandedIcon"_s,
		$(getIconResource("icons/ocean/expanded.gif"_s)),
		"Tree.leafIcon"_s,
		fileIcon,
		"Tree.openIcon"_s,
		directoryIcon,
		"Tree.selectionBorderColor"_s,
		$(getPrimary1()),
		"Tree.dropLineColor"_s,
		$(getPrimary1()),
		"Table.dropLineColor"_s,
		$(getPrimary1()),
		"Table.dropLineShortColor"_s,
		OceanTheme::OCEAN_BLACK,
		"Table.dropCellBackground"_s,
		OceanTheme::OCEAN_DROP,
		"Tree.dropCellBackground"_s,
		OceanTheme::OCEAN_DROP,
		"List.dropCellBackground"_s,
		OceanTheme::OCEAN_DROP,
		"List.dropLineColor"_s,
		$(getPrimary1())
	}));
	$nc(table)->putDefaults(defaults);
}

bool OceanTheme::isSystemTheme() {
	return true;
}

$String* OceanTheme::getName() {
	return "Ocean"_s;
}

$ColorUIResource* OceanTheme::getPrimary1() {
	return OceanTheme::PRIMARY1;
}

$ColorUIResource* OceanTheme::getPrimary2() {
	return OceanTheme::PRIMARY2;
}

$ColorUIResource* OceanTheme::getPrimary3() {
	return OceanTheme::PRIMARY3;
}

$ColorUIResource* OceanTheme::getSecondary1() {
	return OceanTheme::SECONDARY1;
}

$ColorUIResource* OceanTheme::getSecondary2() {
	return OceanTheme::SECONDARY2;
}

$ColorUIResource* OceanTheme::getSecondary3() {
	return OceanTheme::SECONDARY3;
}

$ColorUIResource* OceanTheme::getBlack() {
	return OceanTheme::OCEAN_BLACK;
}

$ColorUIResource* OceanTheme::getDesktopColor() {
	$init($MetalTheme);
	return $MetalTheme::white;
}

$ColorUIResource* OceanTheme::getInactiveControlTextColor() {
	return OceanTheme::INACTIVE_CONTROL_TEXT_COLOR;
}

$ColorUIResource* OceanTheme::getControlTextColor() {
	return OceanTheme::CONTROL_TEXT_COLOR;
}

$ColorUIResource* OceanTheme::getMenuDisabledForeground() {
	return OceanTheme::MENU_DISABLED_FOREGROUND;
}

$Object* OceanTheme::getIconResource($String* iconID) {
	return $SwingUtilities2::makeIcon($of(this)->getClass(), OceanTheme::class$, iconID);
}

$Icon* OceanTheme::getHastenedIcon($String* iconID, $UIDefaults* table) {
	$var($Object, res, getIconResource(iconID));
	return $cast($Icon, $nc($cast($UIDefaults$LazyValue, res))->createValue(table));
}

$Object* OceanTheme::lambda$addCustomEntriesToTable$0($UIDefaults* t) {
	return $of($new($BorderUIResource$LineBorderUIResource, $(getPrimary1())));
}

void OceanTheme::clinit$($Class* clazz) {
	$assignStatic(OceanTheme::PRIMARY1, $new($ColorUIResource, 0x006382bf));
	$assignStatic(OceanTheme::PRIMARY2, $new($ColorUIResource, 0x00a3b8cc));
	$assignStatic(OceanTheme::PRIMARY3, $new($ColorUIResource, 0x00b8cfe5));
	$assignStatic(OceanTheme::SECONDARY1, $new($ColorUIResource, 0x007a8a99));
	$assignStatic(OceanTheme::SECONDARY2, $new($ColorUIResource, 0x00b8cfe5));
	$assignStatic(OceanTheme::SECONDARY3, $new($ColorUIResource, 0x00eeeeee));
	$init($Color);
	$assignStatic(OceanTheme::CONTROL_TEXT_COLOR, $new($PrintColorUIResource, 0x00333333, $Color::BLACK));
	$assignStatic(OceanTheme::INACTIVE_CONTROL_TEXT_COLOR, $new($ColorUIResource, 0x00999999));
	$assignStatic(OceanTheme::MENU_DISABLED_FOREGROUND, $new($ColorUIResource, 0x00999999));
	$assignStatic(OceanTheme::OCEAN_BLACK, $new($PrintColorUIResource, 0x00333333, $Color::BLACK));
	$assignStatic(OceanTheme::OCEAN_DROP, $new($ColorUIResource, 0x00d2e9ff));
}

OceanTheme::OceanTheme() {
}

$Class* OceanTheme::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.swing.plaf.metal.OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0")) {
			return OceanTheme$$Lambda$lambda$addCustomEntriesToTable$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"PRIMARY1", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, PRIMARY1)},
		{"PRIMARY2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, PRIMARY2)},
		{"PRIMARY3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, PRIMARY3)},
		{"SECONDARY1", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, SECONDARY1)},
		{"SECONDARY2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, SECONDARY2)},
		{"SECONDARY3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, SECONDARY3)},
		{"CONTROL_TEXT_COLOR", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, CONTROL_TEXT_COLOR)},
		{"INACTIVE_CONTROL_TEXT_COLOR", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, INACTIVE_CONTROL_TEXT_COLOR)},
		{"MENU_DISABLED_FOREGROUND", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, MENU_DISABLED_FOREGROUND)},
		{"OCEAN_BLACK", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, OCEAN_BLACK)},
		{"OCEAN_DROP", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OceanTheme, OCEAN_DROP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OceanTheme, init$, void)},
		{"addCustomEntriesToTable", "(Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC, $virtualMethod(OceanTheme, addCustomEntriesToTable, void, $UIDefaults*)},
		{"getBlack", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(OceanTheme, getBlack, $ColorUIResource*)},
		{"getControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(OceanTheme, getControlTextColor, $ColorUIResource*)},
		{"getDesktopColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(OceanTheme, getDesktopColor, $ColorUIResource*)},
		{"getHastenedIcon", "(Ljava/lang/String;Ljavax/swing/UIDefaults;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(OceanTheme, getHastenedIcon, $Icon*, $String*, $UIDefaults*)},
		{"getIconResource", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(OceanTheme, getIconResource, $Object*, $String*)},
		{"getInactiveControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(OceanTheme, getInactiveControlTextColor, $ColorUIResource*)},
		{"getMenuDisabledForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $virtualMethod(OceanTheme, getMenuDisabledForeground, $ColorUIResource*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OceanTheme, getName, $String*)},
		{"getPrimary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(OceanTheme, getPrimary1, $ColorUIResource*)},
		{"getPrimary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(OceanTheme, getPrimary2, $ColorUIResource*)},
		{"getPrimary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(OceanTheme, getPrimary3, $ColorUIResource*)},
		{"getSecondary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(OceanTheme, getSecondary1, $ColorUIResource*)},
		{"getSecondary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(OceanTheme, getSecondary2, $ColorUIResource*)},
		{"getSecondary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED, $virtualMethod(OceanTheme, getSecondary3, $ColorUIResource*)},
		{"isSystemTheme", "()Z", nullptr, 0, $virtualMethod(OceanTheme, isSystemTheme, bool)},
		{"lambda$addCustomEntriesToTable$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(OceanTheme, lambda$addCustomEntriesToTable$0, $Object*, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.OceanTheme$IFIcon", "javax.swing.plaf.metal.OceanTheme", "IFIcon", $PRIVATE | $STATIC},
		{"javax.swing.plaf.metal.OceanTheme$COIcon", "javax.swing.plaf.metal.OceanTheme", "COIcon", $PRIVATE | $STATIC},
		{"javax.swing.plaf.metal.OceanTheme$6", nullptr, nullptr, 0},
		{"javax.swing.plaf.metal.OceanTheme$5", nullptr, nullptr, 0},
		{"javax.swing.plaf.metal.OceanTheme$4", nullptr, nullptr, 0},
		{"javax.swing.plaf.metal.OceanTheme$3", nullptr, nullptr, 0},
		{"javax.swing.plaf.metal.OceanTheme$2", nullptr, nullptr, 0},
		{"javax.swing.plaf.metal.OceanTheme$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.OceanTheme",
		"javax.swing.plaf.metal.DefaultMetalTheme",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.OceanTheme$IFIcon,javax.swing.plaf.metal.OceanTheme$COIcon,javax.swing.plaf.metal.OceanTheme$6,javax.swing.plaf.metal.OceanTheme$5,javax.swing.plaf.metal.OceanTheme$4,javax.swing.plaf.metal.OceanTheme$3,javax.swing.plaf.metal.OceanTheme$2,javax.swing.plaf.metal.OceanTheme$1"
	};
	$loadClass(OceanTheme, name, initialize, &classInfo$$, OceanTheme::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OceanTheme);
	});
	return class$;
}

$Class* OceanTheme::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax