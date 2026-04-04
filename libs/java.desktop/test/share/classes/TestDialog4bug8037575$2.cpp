#include <TestDialog4bug8037575$2.h>
#include <TestDialog4bug8037575.h>
#include <bug8037575.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $TestDialog4bug8037575 = ::TestDialog4bug8037575;
using $bug8037575 = ::bug8037575;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestDialog4bug8037575$2::init$($TestDialog4bug8037575* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4bug8037575$2::actionPerformed($ActionEvent* ae) {
	$bug8037575::pass();
}

TestDialog4bug8037575$2::TestDialog4bug8037575$2() {
}

$Class* TestDialog4bug8037575$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestDialog4bug8037575;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4bug8037575$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestDialog4bug8037575;)V", nullptr, 0, $method(TestDialog4bug8037575$2, init$, void, $TestDialog4bug8037575*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestDialog4bug8037575$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestDialog4bug8037575",
		"<init>",
		"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestDialog4bug8037575$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestDialog4bug8037575$2",
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
		"TestDialog4bug8037575"
	};
	$loadClass(TestDialog4bug8037575$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDialog4bug8037575$2);
	});
	return class$;
}

$Class* TestDialog4bug8037575$2::class$ = nullptr;