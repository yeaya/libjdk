#include <javax/swing/JSpinner$ModelListener.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSpinner = ::javax::swing::JSpinner;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

int32_t JSpinner$ModelListener::hashCode() {
	return this->$ChangeListener::hashCode();
}

bool JSpinner$ModelListener::equals(Object$* arg0) {
	return this->$ChangeListener::equals(arg0);
}

$Object* JSpinner$ModelListener::clone() {
	return this->$ChangeListener::clone();
}

$String* JSpinner$ModelListener::toString() {
	return this->$ChangeListener::toString();
}

void JSpinner$ModelListener::finalize() {
	this->$ChangeListener::finalize();
}

void JSpinner$ModelListener::init$($JSpinner* this$0) {
	$set(this, this$0, this$0);
}

void JSpinner$ModelListener::stateChanged($ChangeEvent* e) {
	this->this$0->fireStateChanged();
}

JSpinner$ModelListener::JSpinner$ModelListener() {
}

$Class* JSpinner$ModelListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JSpinner;", nullptr, $FINAL | $SYNTHETIC, $field(JSpinner$ModelListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JSpinner;)V", nullptr, $PRIVATE, $method(JSpinner$ModelListener, init$, void, $JSpinner*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JSpinner$ModelListener, stateChanged, void, $ChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSpinner$ModelListener", "javax.swing.JSpinner", "ModelListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JSpinner$ModelListener",
		"java.lang.Object",
		"javax.swing.event.ChangeListener,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JSpinner"
	};
	$loadClass(JSpinner$ModelListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSpinner$ModelListener));
	});
	return class$;
}

$Class* JSpinner$ModelListener::class$ = nullptr;

	} // swing
} // javax