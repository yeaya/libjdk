#include <javax/swing/plaf/nimbus/SynthPainterImpl.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/Painter.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/nimbus/NimbusStyle.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

#undef BOTTOM
#undef EAST
#undef HORIZONTAL
#undef HORIZONTAL_SPLIT
#undef LEFT
#undef NORTH
#undef RIGHT
#undef SOUTH
#undef TRUE
#undef TYPE_INT_ARGB
#undef VERTICAL
#undef WEST

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $JSplitPane = ::javax::swing::JSplitPane;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $Painter = ::javax::swing::Painter;
using $SwingConstants = ::javax::swing::SwingConstants;
using $NimbusStyle = ::javax::swing::plaf::nimbus::NimbusStyle;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _SynthPainterImpl_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/nimbus/NimbusStyle;", nullptr, $PRIVATE, $field(SynthPainterImpl, style)},
	{}
};

$MethodInfo _SynthPainterImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusStyle;)V", nullptr, 0, $method(SynthPainterImpl, init$, void, $NimbusStyle*)},
	{"paint", "(Ljavax/swing/Painter;Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", "(Ljavax/swing/Painter<Ljava/lang/Object;>;Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", $PRIVATE, $method(SynthPainterImpl, paint, void, $Painter*, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, $AffineTransform*)},
	{"paintArrowButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintArrowButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintArrowButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintArrowButtonForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(SynthPainterImpl, paintBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, $AffineTransform*)},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PRIVATE, $method(SynthPainterImpl, paintBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(SynthPainterImpl, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, $AffineTransform*)},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PRIVATE, $method(SynthPainterImpl, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintCheckBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintCheckBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintCheckBoxMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintCheckBoxMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintColorChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintColorChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintComboBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintComboBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintDesktopIconBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintDesktopIconBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintDesktopPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintDesktopPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintEditorPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintEditorPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintFileChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintFileChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(SynthPainterImpl, paintForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, $AffineTransform*)},
	{"paintForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PRIVATE, $method(SynthPainterImpl, paintForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintFormattedTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintFormattedTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintInternalFrameBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintInternalFrameBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintInternalFrameTitlePaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintInternalFrameTitlePaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintLabelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintLabelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintListBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintListBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintMenuBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintMenuBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintOptionPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintOptionPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintPanelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintPanelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintPasswordFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintPasswordFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintPopupMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintPopupMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintProgressBarForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintRadioButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintRadioButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintRadioButtonMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintRadioButtonMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintRootPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintRootPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintScrollPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSeparatorForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSpinnerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSpinnerBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSplitPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSplitPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSplitPaneDividerForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDragDivider", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintSplitPaneDragDivider, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTableBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTableBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTableHeaderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTableHeaderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTextAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTextAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTextPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTextPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToggleButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToggleButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolTipBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintToolTipBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTreeBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTreeBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTreeCellBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTreeCellBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellFocus", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintTreeCellFocus, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintViewportBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthPainterImpl, paintViewportBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _SynthPainterImpl_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.SynthPainterImpl",
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	_SynthPainterImpl_FieldInfo_,
	_SynthPainterImpl_MethodInfo_
};

$Object* allocate$SynthPainterImpl($Class* clazz) {
	return $of($alloc(SynthPainterImpl));
}

void SynthPainterImpl::init$($NimbusStyle* style) {
	$SynthPainter::init$();
	$set(this, style, style);
}

void SynthPainterImpl::paint($Painter* p, $SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $AffineTransform* transform) {
	$useLocalCurrentObjectStackCache();
	if (p != nullptr) {
		if ($instanceOf($Graphics2D, g)) {
			$var($Graphics2D, gfx, $cast($Graphics2D, g));
			if (transform != nullptr) {
				$nc(gfx)->transform(transform);
			}
			$nc(gfx)->translate(x, y);
			p->paint(gfx, $($nc(ctx)->getComponent()), w, h);
			gfx->translate(-x, -y);
			if (transform != nullptr) {
				try {
					gfx->transform($(transform->createInverse()));
				} catch ($NoninvertibleTransformException& e) {
					e->printStackTrace();
				}
			}
		} else {
			$var($BufferedImage, img, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB));
			$var($Graphics2D, gfx, img->createGraphics());
			if (transform != nullptr) {
				$nc(gfx)->transform(transform);
			}
			p->paint(gfx, $($nc(ctx)->getComponent()), w, h);
			$nc(gfx)->dispose();
			$nc(g)->drawImage(img, x, y, nullptr);
			$assign(img, nullptr);
		}
	}
}

void SynthPainterImpl::paintBackground($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $AffineTransform* transform) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(ctx)->getComponent());
	$var($Color, bg, (c != nullptr) ? $nc(c)->getBackground() : ($Color*)nullptr);
	if (bg == nullptr || $nc(bg)->getAlpha() > 0) {
		$var($Painter, backgroundPainter, $nc(this->style)->getBackgroundPainter(ctx));
		if (backgroundPainter != nullptr) {
			paint(backgroundPainter, ctx, g, x, y, w, h, transform);
		}
	}
}

void SynthPainterImpl::paintForeground($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $AffineTransform* transform) {
	$var($Painter, foregroundPainter, $nc(this->style)->getForegroundPainter(ctx));
	if (foregroundPainter != nullptr) {
		paint(foregroundPainter, ctx, g, x, y, w, h, transform);
	}
}

void SynthPainterImpl::paintBorder($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $AffineTransform* transform) {
	$var($Painter, borderPainter, $nc(this->style)->getBorderPainter(ctx));
	if (borderPainter != nullptr) {
		paint(borderPainter, ctx, g, x, y, w, h, transform);
	}
}

void SynthPainterImpl::paintBackground($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(ctx)->getComponent());
	bool ltr = $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
	if ($instanceOf($JSlider, $(ctx->getComponent()))) {
		ltr = true;
	}
	if (orientation == $SwingConstants::VERTICAL && ltr) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBackground(ctx, g, y, x, h, w, transform);
	} else if (orientation == $SwingConstants::VERTICAL) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintBackground(ctx, g, y, x, h, w, transform);
	} else if (orientation == $SwingConstants::HORIZONTAL && ltr) {
		paintBackground(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(ctx, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintBorder($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(ctx)->getComponent());
	bool ltr = $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
	if (orientation == $SwingConstants::VERTICAL && ltr) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBorder(ctx, g, y, x, h, w, transform);
	} else if (orientation == $SwingConstants::VERTICAL) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintBorder(ctx, g, y, 0, h, w, transform);
	} else if (orientation == $SwingConstants::HORIZONTAL && ltr) {
		paintBorder(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		paintBorder(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintForeground($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(ctx)->getComponent());
	bool ltr = $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
	if (orientation == $SwingConstants::VERTICAL && ltr) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintForeground(ctx, g, y, x, h, w, transform);
	} else if (orientation == $SwingConstants::VERTICAL) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintForeground(ctx, g, y, 0, h, w, transform);
	} else if (orientation == $SwingConstants::HORIZONTAL && ltr) {
		paintForeground(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		paintForeground(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintArrowButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$var($String, compName, $nc($($nc(context)->getComponent()))->getName());
	bool ltr = $nc($($nc($(context->getComponent()))->getComponentOrientation()))->isLeftToRight();
	bool var$0 = "Spinner.nextButton"_s->equals(compName);
	if (var$0 || "Spinner.previousButton"_s->equals(compName)) {
		if (ltr) {
			paintForeground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
		} else {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->translate((double)w, (double)0);
			transform->scale((double)-1, (double)1);
			paintForeground(context, g, x, y, w, h, transform);
		}
	} else if (direction == $SwingConstants::WEST) {
		paintForeground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else if (direction == $SwingConstants::NORTH) {
		if (ltr) {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->scale((double)-1, (double)1);
			transform->rotate($Math::toRadians((double)90));
			paintForeground(context, g, y, 0, h, w, transform);
		} else {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->rotate($Math::toRadians((double)90));
			transform->translate((double)0, (double)(-((double)(x + w))));
			paintForeground(context, g, y, 0, h, w, transform);
		}
	} else if (direction == $SwingConstants::EAST) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)w, (double)0);
		transform->scale((double)-1, (double)1);
		paintForeground(context, g, x, y, w, h, transform);
	} else if (direction == $SwingConstants::SOUTH) {
		if (ltr) {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->rotate($Math::toRadians((double)-90));
			transform->translate((double)(-h), (double)0);
			paintForeground(context, g, y, x, h, w, transform);
		} else {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->scale((double)-1, (double)1);
			transform->rotate($Math::toRadians((double)-90));
			transform->translate((double)(-((double)(h + y))), (double)(-((double)(w + x))));
			paintForeground(context, g, y, x, h, w, transform);
		}
	}
}

void SynthPainterImpl::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintCheckBoxMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintCheckBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintColorChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintColorChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintComboBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintComboBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintDesktopIconBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintDesktopPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintEditorPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintFileChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintFileChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintFormattedTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBorder(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintInternalFrameTitlePaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintInternalFrameTitlePaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintInternalFrameBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintLabelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintListBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintOptionPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintOptionPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPanelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPanelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPasswordFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPopupMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintForeground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRadioButtonMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRadioButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRootPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSeparatorForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintForeground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$init($Boolean);
	if ($equals($nc($($nc(context)->getComponent()))->getClientProperty("Slider.paintThumbArrowShape"_s), $Boolean::TRUE)) {
		if (orientation == $JSlider::HORIZONTAL) {
			orientation = $JSlider::VERTICAL;
		} else {
			orientation = $JSlider::HORIZONTAL;
		}
		paintBackground(context, g, x, y, w, h, orientation);
	} else {
		paintBackground(context, g, x, y, w, h, orientation);
	}
}

void SynthPainterImpl::paintSliderThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSpinnerBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	if (orientation == $JSplitPane::HORIZONTAL_SPLIT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBackground(context, g, y, x, h, w, transform);
	} else {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintSplitPaneDividerForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintForeground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	if (orientation == $JTabbedPane::LEFT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBackground(context, g, y, x, h, w, transform);
	} else if (orientation == $JTabbedPane::RIGHT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintBackground(context, g, y, 0, h, w, transform);
	} else if (orientation == $JTabbedPane::BOTTOM) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)1, (double)-1);
		transform->translate((double)0, (double)(-h));
		paintBackground(context, g, 0, 0, w, h, transform);
	} else {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	if (orientation == $JTabbedPane::LEFT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBackground(context, g, y, x, h, w, transform);
	} else if (orientation == $JTabbedPane::RIGHT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintBackground(context, g, y, 0, h, w, transform);
	} else if (orientation == $JTabbedPane::BOTTOM) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)1, (double)-1);
		transform->translate((double)0, (double)(-h));
		paintBackground(context, g, 0, 0, w, h, transform);
	} else {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTableHeaderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTableHeaderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTableBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTableBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBorder(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToggleButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolTipBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeCellBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainterImpl::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

SynthPainterImpl::SynthPainterImpl() {
}

$Class* SynthPainterImpl::load$($String* name, bool initialize) {
	$loadClass(SynthPainterImpl, name, initialize, &_SynthPainterImpl_ClassInfo_, allocate$SynthPainterImpl);
	return class$;
}

$Class* SynthPainterImpl::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax