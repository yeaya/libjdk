#include <bug4314199$2.h>
#include <bug4314199.h>
#include <jcpp.h>

using $bug4314199 = ::bug4314199;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4314199$2::init$($bug4314199* this$0, $Exception* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

void bug4314199$2::run() {
	$useLocalObjectStack();
	this->this$0->createAndShowMessage($$str({"Test fails because of exception: "_s, $($nc(this->val$e)->getMessage())}));
}

bug4314199$2::bug4314199$2() {
}

$Class* bug4314199$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4314199;", nullptr, $FINAL | $SYNTHETIC, $field(bug4314199$2, this$0)},
		{"val$e", "Ljava/lang/Exception;", nullptr, $FINAL | $SYNTHETIC, $field(bug4314199$2, val$e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4314199;Ljava/lang/Exception;)V", "()V", 0, $method(bug4314199$2, init$, void, $bug4314199*, $Exception*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4314199$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4314199",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4314199$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4314199$2",
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
		"bug4314199"
	};
	$loadClass(bug4314199$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4314199$2);
	});
	return class$;
}

$Class* bug4314199$2::class$ = nullptr;