#include <sun/awt/AppContext$1.h>
#include <java/lang/ClassLoader.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

void AppContext$1::init$($AppContext* this$0) {
	$set(this, this$0, this$0);
}

$Object* AppContext$1::run() {
	$beforeCallerSensitive();
	return $($Thread::currentThread())->getContextClassLoader();
}

AppContext$1::AppContext$1() {
}

$Class* AppContext$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AppContext;)V", nullptr, 0, $method(AppContext$1, init$, void, $AppContext*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(AppContext$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.AppContext",
		"<init>",
		"(Ljava/lang/ThreadGroup;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.AppContext$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AppContext"
	};
	$loadClass(AppContext$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$1);
	});
	return class$;
}

$Class* AppContext$1::class$ = nullptr;

	} // awt
} // sun