#include <sun/tools/jar/Validator$InvalidJarException.h>

#include <sun/tools/jar/Validator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Validator = ::sun::tools::jar::Validator;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _Validator$InvalidJarException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Validator$InvalidJarException, serialVersionUID)},
	{}
};

$MethodInfo _Validator$InvalidJarException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Validator$InvalidJarException::*)($String*)>(&Validator$InvalidJarException::init$))},
	{}
};

$InnerClassInfo _Validator$InvalidJarException_InnerClassesInfo_[] = {
	{"sun.tools.jar.Validator$InvalidJarException", "sun.tools.jar.Validator", "InvalidJarException", $STATIC},
	{}
};

$ClassInfo _Validator$InvalidJarException_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.Validator$InvalidJarException",
	"java.lang.RuntimeException",
	nullptr,
	_Validator$InvalidJarException_FieldInfo_,
	_Validator$InvalidJarException_MethodInfo_,
	nullptr,
	nullptr,
	_Validator$InvalidJarException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.Validator"
};

$Object* allocate$Validator$InvalidJarException($Class* clazz) {
	return $of($alloc(Validator$InvalidJarException));
}

void Validator$InvalidJarException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

Validator$InvalidJarException::Validator$InvalidJarException() {
}

Validator$InvalidJarException::Validator$InvalidJarException(const Validator$InvalidJarException& e) : $RuntimeException(e) {
}

void Validator$InvalidJarException::throw$() {
	throw *this;
}

$Class* Validator$InvalidJarException::load$($String* name, bool initialize) {
	$loadClass(Validator$InvalidJarException, name, initialize, &_Validator$InvalidJarException_ClassInfo_, allocate$Validator$InvalidJarException);
	return class$;
}

$Class* Validator$InvalidJarException::class$ = nullptr;

		} // jar
	} // tools
} // sun