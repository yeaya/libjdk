#include <javax/swing/AbstractButton$ButtonChangeListener.h>
#include <javax/swing/AbstractButton$Handler.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

int32_t AbstractButton$ButtonChangeListener::hashCode() {
	return this->$ChangeListener::hashCode();
}

bool AbstractButton$ButtonChangeListener::equals(Object$* arg0) {
	return this->$ChangeListener::equals(arg0);
}

$Object* AbstractButton$ButtonChangeListener::clone() {
	return this->$ChangeListener::clone();
}

$String* AbstractButton$ButtonChangeListener::toString() {
	return this->$ChangeListener::toString();
}

void AbstractButton$ButtonChangeListener::finalize() {
	this->$ChangeListener::finalize();
}

void AbstractButton$ButtonChangeListener::init$($AbstractButton* this$0) {
	$set(this, this$0, this$0);
}

void AbstractButton$ButtonChangeListener::stateChanged($ChangeEvent* e) {
	$$nc(this->this$0->getHandler())->stateChanged(e);
}

AbstractButton$ButtonChangeListener::AbstractButton$ButtonChangeListener() {
}

$Class* AbstractButton$ButtonChangeListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/AbstractButton;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractButton$ButtonChangeListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/AbstractButton;)V", nullptr, 0, $method(AbstractButton$ButtonChangeListener, init$, void, $AbstractButton*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AbstractButton$ButtonChangeListener, stateChanged, void, $ChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.AbstractButton$ButtonChangeListener", "javax.swing.AbstractButton", "ButtonChangeListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.AbstractButton$ButtonChangeListener",
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
		"javax.swing.AbstractButton"
	};
	$loadClass(AbstractButton$ButtonChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractButton$ButtonChangeListener));
	});
	return class$;
}

$Class* AbstractButton$ButtonChangeListener::class$ = nullptr;

	} // swing
} // javax