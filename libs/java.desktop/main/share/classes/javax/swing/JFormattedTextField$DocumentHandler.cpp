#include <javax/swing/JFormattedTextField$DocumentHandler.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;

namespace javax {
	namespace swing {

int32_t JFormattedTextField$DocumentHandler::hashCode() {
	 return this->$DocumentListener::hashCode();
}

bool JFormattedTextField$DocumentHandler::equals(Object$* arg0) {
	 return this->$DocumentListener::equals(arg0);
}

$Object* JFormattedTextField$DocumentHandler::clone() {
	 return this->$DocumentListener::clone();
}

$String* JFormattedTextField$DocumentHandler::toString() {
	 return this->$DocumentListener::toString();
}

void JFormattedTextField$DocumentHandler::finalize() {
	this->$DocumentListener::finalize();
}

void JFormattedTextField$DocumentHandler::init$($JFormattedTextField* this$0) {
	$set(this, this$0, this$0);
}

void JFormattedTextField$DocumentHandler::insertUpdate($DocumentEvent* e) {
	this->this$0->setEdited(true);
}

void JFormattedTextField$DocumentHandler::removeUpdate($DocumentEvent* e) {
	this->this$0->setEdited(true);
}

void JFormattedTextField$DocumentHandler::changedUpdate($DocumentEvent* e) {
}

JFormattedTextField$DocumentHandler::JFormattedTextField$DocumentHandler() {
}

$Class* JFormattedTextField$DocumentHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JFormattedTextField;", nullptr, $FINAL | $SYNTHETIC, $field(JFormattedTextField$DocumentHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JFormattedTextField;)V", nullptr, $PRIVATE, $method(JFormattedTextField$DocumentHandler, init$, void, $JFormattedTextField*)},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField$DocumentHandler, changedUpdate, void, $DocumentEvent*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField$DocumentHandler, insertUpdate, void, $DocumentEvent*)},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(JFormattedTextField$DocumentHandler, removeUpdate, void, $DocumentEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JFormattedTextField$DocumentHandler", "javax.swing.JFormattedTextField", "DocumentHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JFormattedTextField$DocumentHandler",
		"java.lang.Object",
		"javax.swing.event.DocumentListener,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JFormattedTextField"
	};
	$loadClass(JFormattedTextField$DocumentHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JFormattedTextField$DocumentHandler));
	});
	return class$;
}

$Class* JFormattedTextField$DocumentHandler::class$ = nullptr;

	} // swing
} // javax