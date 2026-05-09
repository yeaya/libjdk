#include <javax/swing/JSlider$ModelListener.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

int32_t JSlider$ModelListener::hashCode() {
	return this->$ChangeListener::hashCode();
}

bool JSlider$ModelListener::equals(Object$* arg0) {
	return this->$ChangeListener::equals(arg0);
}

$Object* JSlider$ModelListener::clone() {
	return this->$ChangeListener::clone();
}

$String* JSlider$ModelListener::toString() {
	return this->$ChangeListener::toString();
}

void JSlider$ModelListener::finalize() {
	this->$ChangeListener::finalize();
}

void JSlider$ModelListener::init$($JSlider* this$0) {
	$set(this, this$0, this$0);
}

void JSlider$ModelListener::stateChanged($ChangeEvent* e) {
	this->this$0->fireStateChanged();
}

JSlider$ModelListener::JSlider$ModelListener() {
}

$Class* JSlider$ModelListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JSlider;", nullptr, $FINAL | $SYNTHETIC, $field(JSlider$ModelListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JSlider;)V", nullptr, $PRIVATE, $method(JSlider$ModelListener, init$, void, $JSlider*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JSlider$ModelListener, stateChanged, void, $ChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSlider$ModelListener", "javax.swing.JSlider", "ModelListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JSlider$ModelListener",
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
		"javax.swing.JSlider"
	};
	$loadClass(JSlider$ModelListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSlider$ModelListener));
	});
	return class$;
}

$Class* JSlider$ModelListener::class$ = nullptr;

	} // swing
} // javax