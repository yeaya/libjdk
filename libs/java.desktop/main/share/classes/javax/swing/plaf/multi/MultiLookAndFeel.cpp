#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <java/util/Vector.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/multi/MultiUIDefaults.h>
#include <jcpp.h>

using $LookAndFeelArray = $Array<::javax::swing::LookAndFeel>;
using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MultiUIDefaults = ::javax::swing::plaf::multi::MultiUIDefaults;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

void MultiLookAndFeel::init$() {
	$LookAndFeel::init$();
}

$String* MultiLookAndFeel::getName() {
	return "Multiplexing Look and Feel"_s;
}

$String* MultiLookAndFeel::getID() {
	return "Multiplex"_s;
}

$String* MultiLookAndFeel::getDescription() {
	return "Allows multiple UI instances per component instance"_s;
}

bool MultiLookAndFeel::isNativeLookAndFeel() {
	return false;
}

bool MultiLookAndFeel::isSupportedLookAndFeel() {
	return true;
}

$UIDefaults* MultiLookAndFeel::getDefaults() {
	$useLocalObjectStack();
	$var($String, packageName, "javax.swing.plaf.multi.Multi"_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		"ButtonUI"_s,
		$$str({packageName, "ButtonUI"_s}),
		"CheckBoxMenuItemUI"_s,
		$$str({packageName, "MenuItemUI"_s}),
		"CheckBoxUI"_s,
		$$str({packageName, "ButtonUI"_s}),
		"ColorChooserUI"_s,
		$$str({packageName, "ColorChooserUI"_s}),
		"ComboBoxUI"_s,
		$$str({packageName, "ComboBoxUI"_s}),
		"DesktopIconUI"_s,
		$$str({packageName, "DesktopIconUI"_s}),
		"DesktopPaneUI"_s,
		$$str({packageName, "DesktopPaneUI"_s}),
		"EditorPaneUI"_s,
		$$str({packageName, "TextUI"_s}),
		"FileChooserUI"_s,
		$$str({packageName, "FileChooserUI"_s}),
		"FormattedTextFieldUI"_s,
		$$str({packageName, "TextUI"_s}),
		"InternalFrameUI"_s,
		$$str({packageName, "InternalFrameUI"_s}),
		"LabelUI"_s,
		$$str({packageName, "LabelUI"_s}),
		"ListUI"_s,
		$$str({packageName, "ListUI"_s}),
		"MenuBarUI"_s,
		$$str({packageName, "MenuBarUI"_s}),
		"MenuItemUI"_s,
		$$str({packageName, "MenuItemUI"_s}),
		"MenuUI"_s,
		$$str({packageName, "MenuItemUI"_s}),
		"OptionPaneUI"_s,
		$$str({packageName, "OptionPaneUI"_s}),
		"PanelUI"_s,
		$$str({packageName, "PanelUI"_s}),
		"PasswordFieldUI"_s,
		$$str({packageName, "TextUI"_s}),
		"PopupMenuSeparatorUI"_s,
		$$str({packageName, "SeparatorUI"_s}),
		"PopupMenuUI"_s,
		$$str({packageName, "PopupMenuUI"_s}),
		"ProgressBarUI"_s,
		$$str({packageName, "ProgressBarUI"_s}),
		"RadioButtonMenuItemUI"_s,
		$$str({packageName, "MenuItemUI"_s}),
		"RadioButtonUI"_s,
		$$str({packageName, "ButtonUI"_s}),
		"RootPaneUI"_s,
		$$str({packageName, "RootPaneUI"_s}),
		"ScrollBarUI"_s,
		$$str({packageName, "ScrollBarUI"_s}),
		"ScrollPaneUI"_s,
		$$str({packageName, "ScrollPaneUI"_s}),
		"SeparatorUI"_s,
		$$str({packageName, "SeparatorUI"_s}),
		"SliderUI"_s,
		$$str({packageName, "SliderUI"_s}),
		"SpinnerUI"_s,
		$$str({packageName, "SpinnerUI"_s}),
		"SplitPaneUI"_s,
		$$str({packageName, "SplitPaneUI"_s}),
		"TabbedPaneUI"_s,
		$$str({packageName, "TabbedPaneUI"_s}),
		"TableHeaderUI"_s,
		$$str({packageName, "TableHeaderUI"_s}),
		"TableUI"_s,
		$$str({packageName, "TableUI"_s}),
		"TextAreaUI"_s,
		$$str({packageName, "TextUI"_s}),
		"TextFieldUI"_s,
		$$str({packageName, "TextUI"_s}),
		"TextPaneUI"_s,
		$$str({packageName, "TextUI"_s}),
		"ToggleButtonUI"_s,
		$$str({packageName, "ButtonUI"_s}),
		"ToolBarSeparatorUI"_s,
		$$str({packageName, "SeparatorUI"_s}),
		"ToolBarUI"_s,
		$$str({packageName, "ToolBarUI"_s}),
		"ToolTipUI"_s,
		$$str({packageName, "ToolTipUI"_s}),
		"TreeUI"_s,
		$$str({packageName, "TreeUI"_s}),
		"ViewportUI"_s,
		$$str({packageName, "ViewportUI"_s})
	}));
	$var($UIDefaults, table, $new($MultiUIDefaults, uiDefaults->length / 2, 0.75f));
	table->putDefaults(uiDefaults);
	return table;
}

