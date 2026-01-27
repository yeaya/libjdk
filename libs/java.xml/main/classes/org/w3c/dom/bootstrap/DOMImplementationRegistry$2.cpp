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

$MethodInfo _DOMImplementationRegistry$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DOMImplementationRegistry$2, init$, void)},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationRegistry$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _DOMImplementationRegistry$2_EnclosingMethodInfo_ = {
	"org.w3c.dom.bootstrap.DOMImplementationRegistry",
	"getContextClassLoader",
	"()Ljava/lang/ClassLoader;"
};

$InnerClassInfo _DOMImplementationRegistry$2_InnerClassesInfo_[] = {
	{"org.w3c.dom.bootstrap.DOMImplementationRegistry$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DOMImplementationRegistry$2_ClassInfo_ = {
	$ACC_SUPER,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_DOMImplementationRegistry$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_DOMImplementationRegistry$2_EnclosingMethodInfo_,
	_DOMImplementationRegistry$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry"
};

$Object* allocate$DOMImplementationRegistry$2($Class* clazz) {
	return $of($alloc(DOMImplementationRegistry$2));
}

void DOMImplementationRegistry$2::init$() {
}

$Object* DOMImplementationRegistry$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, classLoader, nullptr);
	try {
		$assign(classLoader, $($Thread::currentThread())->getContextClassLoader());
	} catch ($SecurityException& ex) {
	}
	return $of(classLoader);
}

DOMImplementationRegistry$2::DOMImplementationRegistry$2() {
}

$Class* DOMImplementationRegistry$2::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationRegistry$2, name, initialize, &_DOMImplementationRegistry$2_ClassInfo_, allocate$DOMImplementationRegistry$2);
	return class$;
}

$Class* DOMImplementationRegistry$2::class$ = nullptr;

			} // bootstrap
		} // dom
	} // w3c
} // org