#include <org/w3c/dom/bootstrap/DOMImplementationRegistry$2.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <org/w3c/dom/bootstrap/DOMImplementationRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

void DOMImplementationRegistry$2::init$() {
}

$Object* DOMImplementationRegistry$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, classLoader, nullptr);
	try {
		$assign(classLoader, $($Thread::currentThread())->getContextClassLoader());
	} catch ($SecurityException& ex) {
	}
	return classLoader;
}

DOMImplementationRegistry$2::DOMImplementationRegistry$2() {
}

$Class* DOMImplementationRegistry$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DOMImplementationRegistry$2, init$, void)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationRegistry$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"org.w3c.dom.bootstrap.DOMImplementationRegistry",
		"getContextClassLoader",
		"()Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.w3c.dom.bootstrap.DOMImplementationRegistry$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"org.w3c.dom.bootstrap.DOMImplementationRegistry$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.w3c.dom.bootstrap.DOMImplementationRegistry"
	};
	$loadClass(DOMImplementationRegistry$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMImplementationRegistry$2);
	});
	return class$;
}

$Class* DOMImplementationRegistry$2::class$ = nullptr;

			} // bootstrap
		} // dom
	} // w3c
} // org