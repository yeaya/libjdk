#include <jdk/security/jarsigner/JarSignerException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace jdk {
	namespace security {
		namespace jarsigner {

$FieldInfo _JarSignerException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JarSignerException, serialVersionUID)},
	{}
};

$MethodInfo _JarSignerException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(JarSignerException::*)($String*,$Throwable*)>(&JarSignerException::init$))},
	{}
};

$ClassInfo _JarSignerException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.security.jarsigner.JarSignerException",
	"java.lang.RuntimeException",
	nullptr,
	_JarSignerException_FieldInfo_,
	_JarSignerException_MethodInfo_
};

$Object* allocate$JarSignerException($Class* clazz) {
	return $of($alloc(JarSignerException));
}

void JarSignerException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

JarSignerException::JarSignerException() {
}

JarSignerException::JarSignerException(const JarSignerException& e) : $RuntimeException(e) {
}

void JarSignerException::throw$() {
	throw *this;
}

$Class* JarSignerException::load$($String* name, bool initialize) {
	$loadClass(JarSignerException, name, initialize, &_JarSignerException_ClassInfo_, allocate$JarSignerException);
	return class$;
}

$Class* JarSignerException::class$ = nullptr;

		} // jarsigner
	} // security
} // jdk