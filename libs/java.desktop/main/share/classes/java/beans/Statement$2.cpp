#include <java/beans/Statement$2.h>
#include <java/beans/Statement.h>
#include <jcpp.h>

using $Statement = ::java::beans::Statement;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void Statement$2::init$($Statement* this$0) {
	$set(this, this$0, this$0);
}

$Object* Statement$2::run() {
	return this->this$0->invokeInternal();
}

Statement$2::Statement$2() {
}

$Class* Statement$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/beans/Statement;", nullptr, $FINAL | $SYNTHETIC, $field(Statement$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/Statement;)V", nullptr, 0, $method(Statement$2, init$, void, $Statement*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Statement$2, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.Statement",
		"invoke",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.Statement$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.Statement$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.Statement"
	};
	$loadClass(Statement$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Statement$2);
	});
	return class$;
}

$Class* Statement$2::class$ = nullptr;

	} // beans
} // java