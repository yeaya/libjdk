#include <javax/swing/JViewport$1.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JViewport.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JViewport = ::javax::swing::JViewport;

namespace javax {
	namespace swing {

void JViewport$1::init$($JViewport* this$0) {
	$set(this, this$0, this$0);
}

void JViewport$1::actionPerformed($ActionEvent* ae) {
	if (this->this$0->waitingForRepaint) {
		this->this$0->repaint();
	}
}

JViewport$1::JViewport$1() {
}

$Class* JViewport$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JViewport;", nullptr, $FINAL | $SYNTHETIC, $field(JViewport$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JViewport;)V", nullptr, 0, $method(JViewport$1, init$, void, $JViewport*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JViewport$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JViewport",
		"createRepaintTimer",
		"()Ljavax/swing/Timer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JViewport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JViewport$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JViewport"
	};
	$loadClass(JViewport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JViewport$1);
	});
	return class$;
}

$Class* JViewport$1::class$ = nullptr;

	} // swing
} // javax