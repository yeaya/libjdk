#include <org/w3c/dom/bootstrap/DOMImplementationRegistry$4.h>
#include <java/io/InputStream.h>
#include <java/lang/ClassLoader.h>
#include <org/w3c/dom/bootstrap/DOMImplementationRegistry.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

void DOMImplementationRegistry$4::init$($ClassLoader* val$classLoader, $String* val$name) {
	$set(this, val$classLoader, val$classLoader);
	$set(this, val$name, val$name);
}

$Object* DOMImplementationRegistry$4::run() {
	$var($InputStream, ris, nullptr);
	if (this->val$classLoader == nullptr) {
		$assign(ris, $ClassLoader::getSystemResourceAsStream(this->val$name));
	} else {
		$assign(ris, this->val$classLoader->getResourceAsStream(this->val$name));
	}
	return ris;
}

DOMImplementationRegistry$4::DOMImplementationRegistry$4() {
}

$Class* DOMImplementationRegistry$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$4, val$name)},
		{"val$classLoader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$4, val$classLoader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V", "()V", 0, $method(DOMImplementationRegistry$4, init$, void, $ClassLoader*, $String*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationRegistry$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"org.w3c.dom.bootstrap.DOMImplementationRegistry",
		"getResourceAsStream",
		"(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/io/InputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.w3c.dom.bootstrap.DOMImplementationRegistry$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"org.w3c.dom.bootstrap.DOMImplementationRegistry$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.w3c.dom.bootstrap.DOMImplementationRegistry"
	};
	$loadClass(DOMImplementationRegistry$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMImplementationRegistry$4);
	});
	return class$;
}

$Class* DOMImplementationRegistry$4::class$ = nullptr;

			} // bootstrap
		} // dom
	} // w3c
} // org