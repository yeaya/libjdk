#include <javax/swing/plaf/synth/SynthPainter.h>

#include <java/awt/Graphics.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter$1.h>
#include <jcpp.h>

#undef NULL_PAINTER

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter$1 = ::javax::swing::plaf::synth::SynthPainter$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthPainter_FieldInfo_[] = {
	{"NULL_PAINTER", "Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $STATIC, $staticField(SynthPainter, NULL_PAINTER)},
	{}
};

$MethodInfo _SynthPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SynthPainter, init$, void)},
	{"paintArrowButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintArrowButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintArrowButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintArrowButtonForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintCheckBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintCheckBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintCheckBoxMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintCheckBoxMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintColorChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintColorChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintComboBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintComboBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintDesktopIconBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintDesktopIconBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintDesktopPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintDesktopPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintEditorPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintEditorPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintFileChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintFileChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintFormattedTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintFormattedTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintInternalFrameBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintInternalFrameBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintInternalFrameTitlePaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintInternalFrameTitlePaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintLabelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintLabelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintListBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintListBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintMenuBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintMenuBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintOptionPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintOptionPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintPanelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintPanelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintPasswordFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintPasswordFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintPopupMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintPopupMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintProgressBarForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintRadioButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintRadioButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintRadioButtonMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintRadioButtonMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintRootPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintRootPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintScrollPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSeparatorForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSpinnerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSpinnerBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSplitPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSplitPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSplitPaneDividerForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDragDivider", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintSplitPaneDragDivider, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTableBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTableBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTableHeaderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTableHeaderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTextAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTextAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTextPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTextPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToggleButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToggleButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolTipBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintToolTipBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTreeBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTreeBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTreeCellBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTreeCellBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellFocus", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintTreeCellFocus, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintViewportBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainter, paintViewportBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _SynthPainter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthPainter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.synth.SynthPainter",
	"java.lang.Object",
	nullptr,
	_SynthPainter_FieldInfo_,
	_SynthPainter_MethodInfo_,
	nullptr,
	nullptr,
	_SynthPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthPainter$1"
};

$Object* allocate$SynthPainter($Class* clazz) {
	return $of($alloc(SynthPainter));
}

SynthPainter* SynthPainter::NULL_PAINTER = nullptr;

void SynthPainter::init$() {
}

void SynthPainter::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintArrowButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
}

void SynthPainter::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintCheckBoxMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintCheckBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintColorChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintColorChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintComboBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintComboBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintDesktopIconBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintDesktopPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintEditorPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintFileChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintFileChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintFormattedTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintInternalFrameTitlePaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintInternalFrameTitlePaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintInternalFrameBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintLabelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintListBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintOptionPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintOptionPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPanelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPanelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPasswordFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPopupMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintProgressBarBackground(context, g, x, y, w, h);
}

void SynthPainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintProgressBarBorder(context, g, x, y, w, h);
}

void SynthPainter::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRadioButtonMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRadioButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRootPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintScrollBarBackground(context, g, x, y, w, h);
}

void SynthPainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintScrollBarBorder(context, g, x, y, w, h);
}

void SynthPainter::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintScrollBarThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintScrollBarTrackBackground(context, g, x, y, w, h);
}

void SynthPainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintScrollBarTrackBorder(context, g, x, y, w, h);
}

void SynthPainter::paintScrollPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSeparatorBackground(context, g, x, y, w, h);
}

void SynthPainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSeparatorBorder(context, g, x, y, w, h);
}

void SynthPainter::paintSeparatorForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSliderBackground(context, g, x, y, w, h);
}

void SynthPainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSliderBorder(context, g, x, y, w, h);
}

void SynthPainter::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSliderThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSliderTrackBackground(context, g, x, y, w, h);
}

void SynthPainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSliderTrackBorder(context, g, x, y, w, h);
}

void SynthPainter::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSpinnerBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSplitPaneDividerBackground(context, g, x, y, w, h);
}

void SynthPainter::paintSplitPaneDividerForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSplitPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSplitPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintTabbedPaneTabAreaBackground(context, g, x, y, w, h);
}

void SynthPainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintTabbedPaneTabAreaBorder(context, g, x, y, w, h);
}

void SynthPainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
}

void SynthPainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	paintTabbedPaneTabBackground(context, g, x, y, w, h, tabIndex);
}

void SynthPainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
}

void SynthPainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	paintTabbedPaneTabBorder(context, g, x, y, w, h, tabIndex);
}

void SynthPainter::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTableHeaderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTableHeaderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTableBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTableBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToggleButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarBackground(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarBorder(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarContentBackground(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarContentBorder(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarDragWindowBackground(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarDragWindowBorder(context, g, x, y, w, h);
}

void SynthPainter::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolTipBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeCellBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void clinit$SynthPainter($Class* class$) {
	$assignStatic(SynthPainter::NULL_PAINTER, $new($SynthPainter$1));
}

SynthPainter::SynthPainter() {
}

$Class* SynthPainter::load$($String* name, bool initialize) {
	$loadClass(SynthPainter, name, initialize, &_SynthPainter_ClassInfo_, clinit$SynthPainter, allocate$SynthPainter);
	return class$;
}

$Class* SynthPainter::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax