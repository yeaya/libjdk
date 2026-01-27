#include <javax/swing/plaf/synth/ParsedSynthStyle$DelegatingPainter.h>

#include <java/awt/Graphics.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsedSynthStyle = ::javax::swing::plaf::synth::ParsedSynthStyle;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _ParsedSynthStyle$DelegatingPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ParsedSynthStyle$DelegatingPainter, init$, void)},
	{"getPainter", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/String;I)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PRIVATE | $STATIC, $staticMethod(ParsedSynthStyle$DelegatingPainter, getPainter, $SynthPainter*, $SynthContext*, $String*, int32_t)},
	{"paintArrowButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintArrowButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintArrowButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintArrowButtonForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintCheckBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintCheckBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintCheckBoxMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintCheckBoxMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintColorChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintColorChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintComboBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintComboBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintDesktopIconBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintDesktopIconBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintDesktopPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintDesktopPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintEditorPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintEditorPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintFileChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintFileChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintFormattedTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintFormattedTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintInternalFrameBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintInternalFrameBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintInternalFrameTitlePaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintInternalFrameTitlePaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintLabelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintLabelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintListBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintListBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintMenuBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintMenuBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintOptionPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintOptionPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintPanelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintPanelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintPasswordFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintPasswordFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintPopupMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintPopupMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintProgressBarForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintRadioButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintRadioButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintRadioButtonMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintRadioButtonMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintRootPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintRootPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintScrollPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSeparatorForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSpinnerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSpinnerBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSplitPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSplitPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSplitPaneDividerForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDragDivider", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintSplitPaneDragDivider, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTableBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTableBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTableHeaderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTableHeaderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTextAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTextAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTextPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTextPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToggleButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToggleButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolTipBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintToolTipBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTreeBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTreeBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTreeCellBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTreeCellBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellFocus", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintTreeCellFocus, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintViewportBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$DelegatingPainter, paintViewportBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _ParsedSynthStyle$DelegatingPainter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.ParsedSynthStyle$DelegatingPainter", "javax.swing.plaf.synth.ParsedSynthStyle", "DelegatingPainter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ParsedSynthStyle$DelegatingPainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.ParsedSynthStyle$DelegatingPainter",
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	nullptr,
	_ParsedSynthStyle$DelegatingPainter_MethodInfo_,
	nullptr,
	nullptr,
	_ParsedSynthStyle$DelegatingPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.ParsedSynthStyle"
};

$Object* allocate$ParsedSynthStyle$DelegatingPainter($Class* clazz) {
	return $of($alloc(ParsedSynthStyle$DelegatingPainter));
}

void ParsedSynthStyle$DelegatingPainter::init$() {
	$SynthPainter::init$();
}

$SynthPainter* ParsedSynthStyle$DelegatingPainter::getPainter($SynthContext* context, $String* method, int32_t direction) {
	$init(ParsedSynthStyle$DelegatingPainter);
	return $nc(($cast($ParsedSynthStyle, $($nc(context)->getStyle()))))->getBestPainter(context, method, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "arrowbuttonbackground"_s, -1)))->paintArrowButtonBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintArrowButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "arrowbuttonborder"_s, -1)))->paintArrowButtonBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "arrowbuttonforeground"_s, direction)))->paintArrowButtonForeground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "buttonbackground"_s, -1)))->paintButtonBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "buttonborder"_s, -1)))->paintButtonBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "checkboxmenuitembackground"_s, -1)))->paintCheckBoxMenuItemBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintCheckBoxMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "checkboxmenuitemborder"_s, -1)))->paintCheckBoxMenuItemBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "checkboxbackground"_s, -1)))->paintCheckBoxBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintCheckBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "checkboxborder"_s, -1)))->paintCheckBoxBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintColorChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "colorchooserbackground"_s, -1)))->paintColorChooserBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintColorChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "colorchooserborder"_s, -1)))->paintColorChooserBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintComboBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "comboboxbackground"_s, -1)))->paintComboBoxBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintComboBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "comboboxborder"_s, -1)))->paintComboBoxBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintDesktopIconBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "desktopiconbackground"_s, -1)))->paintDesktopIconBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "desktopiconborder"_s, -1)))->paintDesktopIconBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "desktoppanebackground"_s, -1)))->paintDesktopPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintDesktopPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "desktoppaneborder"_s, -1)))->paintDesktopPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "editorpanebackground"_s, -1)))->paintEditorPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintEditorPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "editorpaneborder"_s, -1)))->paintEditorPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintFileChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "filechooserbackground"_s, -1)))->paintFileChooserBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintFileChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "filechooserborder"_s, -1)))->paintFileChooserBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "formattedtextfieldbackground"_s, -1)))->paintFormattedTextFieldBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintFormattedTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "formattedtextfieldborder"_s, -1)))->paintFormattedTextFieldBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintInternalFrameTitlePaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "internalframetitlepanebackground"_s, -1)))->paintInternalFrameTitlePaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintInternalFrameTitlePaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "internalframetitlepaneborder"_s, -1)))->paintInternalFrameTitlePaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintInternalFrameBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "internalframebackground"_s, -1)))->paintInternalFrameBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "internalframeborder"_s, -1)))->paintInternalFrameBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "labelbackground"_s, -1)))->paintLabelBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintLabelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "labelborder"_s, -1)))->paintLabelBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "listbackground"_s, -1)))->paintListBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintListBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "listborder"_s, -1)))->paintListBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menubarbackground"_s, -1)))->paintMenuBarBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menubarborder"_s, -1)))->paintMenuBarBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menuitembackground"_s, -1)))->paintMenuItemBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menuitemborder"_s, -1)))->paintMenuItemBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menubackground"_s, -1)))->paintMenuBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menuborder"_s, -1)))->paintMenuBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintOptionPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "optionpanebackground"_s, -1)))->paintOptionPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintOptionPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "optionpaneborder"_s, -1)))->paintOptionPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPanelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "panelbackground"_s, -1)))->paintPanelBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPanelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "panelborder"_s, -1)))->paintPanelBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "passwordfieldbackground"_s, -1)))->paintPasswordFieldBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPasswordFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "passwordfieldborder"_s, -1)))->paintPasswordFieldBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "popupmenubackground"_s, -1)))->paintPopupMenuBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPopupMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "popupmenuborder"_s, -1)))->paintPopupMenuBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "progressbarbackground"_s, -1)))->paintProgressBarBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "progressbarbackground"_s, direction)))->paintProgressBarBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "progressbarborder"_s, -1)))->paintProgressBarBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "progressbarborder"_s, direction)))->paintProgressBarBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "progressbarforeground"_s, direction)))->paintProgressBarForeground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "radiobuttonmenuitembackground"_s, -1)))->paintRadioButtonMenuItemBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRadioButtonMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "radiobuttonmenuitemborder"_s, -1)))->paintRadioButtonMenuItemBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "radiobuttonbackground"_s, -1)))->paintRadioButtonBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRadioButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "radiobuttonborder"_s, -1)))->paintRadioButtonBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "rootpanebackground"_s, -1)))->paintRootPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRootPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "rootpaneborder"_s, -1)))->paintRootPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollbarbackground"_s, -1)))->paintScrollBarBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "scrollbarbackground"_s, direction)))->paintScrollBarBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollbarborder"_s, -1)))->paintScrollBarBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "scrollbarborder"_s, orientation)))->paintScrollBarBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "scrollbarthumbbackground"_s, direction)))->paintScrollBarThumbBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "scrollbarthumbborder"_s, direction)))->paintScrollBarThumbBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollbartrackbackground"_s, -1)))->paintScrollBarTrackBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "scrollbartrackbackground"_s, direction)))->paintScrollBarTrackBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollbartrackborder"_s, -1)))->paintScrollBarTrackBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "scrollbartrackborder"_s, orientation)))->paintScrollBarTrackBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollpanebackground"_s, -1)))->paintScrollPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollpaneborder"_s, -1)))->paintScrollPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "separatorbackground"_s, -1)))->paintSeparatorBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "separatorbackground"_s, orientation)))->paintSeparatorBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "separatorborder"_s, -1)))->paintSeparatorBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "separatorborder"_s, orientation)))->paintSeparatorBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "separatorforeground"_s, direction)))->paintSeparatorForeground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "sliderbackground"_s, -1)))->paintSliderBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "sliderbackground"_s, direction)))->paintSliderBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "sliderborder"_s, -1)))->paintSliderBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "sliderborder"_s, direction)))->paintSliderBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "sliderthumbbackground"_s, direction)))->paintSliderThumbBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "sliderthumbborder"_s, direction)))->paintSliderThumbBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "slidertrackbackground"_s, -1)))->paintSliderTrackBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "slidertrackbackground"_s, direction)))->paintSliderTrackBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "slidertrackborder"_s, -1)))->paintSliderTrackBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "slidertrackborder"_s, direction)))->paintSliderTrackBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "spinnerbackground"_s, -1)))->paintSpinnerBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSpinnerBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "spinnerborder"_s, -1)))->paintSpinnerBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "splitpanedividerbackground"_s, -1)))->paintSplitPaneDividerBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "splitpanedividerbackground"_s, orientation)))->paintSplitPaneDividerBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneDividerForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "splitpanedividerforeground"_s, direction)))->paintSplitPaneDividerForeground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "splitpanedragdivider"_s, direction)))->paintSplitPaneDragDivider(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "splitpanebackground"_s, -1)))->paintSplitPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "splitpaneborder"_s, -1)))->paintSplitPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanebackground"_s, -1)))->paintTabbedPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpaneborder"_s, -1)))->paintTabbedPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanetabareabackground"_s, -1)))->paintTabbedPaneTabAreaBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "tabbedpanetabareabackground"_s, orientation)))->paintTabbedPaneTabAreaBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanetabareaborder"_s, -1)))->paintTabbedPaneTabAreaBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "tabbedpanetabareaborder"_s, orientation)))->paintTabbedPaneTabAreaBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "tabbedpanetabbackground"_s, -1)))->paintTabbedPaneTabBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t direction) {
	$nc($(getPainter(context, "tabbedpanetabbackground"_s, direction)))->paintTabbedPaneTabBackground(context, g, x, y, w, h, tabIndex, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "tabbedpanetabborder"_s, -1)))->paintTabbedPaneTabBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t direction) {
	$nc($(getPainter(context, "tabbedpanetabborder"_s, direction)))->paintTabbedPaneTabBorder(context, g, x, y, w, h, tabIndex, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanecontentbackground"_s, -1)))->paintTabbedPaneContentBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanecontentborder"_s, -1)))->paintTabbedPaneContentBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTableHeaderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tableheaderbackground"_s, -1)))->paintTableHeaderBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTableHeaderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tableheaderborder"_s, -1)))->paintTableHeaderBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTableBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tablebackground"_s, -1)))->paintTableBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTableBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tableborder"_s, -1)))->paintTableBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textareabackground"_s, -1)))->paintTextAreaBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textareaborder"_s, -1)))->paintTextAreaBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textpanebackground"_s, -1)))->paintTextPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textpaneborder"_s, -1)))->paintTextPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textfieldbackground"_s, -1)))->paintTextFieldBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textfieldborder"_s, -1)))->paintTextFieldBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "togglebuttonbackground"_s, -1)))->paintToggleButtonBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToggleButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "togglebuttonborder"_s, -1)))->paintToggleButtonBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbarbackground"_s, -1)))->paintToolBarBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbarbackground"_s, orientation)))->paintToolBarBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbarborder"_s, -1)))->paintToolBarBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbarborder"_s, orientation)))->paintToolBarBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbarcontentbackground"_s, -1)))->paintToolBarContentBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbarcontentbackground"_s, orientation)))->paintToolBarContentBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbarcontentborder"_s, -1)))->paintToolBarContentBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbarcontentborder"_s, orientation)))->paintToolBarContentBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbardragwindowbackground"_s, -1)))->paintToolBarDragWindowBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbardragwindowbackground"_s, orientation)))->paintToolBarDragWindowBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbardragwindowborder"_s, -1)))->paintToolBarDragWindowBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbardragwindowborder"_s, orientation)))->paintToolBarDragWindowBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tooltipbackground"_s, -1)))->paintToolTipBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolTipBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tooltipborder"_s, -1)))->paintToolTipBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treebackground"_s, -1)))->paintTreeBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treeborder"_s, -1)))->paintTreeBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treecellbackground"_s, -1)))->paintTreeCellBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeCellBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treecellborder"_s, -1)))->paintTreeCellBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treecellfocus"_s, -1)))->paintTreeCellFocus(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "viewportbackground"_s, -1)))->paintViewportBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "viewportborder"_s, -1)))->paintViewportBorder(context, g, x, y, w, h);
}

ParsedSynthStyle$DelegatingPainter::ParsedSynthStyle$DelegatingPainter() {
}

$Class* ParsedSynthStyle$DelegatingPainter::load$($String* name, bool initialize) {
	$loadClass(ParsedSynthStyle$DelegatingPainter, name, initialize, &_ParsedSynthStyle$DelegatingPainter_ClassInfo_, allocate$ParsedSynthStyle$DelegatingPainter);
	return class$;
}

$Class* ParsedSynthStyle$DelegatingPainter::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax