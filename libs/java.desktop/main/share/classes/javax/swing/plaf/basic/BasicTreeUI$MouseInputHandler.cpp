#include <javax/swing/plaf/basic/BasicTreeUI$MouseInputHandler.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$MouseInputHandler, this$0)},
	{"source", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(BasicTreeUI$MouseInputHandler, source)},
	{"destination", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(BasicTreeUI$MouseInputHandler, destination)},
	{"focusComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(BasicTreeUI$MouseInputHandler, focusComponent)},
	{"dispatchedEvent", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$MouseInputHandler, dispatchedEvent)},
	{}
};

$MethodInfo _BasicTreeUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;Ljava/awt/Component;Ljava/awt/Component;Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $method(BasicTreeUI$MouseInputHandler, init$, void, $BasicTreeUI*, $Component*, $Component*, $MouseEvent*)},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;Ljava/awt/Component;Ljava/awt/Component;Ljava/awt/event/MouseEvent;Ljava/awt/Component;)V", nullptr, 0, $method(BasicTreeUI$MouseInputHandler, init$, void, $BasicTreeUI*, $Component*, $Component*, $MouseEvent*, $Component*)},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseInputHandler, mouseClicked, void, $MouseEvent*)},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseInputHandler, mouseDragged, void, $MouseEvent*)},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseInputHandler, mouseEntered, void, $MouseEvent*)},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseInputHandler, mouseExited, void, $MouseEvent*)},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseInputHandler, mouseMoved, void, $MouseEvent*)},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseInputHandler, mousePressed, void, $MouseEvent*)},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseInputHandler, mouseReleased, void, $MouseEvent*)},
	{"removeFromSource", "()V", nullptr, $PROTECTED, $virtualMethod(BasicTreeUI$MouseInputHandler, removeFromSource, void)},
	{}
};

$InnerClassInfo _BasicTreeUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$MouseInputHandler", "javax.swing.plaf.basic.BasicTreeUI", "MouseInputHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_BasicTreeUI$MouseInputHandler_FieldInfo_,
	_BasicTreeUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$MouseInputHandler));
}

void BasicTreeUI$MouseInputHandler::init$($BasicTreeUI* this$0, $Component* source, $Component* destination, $MouseEvent* event) {
	BasicTreeUI$MouseInputHandler::init$(this$0, source, destination, event, nullptr);
}

void BasicTreeUI$MouseInputHandler::init$($BasicTreeUI* this$0, $Component* source, $Component* destination, $MouseEvent* event, $Component* focusComponent) {
	$set(this, this$0, this$0);
	$set(this, source, source);
	$set(this, destination, destination);
	$nc(this->source)->addMouseListener(this);
	$nc(this->source)->addMouseMotionListener(this);
	$SwingUtilities2::setSkipClickCount(destination, $nc(event)->getClickCount() - 1);
	$nc(destination)->dispatchEvent($($SwingUtilities::convertMouseEvent(source, event, destination)));
	$set(this, focusComponent, focusComponent);
}

void BasicTreeUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
	if (this->destination != nullptr) {
		this->dispatchedEvent = true;
		$nc(this->destination)->dispatchEvent($($SwingUtilities::convertMouseEvent(this->source, e, this->destination)));
	}
}

void BasicTreeUI$MouseInputHandler::mousePressed($MouseEvent* e) {
}

void BasicTreeUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	if (this->destination != nullptr) {
		$nc(this->destination)->dispatchEvent($($SwingUtilities::convertMouseEvent(this->source, e, this->destination)));
	}
	removeFromSource();
}

void BasicTreeUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
	if (!$SwingUtilities::isLeftMouseButton(e)) {
		removeFromSource();
	}
}

void BasicTreeUI$MouseInputHandler::mouseExited($MouseEvent* e) {
	if (!$SwingUtilities::isLeftMouseButton(e)) {
		removeFromSource();
	}
}

void BasicTreeUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	if (this->destination != nullptr) {
		this->dispatchedEvent = true;
		$nc(this->destination)->dispatchEvent($($SwingUtilities::convertMouseEvent(this->source, e, this->destination)));
	}
}

void BasicTreeUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
	removeFromSource();
}

void BasicTreeUI$MouseInputHandler::removeFromSource() {
	if (this->source != nullptr) {
		$nc(this->source)->removeMouseListener(this);
		$nc(this->source)->removeMouseMotionListener(this);
		if (this->focusComponent != nullptr && this->focusComponent == this->destination && !this->dispatchedEvent && ($instanceOf($JTextField, this->focusComponent))) {
			$nc(($cast($JTextField, this->focusComponent)))->selectAll();
		}
	}
	$set(this, source, ($set(this, destination, nullptr)));
}

BasicTreeUI$MouseInputHandler::BasicTreeUI$MouseInputHandler() {
}

$Class* BasicTreeUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$MouseInputHandler, name, initialize, &_BasicTreeUI$MouseInputHandler_ClassInfo_, allocate$BasicTreeUI$MouseInputHandler);
	return class$;
}

$Class* BasicTreeUI$MouseInputHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax