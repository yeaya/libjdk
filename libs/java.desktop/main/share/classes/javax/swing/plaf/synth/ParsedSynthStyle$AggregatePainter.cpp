#include <javax/swing/plaf/synth/ParsedSynthStyle$AggregatePainter.h>

#include <java/awt/Graphics.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _ParsedSynthStyle$AggregatePainter_FieldInfo_[] = {
	{"painters", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/plaf/synth/SynthPainter;>;", $PRIVATE, $field(ParsedSynthStyle$AggregatePainter, painters)},
	{}
};

$MethodInfo _ParsedSynthStyle$AggregatePainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthPainter;)V", nullptr, 0, $method(ParsedSynthStyle$AggregatePainter, init$, void, $SynthPainter*)},
	{"addPainter", "(Ljavax/swing/plaf/synth/SynthPainter;)V", nullptr, 0, $virtualMethod(ParsedSynthStyle$AggregatePainter, addPainter, void, $SynthPainter*)},
	{"paintArrowButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintArrowButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintArrowButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintArrowButtonForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintCheckBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintCheckBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintCheckBoxMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintCheckBoxMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintColorChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintColorChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintComboBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintComboBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintDesktopIconBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintDesktopIconBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintDesktopPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintDesktopPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintEditorPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintEditorPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintFileChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintFileChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintFormattedTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintFormattedTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintInternalFrameBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintInternalFrameBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintInternalFrameTitlePaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintInternalFrameTitlePaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintLabelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintLabelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintListBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintListBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintMenuBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintMenuBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintOptionPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintOptionPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintPanelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintPanelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintPasswordFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintPasswordFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintPopupMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintPopupMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintProgressBarForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintRadioButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintRadioButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintRadioButtonMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintRadioButtonMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintRootPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintRootPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintScrollPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSeparatorForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSpinnerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSpinnerBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSplitPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSplitPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSplitPaneDividerForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDragDivider", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintSplitPaneDragDivider, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTableBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTableBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTableHeaderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTableHeaderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTextAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTextAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTextPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTextPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToggleButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToggleButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolTipBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintToolTipBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTreeBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTreeBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTreeCellBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTreeCellBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellFocus", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintTreeCellFocus, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintViewportBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$AggregatePainter, paintViewportBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _ParsedSynthStyle$AggregatePainter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.ParsedSynthStyle$AggregatePainter", "javax.swing.plaf.synth.ParsedSynthStyle", "AggregatePainter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ParsedSynthStyle$AggregatePainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.ParsedSynthStyle$AggregatePainter",
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	_ParsedSynthStyle$AggregatePainter_FieldInfo_,
	_ParsedSynthStyle$AggregatePainter_MethodInfo_,
	nullptr,
	nullptr,
	_ParsedSynthStyle$AggregatePainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.ParsedSynthStyle"
};

$Object* allocate$ParsedSynthStyle$AggregatePainter($Class* clazz) {
	return $of($alloc(ParsedSynthStyle$AggregatePainter));
}

void ParsedSynthStyle$AggregatePainter::init$($SynthPainter* painter) {
	$SynthPainter::init$();
	$set(this, painters, $new($LinkedList));
	$nc(this->painters)->add(painter);
}

void ParsedSynthStyle$AggregatePainter::addPainter($SynthPainter* painter) {
	if (painter != nullptr) {
		$nc(this->painters)->add(painter);
	}
}

void ParsedSynthStyle$AggregatePainter::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintArrowButtonBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintArrowButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintArrowButtonBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintArrowButtonForeground(context, g, x, y, w, h, direction);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintButtonBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintButtonBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintCheckBoxMenuItemBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintCheckBoxMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintCheckBoxMenuItemBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintCheckBoxBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintCheckBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintCheckBoxBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintColorChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintColorChooserBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintColorChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintColorChooserBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintComboBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintComboBoxBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintComboBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintComboBoxBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintDesktopIconBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintDesktopIconBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintDesktopIconBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintDesktopPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintDesktopPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintDesktopPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintEditorPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintEditorPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintEditorPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintFileChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintFileChooserBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintFileChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintFileChooserBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintFormattedTextFieldBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintFormattedTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintFormattedTextFieldBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintInternalFrameTitlePaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintInternalFrameTitlePaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintInternalFrameTitlePaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintInternalFrameTitlePaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintInternalFrameBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintInternalFrameBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintInternalFrameBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintLabelBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintLabelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintLabelBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintListBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintListBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintListBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuBarBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuBarBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuItemBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuItemBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintOptionPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintOptionPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintOptionPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintOptionPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPanelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPanelBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPanelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPanelBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPasswordFieldBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPasswordFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPasswordFieldBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPopupMenuBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPopupMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPopupMenuBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarForeground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRadioButtonMenuItemBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRadioButtonMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRadioButtonMenuItemBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRadioButtonBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRadioButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRadioButtonBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRootPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRootPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRootPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarThumbBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarThumbBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarTrackBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarTrackBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarTrackBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarTrackBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorForeground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderThumbBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderThumbBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderTrackBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderTrackBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderTrackBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderTrackBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSpinnerBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSpinnerBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSpinnerBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneDividerBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneDividerBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneDividerForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneDividerForeground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneDragDivider(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabAreaBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabAreaBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabAreaBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabAreaBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabBackground(context, g, x, y, w, h, tabIndex);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabBackground(context, g, x, y, w, h, tabIndex, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabBorder(context, g, x, y, w, h, tabIndex);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabBorder(context, g, x, y, w, h, tabIndex, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneContentBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneContentBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTableHeaderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTableHeaderBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTableHeaderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTableHeaderBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTableBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTableBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTableBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTableBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextAreaBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextAreaBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextFieldBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextFieldBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToggleButtonBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToggleButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToggleButtonBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarContentBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarContentBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarContentBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarContentBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarDragWindowBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarDragWindowBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarDragWindowBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarDragWindowBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolTipBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolTipBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolTipBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeCellBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeCellBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeCellBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeCellFocus(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintViewportBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintViewportBorder(context, g, x, y, w, h);
			}
		}
	}
}

ParsedSynthStyle$AggregatePainter::ParsedSynthStyle$AggregatePainter() {
}

$Class* ParsedSynthStyle$AggregatePainter::load$($String* name, bool initialize) {
	$loadClass(ParsedSynthStyle$AggregatePainter, name, initialize, &_ParsedSynthStyle$AggregatePainter_ClassInfo_, allocate$ParsedSynthStyle$AggregatePainter);
	return class$;
}

$Class* ParsedSynthStyle$AggregatePainter::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax