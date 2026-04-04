#include <Test6256140$2.h>
#include <Test6256140.h>
#include <java/awt/Component.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $Test6256140 = ::Test6256140;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test6256140$2::init$($booleans* val$result) {
	$set(this, val$result, val$result);
}

void Test6256140$2::run() {
	$init($Test6256140);
	$nc(this->val$result)->set(0, $nc($Test6256140::toolTipLabel)->isShowing());
}

Test6256140$2::Test6256140$2() {
}

$Class* Test6256140$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(Test6256140$2, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Z)V", "()V", 0, $method(Test6256140$2, init$, void, $booleans*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6256140$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6256140",
		"isTooltipShowning",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6256140$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6256140$2",
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
	$loadClass(Test6256140$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6256140$2);
	});
	return class$;
}

$Class* Test6256140$2::class$ = nullptr;