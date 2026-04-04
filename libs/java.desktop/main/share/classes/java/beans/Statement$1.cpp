#include <java/beans/Statement$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void Statement$1::init$() {
}

void Statement$1::exceptionThrown($Exception* e) {
	$nc($System::err)->println(e);
	$System::err->println("Continuing ..."_s);
}

Statement$1::Statement$1() {
}

$Class* Statement$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Statement$1, init$, void)},
		{"exceptionThrown", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $virtualMethod(Statement$1, exceptionThrown, void, $Exception*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.Statement",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.Statement$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.Statement$1",
		"java.lang.Object",
		"java.beans.ExceptionListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.Statement"
	};
	$loadClass(Statement$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Statement$1);
	});
	return class$;
}

$Class* Statement$1::class$ = nullptr;

	} // beans
} // java