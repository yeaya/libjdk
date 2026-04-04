#include <sun/swing/JLightweightFrame.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/MouseInfo.h>
#include <java/awt/Point.h>
#include <java/awt/PointerInfo.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/OverrideNativeWindowHandle.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/JLightweightFrame$1.h>
#include <sun/swing/JLightweightFrame$2.h>
#include <sun/swing/JLightweightFrame$3.h>
#include <sun/swing/JLightweightFrame$4.h>
#include <sun/swing/LightweightContent.h>
#include <sun/swing/SwingAccessor$RepaintManagerAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2$RepaintListener.h>
#include <jcpp.h>

#undef CENTER
#undef TYPE_INT_ARGB_PRE

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $MouseInfo = ::java::awt::MouseInfo;
using $Point = ::java::awt::Point;
using $PointerInfo = ::java::awt::PointerInfo;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $OverrideNativeWindowHandle = ::sun::awt::OverrideNativeWindowHandle;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $JLightweightFrame$1 = ::sun::swing::JLightweightFrame$1;
using $JLightweightFrame$2 = ::sun::swing::JLightweightFrame$2;
using $JLightweightFrame$3 = ::sun::swing::JLightweightFrame$3;
using $JLightweightFrame$4 = ::sun::swing::JLightweightFrame$4;
using $LightweightContent = ::sun::swing::LightweightContent;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingUtilities2$RepaintListener = ::sun::swing::SwingUtilities2$RepaintListener;

namespace sun {
	namespace swing {

class JLightweightFrame$$Lambda$lambda$new$0 : public $SwingUtilities2$RepaintListener {
	$class(JLightweightFrame$$Lambda$lambda$new$0, $NO_CLASS_INIT, $SwingUtilities2$RepaintListener)
public:
	void init$(JLightweightFrame* inst) {
		$set(this, inst$, inst);
	}
	virtual void repaintPerformed($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) override {
		$nc(inst$)->lambda$new$0(c, x, y, w, h);
	}
	JLightweightFrame* inst$ = nullptr;
};
$Class* JLightweightFrame$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JLightweightFrame$$Lambda$lambda$new$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/JLightweightFrame;)V", nullptr, $PUBLIC, $method(JLightweightFrame$$Lambda$lambda$new$0, init$, void, JLightweightFrame*)},
		{"repaintPerformed", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame$$Lambda$lambda$new$0, repaintPerformed, void, $JComponent*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.swing.JLightweightFrame$$Lambda$lambda$new$0",
		"java.lang.Object",
		"sun.swing.SwingUtilities2$RepaintListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JLightweightFrame$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JLightweightFrame$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* JLightweightFrame$$Lambda$lambda$new$0::class$ = nullptr;

$String* JLightweightFrame::toString() {
	 return this->$LightweightFrame::toString();
}

int32_t JLightweightFrame::hashCode() {
	 return this->$LightweightFrame::hashCode();
}

bool JLightweightFrame::equals(Object$* arg0) {
	 return this->$LightweightFrame::equals(arg0);
}

$Object* JLightweightFrame::clone() {
	 return this->$LightweightFrame::clone();
}

void JLightweightFrame::finalize() {
	this->$LightweightFrame::finalize();
}

bool JLightweightFrame::copyBufferEnabled = false;

void JLightweightFrame::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$LightweightFrame::init$();
	$set(this, rootPane, $new($JRootPane));
	$var($AffineTransform, defaultTransform, $$nc(getGraphicsConfiguration())->getDefaultTransform());
	this->scaleFactorX = $nc(defaultTransform)->getScaleX();
	this->scaleFactorY = defaultTransform->getScaleY();
	JLightweightFrame::copyBufferEnabled = "true"_s->equals($($AccessController::doPrivileged($$new($GetPropertyAction, "swing.jlf.copyBufferEnabled"_s, "true"_s))));
	$init($BorderLayout);
	add(this->rootPane, $BorderLayout::CENTER);
	setFocusTraversalPolicy($$new($LayoutFocusTraversalPolicy));
	if ($$nc(getGraphicsConfiguration())->isTranslucencyCapable()) {
		setBackground($$new($Color, 0, 0, 0, 0));
	}
	$set(this, layoutSizeListener, $new($JLightweightFrame$2, this));
	$set(this, repaintListener, $new(JLightweightFrame$$Lambda$lambda$new$0, this));
	$$nc($SwingAccessor::getRepaintManagerAccessor())->addRepaintListener($($RepaintManager::currentManager(this)), this->repaintListener);
}

void JLightweightFrame::dispose() {
	$useLocalObjectStack();
	$$nc($SwingAccessor::getRepaintManagerAccessor())->removeRepaintListener($($RepaintManager::currentManager(this)), this->repaintListener);
	$LightweightFrame::dispose();
}

void JLightweightFrame::setContent($LightweightContent* content) {
	if (content == nullptr) {
		$nc($System::err)->println("JLightweightFrame.setContent: content may not be null!"_s);
		return;
	}
	$set(this, content, content);
	$set(this, component, $nc(content)->getComponent());
	$var($Dimension, d, $nc(this->component)->getPreferredSize());
	content->preferredSizeChanged($nc(d)->width, $nc(d)->height);
	$assign(d, $nc(this->component)->getMaximumSize());
	content->maximumSizeChanged($nc(d)->width, $nc(d)->height);
	$assign(d, $nc(this->component)->getMinimumSize());
	content->minimumSizeChanged($nc(d)->width, $nc(d)->height);
	initInterior();
}

$Graphics* JLightweightFrame::getGraphics() {
	$useLocalObjectStack();
	if (this->bbImage == nullptr) {
		return nullptr;
	}
	$var($Graphics2D, g, $nc(this->bbImage)->createGraphics());
	$nc(g)->setBackground($(getBackground()));
	g->setColor($(getForeground()));
	g->setFont($(getFont()));
	g->scale(this->scaleFactorX, this->scaleFactorY);
	return g;
}

void JLightweightFrame::grabFocus() {
	if (this->content != nullptr) {
		this->content->focusGrabbed();
	}
}

void JLightweightFrame::ungrabFocus() {
	if (this->content != nullptr) {
		this->content->focusUngrabbed();
	}
}

int32_t JLightweightFrame::getScaleFactor() {
	return $cast(int32_t, this->scaleFactorX);
}

double JLightweightFrame::getScaleFactorX() {
	return this->scaleFactorX;
}

double JLightweightFrame::getScaleFactorY() {
	return this->scaleFactorY;
}

void JLightweightFrame::notifyDisplayChanged(int32_t scaleFactor) {
	notifyDisplayChanged((double)scaleFactor, (double)scaleFactor);
}

void JLightweightFrame::notifyDisplayChanged(double scaleFactorX, double scaleFactorY) {
	$useLocalObjectStack();
	bool var$0 = $Double::compare(scaleFactorX, this->scaleFactorX) != 0;
	if (var$0 || $Double::compare(scaleFactorY, this->scaleFactorY) != 0) {
		if (!JLightweightFrame::copyBufferEnabled) {
			$nc(this->content)->paintLock();
		}
		$var($Throwable, var$1, nullptr);
		try {
			if (this->bbImage != nullptr) {
				int32_t var$2 = getWidth();
				resizeBuffer(var$2, getHeight(), scaleFactorX, scaleFactorY);
			}
		} catch ($Throwable& var$3) {
			$assign(var$1, var$3);
		} /*finally*/ {
			if (!JLightweightFrame::copyBufferEnabled) {
				$nc(this->content)->paintUnlock();
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
		this->scaleFactorX = scaleFactorX;
		this->scaleFactorY = scaleFactorY;
		if (isVisible()) {
			$var($Object, peer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(this));
			if ($instanceOf($DisplayChangedListener, peer)) {
				$cast($DisplayChangedListener, peer)->displayChanged();
			}
			repaint();
		}
	}
}

void JLightweightFrame::addNotify() {
	$useLocalObjectStack();
	$LightweightFrame::addNotify();
	$var($Object, peer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(this));
	if ($instanceOf($DisplayChangedListener, peer)) {
		$cast($DisplayChangedListener, peer)->displayChanged();
	}
}

void JLightweightFrame::syncCopyBuffer(bool reset, int32_t x, int32_t y, int32_t w, int32_t h, double scaleX, double scaleY) {
	$useLocalObjectStack();
	$nc(this->content)->paintLock();
	$var($Throwable, var$0, nullptr);
	try {
		$var($ints, srcBuffer, $$sure($DataBufferInt, $$nc($nc(this->bbImage)->getRaster())->getDataBuffer())->getData());
		if (reset) {
			$set(this, copyBuffer, $new($ints, $nc(srcBuffer)->length));
		}
		int32_t linestride = $nc(this->bbImage)->getWidth();
		int32_t startX = $cast(int32_t, $Math::floor(x * scaleX));
		int32_t startY = $cast(int32_t, $Math::floor(y * scaleY));
		int32_t width = $cast(int32_t, $Math::ceil((x + w) * scaleX)) - startX;
		int32_t height = $cast(int32_t, $Math::ceil((y + h) * scaleY)) - startY;
		if (startX + width > linestride) {
			width = linestride - startX;
		}
		if (startY + height > $nc(this->bbImage)->getHeight()) {
			height = $nc(this->bbImage)->getHeight() - startY;
		}
		for (int32_t i = 0; i < height; ++i) {
			int32_t from = (startY + i) * linestride + startX;
			$System::arraycopy(srcBuffer, from, this->copyBuffer, from, width);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(this->content)->paintUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void JLightweightFrame::notifyImageUpdated(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (JLightweightFrame::copyBufferEnabled) {
		syncCopyBuffer(false, x, y, width, height, this->scaleFactorX, this->scaleFactorY);
	}
	$nc(this->content)->imageUpdated(x, y, width, height);
}

void JLightweightFrame::initInterior() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$set(this, contentPane, $new($JLightweightFrame$3, this));
	this->contentPane->setLayout($$new($BorderLayout));
	$nc(this->contentPane)->add(this->component);
	if ("true"_s->equals($($AccessController::doPrivileged($$new($GetPropertyAction, "swing.jlf.contentPaneTransparent"_s, "false"_s))))) {
		$nc(this->contentPane)->setOpaque(false);
	}
	setContentPane(this->contentPane);
	$nc(this->contentPane)->addContainerListener($$new($JLightweightFrame$4, this));
}

void JLightweightFrame::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$LightweightFrame::reshape(x, y, width, height);
	if (width == 0 || height == 0) {
		return;
	}
	if (!JLightweightFrame::copyBufferEnabled) {
		$nc(this->content)->paintLock();
	}
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		bool createBB = (this->bbImage == nullptr);
		int32_t newW = width;
		int32_t newH = height;
		if (this->bbImage != nullptr) {
			int32_t imgWidth = (int32_t)$Math::round(this->bbImage->getWidth() / this->scaleFactorX);
			int32_t imgHeight = (int32_t)$Math::round($nc(this->bbImage)->getHeight() / this->scaleFactorY);
			if (width != imgWidth || height != imgHeight) {
				createBB = true;
				if (this->bbImage != nullptr) {
					int32_t oldW = imgWidth;
					int32_t oldH = imgHeight;
					if ((oldW >= newW) && (oldH >= newH)) {
						createBB = false;
					} else {
						if (oldW >= newW) {
							newW = oldW;
						} else {
							newW = $Math::max($cast(int32_t, (oldW * 1.2)), width);
						}
						if (oldH >= newH) {
							newH = oldH;
						} else {
							newH = $Math::max($cast(int32_t, (oldH * 1.2)), height);
						}
					}
				}
			}
		}
		if (createBB) {
			resizeBuffer(newW, newH, this->scaleFactorX, this->scaleFactorY);
			return$1 = true;
			goto $finally;
		}
		$nc(this->content)->imageReshaped(0, 0, width, height);
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} $finally: {
		if (!JLightweightFrame::copyBufferEnabled) {
			$nc(this->content)->paintUnlock();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
}

void JLightweightFrame::resizeBuffer(int32_t width, int32_t height, double newScaleFactorX, double newScaleFactorY) {
	$useLocalObjectStack();
	int32_t var$0 = (int32_t)$Math::round(width * newScaleFactorX);
	$set(this, bbImage, $new($BufferedImage, var$0, (int32_t)$Math::round(height * newScaleFactorY), $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($ints, pixels, $$sure($DataBufferInt, $$nc(this->bbImage->getRaster())->getDataBuffer())->getData());
	if (JLightweightFrame::copyBufferEnabled) {
		syncCopyBuffer(true, 0, 0, width, height, newScaleFactorX, newScaleFactorY);
		$assign(pixels, this->copyBuffer);
	}
	$nc(this->content)->imageBufferReset(pixels, 0, 0, width, height, $nc(this->bbImage)->getWidth(), newScaleFactorX, newScaleFactorY);
}

$JRootPane* JLightweightFrame::getRootPane() {
	return this->rootPane;
}

void JLightweightFrame::setContentPane($Container* contentPane) {
	$$nc(getRootPane())->setContentPane(contentPane);
}

$Container* JLightweightFrame::getContentPane() {
	return $$nc(getRootPane())->getContentPane();
}

void JLightweightFrame::setLayeredPane($JLayeredPane* layeredPane) {
	$$nc(getRootPane())->setLayeredPane(layeredPane);
}

$JLayeredPane* JLightweightFrame::getLayeredPane() {
	return $$nc(getRootPane())->getLayeredPane();
}

void JLightweightFrame::setGlassPane($Component* glassPane) {
	$$nc(getRootPane())->setGlassPane(glassPane);
}

$Component* JLightweightFrame::getGlassPane() {
	return $$nc(getRootPane())->getGlassPane();
}

void JLightweightFrame::updateClientCursor() {
	$useLocalObjectStack();
	$var($PointerInfo, pointerInfo, $MouseInfo::getPointerInfo());
	if (pointerInfo == nullptr) {
		return;
	}
	$var($Point, p, $nc(pointerInfo)->getLocation());
	$SwingUtilities::convertPointFromScreen(p, this);
	$var($Component, target, $SwingUtilities::getDeepestComponentAt(this, $nc(p)->x, $nc(p)->y));
	if (target != nullptr) {
		$nc(this->content)->setCursor($(target->getCursor()));
	}
}

void JLightweightFrame::overrideNativeWindowHandle(int64_t handle, $Runnable* closeWindow) {
	$useLocalObjectStack();
	$var($Object, peer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(this));
	if ($instanceOf($OverrideNativeWindowHandle, peer)) {
		$cast($OverrideNativeWindowHandle, peer)->overrideWindowHandle(handle);
	}
	if (closeWindow != nullptr) {
		closeWindow->run();
	}
}

$DragGestureRecognizer* JLightweightFrame::createDragGestureRecognizer($Class* abstractRecognizerClass, $DragSource* ds, $Component* c, int32_t srcActions, $DragGestureListener* dgl) {
	return this->content == nullptr ? ($DragGestureRecognizer*)nullptr : this->content->createDragGestureRecognizer(abstractRecognizerClass, ds, c, srcActions, dgl);
}

$DragSourceContextPeer* JLightweightFrame::createDragSourceContextPeer($DragGestureEvent* dge) {
	return this->content == nullptr ? ($DragSourceContextPeer*)nullptr : this->content->createDragSourceContextPeer(dge);
}

void JLightweightFrame::addDropTarget($DropTarget* dt) {
	if (this->content == nullptr) {
		return;
	}
	$nc(this->content)->addDropTarget(dt);
}

void JLightweightFrame::removeDropTarget($DropTarget* dt) {
	if (this->content == nullptr) {
		return;
	}
	$nc(this->content)->removeDropTarget(dt);
}

void JLightweightFrame::lambda$new$0($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($Window, jlf, $SwingUtilities::getWindowAncestor(c));
	if (!$equals(jlf, this)) {
		return;
	}
	$var($Point, p, $SwingUtilities::convertPoint(c, x, y, jlf));
	int32_t var$0 = (int32_t)$Math::round($nc(this->bbImage)->getWidth() / this->scaleFactorX);
	$var($Rectangle, r, $$new($Rectangle, $nc(p)->x, $nc(p)->y, w, h)->intersection($$new($Rectangle, 0, 0, var$0, (int32_t)$Math::round(this->bbImage->getHeight() / this->scaleFactorY))));
	if (!$nc(r)->isEmpty()) {
		notifyImageUpdated(r->x, r->y, r->width, r->height);
	}
}

void JLightweightFrame::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$SwingAccessor::setJLightweightFrameAccessor($$new($JLightweightFrame$1));
		JLightweightFrame::copyBufferEnabled = "true"_s->equals($($AccessController::doPrivileged($$new($GetPropertyAction, "swing.jlf.copyBufferEnabled"_s, "true"_s))));
	}
}

JLightweightFrame::JLightweightFrame() {
}

$Class* JLightweightFrame::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.swing.JLightweightFrame$$Lambda$lambda$new$0")) {
			return JLightweightFrame$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PRIVATE | $FINAL, $field(JLightweightFrame, rootPane)},
		{"content", "Lsun/swing/LightweightContent;", nullptr, $PRIVATE, $field(JLightweightFrame, content)},
		{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(JLightweightFrame, component)},
		{"contentPane", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(JLightweightFrame, contentPane)},
		{"bbImage", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(JLightweightFrame, bbImage)},
		{"scaleFactorX", "D", nullptr, $PRIVATE | $VOLATILE, $field(JLightweightFrame, scaleFactorX)},
		{"scaleFactorY", "D", nullptr, $PRIVATE | $VOLATILE, $field(JLightweightFrame, scaleFactorY)},
		{"copyBufferEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(JLightweightFrame, copyBufferEnabled)},
		{"copyBuffer", "[I", nullptr, $PRIVATE, $field(JLightweightFrame, copyBuffer)},
		{"layoutSizeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(JLightweightFrame, layoutSizeListener)},
		{"repaintListener", "Lsun/swing/SwingUtilities2$RepaintListener;", nullptr, $PRIVATE, $field(JLightweightFrame, repaintListener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JLightweightFrame, init$, void)},
		{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, addDropTarget, void, $DropTarget*)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, addNotify, void)},
		{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC, $virtualMethod(JLightweightFrame, createDragGestureRecognizer, $DragGestureRecognizer*, $Class*, $DragSource*, $Component*, int32_t, $DragGestureListener*)},
		{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, createDragSourceContextPeer, $DragSourceContextPeer*, $DragGestureEvent*), "java.awt.dnd.InvalidDnDOperationException"},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, dispose, void)},
		{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, getContentPane, $Container*)},
		{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, getGlassPane, $Component*)},
		{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, getGraphics, $Graphics*)},
		{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, getLayeredPane, $JLayeredPane*)},
		{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, getRootPane, $JRootPane*)},
		{"getScaleFactor", "()I", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, getScaleFactor, int32_t)},
		{"getScaleFactorX", "()D", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, getScaleFactorX, double)},
		{"getScaleFactorY", "()D", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, getScaleFactorY, double)},
		{"grabFocus", "()V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, grabFocus, void)},
		{"initInterior", "()V", nullptr, $PRIVATE, $method(JLightweightFrame, initInterior, void)},
		{"lambda$new$0", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PRIVATE | $SYNTHETIC, $method(JLightweightFrame, lambda$new$0, void, $JComponent*, int32_t, int32_t, int32_t, int32_t)},
		{"notifyDisplayChanged", "(I)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, notifyDisplayChanged, void, int32_t)},
		{"notifyDisplayChanged", "(DD)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, notifyDisplayChanged, void, double, double)},
		{"notifyImageUpdated", "(IIII)V", nullptr, $PRIVATE, $method(JLightweightFrame, notifyImageUpdated, void, int32_t, int32_t, int32_t, int32_t)},
		{"overrideNativeWindowHandle", "(JLjava/lang/Runnable;)V", nullptr, $PUBLIC, $method(JLightweightFrame, overrideNativeWindowHandle, void, int64_t, $Runnable*)},
		{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, removeDropTarget, void, $DropTarget*)},
		{"reshape", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, reshape, void, int32_t, int32_t, int32_t, int32_t)},
		{"resizeBuffer", "(IIDD)V", nullptr, $PRIVATE, $method(JLightweightFrame, resizeBuffer, void, int32_t, int32_t, double, double)},
		{"setContent", "(Lsun/swing/LightweightContent;)V", nullptr, $PUBLIC, $method(JLightweightFrame, setContent, void, $LightweightContent*)},
		{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, setContentPane, void, $Container*)},
		{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, setGlassPane, void, $Component*)},
		{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, setLayeredPane, void, $JLayeredPane*)},
		{"syncCopyBuffer", "(ZIIIIDD)V", nullptr, $PRIVATE, $method(JLightweightFrame, syncCopyBuffer, void, bool, int32_t, int32_t, int32_t, int32_t, double, double)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"ungrabFocus", "()V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame, ungrabFocus, void)},
		{"updateClientCursor", "()V", nullptr, $PRIVATE, $method(JLightweightFrame, updateClientCursor, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.JLightweightFrame$4", nullptr, nullptr, 0},
		{"sun.swing.JLightweightFrame$3", nullptr, nullptr, 0},
		{"sun.swing.JLightweightFrame$2", nullptr, nullptr, 0},
		{"sun.swing.JLightweightFrame$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.swing.JLightweightFrame",
		"sun.awt.LightweightFrame",
		"javax.swing.RootPaneContainer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.swing.JLightweightFrame$4,sun.swing.JLightweightFrame$3,sun.swing.JLightweightFrame$3$1,sun.swing.JLightweightFrame$2,sun.swing.JLightweightFrame$1"
	};
	$loadClass(JLightweightFrame, name, initialize, &classInfo$$, JLightweightFrame::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JLightweightFrame));
	});
	return class$;
}

$Class* JLightweightFrame::class$ = nullptr;

	} // swing
} // sun