$ComponentUI* MultiLookAndFeel::createUIs($ComponentUI* mui, $Vector* uis, $JComponent* target) {
	$init(MultiLookAndFeel);
	$useLocalObjectStack();
	$var($ComponentUI, ui, nullptr);
	$assign(ui, $$nc($UIManager::getDefaults())->getUI(target));
	if (ui != nullptr) {
		$nc(uis)->addElement(ui);
		$var($LookAndFeelArray, auxiliaryLookAndFeels, nullptr);
		$assign(auxiliaryLookAndFeels, $UIManager::getAuxiliaryLookAndFeels());
		if (auxiliaryLookAndFeels != nullptr) {
			for (int32_t i = 0; i < auxiliaryLookAndFeels->length; ++i) {
				$assign(ui, $$nc($nc(auxiliaryLookAndFeels->get(i))->getDefaults())->getUI(target));
				if (ui != nullptr) {
					uis->addElement(ui);
				}
			}
		}
	} else {
		return nullptr;
	}
	if ($nc(uis)->size() == 1) {
		return $cast($ComponentUI, uis->elementAt(0));
	} else {
		return mui;
	}
}

$ComponentUIArray* MultiLookAndFeel::uisToArray($Vector* uis) {
	$init(MultiLookAndFeel);
	$useLocalObjectStack();
	if (uis == nullptr) {
		return $new($ComponentUIArray, 0);
	} else {
		int32_t count = uis->size();
		if (count > 0) {
			$var($ComponentUIArray, u, $new($ComponentUIArray, count));
			for (int32_t i = 0; i < count; ++i) {
				u->set(i, $$cast($ComponentUI, uis->elementAt(i)));
			}
			return u;
		} else {
			return nullptr;
		}
	}
}

MultiLookAndFeel::MultiLookAndFeel() {
}

$Class* MultiLookAndFeel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiLookAndFeel, init$, void)},
		{"createUIs", "(Ljavax/swing/plaf/ComponentUI;Ljava/util/Vector;Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", "(Ljavax/swing/plaf/ComponentUI;Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", $PUBLIC | $STATIC, $staticMethod(MultiLookAndFeel, createUIs, $ComponentUI*, $ComponentUI*, $Vector*, $JComponent*)},
		{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC, $virtualMethod(MultiLookAndFeel, getDefaults, $UIDefaults*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultiLookAndFeel, getDescription, $String*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultiLookAndFeel, getID, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultiLookAndFeel, getName, $String*)},
		{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(MultiLookAndFeel, isNativeLookAndFeel, bool)},
		{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(MultiLookAndFeel, isSupportedLookAndFeel, bool)},
		{"uisToArray", "(Ljava/util/Vector;)[Ljavax/swing/plaf/ComponentUI;", "(Ljava/util/Vector<+Ljavax/swing/plaf/ComponentUI;>;)[Ljavax/swing/plaf/ComponentUI;", $PROTECTED | $STATIC, $staticMethod(MultiLookAndFeel, uisToArray, $ComponentUIArray*, $Vector*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.multi.MultiLookAndFeel",
		"javax.swing.LookAndFeel",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiLookAndFeel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiLookAndFeel);
	});
	return class$;
}

$Class* MultiLookAndFeel::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax