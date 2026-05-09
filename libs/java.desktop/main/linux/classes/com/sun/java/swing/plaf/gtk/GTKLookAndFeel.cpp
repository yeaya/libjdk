#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKColorType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$PositionType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$StateType.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$Settings.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$1.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$1FontLazyValue.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$2.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$3.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$GnomeLayoutStyle.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$WeakPCL.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle$GTKLazyValue.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle$GTKStockIconInfo.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory.h>
#include <com/sun/java/swing/plaf/gtk/PangoFonts.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/security/AccessController.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/BorderUIResource$EmptyBorderUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit$GtkVersions.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACTIVE
#undef BACKGROUND
#undef BLACK
#undef BLACK_COLOR
#undef BOTTOM
#undef BUTTON
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef COLOR_CHOOSER
#undef COMBO_BOX
#undef DARK
#undef DESKTOP_PANE
#undef DISABLED
#undef EDITOR_PANE
#undef ENABLED
#undef FALSE
#undef FOREGROUND
#undef FORMATTED_TEXT_FIELD
#undef GTK2
#undef GTK3
#undef GTK_CURSOR_BLINK
#undef GTK_CURSOR_BLINK_TIME
#undef GTK_FONT_NAME
#undef GTK_ICON_SIZES
#undef INSENSITIVE
#undef INSTANCE
#undef INTERNAL_FRAME
#undef IS_3
#undef LABEL
#undef LEADING
#undef LEFT
#undef LIGHT
#undef LIST
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef MID
#undef MOUSE_OVER
#undef NORMAL
#undef OPTION_PANE
#undef PANEL
#undef PASSWORD_FIELD
#undef POPUP_MENU
#undef PRELIGHT
#undef PRESSED
#undef PROGRESS_BAR
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef RIGHT
#undef SCROLL_BAR
#undef SCROLL_PANE
#undef SELECTED
#undef SLIDER_TRACK
#undef SPINNER
#undef SPLIT_PANE
#undef TABBED_PANE
#undef TABBED_PANE_TAB
#undef TABLE
#undef TABLE_HEADER
#undef TEXT_AREA
#undef TEXT_BACKGROUND
#undef TEXT_FIELD
#undef TEXT_FOREGROUND
#undef TEXT_PANE
#undef TOGGLE_BUTTON
#undef TOOL_BAR
#undef TOOL_TIP
#undef TOP
#undef TREE
#undef TRUE
#undef VIEWPORT
#undef WHITE

using $GTKColorType = ::com::sun::java::swing::plaf::gtk::GTKColorType;
using $GTKConstants$PositionType = ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType;
using $GTKConstants$StateType = ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType;
using $GTKEngine = ::com::sun::java::swing::plaf::gtk::GTKEngine;
using $GTKEngine$Settings = ::com::sun::java::swing::plaf::gtk::GTKEngine$Settings;
using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $GTKLookAndFeel$1 = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$1;
using $GTKLookAndFeel$1FontLazyValue = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$1FontLazyValue;
using $GTKLookAndFeel$2 = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$2;
using $GTKLookAndFeel$3 = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$3;
using $GTKLookAndFeel$GnomeLayoutStyle = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$GnomeLayoutStyle;
using $GTKLookAndFeel$WeakPCL = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$WeakPCL;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $GTKStyle$GTKLazyValue = ::com::sun::java::swing::plaf::gtk::GTKStyle$GTKLazyValue;
using $GTKStyle$GTKStockIconInfo = ::com::sun::java::swing::plaf::gtk::GTKStyle$GTKStockIconInfo;
using $GTKStyleFactory = ::com::sun::java::swing::plaf::gtk::GTKStyleFactory;
using $PangoFonts = ::com::sun::java::swing::plaf::gtk::PangoFonts;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AccessController = ::java::security::AccessController;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $BorderUIResource$EmptyBorderUIResource = ::javax::swing::plaf::BorderUIResource$EmptyBorderUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $UNIXToolkit$GtkVersions = ::sun::awt::UNIXToolkit$GtkVersions;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return GTKLookAndFeel::lambda$initComponentDefaults$0(t);
	}
};
$Class* GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0);
	});
	return class$;
}
$Class* GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

bool GTKLookAndFeel::$assertionsDisabled = false;
bool GTKLookAndFeel::IS_22 = false;
bool GTKLookAndFeel::IS_3 = false;
$Map* GTKLookAndFeel::aaTextInfo = nullptr;
bool GTKLookAndFeel::gtkAAFontSettingsCond = false;
$String* GTKLookAndFeel::gtkThemeName = nullptr;
$ReferenceQueue* GTKLookAndFeel::queue = nullptr;

void GTKLookAndFeel::init$() {
	$SynthLookAndFeel::init$();
}

bool GTKLookAndFeel::is2_2() {
	$init(GTKLookAndFeel);
	return GTKLookAndFeel::IS_22;
}

bool GTKLookAndFeel::is3() {
	$init(GTKLookAndFeel);
	return GTKLookAndFeel::IS_3;
}

$GTKConstants$PositionType* GTKLookAndFeel::SwingOrientationConstantToGTK(int32_t side) {
	$init(GTKLookAndFeel);
	$useLocalObjectStack();
	switch (side) {
	case $SwingConstants::LEFT:
		$init($GTKConstants$PositionType);
		return $GTKConstants$PositionType::LEFT;
	case $SwingConstants::RIGHT:
		$init($GTKConstants$PositionType);
		return $GTKConstants$PositionType::RIGHT;
	case $SwingConstants::TOP:
		$init($GTKConstants$PositionType);
		return $GTKConstants$PositionType::TOP;
	case $SwingConstants::BOTTOM:
		$init($GTKConstants$PositionType);
		return $GTKConstants$PositionType::BOTTOM;
	}
	if (!GTKLookAndFeel::$assertionsDisabled) {
		$throwNew($AssertionError, $$of($str({"Unknown orientation: "_s, $$str(side)})));
	}
	$init($GTKConstants$PositionType);
	return $GTKConstants$PositionType::TOP;
}

$GTKConstants$StateType* GTKLookAndFeel::synthStateToGTKStateType(int32_t state) {
	$init(GTKLookAndFeel);
	$GTKConstants$StateType* result = nullptr;
	switch (state) {
	case $SynthConstants::PRESSED:
		$init($GTKConstants$StateType);
		result = $GTKConstants$StateType::ACTIVE;
		break;
	case $SynthConstants::MOUSE_OVER:
		$init($GTKConstants$StateType);
		result = $GTKConstants$StateType::PRELIGHT;
		break;
	case $SynthConstants::SELECTED:
		$init($GTKConstants$StateType);
		result = $GTKConstants$StateType::SELECTED;
		break;
	case $SynthConstants::DISABLED:
		$init($GTKConstants$StateType);
		result = $GTKConstants$StateType::INSENSITIVE;
		break;
	case $SynthConstants::ENABLED:
	default:
		$init($GTKConstants$StateType);
		result = $GTKConstants$StateType::NORMAL;
		break;
	}
	return result;
}

int32_t GTKLookAndFeel::synthStateToGTKState($Region* region, int32_t state) {
	$init(GTKLookAndFeel);
	if ((state & $SynthConstants::PRESSED) != 0) {
		$init($Region);
		if (region == $Region::RADIO_BUTTON || region == $Region::CHECK_BOX || region == $Region::MENU || region == $Region::MENU_ITEM || region == $Region::RADIO_BUTTON_MENU_ITEM || region == $Region::CHECK_BOX_MENU_ITEM || region == $Region::SPLIT_PANE) {
			state = $SynthConstants::MOUSE_OVER;
		} else {
			state = $SynthConstants::PRESSED;
		}
	} else {
		$init($Region);
		if (region == $Region::TABBED_PANE_TAB) {
			if ((state & $SynthConstants::DISABLED) != 0) {
				state = $SynthConstants::DISABLED;
			} else if ((state & $SynthConstants::SELECTED) != 0) {
				state = $SynthConstants::ENABLED;
			} else {
				state = $SynthConstants::PRESSED;
			}
		} else if ((state & $SynthConstants::SELECTED) != 0) {
			if (region == $Region::MENU) {
				state = $SynthConstants::MOUSE_OVER;
			} else if (region == $Region::RADIO_BUTTON || region == $Region::TOGGLE_BUTTON || region == $Region::RADIO_BUTTON_MENU_ITEM || region == $Region::CHECK_BOX_MENU_ITEM || region == $Region::CHECK_BOX || region == $Region::BUTTON) {
				if ((state & $SynthConstants::DISABLED) != 0) {
					state = $SynthConstants::DISABLED;
				} else if ((state & $SynthConstants::MOUSE_OVER) != 0) {
					state = $SynthConstants::MOUSE_OVER;
				} else {
					state = $SynthConstants::PRESSED;
				}
			} else {
				state = $SynthConstants::SELECTED;
			}
		} else if ((state & $SynthConstants::MOUSE_OVER) != 0) {
			state = $SynthConstants::MOUSE_OVER;
		} else if ((state & $SynthConstants::DISABLED) != 0) {
			state = $SynthConstants::DISABLED;
		} else if (region == $Region::SLIDER_TRACK) {
			state = $SynthConstants::PRESSED;
		} else {
			state = $SynthConstants::ENABLED;
		}
	}
	return state;
}

