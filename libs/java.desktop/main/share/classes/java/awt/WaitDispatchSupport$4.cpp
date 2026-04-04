#include <java/awt/WaitDispatchSupport$4.h>
#include <java/awt/WaitDispatchSupport.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace awt {

void WaitDispatchSupport$4::init$($WaitDispatchSupport* this$0, $Runnable* val$run) {
	$set(this, this$0, this$0);
	$set(this, val$run, val$run);
}

$Object* WaitDispatchSupport$4::run() {
	$nc(this->val$run)->run();
	return nullptr;
}

WaitDispatchSupport$4::WaitDispatchSupport$4() {
}

$Class* WaitDispatchSupport$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/WaitDispatchSupport;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$4, this$0)},
		{"val$run", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$4, val$run)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/WaitDispatchSupport;Ljava/lang/Runnable;)V", "()V", 0, $method(WaitDispatchSupport$4, init$, void, $WaitDispatchSupport*, $Runnable*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(WaitDispatchSupport$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.WaitDispatchSupport",
		"enter",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.WaitDispatchSupport$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.WaitDispatchSupport$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.WaitDispatchSupport"
	};
	$loadClass(WaitDispatchSupport$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WaitDispatchSupport$4);
	});
	return class$;
}

$Class* WaitDispatchSupport$4::class$ = nullptr;

	} // awt
} // java