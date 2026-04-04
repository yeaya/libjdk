#include <sun/reflect/ReflectionFactory$1.h>
#include <jdk/internal/reflect/ReflectionFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;

namespace sun {
	namespace reflect {

void ReflectionFactory$1::init$() {
}

$Object* ReflectionFactory$1::run() {
	return $ReflectionFactory::getReflectionFactory();
}

ReflectionFactory$1::ReflectionFactory$1() {
}

$Class* ReflectionFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReflectionFactory$1, init$, void)},
		{"run", "()Ljdk/internal/reflect/ReflectionFactory;", nullptr, $PUBLIC, $virtualMethod(ReflectionFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.reflect.ReflectionFactory",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.ReflectionFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.reflect.ReflectionFactory$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljdk/internal/reflect/ReflectionFactory;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.reflect.ReflectionFactory"
	};
	$loadClass(ReflectionFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReflectionFactory$1);
	});
	return class$;
}

$Class* ReflectionFactory$1::class$ = nullptr;

	} // reflect
} // sun