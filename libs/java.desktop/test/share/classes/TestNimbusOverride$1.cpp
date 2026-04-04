#include <TestNimbusOverride$1.h>
#include <TestNimbusOverride.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $TestNimbusOverride = ::TestNimbusOverride;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

void TestNimbusOverride$1::init$($TestNimbusOverride* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(arg0);
}

void TestNimbusOverride$1::actionPerformed($ActionEvent* e) {
	$init($TestNimbusOverride);
	$TestNimbusOverride::passed = true;
}

TestNimbusOverride$1::TestNimbusOverride$1() {
}

$Class* TestNimbusOverride$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestNimbusOverride;", nullptr, $FINAL | $SYNTHETIC, $field(TestNimbusOverride$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestNimbusOverride;Ljava/lang/String;)V", nullptr, 0, $method(TestNimbusOverride$1, init$, void, $TestNimbusOverride*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestNimbusOverride$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestNimbusOverride",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestNimbusOverride$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestNimbusOverride$1",
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
		"TestNimbusOverride"
	};
	$loadClass(TestNimbusOverride$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestNimbusOverride$1));
	});
	return class$;
}

$Class* TestNimbusOverride$1::class$ = nullptr;