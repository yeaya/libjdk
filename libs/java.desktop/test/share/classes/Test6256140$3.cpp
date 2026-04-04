#include <Test6256140$3.h>
#include <Test6256140.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Test6256140 = ::Test6256140;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test6256140$3::init$($booleans* val$result) {
	$set(this, val$result, val$result);
}

void Test6256140$3::run() {
	$init($Test6256140);
	$nc(this->val$result)->set(0, "value"_s->equals($($nc($Test6256140::ft)->getText())));
}

Test6256140$3::Test6256140$3() {
}

$Class* Test6256140$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(Test6256140$3, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Z)V", "()V", 0, $method(Test6256140$3, init$, void, $booleans*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6256140$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6256140",
		"isTextEqual",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6256140$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6256140$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test6256140"
	};
	$loadClass(Test6256140$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6256140$3);
	});
	return class$;
}

$Class* Test6256140$3::class$ = nullptr;