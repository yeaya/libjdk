#include <bug4714674$2.h>
#include <DeafServer.h>
#include <bug4714674.h>
#include <jcpp.h>

using $DeafServer = ::DeafServer;
using $bug4714674 = ::bug4714674;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4714674$2::init$($bug4714674* this$0, $DeafServer* val$server) {
	$set(this, this$0, this$0);
	$set(this, val$server, val$server);
}

void bug4714674$2::run() {
	$synchronized(this->val$server) {
		this->val$server->wakeup = true;
		this->val$server->notifyAll();
	}
	this->this$0->pass();
}

bug4714674$2::bug4714674$2() {
}

$Class* bug4714674$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4714674;", nullptr, $FINAL | $SYNTHETIC, $field(bug4714674$2, this$0)},
		{"val$server", "LDeafServer;", nullptr, $FINAL | $SYNTHETIC, $field(bug4714674$2, val$server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4714674;LDeafServer;)V", "()V", 0, $method(bug4714674$2, init$, void, $bug4714674*, $DeafServer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4714674$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4714674",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4714674$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4714674$2",
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
		"bug4714674"
	};
	$loadClass(bug4714674$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4714674$2);
	});
	return class$;
}

$Class* bug4714674$2::class$ = nullptr;