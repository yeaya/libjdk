#include <org/w3c/dom/bootstrap/DOMImplementationRegistry$3.h>
#include <org/w3c/dom/bootstrap/DOMImplementationRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

void DOMImplementationRegistry$3::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* DOMImplementationRegistry$3::run() {
	return $of($System::getProperty(this->val$name));
}

DOMImplementationRegistry$3::DOMImplementationRegistry$3() {
}

$Class* DOMImplementationRegistry$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$3, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(DOMImplementationRegistry$3, init$, void, $String*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationRegistry$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"org.w3c.dom.bootstrap.DOMImplementationRegistry",
		"getSystemProperty",
		"(Ljava/lang/String;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.w3c.dom.bootstrap.DOMImplementationRegistry$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"org.w3c.dom.bootstrap.DOMImplementationRegistry$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.w3c.dom.bootstrap.DOMImplementationRegistry"
	};
	$loadClass(DOMImplementationRegistry$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMImplementationRegistry$3);
	});
	return class$;
}

$Class* DOMImplementationRegistry$3::class$ = nullptr;

			} // bootstrap
		} // dom
	} // w3c
} // org