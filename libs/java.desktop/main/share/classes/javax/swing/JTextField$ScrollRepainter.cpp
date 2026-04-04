#include <javax/swing/JTextField$ScrollRepainter.h>
#include <java/awt/Component.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

int32_t JTextField$ScrollRepainter::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool JTextField$ScrollRepainter::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* JTextField$ScrollRepainter::clone() {
	 return this->$ChangeListener::clone();
}

$String* JTextField$ScrollRepainter::toString() {
	 return this->$ChangeListener::toString();
}

void JTextField$ScrollRepainter::finalize() {
	this->$ChangeListener::finalize();
}

void JTextField$ScrollRepainter::init$($JTextField* this$0) {
	$set(this, this$0, this$0);
}

void JTextField$ScrollRepainter::stateChanged($ChangeEvent* e) {
	this->this$0->repaint();
}

JTextField$ScrollRepainter::JTextField$ScrollRepainter() {
}

$Class* JTextField$ScrollRepainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JTextField;", nullptr, $FINAL | $SYNTHETIC, $field(JTextField$ScrollRepainter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JTextField;)V", nullptr, 0, $method(JTextField$ScrollRepainter, init$, void, $JTextField*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTextField$ScrollRepainter, stateChanged, void, $ChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTextField$ScrollRepainter", "javax.swing.JTextField", "ScrollRepainter", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTextField$ScrollRepainter",
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
		"javax.swing.JTextField"
	};
	$loadClass(JTextField$ScrollRepainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextField$ScrollRepainter));
	});
	return class$;
}

$Class* JTextField$ScrollRepainter::class$ = nullptr;

	} // swing
} // javax