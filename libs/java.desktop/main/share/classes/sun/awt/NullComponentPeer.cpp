#include <sun/awt/NullComponentPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {

$MethodInfo _NullComponentPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NullComponentPeer, init$, void)},
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, applyShape, void, $Region*)},
	{"beginLayout", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, beginLayout, void)},
	{"beginValidate", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, beginValidate, void)},
	{"canDetermineObscurity", "()Z", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, canDetermineObscurity, bool)},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, coalescePaintEvent, void, $PaintEvent*)},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, createBuffers, void, int32_t, $BufferCapabilities*), "java.awt.AWTException"},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, createImage, $Image*, int32_t, int32_t)},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, createVolatileImage, $VolatileImage*, int32_t, int32_t)},
	{"destroyBuffers", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, destroyBuffers, void)},
	{"disable", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, disable, void)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, dispose, void)},
	{"enable", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, enable, void)},
	{"endLayout", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, endLayout, void)},
	{"endValidate", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, endValidate, void)},
	{"flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, flip, void, int32_t, int32_t, int32_t, int32_t, $BufferCapabilities$FlipContents*)},
	{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getAppropriateGraphicsConfiguration, $GraphicsConfiguration*, $GraphicsConfiguration*)},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getBackBuffer, $Image*)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getBounds, $Rectangle*)},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getColorModel, $ColorModel*)},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getFontMetrics, $FontMetrics*, $Font*)},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getGraphics, $Graphics*)},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getGraphicsConfiguration, $GraphicsConfiguration*)},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getInsets, $Insets*)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getLocationOnScreen, $Point*)},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getMinimumSize, $Dimension*)},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, getPreferredSize, $Dimension*)},
	{"handleEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, handleEvent, bool, $Event*)},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, handleEvent, void, $AWTEvent*)},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, handlesWheelScrolling, bool)},
	{"hide", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, hide, void)},
	{"insets", "()Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, insets, $Insets*)},
	{"isFocusable", "()Z", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, isFocusable, bool)},
	{"isObscured", "()Z", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, isObscured, bool)},
	{"isPaintPending", "()Z", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, isPaintPending, bool)},
	{"isReparentSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, isReparentSupported, bool)},
	{"layout", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, layout, void)},
	{"minimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, minimumSize, $Dimension*)},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, paint, void, $Graphics*)},
	{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, preferredSize, $Dimension*)},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, print, void, $Graphics*)},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, repaint, void, int64_t, int32_t, int32_t, int32_t, int32_t)},
	{"reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, reparent, void, $ContainerPeer*)},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, requestFocus, bool, $Component*, bool, bool, int64_t, $FocusEvent$Cause*)},
	{"reshape", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, reshape, void, int32_t, int32_t, int32_t, int32_t)},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, setBackground, void, $Color*)},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, setBounds, void, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, setCursor, void, $Cursor*)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, setEnabled, void, bool)},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, setFont, void, $Font*)},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, setForeground, void, $Color*)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, setVisible, void, bool)},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, setZOrder, void, $ComponentPeer*)},
	{"show", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, show, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, updateCursorImmediately, void)},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC, $virtualMethod(NullComponentPeer, updateGraphicsData, bool, $GraphicsConfiguration*)},
	{}
};

$ClassInfo _NullComponentPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.NullComponentPeer",
	"java.lang.Object",
	"java.awt.peer.LightweightPeer,java.awt.peer.CanvasPeer,java.awt.peer.PanelPeer",
	nullptr,
	_NullComponentPeer_MethodInfo_
};

$Object* allocate$NullComponentPeer($Class* clazz) {
	return $of($alloc(NullComponentPeer));
}

int32_t NullComponentPeer::hashCode() {
	 return this->$LightweightPeer::hashCode();
}

bool NullComponentPeer::equals(Object$* arg0) {
	 return this->$LightweightPeer::equals(arg0);
}

$Object* NullComponentPeer::clone() {
	 return this->$LightweightPeer::clone();
}

$String* NullComponentPeer::toString() {
	 return this->$LightweightPeer::toString();
}

void NullComponentPeer::finalize() {
	this->$LightweightPeer::finalize();
}

void NullComponentPeer::init$() {
}

bool NullComponentPeer::isObscured() {
	return false;
}

bool NullComponentPeer::canDetermineObscurity() {
	return false;
}

bool NullComponentPeer::isFocusable() {
	return false;
}

void NullComponentPeer::setVisible(bool b) {
}

void NullComponentPeer::show() {
}

void NullComponentPeer::hide() {
}

void NullComponentPeer::setEnabled(bool b) {
}

void NullComponentPeer::enable() {
}

void NullComponentPeer::disable() {
}

void NullComponentPeer::paint($Graphics* g) {
}

void NullComponentPeer::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void NullComponentPeer::print($Graphics* g) {
}

void NullComponentPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
}

void NullComponentPeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
}

void NullComponentPeer::coalescePaintEvent($PaintEvent* e) {
}

bool NullComponentPeer::handleEvent($Event* e) {
	return false;
}

void NullComponentPeer::handleEvent($AWTEvent* arg0) {
}

$Dimension* NullComponentPeer::getPreferredSize() {
	return $new($Dimension, 1, 1);
}

$Dimension* NullComponentPeer::getMinimumSize() {
	return $new($Dimension, 1, 1);
}

$ColorModel* NullComponentPeer::getColorModel() {
	return nullptr;
}

$Graphics* NullComponentPeer::getGraphics() {
	return nullptr;
}

$GraphicsConfiguration* NullComponentPeer::getGraphicsConfiguration() {
	return nullptr;
}

$FontMetrics* NullComponentPeer::getFontMetrics($Font* font) {
	return nullptr;
}

void NullComponentPeer::dispose() {
}

void NullComponentPeer::setForeground($Color* c) {
}

void NullComponentPeer::setBackground($Color* c) {
}

void NullComponentPeer::setFont($Font* f) {
}

void NullComponentPeer::updateCursorImmediately() {
}

void NullComponentPeer::setCursor($Cursor* cursor) {
}

bool NullComponentPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	return false;
}

$Image* NullComponentPeer::createImage(int32_t width, int32_t height) {
	return nullptr;
}

$Dimension* NullComponentPeer::preferredSize() {
	return getPreferredSize();
}

$Dimension* NullComponentPeer::minimumSize() {
	return getMinimumSize();
}

$Point* NullComponentPeer::getLocationOnScreen() {
	return $new($Point, 0, 0);
}

$Insets* NullComponentPeer::getInsets() {
	return insets();
}

void NullComponentPeer::beginValidate() {
}

void NullComponentPeer::endValidate() {
}

$Insets* NullComponentPeer::insets() {
	return $new($Insets, 0, 0, 0, 0);
}

bool NullComponentPeer::isPaintPending() {
	return false;
}

bool NullComponentPeer::handlesWheelScrolling() {
	return false;
}

$VolatileImage* NullComponentPeer::createVolatileImage(int32_t width, int32_t height) {
	return nullptr;
}

void NullComponentPeer::beginLayout() {
}

void NullComponentPeer::endLayout() {
}

void NullComponentPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	$throwNew($AWTException, "Page-flipping is not allowed on a lightweight component"_s);
}

$Image* NullComponentPeer::getBackBuffer() {
	$throwNew($IllegalStateException, "Page-flipping is not allowed on a lightweight component"_s);
	$shouldNotReachHere();
}

void NullComponentPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$throwNew($IllegalStateException, "Page-flipping is not allowed on a lightweight component"_s);
}

void NullComponentPeer::destroyBuffers() {
}

bool NullComponentPeer::isReparentSupported() {
	return false;
}

void NullComponentPeer::reparent($ContainerPeer* newNativeParent) {
	$throwNew($UnsupportedOperationException);
}

void NullComponentPeer::layout() {
}

$Rectangle* NullComponentPeer::getBounds() {
	return $new($Rectangle, 0, 0, 0, 0);
}

void NullComponentPeer::applyShape($Region* shape) {
}

void NullComponentPeer::setZOrder($ComponentPeer* above) {
}

bool NullComponentPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	return false;
}

$GraphicsConfiguration* NullComponentPeer::getAppropriateGraphicsConfiguration($GraphicsConfiguration* gc) {
	return gc;
}

NullComponentPeer::NullComponentPeer() {
}

$Class* NullComponentPeer::load$($String* name, bool initialize) {
	$loadClass(NullComponentPeer, name, initialize, &_NullComponentPeer_ClassInfo_, allocate$NullComponentPeer);
	return class$;
}

$Class* NullComponentPeer::class$ = nullptr;

	} // awt
} // sun