#include <sun/awt/X11/XAWTLookAndFeel.h>
#include <com/sun/java/swing/plaf/motif/MotifBorders$BevelBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifBorders$FocusBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/SystemColor.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/X11/MotifColorUtilities.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <jcpp.h>

#undef BACKGROUND_COLOR
#undef DIALOG
#undef MONOSPACED
#undef PLAIN
#undef SANS_SERIF
#undef TRUE

using $ColorArray = $Array<::java::awt::Color>;
using $MotifBorders$BevelBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$BevelBorder;
using $MotifBorders$FocusBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$FocusBorder;
using $MotifLookAndFeel = ::com::sun::java::swing::plaf::motif::MotifLookAndFeel;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $SystemColor = ::java::awt::SystemColor;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $Border = ::javax::swing::border::Border;
using $BorderUIResource$CompoundBorderUIResource = ::javax::swing::plaf::BorderUIResource$CompoundBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $MotifColorUtilities = ::sun::awt::X11::MotifColorUtilities;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XAWTLookAndFeel::init$() {
	$MotifLookAndFeel::init$();
}

void XAWTLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
	$var($StringArray, defaultSystemColors, $new($StringArray, {
		"desktop"_s,
		"#005C5C"_s,
		"activeCaption"_s,
		"#000080"_s,
		"activeCaptionText"_s,
		"#FFFFFF"_s,
		"activeCaptionBorder"_s,
		"#B24D7A"_s,
		"inactiveCaption"_s,
		"#AEB2C3"_s,
		"inactiveCaptionText"_s,
		"#000000"_s,
		"inactiveCaptionBorder"_s,
		"#AEB2C3"_s,
		"window"_s,
		"#AEB2C3"_s,
		"windowBorder"_s,
		"#AEB2C3"_s,
		"windowText"_s,
		"#000000"_s,
		"menu"_s,
		"#AEB2C3"_s,
		"menuText"_s,
		"#000000"_s,
		"text"_s,
		"#FFF7E9"_s,
		"textText"_s,
		"#000000"_s,
		"textHighlight"_s,
		"#000000"_s,
		"textHighlightText"_s,
		"#FFF7E9"_s,
		"textInactiveText"_s,
		"#808080"_s,
		"control"_s,
		"#AEB2C3"_s,
		"controlText"_s,
		"#000000"_s,
		"controlHighlight"_s,
		"#DCDEE5"_s,
		"controlLtHighlight"_s,
		"#DCDEE5"_s,
		"controlShadow"_s,
		"#63656F"_s,
		"controlLightShadow"_s,
		"#9397A5"_s,
		"controlDkShadow"_s,
		"#000000"_s,
		"scrollbar"_s,
		"#AEB2C3"_s,
		"info"_s,
		"#FFF7E9"_s,
		"infoText"_s,
		"#000000"_s
	}));
	loadSystemColors(table, defaultSystemColors, true);
}

void XAWTLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$MotifLookAndFeel::initComponentDefaults(table);
	$init($Font);
	$var($FontUIResource, dialogPlain12, $new($FontUIResource, $Font::DIALOG, $Font::PLAIN, 12));
	$var($FontUIResource, sansSerifPlain12, $new($FontUIResource, $Font::SANS_SERIF, $Font::PLAIN, 12));
	$var($FontUIResource, monospacedPlain12, $new($FontUIResource, $Font::MONOSPACED, $Font::PLAIN, 12));
	$init($Color);
	$var($ColorUIResource, red, $new($ColorUIResource, $Color::red));
	$var($ColorUIResource, black, $new($ColorUIResource, $Color::black));
	$var($ColorUIResource, white, $new($ColorUIResource, $Color::white));
	$var($ColorUIResource, lightGray, $new($ColorUIResource, $Color::lightGray));
	$init($SystemColor);
	$var($ColorUIResource, controlDarker, $new($ColorUIResource, $SystemColor::controlDkShadow));
	$var($Color, back, $nc(table)->getColor("control"_s));
	$var($ColorArray, colors, $XComponentPeer::getSystemColors());
	$var($Color, scrollBarBackground, $nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
	int32_t var$0 = $nc(scrollBarBackground)->getRed();
	int32_t var$1 = scrollBarBackground->getGreen();
	$var($Color, trackColor, $new($Color, $MotifColorUtilities::calculateSelectFromBackground(var$0, var$1, scrollBarBackground->getBlue())));
	$var($Color, var$2, table->getColor("controlShadow"_s));
	$var($Border, loweredBevelBorder, $new($MotifBorders$BevelBorder, false, var$2, $(table->getColor("controlLtHighlight"_s))));
	$var($Color, var$3, table->getColor("controlShadow"_s));
	$var($Border, raisedBevelBorder, $new($MotifBorders$BevelBorder, true, var$3, $(table->getColor("controlLtHighlight"_s))));
	$var($Border, marginBorder, $new($BasicBorders$MarginBorder));
	$var($Color, var$4, table->getColor("control"_s));
	$var($Border, focusBorder, $new($MotifBorders$FocusBorder, var$4, $(table->getColor("activeCaptionBorder"_s))));
	$var($Border, focusBevelBorder, $new($BorderUIResource$CompoundBorderUIResource, focusBorder, loweredBevelBorder));
	$var($Border, textFieldBorder, $new($BorderUIResource$CompoundBorderUIResource, focusBevelBorder, marginBorder));
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($Object, fieldInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"control C"_s,
		$DefaultEditorKit::copyAction,
		"control V"_s,
		$DefaultEditorKit::pasteAction,
		"control X"_s,
		$DefaultEditorKit::cutAction,
		"control INSERT"_s,
		$DefaultEditorKit::copyAction,
		"shift INSERT"_s,
		$DefaultEditorKit::pasteAction,
		"shift DELETE"_s,
		$DefaultEditorKit::cutAction,
		"control F"_s,
		$DefaultEditorKit::forwardAction,
		"control B"_s,
		$DefaultEditorKit::backwardAction,
		"control D"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"typed \b"_s,
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
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"control LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"control RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"control shift LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"control shift RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"control SLASH"_s,
		$DefaultEditorKit::selectAllAction,
		"HOME"_s,
		$DefaultEditorKit::beginLineAction,
		"END"_s,
		$DefaultEditorKit::endLineAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"control BACK_SLASH"_s,
		"unselect"_s,
		"ENTER"_s,
		$JTextField::notifyAction,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	$var($Object, passwordInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"control C"_s,
		$DefaultEditorKit::copyAction,
		"control V"_s,
		$DefaultEditorKit::pasteAction,
		"control X"_s,
		$DefaultEditorKit::cutAction,
		"control INSERT"_s,
		$DefaultEditorKit::copyAction,
		"shift INSERT"_s,
		$DefaultEditorKit::pasteAction,
		"shift DELETE"_s,
		$DefaultEditorKit::cutAction,
		"control F"_s,
		$DefaultEditorKit::forwardAction,
		"control B"_s,
		$DefaultEditorKit::backwardAction,
		"control D"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"typed \b"_s,
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
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"control LEFT"_s,
		$DefaultEditorKit::beginLineAction,
		"control RIGHT"_s,
		$DefaultEditorKit::endLineAction,
		"control shift LEFT"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"control shift RIGHT"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"control SLASH"_s,
		$DefaultEditorKit::selectAllAction,
		"HOME"_s,
		$DefaultEditorKit::beginLineAction,
		"END"_s,
		$DefaultEditorKit::endLineAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"control BACK_SLASH"_s,
		"unselect"_s,
		"ENTER"_s,
		$JTextField::notifyAction,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	$var($Object, multilineInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"control C"_s,
		$DefaultEditorKit::copyAction,
		"control V"_s,
		$DefaultEditorKit::pasteAction,
		"control X"_s,
		$DefaultEditorKit::cutAction,
		"control INSERT"_s,
		$DefaultEditorKit::copyAction,
		"shift INSERT"_s,
		$DefaultEditorKit::pasteAction,
		"shift DELETE"_s,
		$DefaultEditorKit::cutAction,
		"control F"_s,
		$DefaultEditorKit::forwardAction,
		"control B"_s,
		$DefaultEditorKit::backwardAction,
		"control D"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"typed \b"_s,
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
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"control LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"control RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"control shift LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"control shift RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"control SLASH"_s,
		$DefaultEditorKit::selectAllAction,
		"HOME"_s,
		$DefaultEditorKit::beginLineAction,
		"END"_s,
		$DefaultEditorKit::endLineAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"control N"_s,
		$DefaultEditorKit::downAction,
		"control P"_s,
		$DefaultEditorKit::upAction,
		"UP"_s,
		$DefaultEditorKit::upAction,
		"DOWN"_s,
		$DefaultEditorKit::downAction,
		"KP_UP"_s,
		$DefaultEditorKit::upAction,
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
		"shift DOWN"_s,
		$DefaultEditorKit::selectionDownAction,
		"shift KP_UP"_s,
		$DefaultEditorKit::selectionUpAction,
		"shift KP_DOWN"_s,
		$DefaultEditorKit::selectionDownAction,
		"ENTER"_s,
		$DefaultEditorKit::insertBreakAction,
		"TAB"_s,
		$DefaultEditorKit::insertTabAction,
		"control BACK_SLASH"_s,
		"unselect"_s,
		"control HOME"_s,
		$DefaultEditorKit::beginAction,
		"control END"_s,
		$DefaultEditorKit::endAction,
		"control shift HOME"_s,
		$DefaultEditorKit::selectionBeginAction,
		"control shift END"_s,
		$DefaultEditorKit::selectionEndAction,
		"control T"_s,
		"next-link-action"_s,
		"control shift T"_s,
		"previous-link-action"_s,
		"control SPACE"_s,
		"activate-link-action"_s,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	$var($Object, sliderFocusInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$var($ObjectArray, defaults, $new($ObjectArray, {
		"ScrollBar.background"_s,
		scrollBarBackground,
		"ScrollBar.foreground"_s,
		$(table->get("control"_s)),
		"ScrollBar.track"_s,
		trackColor,
		"ScrollBar.trackHighlight"_s,
		trackColor,
		"ScrollBar.thumb"_s,
		scrollBarBackground,
		"ScrollBar.thumbHighlight"_s,
		$(table->get("controlHighlight"_s)),
		"ScrollBar.thumbDarkShadow"_s,
		$(table->get("controlDkShadow"_s)),
		"ScrollBar.thumbShadow"_s,
		$(table->get("controlShadow"_s)),
		"ScrollBar.border"_s,
		loweredBevelBorder,
		"ScrollBar.allowsAbsolutePositioning"_s,
		$Boolean::TRUE,
		"ScrollBar.defaultWidth"_s,
		$($Integer::valueOf(17)),
		"ScrollBar.focusInputMap"_s,
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
			"ctrl PAGE_DOWN"_s,
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
			"ctrl PAGE_UP"_s,
			"negativeBlockIncrement"_s,
			"HOME"_s,
			"minScroll"_s,
			"END"_s,
			"maxScroll"_s
		})),
		"ScrollPane.font"_s,
		dialogPlain12,
		"ScrollPane.background"_s,
		scrollBarBackground,
		"ScrollPane.foreground"_s,
		$(table->get("controlText"_s)),
		"ScrollPane.border"_s,
		nullptr,
		"ScrollPane.viewportBorder"_s,
		loweredBevelBorder,
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
			"typed \b"_s,
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
		"TextField.caretForeground"_s,
		black,
		"TextField.caretBlinkRate"_s,
		$($Integer::valueOf(500)),
		"TextField.inactiveForeground"_s,
		$(table->get("textInactiveText"_s)),
		"TextField.selectionBackground"_s,
		$(table->get("textHighlight"_s)),
		"TextField.selectionForeground"_s,
		$(table->get("textHighlightText"_s)),
		"TextField.background"_s,
		$(table->get("window"_s)),
		"TextField.foreground"_s,
		$(table->get("textText"_s)),
		"TextField.font"_s,
		sansSerifPlain12,
		"TextField.border"_s,
		textFieldBorder,
		"TextField.focusInputMap"_s,
		fieldInputMap,
		"PasswordField.caretForeground"_s,
		black,
		"PasswordField.caretBlinkRate"_s,
		$($Integer::valueOf(500)),
		"PasswordField.inactiveForeground"_s,
		$(table->get("textInactiveText"_s)),
		"PasswordField.selectionBackground"_s,
		$(table->get("textHighlight"_s)),
		"PasswordField.selectionForeground"_s,
		$(table->get("textHighlightText"_s)),
		"PasswordField.background"_s,
		$(table->get("window"_s)),
		"PasswordField.foreground"_s,
		$(table->get("textText"_s)),
		"PasswordField.font"_s,
		sansSerifPlain12,
		"PasswordField.border"_s,
		textFieldBorder,
		"PasswordField.focusInputMap"_s,
		passwordInputMap,
		"TextArea.caretForeground"_s,
		black,
		"TextArea.caretBlinkRate"_s,
		$($Integer::valueOf(500)),
		"TextArea.inactiveForeground"_s,
		$(table->get("textInactiveText"_s)),
		"TextArea.selectionBackground"_s,
		$(table->get("textHighlight"_s)),
		"TextArea.selectionForeground"_s,
		$(table->get("textHighlightText"_s)),
		"TextArea.background"_s,
		$(table->get("window"_s)),
		"TextArea.foreground"_s,
		$(table->get("textText"_s)),
		"TextArea.font"_s,
		monospacedPlain12,
		"TextArea.border"_s,
		marginBorder,
		"TextArea.focusInputMap"_s,
		multilineInputMap
	}));
	table->putDefaults(defaults);
}

XAWTLookAndFeel::XAWTLookAndFeel() {
}

$Class* XAWTLookAndFeel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XAWTLookAndFeel, init$, void)},
		{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(XAWTLookAndFeel, initComponentDefaults, void, $UIDefaults*)},
		{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(XAWTLookAndFeel, initSystemColorDefaults, void, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XAWTLookAndFeel",
		"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XAWTLookAndFeel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XAWTLookAndFeel));
	});
	return class$;
}

$Class* XAWTLookAndFeel::class$ = nullptr;

		} // X11
	} // awt
} // sun