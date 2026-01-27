#include <java/awt/peer/ComponentPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ContainerPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef DEFAULT_OPERATION
#undef NO_EMBEDDED_CHECK
#undef RESET_OPERATION
#undef SET_BOUNDS
#undef SET_CLIENT_SIZE
#undef SET_LOCATION
#undef SET_SIZE

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::sun::java2d::pipe::Region;

namespace java {
	namespace awt {
		namespace peer {

$FieldInfo _ComponentPeer_FieldInfo_[] = {
	{"SET_LOCATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, SET_LOCATION)},
	{"SET_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, SET_SIZE)},
	{"SET_BOUNDS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, SET_BOUNDS)},
	{"SET_CLIENT_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, SET_CLIENT_SIZE)},
	{"RESET_OPERATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, RESET_OPERATION)},
	{"NO_EMBEDDED_CHECK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, NO_EMBEDDED_CHECK)},
	{"DEFAULT_OPERATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ComponentPeer, DEFAULT_OPERATION)},
	{}
};

$MethodInfo _ComponentPeer_MethodInfo_[] = {
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, applyShape, void, $Region*)},
	{"canDetermineObscurity", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, canDetermineObscurity, bool)},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, coalescePaintEvent, void, $PaintEvent*)},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, createBuffers, void, int32_t, $BufferCapabilities*), "java.awt.AWTException"},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, createImage, $Image*, int32_t, int32_t)},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, createVolatileImage, $VolatileImage*, int32_t, int32_t)},
	{"destroyBuffers", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, destroyBuffers, void)},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, dispose, void)},
	{"flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, flip, void, int32_t, int32_t, int32_t, int32_t, $BufferCapabilities$FlipContents*)},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, getBackBuffer, $Image*)},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, getColorModel, $ColorModel*)},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, getFontMetrics, $FontMetrics*, $Font*)},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, getGraphics, $Graphics*)},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, getGraphicsConfiguration, $GraphicsConfiguration*)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, getLocationOnScreen, $Point*)},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, getMinimumSize, $Dimension*)},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, getPreferredSize, $Dimension*)},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, handleEvent, void, $AWTEvent*)},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, handlesWheelScrolling, bool)},
	{"isFocusable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, isFocusable, bool)},
	{"isObscured", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, isObscured, bool)},
	{"isReparentSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, isReparentSupported, bool)},
	{"layout", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, layout, void)},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, paint, void, $Graphics*)},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, print, void, $Graphics*)},
	{"reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, reparent, void, $ContainerPeer*)},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, requestFocus, bool, $Component*, bool, bool, int64_t, $FocusEvent$Cause*)},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, setBackground, void, $Color*)},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, setBounds, void, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, setEnabled, void, bool)},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, setFont, void, $Font*)},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, setForeground, void, $Color*)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, setVisible, void, bool)},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, setZOrder, void, ComponentPeer*)},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, updateCursorImmediately, void)},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentPeer, updateGraphicsData, bool, $GraphicsConfiguration*)},
	{}
};

$ClassInfo _ComponentPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ComponentPeer",
	nullptr,
	nullptr,
	_ComponentPeer_FieldInfo_,
	_ComponentPeer_MethodInfo_
};

$Object* allocate$ComponentPeer($Class* clazz) {
	return $of($alloc(ComponentPeer));
}

$Class* ComponentPeer::load$($String* name, bool initialize) {
	$loadClass(ComponentPeer, name, initialize, &_ComponentPeer_ClassInfo_, allocate$ComponentPeer);
	return class$;
}

$Class* ComponentPeer::class$ = nullptr;

		} // peer
	} // awt
} // java