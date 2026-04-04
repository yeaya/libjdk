#include <javax/swing/plaf/synth/SynthStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/lang/Number.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthBorder.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BLACK
#undef DEFAULT_VALUES
#undef DISABLED
#undef ENABLED
#undef FOREGROUND
#undef RED
#undef SYNTH_GRAPHICS
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JTextField = ::javax::swing::JTextField;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthBorder = ::javax::swing::plaf::synth::SynthBorder;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$Map* SynthStyle::DEFAULT_VALUES = nullptr;
$SynthGraphicsUtils* SynthStyle::SYNTH_GRAPHICS = nullptr;

void SynthStyle::populateDefaultValues() {
	$init(SynthStyle);
	$useLocalObjectStack();
	$var($Object, buttonMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"SPACE"_s,
		"pressed"_s,
		"released SPACE"_s,
		"released"_s
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Button.focusInputMap"_s, buttonMap);
	SynthStyle::DEFAULT_VALUES->put("CheckBox.focusInputMap"_s, buttonMap);
	SynthStyle::DEFAULT_VALUES->put("RadioButton.focusInputMap"_s, buttonMap);
	SynthStyle::DEFAULT_VALUES->put("ToggleButton.focusInputMap"_s, buttonMap);
	SynthStyle::DEFAULT_VALUES->put("SynthArrowButton.focusInputMap"_s, buttonMap);
	$init($Color);
	SynthStyle::DEFAULT_VALUES->put("List.dropLineColor"_s, $Color::BLACK);
	SynthStyle::DEFAULT_VALUES->put("Tree.dropLineColor"_s, $Color::BLACK);
	SynthStyle::DEFAULT_VALUES->put("Table.dropLineColor"_s, $Color::BLACK);
	SynthStyle::DEFAULT_VALUES->put("Table.dropLineShortColor"_s, $Color::RED);
	$init($DefaultEditorKit);
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
	SynthStyle::DEFAULT_VALUES->put("EditorPane.focusInputMap"_s, multilineInputMap);
	SynthStyle::DEFAULT_VALUES->put("TextArea.focusInputMap"_s, multilineInputMap);
	SynthStyle::DEFAULT_VALUES->put("TextPane.focusInputMap"_s, multilineInputMap);
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
	SynthStyle::DEFAULT_VALUES->put("TextField.focusInputMap"_s, fieldInputMap);
	SynthStyle::DEFAULT_VALUES->put("PasswordField.focusInputMap"_s, fieldInputMap);
	SynthStyle::DEFAULT_VALUES->put("ComboBox.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	SynthStyle::DEFAULT_VALUES->put("Desktop.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"ctrl F5"_s,
		"restore"_s,
		"ctrl F4"_s,
		"close"_s,
		"ctrl F7"_s,
		"move"_s,
		"ctrl F8"_s,
		"resize"_s,
		"RIGHT"_s,
		"right"_s,
		"KP_RIGHT"_s,
		"right"_s,
		"shift RIGHT"_s,
		"shrinkRight"_s,
		"shift KP_RIGHT"_s,
		"shrinkRight"_s,
		"LEFT"_s,
		"left"_s,
		"KP_LEFT"_s,
		"left"_s,
		"shift LEFT"_s,
		"shrinkLeft"_s,
		"shift KP_LEFT"_s,
		"shrinkLeft"_s,
		"UP"_s,
		"up"_s,
		"KP_UP"_s,
		"up"_s,
		"shift UP"_s,
		"shrinkUp"_s,
		"shift KP_UP"_s,
		"shrinkUp"_s,
		"DOWN"_s,
		"down"_s,
		"KP_DOWN"_s,
		"down"_s,
		"shift DOWN"_s,
		"shrinkDown"_s,
		"shift KP_DOWN"_s,
		"shrinkDown"_s,
		"ESCAPE"_s,
		"escape"_s,
		"ctrl F9"_s,
		"minimize"_s,
		"ctrl F10"_s,
		"maximize"_s,
		"ctrl F6"_s,
		"selectNextFrame"_s,
		"ctrl TAB"_s,
		"selectNextFrame"_s,
		"ctrl alt F6"_s,
		"selectNextFrame"_s,
		"shift ctrl alt F6"_s,
		"selectPreviousFrame"_s,
		"ctrl F12"_s,
		"navigateNext"_s,
		"shift ctrl F12"_s,
		"navigatePrevious"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("FileChooser.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"ESCAPE"_s,
		"cancelSelection"_s,
		"F2"_s,
		"editFileName"_s,
		"F5"_s,
		"refresh"_s,
		"BACK_SPACE"_s,
		"Go Up"_s,
		"ENTER"_s,
		"approveSelection"_s,
		"ctrl ENTER"_s,
		"approveSelection"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("FormattedTextField.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	$load($BasicLookAndFeel);
	SynthStyle::DEFAULT_VALUES->put("InternalFrame.icon"_s, $($SwingUtilities2::makeIcon($BasicLookAndFeel::class$, $BasicLookAndFeel::class$, "icons/JavaCup16.png"_s)));
	$nc(SynthStyle::DEFAULT_VALUES)->put("InternalFrame.windowBindings"_s, $$new($ObjectArray, {
		"shift ESCAPE"_s,
		"showSystemMenu"_s,
		"ctrl SPACE"_s,
		"showSystemMenu"_s,
		"ESCAPE"_s,
		"hideSystemMenu"_s
	}));
	SynthStyle::DEFAULT_VALUES->put("List.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	SynthStyle::DEFAULT_VALUES->put("List.focusInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	SynthStyle::DEFAULT_VALUES->put("MenuBar.windowBindings"_s, $$new($ObjectArray, {
		"F10"_s,
		"takeFocus"_s
	}));
	SynthStyle::DEFAULT_VALUES->put("OptionPane.windowBindings"_s, $$new($ObjectArray, {
		"ESCAPE"_s,
		"close"_s
	}));
	SynthStyle::DEFAULT_VALUES->put("RootPane.defaultButtonWindowKeyBindings"_s, $$new($ObjectArray, {
		"ENTER"_s,
		"press"_s,
		"released ENTER"_s,
		"release"_s,
		"ctrl ENTER"_s,
		"press"_s,
		"ctrl released ENTER"_s,
		"release"_s
	}));
	SynthStyle::DEFAULT_VALUES->put("RootPane.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"shift F10"_s,
		"postPopup"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("ScrollBar.anecstorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	SynthStyle::DEFAULT_VALUES->put("ScrollBar.ancestorInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"RIGHT"_s,
		"negativeUnitIncrement"_s,
		"KP_RIGHT"_s,
		"negativeUnitIncrement"_s,
		"LEFT"_s,
		"positiveUnitIncrement"_s,
		"KP_LEFT"_s,
		"positiveUnitIncrement"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("ScrollPane.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	SynthStyle::DEFAULT_VALUES->put("ScrollPane.ancestorInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"ctrl PAGE_UP"_s,
		"scrollRight"_s,
		"ctrl PAGE_DOWN"_s,
		"scrollLeft"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("SplitPane.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	SynthStyle::DEFAULT_VALUES->put("Spinner.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"UP"_s,
		"increment"_s,
		"KP_UP"_s,
		"increment"_s,
		"DOWN"_s,
		"decrement"_s,
		"KP_DOWN"_s,
		"decrement"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("Slider.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		"ctrl PAGE_DOWN"_s,
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
		"ctrl PAGE_UP"_s,
		"positiveBlockIncrement"_s,
		"HOME"_s,
		"minScroll"_s,
		"END"_s,
		"maxScroll"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("Slider.focusInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"RIGHT"_s,
		"negativeUnitIncrement"_s,
		"KP_RIGHT"_s,
		"negativeUnitIncrement"_s,
		"LEFT"_s,
		"positiveUnitIncrement"_s,
		"KP_LEFT"_s,
		"positiveUnitIncrement"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("TabbedPane.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"ctrl PAGE_DOWN"_s,
		"navigatePageDown"_s,
		"ctrl PAGE_UP"_s,
		"navigatePageUp"_s,
		"ctrl UP"_s,
		"requestFocus"_s,
		"ctrl KP_UP"_s,
		"requestFocus"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("TabbedPane.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		"requestFocusForVisibleComponent"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("Table.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	SynthStyle::DEFAULT_VALUES->put("TableHeader.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"SPACE"_s,
		"toggleSortOrder"_s,
		"LEFT"_s,
		"selectColumnToLeft"_s,
		"KP_LEFT"_s,
		"selectColumnToLeft"_s,
		"RIGHT"_s,
		"selectColumnToRight"_s,
		"KP_RIGHT"_s,
		"selectColumnToRight"_s,
		"alt LEFT"_s,
		"moveColumnLeft"_s,
		"alt KP_LEFT"_s,
		"moveColumnLeft"_s,
		"alt RIGHT"_s,
		"moveColumnRight"_s,
		"alt KP_RIGHT"_s,
		"moveColumnRight"_s,
		"alt shift LEFT"_s,
		"resizeLeft"_s,
		"alt shift KP_LEFT"_s,
		"resizeLeft"_s,
		"alt shift RIGHT"_s,
		"resizeRight"_s,
		"alt shift KP_RIGHT"_s,
		"resizeRight"_s,
		"ESCAPE"_s,
		"focusTable"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("Tree.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"ESCAPE"_s,
		"cancel"_s
	})));
	SynthStyle::DEFAULT_VALUES->put("Tree.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"ADD"_s,
		"expand"_s,
		"SUBTRACT"_s,
		"collapse"_s,
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
	})));
	SynthStyle::DEFAULT_VALUES->put("Tree.focusInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"RIGHT"_s,
		"selectParent"_s,
		"KP_RIGHT"_s,
		"selectParent"_s,
		"LEFT"_s,
		"selectChild"_s,
		"KP_LEFT"_s,
		"selectChild"_s
	})));
}

$Object* SynthStyle::getDefaultValue(Object$* key) {
	$init(SynthStyle);
	$synchronized(SynthStyle::class$) {
		if (SynthStyle::DEFAULT_VALUES == nullptr) {
			$assignStatic(SynthStyle::DEFAULT_VALUES, $new($HashMap));
			populateDefaultValues();
		}
		$var($Object, value, $nc(SynthStyle::DEFAULT_VALUES)->get(key));
		if ($instanceOf($UIDefaults$LazyValue, value)) {
			$assign(value, $cast($UIDefaults$LazyValue, value)->createValue(nullptr));
			$nc(SynthStyle::DEFAULT_VALUES)->put(key, value);
		}
		return value;
	}
}

void SynthStyle::init$() {
}

$SynthGraphicsUtils* SynthStyle::getGraphicsUtils($SynthContext* context) {
	return SynthStyle::SYNTH_GRAPHICS;
}

$Color* SynthStyle::getColor($SynthContext* context, $ColorType* type) {
	$useLocalObjectStack();
	$var($JComponent, c, $nc(context)->getComponent());
	$var($Region, id, context->getRegion());
	if ((context->getComponentState() & $SynthConstants::DISABLED) != 0) {
		if ($instanceOf($JTextComponent, c)) {
			$var($JTextComponent, txt, $cast($JTextComponent, c));
			$var($Color, disabledColor, txt->getDisabledTextColor());
			if (disabledColor == nullptr || $instanceOf($UIResource, disabledColor)) {
				return getColorForState(context, type);
			}
		} else {
			$init($ColorType);
			if (($instanceOf($JLabel, c) || $instanceOf($JMenuItem, c)) && (type == $ColorType::FOREGROUND || type == $ColorType::TEXT_FOREGROUND)) {
				return getColorForState(context, type);
			}
		}
	}
	$var($Color, color, nullptr);
	if (!$nc(id)->isSubregion()) {
		$init($ColorType);
		if (type == $ColorType::BACKGROUND) {
			$assign(color, $nc(c)->getBackground());
		} else if (type == $ColorType::FOREGROUND) {
			$assign(color, $nc(c)->getForeground());
		} else if (type == $ColorType::TEXT_FOREGROUND) {
			$assign(color, $nc(c)->getForeground());
		}
	}
	if (color == nullptr || $instanceOf($UIResource, color)) {
		$assign(color, getColorForState(context, type));
	}
	if (color == nullptr) {
		$init($ColorType);
		if (type == $ColorType::BACKGROUND || type == $ColorType::TEXT_BACKGROUND) {
			return $nc(c)->getBackground();
		} else if (type == $ColorType::FOREGROUND || type == $ColorType::TEXT_FOREGROUND) {
			return $nc(c)->getForeground();
		}
	}
	return color;
}

$Font* SynthStyle::getFont($SynthContext* context) {
	$useLocalObjectStack();
	$var($JComponent, c, $nc(context)->getComponent());
	if (context->getComponentState() == $SynthConstants::ENABLED) {
		return $nc(c)->getFont();
	}
	$var($Font, cFont, $nc(c)->getFont());
	if (cFont != nullptr && !($instanceOf($UIResource, cFont))) {
		return cFont;
	}
	return getFontForState(context);
}

$Insets* SynthStyle::getInsets($SynthContext* context, $Insets* insets$renamed) {
	$var($Insets, insets, insets$renamed);
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	$nc(insets)->top = ($nc(insets)->bottom = ($nc(insets)->left = ($nc(insets)->right = 0)));
	return insets;
}

$SynthPainter* SynthStyle::getPainter($SynthContext* context) {
	return nullptr;
}

bool SynthStyle::isOpaque($SynthContext* context) {
	return true;
}

$Object* SynthStyle::get($SynthContext* context, Object$* key) {
	return getDefaultValue(key);
}

void SynthStyle::installDefaults($SynthContext* context, $SynthUI* ui) {
	$useLocalObjectStack();
	if (!$nc(context)->isSubregion()) {
		$var($JComponent, c, context->getComponent());
		$var($Border, border, $nc(c)->getBorder());
		if (border == nullptr || $instanceOf($UIResource, border)) {
			c->setBorder($$new($SynthBorder, ui, $(getInsets(context, nullptr))));
		}
	}
	installDefaults(context);
}

void SynthStyle::installDefaults($SynthContext* context) {
	$useLocalObjectStack();
	if (!$nc(context)->isSubregion()) {
		$var($JComponent, c, context->getComponent());
		$var($Region, region, context->getRegion());
		$var($Font, font, $nc(c)->getFont());
		if (font == nullptr || ($instanceOf($UIResource, font))) {
			c->setFont($(getFontForState(context)));
		}
		$var($Color, background, c->getBackground());
		if (background == nullptr || ($instanceOf($UIResource, background))) {
			$init($ColorType);
			c->setBackground($(getColorForState(context, $ColorType::BACKGROUND)));
		}
		$var($Color, foreground, c->getForeground());
		if (foreground == nullptr || ($instanceOf($UIResource, foreground))) {
			$init($ColorType);
			c->setForeground($(getColorForState(context, $ColorType::FOREGROUND)));
		}
		$LookAndFeel::installProperty(c, "opaque"_s, $($Boolean::valueOf(isOpaque(context))));
	}
}

void SynthStyle::uninstallDefaults($SynthContext* context) {
	$useLocalObjectStack();
	if (!$nc(context)->isSubregion()) {
		$var($JComponent, c, context->getComponent());
		$var($Border, border, $nc(c)->getBorder());
		if ($instanceOf($UIResource, border)) {
			c->setBorder(nullptr);
		}
	}
}

int32_t SynthStyle::getInt($SynthContext* context, Object$* key, int32_t defaultValue) {
	$var($Object, value, get(context, key));
	if ($instanceOf($Number, value)) {
		return $cast($Number, value)->intValue();
	}
	return defaultValue;
}

bool SynthStyle::getBoolean($SynthContext* context, Object$* key, bool defaultValue) {
	$var($Object, value, get(context, key));
	if ($instanceOf($Boolean, value)) {
		return $cast($Boolean, value)->booleanValue();
	}
	return defaultValue;
}

$Icon* SynthStyle::getIcon($SynthContext* context, Object$* key) {
	$var($Object, value, get(context, key));
	if ($instanceOf($Icon, value)) {
		return $cast($Icon, value);
	}
	return nullptr;
}

$String* SynthStyle::getString($SynthContext* context, Object$* key, $String* defaultValue) {
	$var($Object, value, get(context, key));
	if ($instanceOf($String, value)) {
		return $cast($String, value);
	}
	return defaultValue;
}

void SynthStyle::clinit$($Class* clazz) {
	$assignStatic(SynthStyle::SYNTH_GRAPHICS, $new($SynthGraphicsUtils));
}

SynthStyle::SynthStyle() {
}

$Class* SynthStyle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_VALUES", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(SynthStyle, DEFAULT_VALUES)},
		{"SYNTH_GRAPHICS", "Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthStyle, SYNTH_GRAPHICS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthStyle, init$, void)},
		{"get", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SynthStyle, get, $Object*, $SynthContext*, Object$*)},
		{"getBoolean", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;Z)Z", nullptr, $PUBLIC, $virtualMethod(SynthStyle, getBoolean, bool, $SynthContext*, Object$*, bool)},
		{"getColor", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(SynthStyle, getColor, $Color*, $SynthContext*, $ColorType*)},
		{"getColorForState", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SynthStyle, getColorForState, $Color*, $SynthContext*, $ColorType*)},
		{"getDefaultValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(SynthStyle, getDefaultValue, $Object*, Object$*)},
		{"getFont", "(Ljavax/swing/plaf/synth/SynthContext;)Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(SynthStyle, getFont, $Font*, $SynthContext*)},
		{"getFontForState", "(Ljavax/swing/plaf/synth/SynthContext;)Ljava/awt/Font;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SynthStyle, getFontForState, $Font*, $SynthContext*)},
		{"getGraphicsUtils", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PUBLIC, $virtualMethod(SynthStyle, getGraphicsUtils, $SynthGraphicsUtils*, $SynthContext*)},
		{"getIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(SynthStyle, getIcon, $Icon*, $SynthContext*, Object$*)},
		{"getInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(SynthStyle, getInsets, $Insets*, $SynthContext*, $Insets*)},
		{"getInt", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;I)I", nullptr, $PUBLIC, $virtualMethod(SynthStyle, getInt, int32_t, $SynthContext*, Object$*, int32_t)},
		{"getPainter", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PUBLIC, $virtualMethod(SynthStyle, getPainter, $SynthPainter*, $SynthContext*)},
		{"getString", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SynthStyle, getString, $String*, $SynthContext*, Object$*, $String*)},
		{"installDefaults", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/SynthUI;)V", nullptr, 0, $virtualMethod(SynthStyle, installDefaults, void, $SynthContext*, $SynthUI*)},
		{"installDefaults", "(Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, $PUBLIC, $virtualMethod(SynthStyle, installDefaults, void, $SynthContext*)},
		{"isOpaque", "(Ljavax/swing/plaf/synth/SynthContext;)Z", nullptr, $PUBLIC, $virtualMethod(SynthStyle, isOpaque, bool, $SynthContext*)},
		{"populateDefaultValues", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(SynthStyle, populateDefaultValues, void)},
		{"uninstallDefaults", "(Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, $PUBLIC, $virtualMethod(SynthStyle, uninstallDefaults, void, $SynthContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.synth.SynthStyle",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SynthStyle, name, initialize, &classInfo$$, SynthStyle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SynthStyle);
	});
	return class$;
}

$Class* SynthStyle::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax