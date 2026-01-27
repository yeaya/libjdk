#include <java/awt/TrayIcon.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Image.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/SystemTray.h>
#include <java/awt/Toolkit.h>
#include <java/awt/TrayIcon$1.h>
#include <java/awt/TrayIcon$MessageType.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/peer/TrayIconPeer.h>
#include <java/lang/SecurityException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/util/EventListener.h>
#include <sun/awt/AWTAccessor$TrayIconAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/HeadlessToolkit.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef MOUSE_CLICKED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $MouseListenerArray = $Array<::java::awt::event::MouseListener>;
using $MouseMotionListenerArray = $Array<::java::awt::event::MouseMotionListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Image = ::java::awt::Image;
using $PopupMenu = ::java::awt::PopupMenu;
using $SystemTray = ::java::awt::SystemTray;
using $Toolkit = ::java::awt::Toolkit;
using $TrayIcon$1 = ::java::awt::TrayIcon$1;
using $TrayIcon$MessageType = ::java::awt::TrayIcon$MessageType;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $TrayIconPeer = ::java::awt::peer::TrayIconPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $EventListener = ::java::util::EventListener;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$TrayIconAccessor = ::sun::awt::AWTAccessor$TrayIconAccessor;
using $AppContext = ::sun::awt::AppContext;
using $HeadlessToolkit = ::sun::awt::HeadlessToolkit;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

$FieldInfo _TrayIcon_FieldInfo_[] = {
	{"image", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(TrayIcon, image)},
	{"tooltip", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TrayIcon, tooltip)},
	{"popup", "Ljava/awt/PopupMenu;", nullptr, $PRIVATE, $field(TrayIcon, popup)},
	{"autosize", "Z", nullptr, $PRIVATE, $field(TrayIcon, autosize)},
	{"id", "I", nullptr, $PRIVATE, $field(TrayIcon, id)},
	{"actionCommand", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TrayIcon, actionCommand)},
	{"peer", "Ljava/awt/peer/TrayIconPeer;", nullptr, $PRIVATE | $TRANSIENT, $field(TrayIcon, peer)},
	{"mouseListener", "Ljava/awt/event/MouseListener;", nullptr, $TRANSIENT, $field(TrayIcon, mouseListener)},
	{"mouseMotionListener", "Ljava/awt/event/MouseMotionListener;", nullptr, $TRANSIENT, $field(TrayIcon, mouseMotionListener)},
	{"actionListener", "Ljava/awt/event/ActionListener;", nullptr, $TRANSIENT, $field(TrayIcon, actionListener)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(TrayIcon, acc)},
	{}
};

$MethodInfo _TrayIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(TrayIcon, init$, void), "java.lang.UnsupportedOperationException,java.awt.HeadlessException,java.lang.SecurityException"},
	{"<init>", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $method(TrayIcon, init$, void, $Image*)},
	{"<init>", "(Ljava/awt/Image;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TrayIcon, init$, void, $Image*, $String*)},
	{"<init>", "(Ljava/awt/Image;Ljava/lang/String;Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC, $method(TrayIcon, init$, void, $Image*, $String*, $PopupMenu*)},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrayIcon, addActionListener, void, $ActionListener*)},
	{"addMouseListener", "(Ljava/awt/event/MouseListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrayIcon, addMouseListener, void, $MouseListener*)},
	{"addMouseMotionListener", "(Ljava/awt/event/MouseMotionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrayIcon, addMouseMotionListener, void, $MouseMotionListener*)},
	{"addNotify", "()V", nullptr, 0, $virtualMethod(TrayIcon, addNotify, void), "java.awt.AWTException"},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0, $virtualMethod(TrayIcon, dispatchEvent, void, $AWTEvent*)},
	{"displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/awt/TrayIcon$MessageType;)V", nullptr, $PUBLIC, $virtualMethod(TrayIcon, displayMessage, void, $String*, $String*, $TrayIcon$MessageType*)},
	{"getAccessControlContext", "()Ljava/security/AccessControlContext;", nullptr, $FINAL, $method(TrayIcon, getAccessControlContext, $AccessControlContext*)},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TrayIcon, getActionCommand, $String*)},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrayIcon, getActionListeners, $ActionListenerArray*)},
	{"getID", "()I", nullptr, 0, $virtualMethod(TrayIcon, getID, int32_t)},
	{"getImage", "()Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(TrayIcon, getImage, $Image*)},
	{"getMouseListeners", "()[Ljava/awt/event/MouseListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrayIcon, getMouseListeners, $MouseListenerArray*)},
	{"getMouseMotionListeners", "()[Ljava/awt/event/MouseMotionListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrayIcon, getMouseMotionListeners, $MouseMotionListenerArray*)},
	{"getPopupMenu", "()Ljava/awt/PopupMenu;", nullptr, $PUBLIC, $virtualMethod(TrayIcon, getPopupMenu, $PopupMenu*)},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(TrayIcon, getSize, $Dimension*)},
	{"getToolTip", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TrayIcon, getToolTip, $String*)},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(TrayIcon, initIDs, void)},
	{"isImageAutoSize", "()Z", nullptr, $PUBLIC, $virtualMethod(TrayIcon, isImageAutoSize, bool)},
	{"processActionEvent", "(Ljava/awt/event/ActionEvent;)V", nullptr, 0, $virtualMethod(TrayIcon, processActionEvent, void, $ActionEvent*)},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0, $virtualMethod(TrayIcon, processEvent, void, $AWTEvent*)},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0, $virtualMethod(TrayIcon, processMouseEvent, void, $MouseEvent*)},
	{"processMouseMotionEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0, $virtualMethod(TrayIcon, processMouseMotionEvent, void, $MouseEvent*)},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrayIcon, removeActionListener, void, $ActionListener*)},
	{"removeMouseListener", "(Ljava/awt/event/MouseListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrayIcon, removeMouseListener, void, $MouseListener*)},
	{"removeMouseMotionListener", "(Ljava/awt/event/MouseMotionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrayIcon, removeMouseMotionListener, void, $MouseMotionListener*)},
	{"removeNotify", "()V", nullptr, 0, $virtualMethod(TrayIcon, removeNotify, void)},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TrayIcon, setActionCommand, void, $String*)},
	{"setID", "(I)V", nullptr, 0, $virtualMethod(TrayIcon, setID, void, int32_t)},
	{"setImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $virtualMethod(TrayIcon, setImage, void, $Image*)},
	{"setImageAutoSize", "(Z)V", nullptr, $PUBLIC, $virtualMethod(TrayIcon, setImageAutoSize, void, bool)},
	{"setPopupMenu", "(Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC, $virtualMethod(TrayIcon, setPopupMenu, void, $PopupMenu*)},
	{"setToolTip", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TrayIcon, setToolTip, void, $String*)},
	{}
};

#define _METHOD_INDEX_initIDs 20

$InnerClassInfo _TrayIcon_InnerClassesInfo_[] = {
	{"java.awt.TrayIcon$MessageType", "java.awt.TrayIcon", "MessageType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.awt.TrayIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TrayIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.TrayIcon",
	"java.lang.Object",
	nullptr,
	_TrayIcon_FieldInfo_,
	_TrayIcon_MethodInfo_,
	nullptr,
	nullptr,
	_TrayIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.TrayIcon$MessageType,java.awt.TrayIcon$1"
};

$Object* allocate$TrayIcon($Class* clazz) {
	return $of($alloc(TrayIcon));
}

$AccessControlContext* TrayIcon::getAccessControlContext() {
	if (this->acc == nullptr) {
		$throwNew($SecurityException, "TrayIcon is missing AccessControlContext"_s);
	}
	return this->acc;
}

void TrayIcon::init$() {
	$set(this, acc, $AccessController::getContext());
	$SystemTray::checkSystemTrayAllowed();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	if (!$SystemTray::isSupported()) {
		$throwNew($UnsupportedOperationException);
	}
	$SunToolkit::insertTargetMapping(this, $($AppContext::getAppContext()));
}

void TrayIcon::init$($Image* image) {
	TrayIcon::init$();
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, "creating TrayIcon with null Image"_s);
	}
	setImage(image);
}

void TrayIcon::init$($Image* image, $String* tooltip) {
	TrayIcon::init$(image);
	setToolTip(tooltip);
}

void TrayIcon::init$($Image* image, $String* tooltip, $PopupMenu* popup) {
	TrayIcon::init$(image, tooltip);
	setPopupMenu(popup);
}

void TrayIcon::setImage($Image* image) {
	if (image == nullptr) {
		$throwNew($NullPointerException, "setting null Image"_s);
	}
	$set(this, image, image);
	$var($TrayIconPeer, peer, this->peer);
	if (peer != nullptr) {
		peer->updateImage();
	}
}

$Image* TrayIcon::getImage() {
	return this->image;
}

void TrayIcon::setPopupMenu($PopupMenu* popup) {
	if (popup == this->popup) {
		return;
	}
	$synchronized(TrayIcon::class$) {
		if (popup != nullptr) {
			if (popup->isTrayIconPopup) {
				$throwNew($IllegalArgumentException, "the PopupMenu is already set for another TrayIcon"_s);
			}
			popup->isTrayIconPopup = true;
		}
		if (this->popup != nullptr) {
			$nc(this->popup)->isTrayIconPopup = false;
		}
		$set(this, popup, popup);
	}
}

$PopupMenu* TrayIcon::getPopupMenu() {
	return this->popup;
}

void TrayIcon::setToolTip($String* tooltip) {
	$set(this, tooltip, tooltip);
	$var($TrayIconPeer, peer, this->peer);
	if (peer != nullptr) {
		peer->setToolTip(tooltip);
	}
}

$String* TrayIcon::getToolTip() {
	return this->tooltip;
}

void TrayIcon::setImageAutoSize(bool autosize) {
	this->autosize = autosize;
	$var($TrayIconPeer, peer, this->peer);
	if (peer != nullptr) {
		peer->updateImage();
	}
}

bool TrayIcon::isImageAutoSize() {
	return this->autosize;
}

void TrayIcon::addMouseListener($MouseListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		$set(this, mouseListener, $AWTEventMulticaster::add(this->mouseListener, listener));
	}
}

void TrayIcon::removeMouseListener($MouseListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		$set(this, mouseListener, $AWTEventMulticaster::remove(this->mouseListener, listener));
	}
}

$MouseListenerArray* TrayIcon::getMouseListeners() {
	$synchronized(this) {
		$load($MouseListener);
		return $fcast($MouseListenerArray, $AWTEventMulticaster::getListeners(this->mouseListener, $MouseListener::class$));
	}
}

void TrayIcon::addMouseMotionListener($MouseMotionListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		$set(this, mouseMotionListener, $AWTEventMulticaster::add(this->mouseMotionListener, listener));
	}
}

void TrayIcon::removeMouseMotionListener($MouseMotionListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		$set(this, mouseMotionListener, $AWTEventMulticaster::remove(this->mouseMotionListener, listener));
	}
}

$MouseMotionListenerArray* TrayIcon::getMouseMotionListeners() {
	$synchronized(this) {
		$load($MouseMotionListener);
		return $fcast($MouseMotionListenerArray, $AWTEventMulticaster::getListeners(this->mouseMotionListener, $MouseMotionListener::class$));
	}
}

$String* TrayIcon::getActionCommand() {
	return this->actionCommand;
}

void TrayIcon::setActionCommand($String* command) {
	$set(this, actionCommand, command);
}

void TrayIcon::addActionListener($ActionListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::add(this->actionListener, listener));
	}
}

void TrayIcon::removeActionListener($ActionListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::remove(this->actionListener, listener));
	}
}

$ActionListenerArray* TrayIcon::getActionListeners() {
	$synchronized(this) {
		$load($ActionListener);
		return $fcast($ActionListenerArray, $AWTEventMulticaster::getListeners(this->actionListener, $ActionListener::class$));
	}
}

void TrayIcon::displayMessage($String* caption, $String* text, $TrayIcon$MessageType* messageType) {
	$useLocalCurrentObjectStackCache();
	if (caption == nullptr && text == nullptr) {
		$throwNew($NullPointerException, "displaying the message with both caption and text being null"_s);
	}
	$var($TrayIconPeer, peer, this->peer);
	if (peer != nullptr) {
		peer->displayMessage(caption, text, $($nc(messageType)->name()));
	}
}

$Dimension* TrayIcon::getSize() {
	return $nc($($SystemTray::getSystemTray()))->getTrayIconSize();
}

void TrayIcon::addNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this) {
		if (this->peer == nullptr) {
			$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
			if ($instanceOf($SunToolkit, toolkit)) {
				$set(this, peer, $nc(($cast($SunToolkit, $($Toolkit::getDefaultToolkit()))))->createTrayIcon(this));
			} else if ($instanceOf($HeadlessToolkit, toolkit)) {
				$set(this, peer, $nc(($cast($HeadlessToolkit, $($Toolkit::getDefaultToolkit()))))->createTrayIcon(this));
			}
		}
	}
	$nc(this->peer)->setToolTip(this->tooltip);
}

void TrayIcon::removeNotify() {
	$var($TrayIconPeer, p, nullptr);
	$synchronized(this) {
		$assign(p, this->peer);
		$set(this, peer, nullptr);
		if (this->popup != nullptr) {
			$nc(this->popup)->removeNotify();
		}
	}
	if (p != nullptr) {
		p->dispose();
	}
}

void TrayIcon::setID(int32_t id) {
	this->id = id;
}

int32_t TrayIcon::getID() {
	return this->id;
}

void TrayIcon::dispatchEvent($AWTEvent* e) {
	$EventQueue::setCurrentEventAndMostRecentTime(e);
	$nc($($Toolkit::getDefaultToolkit()))->notifyAWTEventListeners(e);
	processEvent(e);
}

void TrayIcon::processEvent($AWTEvent* e) {
	if ($instanceOf($MouseEvent, e)) {
		switch ($nc(e)->getID()) {
		case $MouseEvent::MOUSE_PRESSED:
			{}
		case $MouseEvent::MOUSE_RELEASED:
			{}
		case $MouseEvent::MOUSE_CLICKED:
			{
				processMouseEvent($cast($MouseEvent, e));
				break;
			}
		case $MouseEvent::MOUSE_MOVED:
			{
				processMouseMotionEvent($cast($MouseEvent, e));
				break;
			}
		default:
			{
				return;
			}
		}
	} else if ($instanceOf($ActionEvent, e)) {
		processActionEvent($cast($ActionEvent, e));
	}
}

void TrayIcon::processMouseEvent($MouseEvent* e) {
	$var($MouseListener, listener, this->mouseListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $MouseEvent::MOUSE_PRESSED:
			{
				listener->mousePressed(e);
				break;
			}
		case $MouseEvent::MOUSE_RELEASED:
			{
				listener->mouseReleased(e);
				break;
			}
		case $MouseEvent::MOUSE_CLICKED:
			{
				listener->mouseClicked(e);
				break;
			}
		default:
			{
				return;
			}
		}
	}
}

void TrayIcon::processMouseMotionEvent($MouseEvent* e) {
	$var($MouseMotionListener, listener, this->mouseMotionListener);
	if (listener != nullptr && $nc(e)->getID() == $MouseEvent::MOUSE_MOVED) {
		listener->mouseMoved(e);
	}
}

void TrayIcon::processActionEvent($ActionEvent* e) {
	$var($ActionListener, listener, this->actionListener);
	if (listener != nullptr) {
		listener->actionPerformed(e);
	}
}

void TrayIcon::initIDs() {
	$init(TrayIcon);
	$prepareNativeStatic(TrayIcon, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void clinit$TrayIcon($Class* class$) {
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			TrayIcon::initIDs();
		}
		$AWTAccessor::setTrayIconAccessor($$new($TrayIcon$1));
	}
}

TrayIcon::TrayIcon() {
}

$Class* TrayIcon::load$($String* name, bool initialize) {
	$loadClass(TrayIcon, name, initialize, &_TrayIcon_ClassInfo_, clinit$TrayIcon, allocate$TrayIcon);
	return class$;
}

$Class* TrayIcon::class$ = nullptr;

	} // awt
} // java