bool GTKLookAndFeel::isText($Region* region) {
	$init(GTKLookAndFeel);
	$init($Region);
	return (region == $Region::TEXT_FIELD || region == $Region::FORMATTED_TEXT_FIELD || region == $Region::LIST || region == $Region::PASSWORD_FIELD || region == $Region::SPINNER || region == $Region::TABLE || region == $Region::TEXT_AREA || region == $Region::TEXT_PANE || region == $Region::TREE);
}

$UIDefaults* GTKLookAndFeel::getDefaults() {
	$useLocalObjectStack();
	$var($UIDefaults, table, $SynthLookAndFeel::getDefaults());
	$nc(table)->put("TabbedPane.isTabRollover"_s, $Boolean::FALSE);
	table->put("Synth.doNotSetTextAA"_s, $($Boolean::valueOf(true)));
	initResourceBundle(table);
	initSystemColorDefaults(table);
	initComponentDefaults(table);
	installPropertyChangeListeners();
	return table;
}

void GTKLookAndFeel::installPropertyChangeListeners() {
	$useLocalObjectStack();
	if (!this->pclInstalled) {
		$var($Toolkit, kit, $Toolkit::getDefaultToolkit());
		$var($GTKLookAndFeel$WeakPCL, pcl, $new($GTKLookAndFeel$WeakPCL, this, kit, "gnome.Net/ThemeName"_s));
		$nc(kit)->addPropertyChangeListener($(pcl->getKey()), pcl);
		$assign(pcl, $new($GTKLookAndFeel$WeakPCL, this, kit, "gnome.Gtk/FontName"_s));
		kit->addPropertyChangeListener($(pcl->getKey()), pcl);
		$assign(pcl, $new($GTKLookAndFeel$WeakPCL, this, kit, "gnome.Xft/DPI"_s));
		kit->addPropertyChangeListener($(pcl->getKey()), pcl);
		flushUnreferenced();
		this->pclInstalled = true;
	}
}

void GTKLookAndFeel::initResourceBundle($UIDefaults* table) {
	$$nc($SwingAccessor::getUIDefaultsAccessor())->addInternalBundle(table, "com.sun.java.swing.plaf.gtk.resources.gtk"_s);
}

void GTKLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$SynthLookAndFeel::initComponentDefaults(table);
	$var($UIDefaults$LazyValue, zeroBorder, $new(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0));
	$var($Object, focusBorder, $new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder"_s, "getUnselectedCellBorder"_s));
	$var($Object, focusSelectedBorder, $new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder"_s, "getSelectedCellBorder"_s));
	$var($Object, noFocusBorder, $new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder"_s, "getNoFocusCellBorder"_s));
	$var($SynthStyleFactory, factory, getStyleFactory());
	$init($Region);
	$var($GTKStyle, tableStyle, $cast($GTKStyle, $nc(factory)->getStyle(nullptr, $Region::TREE)));
	$init($GTKColorType);
	$var($Color, tableBg, $nc(tableStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_BACKGROUND));
	$var($Color, tableFocusCellBg, tableStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND));
	$var($Color, tableFocusCellFg, tableStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::FOREGROUND));
	$var($GTKStyle, progStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::PROGRESS_BAR)));
	int32_t progXThickness = $nc(progStyle)->getXThickness();
	int32_t progYThickness = progStyle->getYThickness();
	int32_t hProgWidth = 150 - (progXThickness * 2);
	int32_t hProgHeight = 20 - (progYThickness * 2);
	int32_t vProgWidth = 22 - (progXThickness * 2);
	int32_t vProgHeight = 80 - (progYThickness * 2);
	$var($Integer, caretBlinkRate, nullptr);
	$init($GTKEngine);
	$init($GTKEngine$Settings);
	if ($nc($Boolean::FALSE)->equals($($nc($GTKEngine::INSTANCE)->getSetting($GTKEngine$Settings::GTK_CURSOR_BLINK)))) {
		$assign(caretBlinkRate, $Integer::valueOf(0));
	} else {
		$assign(caretBlinkRate, $cast($Integer, $GTKEngine::INSTANCE->getSetting($GTKEngine$Settings::GTK_CURSOR_BLINK_TIME)));
		if (caretBlinkRate == nullptr) {
			$assign(caretBlinkRate, $Integer::valueOf(500));
		}
	}
	$var($Insets, zeroInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$var($Double, defaultCaretAspectRatio, $Double::valueOf(0.025));
	$var($Color, caretColor, $nc(table)->getColor("caretColor"_s));
	$var($Color, controlText, table->getColor("controlText"_s));
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($Object, fieldInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"ctrl C"_s,
		$DefaultEditorKit::copyAction,
		"ctrl V"_s,
		$DefaultEditorKit::pasteAction,
		"ctrl X"_s,
		$DefaultEditorKit::cutAction,
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"control INSERT"_s,
		$DefaultEditorKit::copyAction,
		"shift INSERT"_s,
		$DefaultEditorKit::pasteAction,
		"shift DELETE"_s,
		$DefaultEditorKit::cutAction,
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift KP_LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"shift KP_RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"ctrl LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"ctrl KP_LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"ctrl RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"ctrl KP_RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"ctrl shift LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"ctrl shift KP_LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"ctrl shift RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"ctrl shift KP_RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"ctrl A"_s,
		$DefaultEditorKit::selectAllAction,
		"HOME"_s,
		$DefaultEditorKit::beginLineAction,
		"END"_s,
		$DefaultEditorKit::endLineAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"shift BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"ctrl H"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"DELETE"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"ctrl DELETE"_s,
		$DefaultEditorKit::deleteNextWordAction,
		"ctrl BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevWordAction,
		"RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"KP_RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"KP_LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"ENTER"_s,
		$JTextField::notifyAction,
		"ctrl BACK_SLASH"_s,
		"unselect"_s,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	$var($Object, passwordInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"ctrl C"_s,
		$DefaultEditorKit::copyAction,
		"ctrl V"_s,
		$DefaultEditorKit::pasteAction,
		"ctrl X"_s,
		$DefaultEditorKit::cutAction,
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"control INSERT"_s,
		$DefaultEditorKit::copyAction,
		"shift INSERT"_s,
		$DefaultEditorKit::pasteAction,
		"shift DELETE"_s,
		$DefaultEditorKit::cutAction,
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift KP_LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"shift KP_RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"ctrl LEFT"_s,
		$DefaultEditorKit::beginLineAction,
		"ctrl KP_LEFT"_s,
		$DefaultEditorKit::beginLineAction,
		"ctrl RIGHT"_s,
		$DefaultEditorKit::endLineAction,
		"ctrl KP_RIGHT"_s,
		$DefaultEditorKit::endLineAction,
		"ctrl shift LEFT"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"ctrl shift KP_LEFT"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"ctrl shift RIGHT"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"ctrl shift KP_RIGHT"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"ctrl A"_s,
		$DefaultEditorKit::selectAllAction,
		"HOME"_s,
		$DefaultEditorKit::beginLineAction,
		"END"_s,
		$DefaultEditorKit::endLineAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"shift BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"ctrl H"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"DELETE"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"KP_RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"KP_LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"ENTER"_s,
		$JTextField::notifyAction,
		"ctrl BACK_SLASH"_s,
		"unselect"_s,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	$var($Object, editorMargin, $new($InsetsUIResource, 3, 3, 3, 3));
	$var($Object, multilineInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"ctrl C"_s,
		$DefaultEditorKit::copyAction,
		"ctrl V"_s,
		$DefaultEditorKit::pasteAction,
		"ctrl X"_s,
		$DefaultEditorKit::cutAction,
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"control INSERT"_s,
		$DefaultEditorKit::copyAction,
		"shift INSERT"_s,
		$DefaultEditorKit::pasteAction,
		"shift DELETE"_s,
		$DefaultEditorKit::cutAction,
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift KP_LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"shift KP_RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"ctrl LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"ctrl KP_LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"ctrl RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"ctrl KP_RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"ctrl shift LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"ctrl shift KP_LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"ctrl shift RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"ctrl shift KP_RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"ctrl A"_s,
		$DefaultEditorKit::selectAllAction,
		"HOME"_s,
		$DefaultEditorKit::beginLineAction,
		"END"_s,
		$DefaultEditorKit::endLineAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"UP"_s,
		$DefaultEditorKit::upAction,
		"KP_UP"_s,
		$DefaultEditorKit::upAction,
		"DOWN"_s,
		$DefaultEditorKit::downAction,
		"KP_DOWN"_s,
		$DefaultEditorKit::downAction,
		"PAGE_UP"_s,
		$DefaultEditorKit::pageUpAction,
		"PAGE_DOWN"_s,
		$DefaultEditorKit::pageDownAction,
		"shift PAGE_UP"_s,
		"selection-page-up"_s,
		"shift PAGE_DOWN"_s,
		"selection-page-down"_s,
		"ctrl shift PAGE_UP"_s,
		"selection-page-left"_s,
		"ctrl shift PAGE_DOWN"_s,
		"selection-page-right"_s,
		"shift UP"_s,
		$DefaultEditorKit::selectionUpAction,
		"shift KP_UP"_s,
		$DefaultEditorKit::selectionUpAction,
		"shift DOWN"_s,
		$DefaultEditorKit::selectionDownAction,
		"shift KP_DOWN"_s,
		$DefaultEditorKit::selectionDownAction,
		"ENTER"_s,
		$DefaultEditorKit::insertBreakAction,
		"BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"shift BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"ctrl H"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"DELETE"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"ctrl DELETE"_s,
		$DefaultEditorKit::deleteNextWordAction,
		"ctrl BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevWordAction,
		"RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"KP_RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"KP_LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"TAB"_s,
		$DefaultEditorKit::insertTabAction,
		"ctrl BACK_SLASH"_s,
		"unselect"_s,
		"ctrl HOME"_s,
		$DefaultEditorKit::beginAction,
		"ctrl END"_s,
		$DefaultEditorKit::endAction,
		"ctrl shift HOME"_s,
		$DefaultEditorKit::selectionBeginAction,
		"ctrl shift END"_s,
		$DefaultEditorKit::selectionEndAction,
		"ctrl T"_s,
		"next-link-action"_s,
		"ctrl shift T"_s,
		"previous-link-action"_s,
		"ctrl SPACE"_s,
		"activate-link-action"_s,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	{
	}
	$var($ObjectArray, defaults, $new($ObjectArray, {
		"ArrowButton.size"_s,
		$($Integer::valueOf(13)),
		"Button.defaultButtonFollowsFocus"_s,
		$Boolean::FALSE,
		"Button.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s,
			"ENTER"_s,
			"pressed"_s,
			"released ENTER"_s,
			"released"_s
		})),
		"Button.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::BUTTON),
		"Button.margin"_s,
		zeroInsets,
		"CheckBox.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"CheckBox.icon"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getCheckBoxIcon"_s),
		"CheckBox.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::CHECK_BOX),
		"CheckBox.margin"_s,
		zeroInsets,
		"CheckBoxMenuItem.arrowIcon"_s,
		nullptr,
		"CheckBoxMenuItem.checkIcon"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getCheckBoxMenuItemCheckIcon"_s),
		"CheckBoxMenuItem.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::CHECK_BOX_MENU_ITEM),
		"CheckBoxMenuItem.margin"_s,
		zeroInsets,
		"CheckBoxMenuItem.alignAcceleratorText"_s,
		$Boolean::FALSE,
		"ColorChooser.showPreviewPanelText"_s,
		$Boolean::FALSE,
		"ColorChooser.panels"_s,
		$$new($GTKLookAndFeel$1, this),
		"ColorChooser.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::COLOR_CHOOSER),
		"ComboBox.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ESCAPE"_s,
			"hidePopup"_s,
			"PAGE_UP"_s,
			"pageUpPassThrough"_s,
			"PAGE_DOWN"_s,
			"pageDownPassThrough"_s,
			"HOME"_s,
			"homePassThrough"_s,
			"END"_s,
			"endPassThrough"_s,
			"DOWN"_s,
			"selectNext"_s,
			"KP_DOWN"_s,
			"selectNext"_s,
			"alt DOWN"_s,
			"togglePopup"_s,
			"alt KP_DOWN"_s,
			"togglePopup"_s,
			"alt UP"_s,
			"togglePopup"_s,
			"alt KP_UP"_s,
			"togglePopup"_s,
			"SPACE"_s,
			"spacePopup"_s,
			"ENTER"_s,
			"enterPressed"_s,
			"UP"_s,
			"selectPrevious"_s,
			"KP_UP"_s,
			"selectPrevious"_s
		})),
		"ComboBox.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::COMBO_BOX),
		"ComboBox.isEnterSelectablePopup"_s,
		$Boolean::TRUE,
		"EditorPane.caretForeground"_s,
		caretColor,
		"EditorPane.caretAspectRatio"_s,
		defaultCaretAspectRatio,
		"EditorPane.caretBlinkRate"_s,
		caretBlinkRate,
		"EditorPane.margin"_s,
		editorMargin,
		"EditorPane.focusInputMap"_s,
		multilineInputMap,
		"EditorPane.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::EDITOR_PANE),
		"FileChooser.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ESCAPE"_s,
			"cancelSelection"_s,
			"ctrl ENTER"_s,
			"approveSelection"_s
		})),
		"FileChooserUI"_s,
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s,
		"FormattedTextField.caretForeground"_s,
		caretColor,
		"FormattedTextField.caretAspectRatio"_s,
		defaultCaretAspectRatio,
		"FormattedTextField.caretBlinkRate"_s,
		caretBlinkRate,
		"FormattedTextField.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl C"_s,
			$DefaultEditorKit::copyAction,
			"ctrl V"_s,
			$DefaultEditorKit::pasteAction,
			"ctrl X"_s,
			$DefaultEditorKit::cutAction,
			"COPY"_s,
			$DefaultEditorKit::copyAction,
			"PASTE"_s,
			$DefaultEditorKit::pasteAction,
			"CUT"_s,
			$DefaultEditorKit::cutAction,
			"control INSERT"_s,
			$DefaultEditorKit::copyAction,
			"shift INSERT"_s,
			$DefaultEditorKit::pasteAction,
			"shift DELETE"_s,
			$DefaultEditorKit::cutAction,
			"shift LEFT"_s,
			$DefaultEditorKit::selectionBackwardAction,
			"shift KP_LEFT"_s,
			$DefaultEditorKit::selectionBackwardAction,
			"shift RIGHT"_s,
			$DefaultEditorKit::selectionForwardAction,
			"shift KP_RIGHT"_s,
			$DefaultEditorKit::selectionForwardAction,
			"ctrl LEFT"_s,
			$DefaultEditorKit::previousWordAction,
			"ctrl KP_LEFT"_s,
			$DefaultEditorKit::previousWordAction,
			"ctrl RIGHT"_s,
			$DefaultEditorKit::nextWordAction,
			"ctrl KP_RIGHT"_s,
			$DefaultEditorKit::nextWordAction,
			"ctrl shift LEFT"_s,
			$DefaultEditorKit::selectionPreviousWordAction,
			"ctrl shift KP_LEFT"_s,
			$DefaultEditorKit::selectionPreviousWordAction,
			"ctrl shift RIGHT"_s,
			$DefaultEditorKit::selectionNextWordAction,
			"ctrl shift KP_RIGHT"_s,
			$DefaultEditorKit::selectionNextWordAction,
			"ctrl A"_s,
			$DefaultEditorKit::selectAllAction,
			"HOME"_s,
			$DefaultEditorKit::beginLineAction,
			"END"_s,
			$DefaultEditorKit::endLineAction,
			"shift HOME"_s,
			$DefaultEditorKit::selectionBeginLineAction,
			"shift END"_s,
			$DefaultEditorKit::selectionEndLineAction,
			"BACK_SPACE"_s,
			$DefaultEditorKit::deletePrevCharAction,
			"shift BACK_SPACE"_s,
			$DefaultEditorKit::deletePrevCharAction,
			"ctrl H"_s,
			$DefaultEditorKit::deletePrevCharAction,
			"DELETE"_s,
			$DefaultEditorKit::deleteNextCharAction,
			"ctrl DELETE"_s,
			$DefaultEditorKit::deleteNextWordAction,
			"ctrl BACK_SPACE"_s,
			$DefaultEditorKit::deletePrevWordAction,
			"RIGHT"_s,
			$DefaultEditorKit::forwardAction,
			"LEFT"_s,
			$DefaultEditorKit::backwardAction,
			"KP_RIGHT"_s,
			$DefaultEditorKit::forwardAction,
			"KP_LEFT"_s,
			$DefaultEditorKit::backwardAction,
			"ENTER"_s,
			$JTextField::notifyAction,
			"ctrl BACK_SLASH"_s,
			"unselect"_s,
			"control shift O"_s,
			"toggle-componentOrientation"_s,
			"ESCAPE"_s,
			"reset-field-edit"_s,
			"UP"_s,
			"increment"_s,
			"KP_UP"_s,
			"increment"_s,
			"DOWN"_s,
			"decrement"_s,
			"KP_DOWN"_s,
			"decrement"_s
		})),
		"FormattedTextField.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::FORMATTED_TEXT_FIELD),
		"InternalFrameTitlePane.titlePaneLayout"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.Metacity"_s, "getTitlePaneLayout"_s),
		"InternalFrame.windowBindings"_s,
		$$new($ObjectArray, {
			"shift ESCAPE"_s,
			"showSystemMenu"_s,
			"ctrl SPACE"_s,
			"showSystemMenu"_s,
			"ESCAPE"_s,
			"hideSystemMenu"_s
		}),
		"InternalFrame.layoutTitlePaneAtOrigin"_s,
		$Boolean::TRUE,
		"InternalFrame.useTaskBar"_s,
		$Boolean::TRUE,
		"InternalFrameTitlePane.iconifyButtonOpacity"_s,
		nullptr,
		"InternalFrameTitlePane.maximizeButtonOpacity"_s,
		nullptr,
		"InternalFrameTitlePane.closeButtonOpacity"_s,
		nullptr,
		"Label.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::LABEL),
		"List.background"_s,
		tableBg,
		"List.focusCellHighlightBorder"_s,
		focusBorder,
		"List.focusSelectedCellHighlightBorder"_s,
		focusSelectedBorder,
		"List.noFocusBorder"_s,
		noFocusBorder,
		"List.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl C"_s,
			"copy"_s,
			"ctrl V"_s,
			"paste"_s,
			"ctrl X"_s,
			"cut"_s,
			"COPY"_s,
			"copy"_s,
			"PASTE"_s,
			"paste"_s,
			"CUT"_s,
			"cut"_s,
			"control INSERT"_s,
			"copy"_s,
			"shift INSERT"_s,
			"paste"_s,
			"shift DELETE"_s,
			"cut"_s,
			"UP"_s,
			"selectPreviousRow"_s,
			"KP_UP"_s,
			"selectPreviousRow"_s,
			"shift UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"shift KP_UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl shift UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl shift KP_UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl UP"_s,
			"selectPreviousRowChangeLead"_s,
			"ctrl KP_UP"_s,
			"selectPreviousRowChangeLead"_s,
			"DOWN"_s,
			"selectNextRow"_s,
			"KP_DOWN"_s,
			"selectNextRow"_s,
			"shift DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"shift KP_DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl shift DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl shift KP_DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl DOWN"_s,
			"selectNextRowChangeLead"_s,
			"ctrl KP_DOWN"_s,
			"selectNextRowChangeLead"_s,
			"LEFT"_s,
			"selectPreviousColumn"_s,
			"KP_LEFT"_s,
			"selectPreviousColumn"_s,
			"shift LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"shift KP_LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift KP_LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl LEFT"_s,
			"selectPreviousColumnChangeLead"_s,
			"ctrl KP_LEFT"_s,
			"selectPreviousColumnChangeLead"_s,
			"RIGHT"_s,
			"selectNextColumn"_s,
			"KP_RIGHT"_s,
			"selectNextColumn"_s,
			"shift RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"shift KP_RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift KP_RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl RIGHT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl KP_RIGHT"_s,
			"selectNextColumnChangeLead"_s,
			"HOME"_s,
			"selectFirstRow"_s,
			"shift HOME"_s,
			"selectFirstRowExtendSelection"_s,
			"ctrl shift HOME"_s,
			"selectFirstRowExtendSelection"_s,
			"ctrl HOME"_s,
			"selectFirstRowChangeLead"_s,
			"END"_s,
			"selectLastRow"_s,
			"shift END"_s,
			"selectLastRowExtendSelection"_s,
			"ctrl shift END"_s,
			"selectLastRowExtendSelection"_s,
			"ctrl END"_s,
			"selectLastRowChangeLead"_s,
			"PAGE_UP"_s,
			"scrollUp"_s,
			"shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl PAGE_UP"_s,
			"scrollUpChangeLead"_s,
			"PAGE_DOWN"_s,
			"scrollDown"_s,
			"shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollDownChangeLead"_s,
			"ctrl A"_s,
			"selectAll"_s,
			"ctrl SLASH"_s,
			"selectAll"_s,
			"ctrl BACK_SLASH"_s,
			"clearSelection"_s,
			"SPACE"_s,
			"addToSelection"_s,
			"ctrl SPACE"_s,
			"toggleAndAnchor"_s,
			"shift SPACE"_s,
			"extendTo"_s,
			"ctrl shift SPACE"_s,
			"moveSelectionTo"_s
		})),
		"List.focusInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"LEFT"_s,
			"selectNextColumn"_s,
			"KP_LEFT"_s,
			"selectNextColumn"_s,
			"shift LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"shift KP_LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift KP_LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl LEFT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl KP_LEFT"_s,
			"selectNextColumnChangeLead"_s,
			"RIGHT"_s,
			"selectPreviousColumn"_s,
			"KP_RIGHT"_s,
			"selectPreviousColumn"_s,
			"shift RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"shift KP_RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift KP_RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl RIGHT"_s,
			"selectPreviousColumnChangeLead"_s,
			"ctrl KP_RIGHT"_s,
			"selectPreviousColumnChangeLead"_s
		})),
		"List.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::LIST),
		"List.rendererUseUIBorder"_s,
		$Boolean::FALSE,
		"Menu.arrowIcon"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getMenuArrowIcon"_s),
		"Menu.checkIcon"_s,
		nullptr,
		"Menu.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::MENU),
		"Menu.margin"_s,
		zeroInsets,
		"Menu.cancelMode"_s,
		"hideMenuTree"_s,
		"Menu.alignAcceleratorText"_s,
		$Boolean::FALSE,
		"Menu.useMenuBarForTopLevelMenus"_s,
		$Boolean::TRUE,
		"MenuBar.windowBindings"_s,
		$$new($ObjectArray, {
			"F10"_s,
			"takeFocus"_s
		}),
		"MenuBar.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::MENU_BAR),
		"MenuItem.arrowIcon"_s,
		nullptr,
		"MenuItem.checkIcon"_s,
		nullptr,
		"MenuItem.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::MENU_ITEM),
		"MenuItem.margin"_s,
		zeroInsets,
		"MenuItem.alignAcceleratorText"_s,
		$Boolean::FALSE,
		"OptionPane.setButtonMargin"_s,
		$Boolean::FALSE,
		"OptionPane.sameSizeButtons"_s,
		$Boolean::TRUE,
		"OptionPane.buttonOrientation"_s,
		$($Integer::valueOf($SwingConstants::RIGHT)),
		"OptionPane.minimumSize"_s,
		$$new($DimensionUIResource, 262, 90),
		"OptionPane.buttonPadding"_s,
		$($Integer::valueOf(10)),
		"OptionPane.windowBindings"_s,
		$$new($ObjectArray, {
			"ESCAPE"_s,
			"close"_s
		}),
		"OptionPane.buttonClickThreshhold"_s,
		$($Integer::valueOf(500)),
		"OptionPane.isYesLast"_s,
		$Boolean::TRUE,
		"OptionPane.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::OPTION_PANE),
		"Panel.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::PANEL),
		"PasswordField.caretForeground"_s,
		caretColor,
		"PasswordField.caretAspectRatio"_s,
		defaultCaretAspectRatio,
		"PasswordField.caretBlinkRate"_s,
		caretBlinkRate,
		"PasswordField.margin"_s,
		zeroInsets,
		"PasswordField.focusInputMap"_s,
		passwordInputMap,
		"PasswordField.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::PASSWORD_FIELD),
		"PopupMenu.consumeEventOnClose"_s,
		$Boolean::FALSE,
		"PopupMenu.selectedWindowInputMapBindings"_s,
		$$new($ObjectArray, {
			"ESCAPE"_s,
			"cancel"_s,
			"DOWN"_s,
			"selectNext"_s,
			"KP_DOWN"_s,
			"selectNext"_s,
			"UP"_s,
			"selectPrevious"_s,
			"KP_UP"_s,
			"selectPrevious"_s,
			"LEFT"_s,
			"selectParent"_s,
			"KP_LEFT"_s,
			"selectParent"_s,
			"RIGHT"_s,
			"selectChild"_s,
			"KP_RIGHT"_s,
			"selectChild"_s,
			"ENTER"_s,
			"return"_s,
			"SPACE"_s,
			"return"_s
		}),
		"PopupMenu.selectedWindowInputMapBindings.RightToLeft"_s,
		$$new($ObjectArray, {
			"LEFT"_s,
			"selectChild"_s,
			"KP_LEFT"_s,
			"selectChild"_s,
			"RIGHT"_s,
			"selectParent"_s,
			"KP_RIGHT"_s,
			"selectParent"_s
		}),
		"PopupMenu.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::POPUP_MENU),
		"ProgressBar.horizontalSize"_s,
		$$new($DimensionUIResource, hProgWidth, hProgHeight),
		"ProgressBar.verticalSize"_s,
		$$new($DimensionUIResource, vProgWidth, vProgHeight),
		"ProgressBar.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::PROGRESS_BAR),
		"RadioButton.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s,
			"RETURN"_s,
			"pressed"_s
		})),
		"RadioButton.icon"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getRadioButtonIcon"_s),
		"RadioButton.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::RADIO_BUTTON),
		"RadioButton.margin"_s,
		zeroInsets,
		"RadioButtonMenuItem.arrowIcon"_s,
		nullptr,
		"RadioButtonMenuItem.checkIcon"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getRadioButtonMenuItemCheckIcon"_s),
		"RadioButtonMenuItem.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::RADIO_BUTTON_MENU_ITEM),
		"RadioButtonMenuItem.margin"_s,
		zeroInsets,
		"RadioButtonMenuItem.alignAcceleratorText"_s,
		$Boolean::FALSE,
		"RootPane.defaultButtonWindowKeyBindings"_s,
		$$new($ObjectArray, {
			"ENTER"_s,
			"press"_s,
			"released ENTER"_s,
			"release"_s,
			"ctrl ENTER"_s,
			"press"_s,
			"ctrl released ENTER"_s,
			"release"_s
		}),
		"ScrollBar.squareButtons"_s,
		$Boolean::FALSE,
		"ScrollBar.thumbHeight"_s,
		$($Integer::valueOf(14)),
		"ScrollBar.width"_s,
		$($Integer::valueOf(16)),
		"ScrollBar.minimumThumbSize"_s,
		$$new($Dimension, 8, 8),
		"ScrollBar.maximumThumbSize"_s,
		$$new($Dimension, 4096, 4096),
		"ScrollBar.allowsAbsolutePositioning"_s,
		$Boolean::TRUE,
		"ScrollBar.alwaysShowThumb"_s,
		$Boolean::TRUE,
		"ScrollBar.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"positiveUnitIncrement"_s,
			"KP_RIGHT"_s,
			"positiveUnitIncrement"_s,
			"DOWN"_s,
			"positiveUnitIncrement"_s,
			"KP_DOWN"_s,
			"positiveUnitIncrement"_s,
			"PAGE_DOWN"_s,
			"positiveBlockIncrement"_s,
			"LEFT"_s,
			"negativeUnitIncrement"_s,
			"KP_LEFT"_s,
			"negativeUnitIncrement"_s,
			"UP"_s,
			"negativeUnitIncrement"_s,
			"KP_UP"_s,
			"negativeUnitIncrement"_s,
			"PAGE_UP"_s,
			"negativeBlockIncrement"_s,
			"HOME"_s,
			"minScroll"_s,
			"END"_s,
			"maxScroll"_s
		})),
		"ScrollBar.ancestorInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"negativeUnitIncrement"_s,
			"KP_RIGHT"_s,
			"negativeUnitIncrement"_s,
			"LEFT"_s,
			"positiveUnitIncrement"_s,
			"KP_LEFT"_s,
			"positiveUnitIncrement"_s
		})),
		"Spinner.disableOnBoundaryValues"_s,
		$Boolean::TRUE,
		"ScrollPane.fillUpperCorner"_s,
		$Boolean::TRUE,
		"ScrollPane.fillLowerCorner"_s,
		$Boolean::TRUE,
		"ScrollPane.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"unitScrollRight"_s,
			"KP_RIGHT"_s,
			"unitScrollRight"_s,
			"DOWN"_s,
			"unitScrollDown"_s,
			"KP_DOWN"_s,
			"unitScrollDown"_s,
			"LEFT"_s,
			"unitScrollLeft"_s,
			"KP_LEFT"_s,
			"unitScrollLeft"_s,
			"UP"_s,
			"unitScrollUp"_s,
			"KP_UP"_s,
			"unitScrollUp"_s,
			"PAGE_UP"_s,
			"scrollUp"_s,
			"PAGE_DOWN"_s,
			"scrollDown"_s,
			"ctrl PAGE_UP"_s,
			"scrollLeft"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollRight"_s,
			"ctrl HOME"_s,
			"scrollHome"_s,
			"ctrl END"_s,
			"scrollEnd"_s
		})),
		"ScrollPane.ancestorInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl PAGE_UP"_s,
			"scrollRight"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollLeft"_s
		})),
		"ScrollPane.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::SCROLL_PANE),
		"Separator.insets"_s,
		zeroInsets,
		"Separator.thickness"_s,
		$($Integer::valueOf(2)),
		"Slider.paintValue"_s,
		$Boolean::TRUE,
		"Slider.thumbWidth"_s,
		$($Integer::valueOf(30)),
		"Slider.thumbHeight"_s,
		$($Integer::valueOf(14)),
		"Slider.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"positiveUnitIncrement"_s,
			"KP_RIGHT"_s,
			"positiveUnitIncrement"_s,
			"DOWN"_s,
			"negativeUnitIncrement"_s,
			"KP_DOWN"_s,
			"negativeUnitIncrement"_s,
			"PAGE_DOWN"_s,
			"negativeBlockIncrement"_s,
			"LEFT"_s,
			"negativeUnitIncrement"_s,
			"KP_LEFT"_s,
			"negativeUnitIncrement"_s,
			"UP"_s,
			"positiveUnitIncrement"_s,
			"KP_UP"_s,
			"positiveUnitIncrement"_s,
			"PAGE_UP"_s,
			"positiveBlockIncrement"_s,
			"HOME"_s,
			"minScroll"_s,
			"END"_s,
			"maxScroll"_s
		})),
		"Slider.focusInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"negativeUnitIncrement"_s,
			"KP_RIGHT"_s,
			"negativeUnitIncrement"_s,
			"LEFT"_s,
			"positiveUnitIncrement"_s,
			"KP_LEFT"_s,
			"positiveUnitIncrement"_s
		})),
		"Slider.onlyLeftMouseButtonDrag"_s,
		$Boolean::FALSE,
		"Spinner.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"UP"_s,
			"increment"_s,
			"KP_UP"_s,
			"increment"_s,
			"DOWN"_s,
			"decrement"_s,
			"KP_DOWN"_s,
			"decrement"_s
		})),
		"Spinner.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::SPINNER),
		"Spinner.editorAlignment"_s,
		$($Integer::valueOf($JTextField::LEADING)),
		"SplitPane.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"UP"_s,
			"negativeIncrement"_s,
			"DOWN"_s,
			"positiveIncrement"_s,
			"LEFT"_s,
			"negativeIncrement"_s,
			"RIGHT"_s,
			"positiveIncrement"_s,
			"KP_UP"_s,
			"negativeIncrement"_s,
			"KP_DOWN"_s,
			"positiveIncrement"_s,
			"KP_LEFT"_s,
			"negativeIncrement"_s,
			"KP_RIGHT"_s,
			"positiveIncrement"_s,
			"HOME"_s,
			"selectMin"_s,
			"END"_s,
			"selectMax"_s,
			"F8"_s,
			"startResize"_s,
			"F6"_s,
			"toggleFocus"_s,
			"ctrl TAB"_s,
			"focusOutForward"_s,
			"ctrl shift TAB"_s,
			"focusOutBackward"_s
		})),
		"SplitPane.size"_s,
		$($Integer::valueOf(7)),
		"SplitPane.oneTouchOffset"_s,
		$($Integer::valueOf(2)),
		"SplitPane.oneTouchButtonSize"_s,
		$($Integer::valueOf(5)),
		"SplitPane.supportsOneTouchButtons"_s,
		$Boolean::FALSE,
		"TabbedPane.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"navigateRight"_s,
			"KP_RIGHT"_s,
			"navigateRight"_s,
			"LEFT"_s,
			"navigateLeft"_s,
			"KP_LEFT"_s,
			"navigateLeft"_s,
			"UP"_s,
			"navigateUp"_s,
			"KP_UP"_s,
			"navigateUp"_s,
			"DOWN"_s,
			"navigateDown"_s,
			"KP_DOWN"_s,
			"navigateDown"_s,
			"ctrl DOWN"_s,
			"requestFocusForVisibleComponent"_s,
			"ctrl KP_DOWN"_s,
			"requestFocusForVisibleComponent"_s,
			"SPACE"_s,
			"selectTabWithFocus"_s
		})),
		"TabbedPane.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl TAB"_s,
			"navigateNext"_s,
			"ctrl shift TAB"_s,
			"navigatePrevious"_s,
			"ctrl PAGE_DOWN"_s,
			"navigatePageDown"_s,
			"ctrl PAGE_UP"_s,
			"navigatePageUp"_s,
			"ctrl UP"_s,
			"requestFocus"_s,
			"ctrl KP_UP"_s,
			"requestFocus"_s
		})),
		"TabbedPane.labelShift"_s,
		$($Integer::valueOf(3)),
		"TabbedPane.selectedLabelShift"_s,
		$($Integer::valueOf(3)),
		"TabbedPane.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TABBED_PANE),
		"TabbedPane.selectedTabPadInsets"_s,
		$$new($InsetsUIResource, 2, 2, 0, 1),
		"Table.scrollPaneBorder"_s,
		zeroBorder,
		"Table.background"_s,
		tableBg,
		"Table.focusCellBackground"_s,
		tableFocusCellBg,
		"Table.focusCellForeground"_s,
		tableFocusCellFg,
		"Table.focusCellHighlightBorder"_s,
		focusBorder,
		"Table.focusSelectedCellHighlightBorder"_s,
		focusSelectedBorder,
		"Table.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl C"_s,
			"copy"_s,
			"ctrl V"_s,
			"paste"_s,
			"ctrl X"_s,
			"cut"_s,
			"COPY"_s,
			"copy"_s,
			"PASTE"_s,
			"paste"_s,
			"CUT"_s,
			"cut"_s,
			"control INSERT"_s,
			"copy"_s,
			"shift INSERT"_s,
			"paste"_s,
			"shift DELETE"_s,
			"cut"_s,
			"RIGHT"_s,
			"selectNextColumn"_s,
			"KP_RIGHT"_s,
			"selectNextColumn"_s,
			"shift RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"shift KP_RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift KP_RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl RIGHT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl KP_RIGHT"_s,
			"selectNextColumnChangeLead"_s,
			"LEFT"_s,
			"selectPreviousColumn"_s,
			"KP_LEFT"_s,
			"selectPreviousColumn"_s,
			"shift LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"shift KP_LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift KP_LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl LEFT"_s,
			"selectPreviousColumnChangeLead"_s,
			"ctrl KP_LEFT"_s,
			"selectPreviousColumnChangeLead"_s,
			"DOWN"_s,
			"selectNextRow"_s,
			"KP_DOWN"_s,
			"selectNextRow"_s,
			"shift DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"shift KP_DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl shift DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl shift KP_DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl DOWN"_s,
			"selectNextRowChangeLead"_s,
			"ctrl KP_DOWN"_s,
			"selectNextRowChangeLead"_s,
			"UP"_s,
			"selectPreviousRow"_s,
			"KP_UP"_s,
			"selectPreviousRow"_s,
			"shift UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"shift KP_UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl shift UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl shift KP_UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl UP"_s,
			"selectPreviousRowChangeLead"_s,
			"ctrl KP_UP"_s,
			"selectPreviousRowChangeLead"_s,
			"HOME"_s,
			"selectFirstColumn"_s,
			"shift HOME"_s,
			"selectFirstColumnExtendSelection"_s,
			"ctrl shift HOME"_s,
			"selectFirstRowExtendSelection"_s,
			"ctrl HOME"_s,
			"selectFirstRow"_s,
			"END"_s,
			"selectLastColumn"_s,
			"shift END"_s,
			"selectLastColumnExtendSelection"_s,
			"ctrl shift END"_s,
			"selectLastRowExtendSelection"_s,
			"ctrl END"_s,
			"selectLastRow"_s,
			"PAGE_UP"_s,
			"scrollUpChangeSelection"_s,
			"shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl shift PAGE_UP"_s,
			"scrollLeftExtendSelection"_s,
			"ctrl PAGE_UP"_s,
			"scrollLeftChangeSelection"_s,
			"PAGE_DOWN"_s,
			"scrollDownChangeSelection"_s,
			"shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl shift PAGE_DOWN"_s,
			"scrollRightExtendSelection"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollRightChangeSelection"_s,
			"TAB"_s,
			"selectNextColumnCell"_s,
			"shift TAB"_s,
			"selectPreviousColumnCell"_s,
			"ENTER"_s,
			"selectNextRowCell"_s,
			"shift ENTER"_s,
			"selectPreviousRowCell"_s,
			"ctrl A"_s,
			"selectAll"_s,
			"ctrl SLASH"_s,
			"selectAll"_s,
			"ctrl BACK_SLASH"_s,
			"clearSelection"_s,
			"ESCAPE"_s,
			"cancel"_s,
			"F2"_s,
			"startEditing"_s,
			"SPACE"_s,
			"addToSelection"_s,
			"ctrl SPACE"_s,
			"toggleAndAnchor"_s,
			"shift SPACE"_s,
			"extendTo"_s,
			"ctrl shift SPACE"_s,
			"moveSelectionTo"_s,
			"F8"_s,
			"focusHeader"_s
		})),
		"Table.ancestorInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"selectPreviousColumn"_s,
			"KP_RIGHT"_s,
			"selectPreviousColumn"_s,
			"shift RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"shift KP_RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift KP_RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"shift RIGHT"_s,
			"selectPreviousColumnChangeLead"_s,
			"shift KP_RIGHT"_s,
			"selectPreviousColumnChangeLead"_s,
			"LEFT"_s,
			"selectNextColumn"_s,
			"KP_LEFT"_s,
			"selectNextColumn"_s,
			"shift LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"shift KP_LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift KP_LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl LEFT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl KP_LEFT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl PAGE_UP"_s,
			"scrollRightChangeSelection"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollLeftChangeSelection"_s,
			"ctrl shift PAGE_UP"_s,
			"scrollRightExtendSelection"_s,
			"ctrl shift PAGE_DOWN"_s,
			"scrollLeftExtendSelection"_s
		})),
		"Table.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TABLE),
		"Table.ascendingSortIcon"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getAscendingSortIcon"_s),
		"Table.descendingSortIcon"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getDescendingSortIcon"_s),
		"TableHeader.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TABLE_HEADER),
		"TableHeader.alignSorterArrow"_s,
		$Boolean::TRUE,
		"TextArea.caretForeground"_s,
		caretColor,
		"TextArea.caretAspectRatio"_s,
		defaultCaretAspectRatio,
		"TextArea.caretBlinkRate"_s,
		caretBlinkRate,
		"TextArea.margin"_s,
		zeroInsets,
		"TextArea.focusInputMap"_s,
		multilineInputMap,
		"TextArea.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TEXT_AREA),
		"TextField.caretForeground"_s,
		caretColor,
		"TextField.caretAspectRatio"_s,
		defaultCaretAspectRatio,
		"TextField.caretBlinkRate"_s,
		caretBlinkRate,
		"TextField.margin"_s,
		zeroInsets,
		"TextField.focusInputMap"_s,
		fieldInputMap,
		"TextField.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TEXT_FIELD),
		"TextPane.caretForeground"_s,
		caretColor,
		"TextPane.caretAspectRatio"_s,
		defaultCaretAspectRatio,
		"TextPane.caretBlinkRate"_s,
		caretBlinkRate,
		"TextPane.margin"_s,
		editorMargin,
		"TextPane.focusInputMap"_s,
		multilineInputMap,
		"TextPane.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TEXT_PANE),
		"TitledBorder.titleColor"_s,
		controlText,
		"TitledBorder.border"_s,
		$$new($GTKLookAndFeel$2, this),
		"ToggleButton.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"ToggleButton.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TOGGLE_BUTTON),
		"ToggleButton.margin"_s,
		zeroInsets,
		"ToolBar.separatorSize"_s,
		$$new($DimensionUIResource, 10, 10),
		"ToolBar.handleIcon"_s,
		$$new($GTKLookAndFeel$3, this),
		"ToolBar.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"UP"_s,
			"navigateUp"_s,
			"KP_UP"_s,
			"navigateUp"_s,
			"DOWN"_s,
			"navigateDown"_s,
			"KP_DOWN"_s,
			"navigateDown"_s,
			"LEFT"_s,
			"navigateLeft"_s,
			"KP_LEFT"_s,
			"navigateLeft"_s,
			"RIGHT"_s,
			"navigateRight"_s,
			"KP_RIGHT"_s,
			"navigateRight"_s
		})),
		"ToolBar.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TOOL_BAR),
		"ToolTip.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TOOL_TIP),
		"Tree.padding"_s,
		$($Integer::valueOf(4)),
		"Tree.background"_s,
		tableBg,
		"Tree.drawHorizontalLines"_s,
		$Boolean::FALSE,
		"Tree.drawVerticalLines"_s,
		$Boolean::FALSE,
		"Tree.rowHeight"_s,
		$($Integer::valueOf(-1)),
		"Tree.scrollsOnExpand"_s,
		$Boolean::FALSE,
		"Tree.expanderSize"_s,
		$($Integer::valueOf(10)),
		"Tree.repaintWholeRow"_s,
		$Boolean::TRUE,
		"Tree.closedIcon"_s,
		nullptr,
		"Tree.leafIcon"_s,
		nullptr,
		"Tree.openIcon"_s,
		nullptr,
		"Tree.expandedIcon"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getTreeExpandedIcon"_s),
		"Tree.collapsedIcon"_s,
		$$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getTreeCollapsedIcon"_s),
		"Tree.leftChildIndent"_s,
		$($Integer::valueOf(2)),
		"Tree.rightChildIndent"_s,
		$($Integer::valueOf(12)),
		"Tree.scrollsHorizontallyAndVertically"_s,
		$Boolean::FALSE,
		"Tree.drawsFocusBorder"_s,
		$Boolean::TRUE,
		"Tree.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl C"_s,
			"copy"_s,
			"ctrl V"_s,
			"paste"_s,
			"ctrl X"_s,
			"cut"_s,
			"COPY"_s,
			"copy"_s,
			"PASTE"_s,
			"paste"_s,
			"CUT"_s,
			"cut"_s,
			"control INSERT"_s,
			"copy"_s,
			"shift INSERT"_s,
			"paste"_s,
			"shift DELETE"_s,
			"cut"_s,
			"UP"_s,
			"selectPrevious"_s,
			"KP_UP"_s,
			"selectPrevious"_s,
			"shift UP"_s,
			"selectPreviousExtendSelection"_s,
			"shift KP_UP"_s,
			"selectPreviousExtendSelection"_s,
			"ctrl shift UP"_s,
			"selectPreviousExtendSelection"_s,
			"ctrl shift KP_UP"_s,
			"selectPreviousExtendSelection"_s,
			"ctrl UP"_s,
			"selectPreviousChangeLead"_s,
			"ctrl KP_UP"_s,
			"selectPreviousChangeLead"_s,
			"DOWN"_s,
			"selectNext"_s,
			"KP_DOWN"_s,
			"selectNext"_s,
			"shift DOWN"_s,
			"selectNextExtendSelection"_s,
			"shift KP_DOWN"_s,
			"selectNextExtendSelection"_s,
			"ctrl shift DOWN"_s,
			"selectNextExtendSelection"_s,
			"ctrl shift KP_DOWN"_s,
			"selectNextExtendSelection"_s,
			"ctrl DOWN"_s,
			"selectNextChangeLead"_s,
			"ctrl KP_DOWN"_s,
			"selectNextChangeLead"_s,
			"RIGHT"_s,
			"selectChild"_s,
			"KP_RIGHT"_s,
			"selectChild"_s,
			"LEFT"_s,
			"selectParent"_s,
			"KP_LEFT"_s,
			"selectParent"_s,
			"typed +"_s,
			"expand"_s,
			"typed -"_s,
			"collapse"_s,
			"BACK_SPACE"_s,
			"moveSelectionToParent"_s,
			"PAGE_UP"_s,
			"scrollUpChangeSelection"_s,
			"shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl PAGE_UP"_s,
			"scrollUpChangeLead"_s,
			"PAGE_DOWN"_s,
			"scrollDownChangeSelection"_s,
			"shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollDownChangeLead"_s,
			"HOME"_s,
			"selectFirst"_s,
			"shift HOME"_s,
			"selectFirstExtendSelection"_s,
			"ctrl shift HOME"_s,
			"selectFirstExtendSelection"_s,
			"ctrl HOME"_s,
			"selectFirstChangeLead"_s,
			"END"_s,
			"selectLast"_s,
			"shift END"_s,
			"selectLastExtendSelection"_s,
			"ctrl shift END"_s,
			"selectLastExtendSelection"_s,
			"ctrl END"_s,
			"selectLastChangeLead"_s,
			"F2"_s,
			"startEditing"_s,
			"ctrl A"_s,
			"selectAll"_s,
			"ctrl SLASH"_s,
			"selectAll"_s,
			"ctrl BACK_SLASH"_s,
			"clearSelection"_s,
			"ctrl LEFT"_s,
			"scrollLeft"_s,
			"ctrl KP_LEFT"_s,
			"scrollLeft"_s,
			"ctrl RIGHT"_s,
			"scrollRight"_s,
			"ctrl KP_RIGHT"_s,
			"scrollRight"_s,
			"SPACE"_s,
			"addToSelection"_s,
			"ctrl SPACE"_s,
			"toggleAndAnchor"_s,
			"shift SPACE"_s,
			"extendTo"_s,
			"ctrl shift SPACE"_s,
			"moveSelectionTo"_s
		})),
		"Tree.focusInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"selectParent"_s,
			"KP_RIGHT"_s,
			"selectParent"_s,
			"LEFT"_s,
			"selectChild"_s,
			"KP_LEFT"_s,
			"selectChild"_s
		})),
		"Tree.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ESCAPE"_s,
			"cancel"_s
		})),
		"Tree.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TREE),
		"Viewport.font"_s,
		$$new($GTKLookAndFeel$1FontLazyValue, this, $Region::VIEWPORT)
	}));
	table->putDefaults(defaults);
	if (this->fallbackFont != nullptr) {
		table->put("TitledBorder.font"_s, this->fallbackFont);
	}
	if (GTKLookAndFeel::aaTextInfo != nullptr) {
		table->putAll(GTKLookAndFeel::aaTextInfo);
	}
}

void GTKLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$var($SynthStyleFactory, factory, getStyleFactory());
	$init($Region);
	$var($GTKStyle, windowStyle, $cast($GTKStyle, $nc(factory)->getStyle(nullptr, $Region::INTERNAL_FRAME)));
	$init($GTKColorType);
	$nc(table)->put("window"_s, $($nc(windowStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	table->put("windowText"_s, $(windowStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	$var($GTKStyle, entryStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::TEXT_FIELD)));
	table->put("text"_s, $($nc(entryStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_BACKGROUND)));
	table->put("textText"_s, $(entryStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	table->put("textHighlight"_s, $(entryStyle->getGTKColor($SynthConstants::SELECTED, $GTKColorType::TEXT_BACKGROUND)));
	table->put("textHighlightText"_s, $(entryStyle->getGTKColor($SynthConstants::SELECTED, $GTKColorType::TEXT_FOREGROUND)));
	table->put("textInactiveText"_s, $(entryStyle->getGTKColor($SynthConstants::DISABLED, $GTKColorType::TEXT_FOREGROUND)));
	$var($Object, caretColor, entryStyle->getClassSpecificValue("cursor-color"_s));
	if (caretColor == nullptr) {
		$assign(caretColor, $GTKStyle::BLACK_COLOR);
	}
	table->put("caretColor"_s, caretColor);
	$var($GTKStyle, menuStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::MENU_ITEM)));
	table->put("menu"_s, $($nc(menuStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	table->put("menuText"_s, $(menuStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	$var($GTKStyle, scrollbarStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::SCROLL_BAR)));
	table->put("scrollbar"_s, $($nc(scrollbarStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	$var($GTKStyle, infoStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::OPTION_PANE)));
	table->put("info"_s, $($nc(infoStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	table->put("infoText"_s, $(infoStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	$var($GTKStyle, desktopStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::DESKTOP_PANE)));
	table->put("desktop"_s, $($nc(desktopStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	$var($GTKStyle, widgetStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::LABEL)));
	$var($Color, bg, $nc(widgetStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND));
	table->put("control"_s, bg);
	table->put("controlHighlight"_s, bg);
	table->put("controlText"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	table->put("controlLtHighlight"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::LIGHT)));
	table->put("controlShadow"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::DARK)));
	table->put("controlDkShadow"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BLACK)));
	table->put("light"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::LIGHT)));
	table->put("mid"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::MID)));
	table->put("dark"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::DARK)));
	table->put("black"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BLACK)));
	table->put("white"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::WHITE)));
}

$ComponentUI* GTKLookAndFeel::createUI($JComponent* c) {
	$init(GTKLookAndFeel);
	$useLocalObjectStack();
	$var($String, key, $$nc($nc(c)->getUIClassID())->intern());
	if (key == "FileChooserUI"_s) {
		return $GTKFileChooserUI::createUI(c);
	}
	return $SynthLookAndFeel::createUI(c);
}

$String* GTKLookAndFeel::getGtkThemeName() {
	$init(GTKLookAndFeel);
	return GTKLookAndFeel::gtkThemeName;
}

bool GTKLookAndFeel::isLeftToRight($Component* c) {
	$init(GTKLookAndFeel);
	return $$nc($nc(c)->getComponentOrientation())->isLeftToRight();
}

void GTKLookAndFeel::initialize() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($UNIXToolkit, toolkit) && !$cast($UNIXToolkit, toolkit)->loadGTK()) {
		$throwNew($InternalError, "Unable to load native GTK libraries"_s);
	}
	$init($UNIXToolkit$GtkVersions);
	if ($UNIXToolkit::getGtkVersion() == $UNIXToolkit$GtkVersions::GTK2) {
		$var($String, version, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "jdk.gtk.version"_s))));
		if (version != nullptr) {
			GTKLookAndFeel::IS_22 = version->equals("2.2"_s);
		} else {
			GTKLookAndFeel::IS_22 = true;
		}
	} else if ($UNIXToolkit::getGtkVersion() == $UNIXToolkit$GtkVersions::GTK3) {
		GTKLookAndFeel::IS_3 = true;
	}
	$SynthLookAndFeel::initialize();
	this->inInitialize = true;
	loadStyles();
	this->inInitialize = false;
	GTKLookAndFeel::gtkAAFontSettingsCond = $SwingUtilities2::isLocalDisplay();
	$assignStatic(GTKLookAndFeel::aaTextInfo, $new($HashMap, 2));
	$SwingUtilities2::putAATextInfo(GTKLookAndFeel::gtkAAFontSettingsCond, GTKLookAndFeel::aaTextInfo);
}

void GTKLookAndFeel::flushUnreferenced() {
	$init(GTKLookAndFeel);
	$var($GTKLookAndFeel$WeakPCL, pcl, nullptr);
	while (($assign(pcl, $cast($GTKLookAndFeel$WeakPCL, $nc(GTKLookAndFeel::queue)->poll()))) != nullptr) {
		$nc(pcl)->dispose();
	}
}

bool GTKLookAndFeel::isSupportedLookAndFeel() {
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	return ($instanceOf($SunToolkit, toolkit) && $cast($SunToolkit, toolkit)->isNativeGTKAvailable());
}

bool GTKLookAndFeel::isNativeLookAndFeel() {
	return true;
}

$String* GTKLookAndFeel::getDescription() {
	return "GTK look and feel"_s;
}

$String* GTKLookAndFeel::getName() {
	return "GTK look and feel"_s;
}

$String* GTKLookAndFeel::getID() {
	return "GTK"_s;
}

void GTKLookAndFeel::loadSystemColors($UIDefaults* table, $StringArray* systemColors, bool useNative) {
	$SynthLookAndFeel::loadSystemColors(table, systemColors, false);
}

void GTKLookAndFeel::loadStyles() {
	$useLocalObjectStack();
	$assignStatic(GTKLookAndFeel::gtkThemeName, $cast($String, $$nc($Toolkit::getDefaultToolkit())->getDesktopProperty("gnome.Net/ThemeName"_s)));
	setStyleFactory($(getGTKStyleFactory()));
	if (!this->inInitialize) {
		$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
		initSystemColorDefaults(table);
		initComponentDefaults(table);
	}
}

