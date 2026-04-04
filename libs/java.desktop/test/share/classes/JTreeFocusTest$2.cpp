#include <JTreeFocusTest$2.h>
#include <JTreeFocusTest.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/TreeModel.h>
#include <jcpp.h>

#undef VK_F2

using $JTreeFocusTest = ::JTreeFocusTest;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $TreeModel = ::javax::swing::tree::TreeModel;

void JTreeFocusTest$2::init$($JTreeFocusTest* this$0, $TreeModel* arg0) {
	$set(this, this$0, this$0);
	$JTree::init$(arg0);
}

void JTreeFocusTest$2::processKeyEvent($KeyEvent* e) {
	$JTree::processKeyEvent(e);
	if ($nc(e)->getKeyCode() == $KeyEvent::VK_F2) {
		$synchronized(this->this$0) {
			this->this$0->keysTyped = true;
			this->this$0->notifyAll();
		}
	}
}

JTreeFocusTest$2::JTreeFocusTest$2() {
}

$Class* JTreeFocusTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LJTreeFocusTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTreeFocusTest$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJTreeFocusTest;Ljavax/swing/tree/TreeModel;)V", nullptr, 0, $method(JTreeFocusTest$2, init$, void, $JTreeFocusTest*, $TreeModel*)},
		{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTreeFocusTest$2, processKeyEvent, void, $KeyEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTreeFocusTest",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTreeFocusTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTreeFocusTest$2",
		"javax.swing.JTree",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JTreeFocusTest"
	};
	$loadClass(JTreeFocusTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTreeFocusTest$2));
	});
	return class$;
}

$Class* JTreeFocusTest$2::class$ = nullptr;