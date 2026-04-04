#include <bug4960629$1.h>
#include <bug4960629.h>
#include <jcpp.h>

using $bug4960629 = ::bug4960629;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug4960629$1::init$($bug4960629* this$0) {
	$set(this, this$0, this$0);
}

void bug4960629$1::run() {
	$useLocalObjectStack();
	try {
		this->this$0->createAndShowGUI();
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({"Exception "_s, $(e->getMessage())}));
	}
}

bug4960629$1::bug4960629$1() {
}

$Class* bug4960629$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4960629;", nullptr, $FINAL | $SYNTHETIC, $field(bug4960629$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4960629;)V", nullptr, 0, $method(bug4960629$1, init$, void, $bug4960629*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4960629$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4960629",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4960629$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4960629$1",
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
		"bug4960629"
	};
	$loadClass(bug4960629$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4960629$1);
	});
	return class$;
}

$Class* bug4960629$1::class$ = nullptr;