$GTKStyleFactory* GTKLookAndFeel::getGTKStyleFactory() {
	$useLocalObjectStack();
	$init($GTKEngine);
	$var($GTKEngine, engine, $GTKEngine::INSTANCE);
	$init($GTKEngine$Settings);
	$var($Object, iconSizes, $nc(engine)->getSetting($GTKEngine$Settings::GTK_ICON_SIZES));
	if ($instanceOf($String, iconSizes)) {
		if (!configIconSizes($cast($String, iconSizes))) {
			$nc($System::err)->println($$str({"Error parsing gtk-icon-sizes string: \'"_s, iconSizes, "\'"_s}));
		}
	}
	$var($Object, fontName, $$nc($Toolkit::getDefaultToolkit())->getDesktopProperty("gnome.Gtk/FontName"_s));
	if (!($instanceOf($String, fontName))) {
		$assign(fontName, engine->getSetting($GTKEngine$Settings::GTK_FONT_NAME));
		if (!($instanceOf($String, fontName))) {
			$assign(fontName, "sans 10"_s);
		}
	}
	if (this->styleFactory == nullptr) {
		$set(this, styleFactory, $new($GTKStyleFactory));
	}
	$var($Font, defaultFont, $PangoFonts::lookupFont($cast($String, fontName)));
	$set(this, fallbackFont, defaultFont);
	$nc(this->styleFactory)->initStyles(defaultFont);
	return this->styleFactory;
}

