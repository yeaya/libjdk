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

$FieldInfo _DOMImplementationRegistry$4_FieldInfo_[] = {
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$4, val$name)},
	{"val$classLoader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$4, val$classLoader)},
	{}
};

$MethodInfo _DOMImplementationRegistry$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V", "()V", 0, $method(DOMImplementationRegistry$4, init$, void, $ClassLoader*, $String*)},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationRegistry$4, run, $Object*)},
	{}
};

$EnclosingMethodInfo _DOMImplementationRegistry$4_EnclosingMethodInfo_ = {
	"org.w3c.dom.bootstrap.DOMImplementationRegistry",
	"getResourceAsStream",
	"(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/io/InputStream;"
};

$InnerClassInfo _DOMImplementationRegistry$4_InnerClassesInfo_[] = {
	{"org.w3c.dom.bootstrap.DOMImplementationRegistry$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DOMImplementationRegistry$4_ClassInfo_ = {
	$ACC_SUPER,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_DOMImplementationRegistry$4_FieldInfo_,
	_DOMImplementationRegistry$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_DOMImplementationRegistry$4_EnclosingMethodInfo_,
	_DOMImplementationRegistry$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry"
};

$Object* allocate$DOMImplementationRegistry$4($Class* clazz) {
	return $of($alloc(DOMImplementationRegistry$4));
}

void DOMImplementationRegistry$4::init$($ClassLoader* val$classLoader, $String* val$name) {
	$set(this, val$classLoader, val$classLoader);
	$set(this, val$name, val$name);
}

$Object* DOMImplementationRegistry$4::run() {
	$var($InputStream, ris, nullptr);
	if (this->val$classLoader == nullptr) {
		$assign(ris, $ClassLoader::getSystemResourceAsStream(this->val$name));
	} else {
		$assign(ris, $nc(this->val$classLoader)->getResourceAsStream(this->val$name));
	}
	return $of(ris);
}

DOMImplementationRegistry$4::DOMImplementationRegistry$4() {
}

$Class* DOMImplementationRegistry$4::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationRegistry$4, name, initialize, &_DOMImplementationRegistry$4_ClassInfo_, allocate$DOMImplementationRegistry$4);
	return class$;
}

$Class* DOMImplementationRegistry$4::class$ = nullptr;

			} // bootstrap
		} // dom
	} // w3c
} // org