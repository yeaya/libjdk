#include <javax/swing/JTabbedPane$ModelListener.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

int32_t JTabbedPane$ModelListener::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool JTabbedPane$ModelListener::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* JTabbedPane$ModelListener::clone() {
	 return this->$ChangeListener::clone();
}

$String* JTabbedPane$ModelListener::toString() {
	 return this->$ChangeListener::toString();
}

void JTabbedPane$ModelListener::finalize() {
	this->$ChangeListener::finalize();
}

void JTabbedPane$ModelListener::init$($JTabbedPane* this$0) {
	$set(this, this$0, this$0);
}

void JTabbedPane$ModelListener::stateChanged($ChangeEvent* e) {
	this->this$0->fireStateChanged();
}

JTabbedPane$ModelListener::JTabbedPane$ModelListener() {
}

$Class* JTabbedPane$ModelListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JTabbedPane;", nullptr, $FINAL | $SYNTHETIC, $field(JTabbedPane$ModelListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JTabbedPane;)V", nullptr, $PROTECTED, $method(JTabbedPane$ModelListener, init$, void, $JTabbedPane*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTabbedPane$ModelListener, stateChanged, void, $ChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTabbedPane$ModelListener", "javax.swing.JTabbedPane", "ModelListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JTabbedPane$ModelListener",
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
		"javax.swing.JTabbedPane"
	};
	$loadClass(JTabbedPane$ModelListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTabbedPane$ModelListener));
	});
	return class$;
}

$Class* JTabbedPane$ModelListener::class$ = nullptr;

	} // swing
} // javax