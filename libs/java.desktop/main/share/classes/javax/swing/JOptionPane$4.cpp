#include <javax/swing/JOptionPane$4.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/event/InternalFrameAdapter.h>
#include <javax/swing/event/InternalFrameEvent.h>
#include <jcpp.h>

#undef UNINITIALIZED_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $InternalFrameAdapter = ::javax::swing::event::InternalFrameAdapter;
using $InternalFrameEvent = ::javax::swing::event::InternalFrameEvent;

namespace javax {
	namespace swing {

void JOptionPane$4::init$($JOptionPane* this$0) {
	$set(this, this$0, this$0);
	$InternalFrameAdapter::init$();
}

void JOptionPane$4::internalFrameClosing($InternalFrameEvent* e) {
	$init($JOptionPane);
	if ($equals(this->this$0->getValue(), $JOptionPane::UNINITIALIZED_VALUE)) {
		this->this$0->setValue(nullptr);
	}
}

JOptionPane$4::JOptionPane$4() {
}

$Class* JOptionPane$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JOptionPane;)V", nullptr, 0, $method(JOptionPane$4, init$, void, $JOptionPane*)},
		{"internalFrameClosing", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPane$4, internalFrameClosing, void, $InternalFrameEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JOptionPane",
		"createInternalFrame",
		"(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JInternalFrame;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JOptionPane$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JOptionPane$4",
		"javax.swing.event.InternalFrameAdapter",
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
	$loadClass(JOptionPane$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JOptionPane$4);
	});
	return class$;
}

$Class* JOptionPane$4::class$ = nullptr;

	} // swing
} // javax