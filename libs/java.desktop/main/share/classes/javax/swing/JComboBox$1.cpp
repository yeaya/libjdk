#include <javax/swing/JComboBox$1.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/event/AncestorEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;

namespace javax {
	namespace swing {

void JComboBox$1::init$($JComboBox* this$0) {
	$set(this, this$0, this$0);
}

void JComboBox$1::ancestorAdded($AncestorEvent* event) {
	this->this$0->hidePopup();
}

void JComboBox$1::ancestorRemoved($AncestorEvent* event) {
	this->this$0->hidePopup();
}

void JComboBox$1::ancestorMoved($AncestorEvent* event) {
	if (!$equals($nc(event)->getSource(), this->this$0)) {
		this->this$0->hidePopup();
	}
}

JComboBox$1::JComboBox$1() {
}

$Class* JComboBox$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComboBox;)V", nullptr, 0, $method(JComboBox$1, init$, void, $JComboBox*)},
		{"ancestorAdded", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox$1, ancestorAdded, void, $AncestorEvent*)},
		{"ancestorMoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox$1, ancestorMoved, void, $AncestorEvent*)},
		{"ancestorRemoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComboBox$1, ancestorRemoved, void, $AncestorEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JComboBox",
		"installAncestorListener",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComboBox$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JComboBox$1",
		"java.lang.Object",
		"javax.swing.event.AncestorListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComboBox"
	};
	$loadClass(JComboBox$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComboBox$1);
	});
	return class$;
}

$Class* JComboBox$1::class$ = nullptr;

	} // swing
} // javax