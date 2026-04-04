#include <TestButtonGroupFocusTraversal$1$3.h>
#include <TestButtonGroupFocusTraversal$1.h>
#include <TestButtonGroupFocusTraversal.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $TestButtonGroupFocusTraversal = ::TestButtonGroupFocusTraversal;
using $TestButtonGroupFocusTraversal$1 = ::TestButtonGroupFocusTraversal$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

void TestButtonGroupFocusTraversal$1$3::init$($TestButtonGroupFocusTraversal$1* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void TestButtonGroupFocusTraversal$1$3::actionPerformed($ActionEvent* e) {
	$init($TestButtonGroupFocusTraversal);
	$TestButtonGroupFocusTraversal::checkboxActionPerformed = true;
}

TestButtonGroupFocusTraversal$1$3::TestButtonGroupFocusTraversal$1$3() {
}

$Class* TestButtonGroupFocusTraversal$1$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestButtonGroupFocusTraversal$1;", nullptr, $FINAL | $SYNTHETIC, $field(TestButtonGroupFocusTraversal$1$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestButtonGroupFocusTraversal$1;)V", nullptr, 0, $method(TestButtonGroupFocusTraversal$1$3, init$, void, $TestButtonGroupFocusTraversal$1*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestButtonGroupFocusTraversal$1$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestButtonGroupFocusTraversal$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestButtonGroupFocusTraversal$1", nullptr, nullptr, 0},
		{"TestButtonGroupFocusTraversal$1$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestButtonGroupFocusTraversal$1$3",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestButtonGroupFocusTraversal"
	};
	$loadClass(TestButtonGroupFocusTraversal$1$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestButtonGroupFocusTraversal$1$3));
	});
	return class$;
}

$Class* TestButtonGroupFocusTraversal$1$3::class$ = nullptr;