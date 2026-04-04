#include <JTreeFocusTest$3.h>
#include <JTreeFocusTest.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $JTreeFocusTest = ::JTreeFocusTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;

void JTreeFocusTest$3::init$($JTreeFocusTest* this$0) {
	$set(this, this$0, this$0);
}

void JTreeFocusTest$3::valueChanged($TreeSelectionEvent* e) {
	$useLocalObjectStack();
	$init($JTreeFocusTest);
	if ($nc($JTreeFocusTest::root)->equals($($$nc($nc(e)->getPath())->getLastPathComponent()))) {
		$synchronized(this->this$0) {
			this->this$0->rootSelected = true;
			this->this$0->notifyAll();
		}
	}
}

JTreeFocusTest$3::JTreeFocusTest$3() {
}

$Class* JTreeFocusTest$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LJTreeFocusTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTreeFocusTest$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJTreeFocusTest;)V", nullptr, 0, $method(JTreeFocusTest$3, init$, void, $JTreeFocusTest*)},
		{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTreeFocusTest$3, valueChanged, void, $TreeSelectionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTreeFocusTest",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTreeFocusTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTreeFocusTest$3",
		"java.lang.Object",
		"javax.swing.event.TreeSelectionListener",
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
	$loadClass(JTreeFocusTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTreeFocusTest$3);
	});
	return class$;
}

$Class* JTreeFocusTest$3::class$ = nullptr;