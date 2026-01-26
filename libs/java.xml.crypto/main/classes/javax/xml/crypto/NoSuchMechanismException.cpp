#include <javax/xml/crypto/NoSuchMechanismException.h>

#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace xml {
		namespace crypto {

$FieldInfo _NoSuchMechanismException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchMechanismException, serialVersionUID)},
	{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(NoSuchMechanismException, cause)},
	{}
};

$MethodInfo _NoSuchMechanismException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchMechanismException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchMechanismException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(NoSuchMechanismException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(NoSuchMechanismException, init$, void, $Throwable*)},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(NoSuchMechanismException, getCause, $Throwable*)},
	{"printStackTrace", "()V", nullptr, $PUBLIC, $virtualMethod(NoSuchMechanismException, printStackTrace, void)},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $virtualMethod(NoSuchMechanismException, printStackTrace, void, $PrintStream*)},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $virtualMethod(NoSuchMechanismException, printStackTrace, void, $PrintWriter*)},
	{}
};

$ClassInfo _NoSuchMechanismException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.NoSuchMechanismException",
	"java.lang.RuntimeException",
	nullptr,
	_NoSuchMechanismException_FieldInfo_,
	_NoSuchMechanismException_MethodInfo_
};

$Object* allocate$NoSuchMechanismException($Class* clazz) {
	return $of($alloc(NoSuchMechanismException));
}

void NoSuchMechanismException::init$() {
	$RuntimeException::init$();
}

void NoSuchMechanismException::init$($String* message) {
	$RuntimeException::init$(message);
}

void NoSuchMechanismException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message);
	$set(this, cause, cause);
}

void NoSuchMechanismException::init$($Throwable* cause) {
	$RuntimeException::init$(cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString()));
	$set(this, cause, cause);
}

$Throwable* NoSuchMechanismException::getCause() {
	return this->cause;
}

void NoSuchMechanismException::printStackTrace() {
	$RuntimeException::printStackTrace();
}

void NoSuchMechanismException::printStackTrace($PrintStream* s) {
	$RuntimeException::printStackTrace(s);
}

void NoSuchMechanismException::printStackTrace($PrintWriter* s) {
	$RuntimeException::printStackTrace(s);
}

NoSuchMechanismException::NoSuchMechanismException() {
}

NoSuchMechanismException::NoSuchMechanismException(const NoSuchMechanismException& e) : $RuntimeException(e) {
}

void NoSuchMechanismException::throw$() {
	throw *this;
}

$Class* NoSuchMechanismException::load$($String* name, bool initialize) {
	$loadClass(NoSuchMechanismException, name, initialize, &_NoSuchMechanismException_ClassInfo_, allocate$NoSuchMechanismException);
	return class$;
}

$Class* NoSuchMechanismException::class$ = nullptr;

		} // crypto
	} // xml
} // javax