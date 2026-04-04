#include <javax/security/sasl/SaslException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace sasl {

void SaslException::init$() {
	$IOException::init$();
}

void SaslException::init$($String* detail) {
	$IOException::init$(detail);
}

void SaslException::init$($String* detail, $Throwable* ex) {
	$IOException::init$(detail);
	if (ex != nullptr) {
		initCause(ex);
	}
}

$Throwable* SaslException::getCause() {
	return this->_exception;
}

$Throwable* SaslException::initCause($Throwable* cause) {
	$IOException::initCause(cause);
	$set(this, _exception, cause);
	return this;
}

$String* SaslException::toString() {
	$useLocalObjectStack();
	$var($String, answer, $IOException::toString());
	if (this->_exception != nullptr && !$equals(this->_exception, this)) {
		$plusAssign(answer, $$str({" [Caused by "_s, $(this->_exception->toString()), "]"_s}));
	}
	return answer;
}

SaslException::SaslException() {
}

SaslException::SaslException(const SaslException& e) : $IOException(e) {
}

void SaslException::throw$() {
	throw *this;
}

$Class* SaslException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_exception", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(SaslException, _exception)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SaslException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SaslException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SaslException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SaslException, init$, void, $String*, $Throwable*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(SaslException, getCause, $Throwable*)},
		{"initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(SaslException, initCause, $Throwable*, $Throwable*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SaslException, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.sasl.SaslException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SaslException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SaslException);
	});
	return class$;
}

$Class* SaslException::class$ = nullptr;

		} // sasl
	} // security
} // javax