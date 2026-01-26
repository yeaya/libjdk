#include <javax/xml/crypto/dsig/XMLSignatureException.h>

#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _XMLSignatureException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSignatureException, serialVersionUID)},
	{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(XMLSignatureException, cause)},
	{}
};

$MethodInfo _XMLSignatureException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSignatureException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLSignatureException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XMLSignatureException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XMLSignatureException, init$, void, $Throwable*)},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureException, getCause, $Throwable*)},
	{"printStackTrace", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureException, printStackTrace, void)},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureException, printStackTrace, void, $PrintStream*)},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureException, printStackTrace, void, $PrintWriter*)},
	{}
};

$ClassInfo _XMLSignatureException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.dsig.XMLSignatureException",
	"java.lang.Exception",
	nullptr,
	_XMLSignatureException_FieldInfo_,
	_XMLSignatureException_MethodInfo_
};

$Object* allocate$XMLSignatureException($Class* clazz) {
	return $of($alloc(XMLSignatureException));
}

void XMLSignatureException::init$() {
	$Exception::init$();
}

void XMLSignatureException::init$($String* message) {
	$Exception::init$(message);
}

void XMLSignatureException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message);
	$set(this, cause, cause);
}

void XMLSignatureException::init$($Throwable* cause) {
	$Exception::init$(cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString()));
	$set(this, cause, cause);
}

$Throwable* XMLSignatureException::getCause() {
	return this->cause;
}

void XMLSignatureException::printStackTrace() {
	$Exception::printStackTrace();
	if (this->cause != nullptr) {
		$nc(this->cause)->printStackTrace();
	}
}

void XMLSignatureException::printStackTrace($PrintStream* s) {
	$Exception::printStackTrace(s);
	if (this->cause != nullptr) {
		$nc(this->cause)->printStackTrace(s);
	}
}

void XMLSignatureException::printStackTrace($PrintWriter* s) {
	$Exception::printStackTrace(s);
	if (this->cause != nullptr) {
		$nc(this->cause)->printStackTrace(s);
	}
}

XMLSignatureException::XMLSignatureException() {
}

XMLSignatureException::XMLSignatureException(const XMLSignatureException& e) : $Exception(e) {
}

void XMLSignatureException::throw$() {
	throw *this;
}

$Class* XMLSignatureException::load$($String* name, bool initialize) {
	$loadClass(XMLSignatureException, name, initialize, &_XMLSignatureException_ClassInfo_, allocate$XMLSignatureException);
	return class$;
}

$Class* XMLSignatureException::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax