#include <javax/swing/plaf/synth/ImagePainter.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/ref/WeakReference.h>
#include <java/net/URL.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/plaf/synth/Paint9Painter$PaintType.h>
#include <sun/swing/plaf/synth/Paint9Painter.h>
#include <jcpp.h>

#undef CACHE_KEY
#undef CENTER
#undef PAINT9_STRETCH
#undef PAINT9_TILE
#undef PAINT_ALL
#undef PAINT_CENTER

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $WeakReference = ::java::lang::ref::WeakReference;
using $URL = ::java::net::URL;
using $ImageIcon = ::javax::swing::ImageIcon;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $AppContext = ::sun::awt::AppContext;
using $Paint9Painter = ::sun::swing::plaf::synth::Paint9Painter;
using $Paint9Painter$PaintType = ::sun::swing::plaf::synth::Paint9Painter$PaintType;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _ImagePainter_FieldInfo_[] = {
	{"CACHE_KEY", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImagePainter, CACHE_KEY)},
	{"image", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(ImagePainter, image)},
	{"sInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(ImagePainter, sInsets)},
	{"dInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(ImagePainter, dInsets)},
	{"path", "Ljava/net/URL;", nullptr, $PRIVATE, $field(ImagePainter, path)},
	{"tiles", "Z", nullptr, $PRIVATE, $field(ImagePainter, tiles)},
	{"paintCenter", "Z", nullptr, $PRIVATE, $field(ImagePainter, paintCenter)},
	{"imageCache", "Lsun/swing/plaf/synth/Paint9Painter;", nullptr, $PRIVATE, $field(ImagePainter, imageCache)},
	{"center", "Z", nullptr, $PRIVATE, $field(ImagePainter, center)},
	{}
};

$MethodInfo _ImagePainter_MethodInfo_[] = {
	{"<init>", "(ZZLjava/awt/Insets;Ljava/awt/Insets;Ljava/net/URL;Z)V", nullptr, 0, $method(ImagePainter, init$, void, bool, bool, $Insets*, $Insets*, $URL*, bool)},
	{"getCenter", "()Z", nullptr, $PUBLIC, $virtualMethod(ImagePainter, getCenter, bool)},
	{"getImage", "()Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(ImagePainter, getImage, $Image*)},
	{"getInsets", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(ImagePainter, getInsets, $Insets*, $Insets*)},
	{"getPaint9Painter", "()Lsun/swing/plaf/synth/Paint9Painter;", nullptr, $PRIVATE | $STATIC, $staticMethod(ImagePainter, getPaint9Painter, $Paint9Painter*)},
	{"getPaintsCenter", "()Z", nullptr, $PUBLIC, $virtualMethod(ImagePainter, getPaintsCenter, bool)},
	{"getTiles", "()Z", nullptr, $PUBLIC, $virtualMethod(ImagePainter, getTiles, bool)},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(ImagePainter, paint, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintArrowButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintArrowButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintArrowButtonForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintArrowButtonForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintCheckBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintCheckBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintCheckBoxMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintCheckBoxMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintCheckBoxMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintColorChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintColorChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintColorChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintComboBoxBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintComboBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintComboBoxBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintDesktopIconBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopIconBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintDesktopIconBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintDesktopPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintDesktopPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintDesktopPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintEditorPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintEditorPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintEditorPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintFileChooserBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFileChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintFileChooserBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintFormattedTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintFormattedTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintFormattedTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintInternalFrameBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintInternalFrameBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintInternalFrameTitlePaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintInternalFrameTitlePaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintInternalFrameTitlePaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintLabelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintLabelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintLabelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintListBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintListBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintListBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintMenuBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintMenuBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintOptionPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintOptionPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintOptionPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintPanelBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPanelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintPanelBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintPasswordFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPasswordFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintPasswordFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintPopupMenuBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintPopupMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintPopupMenuBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintProgressBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintProgressBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintProgressBarForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintProgressBarForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintRadioButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintRadioButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintRadioButtonMenuItemBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRadioButtonMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintRadioButtonMenuItemBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintRootPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintRootPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintRootPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollBarTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintScrollPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintScrollPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSeparatorBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSeparatorBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSeparatorForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSeparatorForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderThumbBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderThumbBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderTrackBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSliderTrackBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSpinnerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSpinnerBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSpinnerBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSplitPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSplitPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSplitPaneDividerBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDividerForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSplitPaneDividerForeground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintSplitPaneDragDivider", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintSplitPaneDragDivider, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneTabAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneTabAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneTabBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTabbedPaneTabBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTableBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTableBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTableHeaderBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTableHeaderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTableHeaderBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTextAreaBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTextAreaBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTextFieldBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTextFieldBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTextPaneBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTextPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTextPaneBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToggleButtonBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToggleButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToggleButtonBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarContentBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarContentBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarDragWindowBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolBarDragWindowBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolTipBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintToolTipBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintToolTipBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTreeBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTreeBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTreeCellBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTreeCellBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintTreeCellFocus", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintTreeCellFocus, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintViewportBackground, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{"paintViewportBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(ImagePainter, paintViewportBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _ImagePainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.ImagePainter",
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	_ImagePainter_FieldInfo_,
	_ImagePainter_MethodInfo_
};

$Object* allocate$ImagePainter($Class* clazz) {
	return $of($alloc(ImagePainter));
}

$StringBuffer* ImagePainter::CACHE_KEY = nullptr;

$Paint9Painter* ImagePainter::getPaint9Painter() {
	$init(ImagePainter);
	$useLocalCurrentObjectStackCache();
	$synchronized(ImagePainter::CACHE_KEY) {
		$var($WeakReference, cacheRef, $cast($WeakReference, $nc($($AppContext::getAppContext()))->get(ImagePainter::CACHE_KEY)));
		$var($Paint9Painter, painter, nullptr);
		if (cacheRef == nullptr || ($assign(painter, $cast($Paint9Painter, $nc(cacheRef)->get()))) == nullptr) {
			$assign(painter, $new($Paint9Painter, 30));
			$assign(cacheRef, $new($WeakReference, painter));
			$nc($($AppContext::getAppContext()))->put(ImagePainter::CACHE_KEY, cacheRef);
		}
		return painter;
	}
}

void ImagePainter::init$(bool tiles, bool paintCenter, $Insets* sourceInsets, $Insets* destinationInsets, $URL* path, bool center) {
	$SynthPainter::init$();
	if (sourceInsets != nullptr) {
		$set(this, sInsets, $cast($Insets, sourceInsets->clone()));
	}
	if (destinationInsets == nullptr) {
		$set(this, dInsets, this->sInsets);
	} else {
		$set(this, dInsets, $cast($Insets, $nc(destinationInsets)->clone()));
	}
	this->tiles = tiles;
	this->paintCenter = paintCenter;
	$set(this, imageCache, getPaint9Painter());
	$set(this, path, path);
	this->center = center;
}

bool ImagePainter::getTiles() {
	return this->tiles;
}

bool ImagePainter::getPaintsCenter() {
	return this->paintCenter;
}

bool ImagePainter::getCenter() {
	return this->center;
}

$Insets* ImagePainter::getInsets($Insets* insets) {
	if (insets == nullptr) {
		return $cast($Insets, $nc(this->dInsets)->clone());
	}
	$nc(insets)->left = $nc(this->dInsets)->left;
	insets->right = $nc(this->dInsets)->right;
	insets->top = $nc(this->dInsets)->top;
	insets->bottom = $nc(this->dInsets)->bottom;
	return insets;
}

$Image* ImagePainter::getImage() {
	if (this->image == nullptr) {
		$set(this, image, $$new($ImageIcon, this->path, ($String*)nullptr)->getImage());
	}
	return this->image;
}

void ImagePainter::paint($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Image, image, getImage());
	if ($Paint9Painter::validImage(image)) {
		$Paint9Painter$PaintType* type = nullptr;
		if (getCenter()) {
			$init($Paint9Painter$PaintType);
			type = $Paint9Painter$PaintType::CENTER;
		} else if (!getTiles()) {
			$init($Paint9Painter$PaintType);
			type = $Paint9Painter$PaintType::PAINT9_STRETCH;
		} else {
			$init($Paint9Painter$PaintType);
			type = $Paint9Painter$PaintType::PAINT9_TILE;
		}
		int32_t mask = $Paint9Painter::PAINT_ALL;
		bool var$0 = !getCenter();
		if (var$0 && !getPaintsCenter()) {
			mask |= $Paint9Painter::PAINT_CENTER;
		}
		$nc(this->imageCache)->paint($($nc(context)->getComponent()), g, x, y, w, h, image, this->sInsets, this->dInsets, type, mask);
	}
}

void ImagePainter::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintArrowButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintCheckBoxMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintCheckBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintColorChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintColorChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintComboBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintComboBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintDesktopIconBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintDesktopPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintEditorPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintFileChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintFileChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintFormattedTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintInternalFrameTitlePaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintInternalFrameTitlePaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintInternalFrameBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintLabelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintListBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintMenuBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintOptionPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintOptionPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintPanelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintPanelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintPasswordFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintPopupMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintRadioButtonMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintRadioButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintRootPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintScrollPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSeparatorForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSpinnerBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSplitPaneDividerForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSplitPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintSplitPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTabbedPaneContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTableHeaderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTableHeaderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTableBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTableBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTextAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTextPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToggleButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintToolTipBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTreeBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTreeCellBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void ImagePainter::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paint(context, g, x, y, w, h);
}

void clinit$ImagePainter($Class* class$) {
	$assignStatic(ImagePainter::CACHE_KEY, $new($StringBuffer, "SynthCacheKey"_s));
}

ImagePainter::ImagePainter() {
}

$Class* ImagePainter::load$($String* name, bool initialize) {
	$loadClass(ImagePainter, name, initialize, &_ImagePainter_ClassInfo_, clinit$ImagePainter, allocate$ImagePainter);
	return class$;
}

$Class* ImagePainter::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax