#include <javax/swing/JList$ListSelectionHandler.h>
#include <javax/swing/JList.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;

namespace javax {
	namespace swing {

int32_t JList$ListSelectionHandler::hashCode() {
	return this->$ListSelectionListener::hashCode();
}

bool JList$ListSelectionHandler::equals(Object$* arg0) {
	return this->$ListSelectionListener::equals(arg0);
}

$Object* JList$ListSelectionHandler::clone() {
	return this->$ListSelectionListener::clone();
}

$String* JList$ListSelectionHandler::toString() {
	return this->$ListSelectionListener::toString();
}

void JList$ListSelectionHandler::finalize() {
	this->$ListSelectionListener::finalize();
}

void JList$ListSelectionHandler::init$($JList* this$0) {
	$set(this, this$0, this$0);
}

void JList$ListSelectionHandler::valueChanged($ListSelectionEvent* e) {
	int32_t var$0 = $nc(e)->getFirstIndex();
	int32_t var$1 = e->getLastIndex();
	this->this$0->fireSelectionValueChanged(var$0, var$1, e->getValueIsAdjusting());
}

JList$ListSelectionHandler::JList$ListSelectionHandler() {
}

$Class* JList$ListSelectionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JList;", nullptr, $FINAL | $SYNTHETIC, $field(JList$ListSelectionHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JList;)V", nullptr, $PRIVATE, $method(JList$ListSelectionHandler, init$, void, $JList*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JList$ListSelectionHandler, valueChanged, void, $ListSelectionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JList$ListSelectionHandler", "javax.swing.JList", "ListSelectionHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JList$ListSelectionHandler",
		"java.lang.Object",
		"javax.swing.event.ListSelectionListener,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JList"
	};
	$loadClass(JList$ListSelectionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JList$ListSelectionHandler));
	});
	return class$;
}

$Class* JList$ListSelectionHandler::class$ = nullptr;

	} // swing
} // javax