bool GTKLookAndFeel::configIconSizes($String* sizeString) {
	$useLocalObjectStack();
	$var($StringArray, sizes, $nc(sizeString)->split(":"_s));
	for (int32_t i = 0; i < sizes->length; ++i) {
		$var($StringArray, splits, $nc(sizes->get(i))->split("="_s));
		if (splits->length != 2) {
			return false;
		}
		$var($String, size, $($nc(splits->get(0))->trim())->intern());
		if (size->length() < 1) {
			return false;
		}
		$assign(splits, $nc(splits->get(1))->split(","_s));
		if (splits->length != 2) {
			return false;
		}
		$var($String, width, $nc(splits->get(0))->trim());
		$var($String, height, $nc(splits->get(1))->trim());
		bool var$0 = width->length() < 1;
		if (var$0 || height->length() < 1) {
			return false;
		}
		int32_t w = 0;
		int32_t h = 0;
		try {
			w = $Integer::parseInt(width);
			h = $Integer::parseInt(height);
		} catch ($NumberFormatException& nfe) {
			return false;
		}
		if (w > 0 && h > 0) {
			int32_t type = $GTKStyle$GTKStockIconInfo::getIconType(size);
			$GTKStyle$GTKStockIconInfo::setIconSize(type, w, h);
		} else {
			$nc($System::err)->println($$str({"Invalid size in gtk-icon-sizes: "_s, $$str(w), ","_s, $$str(h)}));
		}
	}
	return true;
}

bool GTKLookAndFeel::shouldUpdateStyleOnAncestorChanged() {
	return true;
}

$LayoutStyle* GTKLookAndFeel::getLayoutStyle() {
	$init($GTKLookAndFeel$GnomeLayoutStyle);
	return $GTKLookAndFeel$GnomeLayoutStyle::INSTANCE;
}

$Object* GTKLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(GTKLookAndFeel);
	return $of($new($BorderUIResource$EmptyBorderUIResource, 0, 0, 0, 0));
}

void GTKLookAndFeel::clinit$($Class* clazz) {
	GTKLookAndFeel::$assertionsDisabled = !GTKLookAndFeel::class$->desiredAssertionStatus();
	$assignStatic(GTKLookAndFeel::gtkThemeName, "Default"_s);
	$assignStatic(GTKLookAndFeel::queue, $new($ReferenceQueue));
}

GTKLookAndFeel::GTKLookAndFeel() {
}

$Class* GTKLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.java.swing.plaf.gtk.GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0")) {
			return GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKLookAndFeel, $assertionsDisabled)},
		{"IS_22", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GTKLookAndFeel, IS_22)},
		{"IS_3", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GTKLookAndFeel, IS_3)},
		{"aaTextInfo", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $STATIC, $staticField(GTKLookAndFeel, aaTextInfo)},
		{"gtkAAFontSettingsCond", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GTKLookAndFeel, gtkAAFontSettingsCond)},
		{"fallbackFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(GTKLookAndFeel, fallbackFont)},
		{"inInitialize", "Z", nullptr, $PRIVATE, $field(GTKLookAndFeel, inInitialize)},
		{"pclInstalled", "Z", nullptr, $PRIVATE, $field(GTKLookAndFeel, pclInstalled)},
		{"styleFactory", "Lcom/sun/java/swing/plaf/gtk/GTKStyleFactory;", nullptr, $PRIVATE, $field(GTKLookAndFeel, styleFactory)},
		{"gtkThemeName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(GTKLookAndFeel, gtkThemeName)},
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;>;", $STATIC, $staticField(GTKLookAndFeel, queue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GTKLookAndFeel, init$, void)},
		{"SwingOrientationConstantToGTK", "(I)Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $STATIC, $staticMethod(GTKLookAndFeel, SwingOrientationConstantToGTK, $GTKConstants$PositionType*, int32_t)},
		{"configIconSizes", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(GTKLookAndFeel, configIconSizes, bool, $String*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(GTKLookAndFeel, createUI, $ComponentUI*, $JComponent*)},
		{"flushUnreferenced", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(GTKLookAndFeel, flushUnreferenced, void)},
		{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel, getDefaults, $UIDefaults*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel, getDescription, $String*)},
		{"getGTKStyleFactory", "()Lcom/sun/java/swing/plaf/gtk/GTKStyleFactory;", nullptr, $PRIVATE, $method(GTKLookAndFeel, getGTKStyleFactory, $GTKStyleFactory*)},
		{"getGtkThemeName", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(GTKLookAndFeel, getGtkThemeName, $String*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel, getID, $String*)},
		{"getLayoutStyle", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel, getLayoutStyle, $LayoutStyle*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel, getName, $String*)},
		{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(GTKLookAndFeel, initComponentDefaults, void, $UIDefaults*)},
		{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(GTKLookAndFeel, initResourceBundle, void, $UIDefaults*)},
		{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(GTKLookAndFeel, initSystemColorDefaults, void, $UIDefaults*)},
		{"initialize", "()V", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel, initialize, void)},
		{"installPropertyChangeListeners", "()V", nullptr, $PRIVATE, $method(GTKLookAndFeel, installPropertyChangeListeners, void)},
		{"is2_2", "()Z", nullptr, $STATIC, $staticMethod(GTKLookAndFeel, is2_2, bool)},
		{"is3", "()Z", nullptr, $STATIC, $staticMethod(GTKLookAndFeel, is3, bool)},
		{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $staticMethod(GTKLookAndFeel, isLeftToRight, bool, $Component*)},
		{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel, isNativeLookAndFeel, bool)},
		{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel, isSupportedLookAndFeel, bool)},
		{"isText", "(Ljavax/swing/plaf/synth/Region;)Z", nullptr, $STATIC, $staticMethod(GTKLookAndFeel, isText, bool, $Region*)},
		{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GTKLookAndFeel, lambda$initComponentDefaults$0, $Object*, $UIDefaults*)},
		{"loadStyles", "()V", nullptr, $PRIVATE, $method(GTKLookAndFeel, loadStyles, void)},
		{"loadSystemColors", "(Ljavax/swing/UIDefaults;[Ljava/lang/String;Z)V", nullptr, $PROTECTED, $virtualMethod(GTKLookAndFeel, loadSystemColors, void, $UIDefaults*, $StringArray*, bool)},
		{"shouldUpdateStyleOnAncestorChanged", "()Z", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel, shouldUpdateStyleOnAncestorChanged, bool)},
		{"synthStateToGTKState", "(Ljavax/swing/plaf/synth/Region;I)I", nullptr, $STATIC, $staticMethod(GTKLookAndFeel, synthStateToGTKState, int32_t, $Region*, int32_t)},
		{"synthStateToGTKStateType", "(I)Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $STATIC, $staticMethod(GTKLookAndFeel, synthStateToGTKStateType, $GTKConstants$StateType*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$GnomeLayoutStyle", "com.sun.java.swing.plaf.gtk.GTKLookAndFeel", "GnomeLayoutStyle", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL", "com.sun.java.swing.plaf.gtk.GTKLookAndFeel", "WeakPCL", $STATIC},
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$3", nullptr, nullptr, 0},
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$2", nullptr, nullptr, 0},
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1", nullptr, nullptr, 0},
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1FontLazyValue", nullptr, "FontLazyValue", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
		"javax.swing.plaf.synth.SynthLookAndFeel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$4,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$GnomeLayoutStyle,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL$1,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$3,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$2,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1FontLazyValue"
	};
	$loadClass(GTKLookAndFeel, name, initialize, &classInfo$$, GTKLookAndFeel::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKLookAndFeel));
	});
	return class$;
}

$Class* GTKLookAndFeel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com