#include <javax/swing/JOptionPane$3.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef UNINITIALIZED_VALUE

using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;

namespace javax {
	namespace swing {

void JOptionPane$3::init$($JOptionPane* this$0) {
	$set(this, this$0, this$0);
	$ComponentAdapter::init$();
}

void JOptionPane$3::componentShown($ComponentEvent* ce) {
	$init($JOptionPane);
	this->this$0->setValue($JOptionPane::UNINITIALIZED_VALUE);
}

JOptionPane$3::JOptionPane$3() {
}

$Class* JOptionPane$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JOptionPane;)V", nullptr, 0, $method(JOptionPane$3, init$, void, $JOptionPane*)},
		{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane$3, componentShown, void, $ComponentEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JOptionPane",
		"initDialog",
		"(Ljavax/swing/JDialog;ILjava/awt/Component;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JOptionPane$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JOptionPane$3",
		"java.awt.event.ComponentAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JOptionPane"
	};
	$loadClass(JOptionPane$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JOptionPane$3);
	});
	return class$;
}

$Class* JOptionPane$3::class$ = nullptr;

	} // swing
} // javax