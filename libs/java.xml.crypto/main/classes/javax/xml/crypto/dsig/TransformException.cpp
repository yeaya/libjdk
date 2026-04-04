#include <javax/xml/crypto/dsig/TransformException.h>
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

void TransformException::init$() {
	$Exception::init$();
}

void TransformException::init$($String* message) {
	$Exception::init$(message);
}

void TransformException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message);
	$set(this, cause, cause);
}

void TransformException::init$($Throwable* cause) {
	$Exception::init$(cause == nullptr ? ($String*)nullptr : $(cause->toString()));
	$set(this, cause, cause);
}

$Throwable* TransformException::getCause() {
	return this->cause;
}

void TransformException::printStackTrace() {
	$Exception::printStackTrace();
	if (this->cause != nullptr) {
		this->cause->printStackTrace();
	}
}

void TransformException::printStackTrace($PrintStream* s) {
	$Exception::printStackTrace(s);
	if (this->cause != nullptr) {
		this->cause->printStackTrace(s);
	}
}

void TransformException::printStackTrace($PrintWriter* s) {
	$Exception::printStackTrace(s);
	if (this->cause != nullptr) {
		this->cause->printStackTrace(s);
	}
}

TransformException::TransformException() {
}

TransformException::TransformException(const TransformException& e) : $Exception(e) {
}

void TransformException::throw$() {
	throw *this;
}

$Class* TransformException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformException, serialVersionUID)},
		{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(TransformException, cause)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TransformException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TransformException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TransformException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TransformException, init$, void, $Throwable*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(TransformException, getCause, $Throwable*)},
		{"printStackTrace", "()V", nullptr, $PUBLIC, $virtualMethod(TransformException, printStackTrace, void)},
		{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $virtualMethod(TransformException, printStackTrace, void, $PrintStream*)},
		{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $virtualMethod(TransformException, printStackTrace, void, $PrintWriter*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.crypto.dsig.TransformException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TransformException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformException);
	});
	return class$;
}

$Class* TransformException::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax