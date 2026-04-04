#include <javax/swing/text/JTextComponent$MutableCaretEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/event/CaretEvent.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef FOCUSED_COMPONENT

using $FocusEvent = ::java::awt::event::FocusEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CaretEvent = ::javax::swing::event::CaretEvent;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace text {

int32_t JTextComponent$MutableCaretEvent::hashCode() {
	 return this->$CaretEvent::hashCode();
}

bool JTextComponent$MutableCaretEvent::equals(Object$* arg0) {
	 return this->$CaretEvent::equals(arg0);
}

$Object* JTextComponent$MutableCaretEvent::clone() {
	 return this->$CaretEvent::clone();
}

void JTextComponent$MutableCaretEvent::finalize() {
	this->$CaretEvent::finalize();
}

void JTextComponent$MutableCaretEvent::init$($JTextComponent* c) {
	$CaretEvent::init$(c);
}

void JTextComponent$MutableCaretEvent::fire() {
	$useLocalObjectStack();
	$var($JTextComponent, c, $cast($JTextComponent, getSource()));
	if (c != nullptr) {
		$var($Caret, caret, c->getCaret());
		this->dot = $nc(caret)->getDot();
		this->mark = caret->getMark();
		c->fireCaretUpdate(this);
	}
}

$String* JTextComponent$MutableCaretEvent::toString() {
	$useLocalObjectStack();
	return $str({"dot="_s, $$str(this->dot), ",mark="_s, $$str(this->mark)});
}

int32_t JTextComponent$MutableCaretEvent::getDot() {
	return this->dot;
}

int32_t JTextComponent$MutableCaretEvent::getMark() {
	return this->mark;
}

void JTextComponent$MutableCaretEvent::stateChanged($ChangeEvent* e) {
	if (!this->dragActive) {
		fire();
	}
}

void JTextComponent$MutableCaretEvent::focusGained($FocusEvent* fe) {
	$useLocalObjectStack();
	$init($JTextComponent);
	$$nc($AppContext::getAppContext())->put($JTextComponent::FOCUSED_COMPONENT, $($nc(fe)->getSource()));
}

void JTextComponent$MutableCaretEvent::focusLost($FocusEvent* fe) {
}

void JTextComponent$MutableCaretEvent::mousePressed($MouseEvent* e) {
	this->dragActive = true;
}

void JTextComponent$MutableCaretEvent::mouseReleased($MouseEvent* e) {
	this->dragActive = false;
	fire();
}

void JTextComponent$MutableCaretEvent::mouseClicked($MouseEvent* e) {
}

void JTextComponent$MutableCaretEvent::mouseEntered($MouseEvent* e) {
}

void JTextComponent$MutableCaretEvent::mouseExited($MouseEvent* e) {
}

JTextComponent$MutableCaretEvent::JTextComponent$MutableCaretEvent() {
}

$Class* JTextComponent$MutableCaretEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dragActive", "Z", nullptr, $PRIVATE, $field(JTextComponent$MutableCaretEvent, dragActive)},
		{"dot", "I", nullptr, $PRIVATE, $field(JTextComponent$MutableCaretEvent, dot)},
		{"mark", "I", nullptr, $PRIVATE, $field(JTextComponent$MutableCaretEvent, mark)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(JTextComponent$MutableCaretEvent, init$, void, $JTextComponent*)},
		{"fire", "()V", nullptr, $FINAL, $method(JTextComponent$MutableCaretEvent, fire, void)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$MutableCaretEvent, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$MutableCaretEvent, focusLost, void, $FocusEvent*)},
		{"getDot", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextComponent$MutableCaretEvent, getDot, int32_t)},
		{"getMark", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextComponent$MutableCaretEvent, getMark, int32_t)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextComponent$MutableCaretEvent, mouseClicked, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextComponent$MutableCaretEvent, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextComponent$MutableCaretEvent, mouseExited, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextComponent$MutableCaretEvent, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextComponent$MutableCaretEvent, mouseReleased, void, $MouseEvent*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextComponent$MutableCaretEvent, stateChanged, void, $ChangeEvent*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(JTextComponent$MutableCaretEvent, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$MutableCaretEvent", "javax.swing.text.JTextComponent", "MutableCaretEvent", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$MutableCaretEvent",
		"javax.swing.event.CaretEvent",
		"javax.swing.event.ChangeListener,java.awt.event.FocusListener,java.awt.event.MouseListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$MutableCaretEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextComponent$MutableCaretEvent));
	});
	return class$;
}

$Class* JTextComponent$MutableCaretEvent::class$ = nullptr;

		} // text
	} // swing
} // javax