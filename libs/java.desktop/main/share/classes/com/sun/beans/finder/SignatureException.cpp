#include <com/sun/beans/finder/SignatureException.h>
#include <java/lang/NoSuchMethodException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

void SignatureException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

$NoSuchMethodException* SignatureException::toNoSuchMethodException($String* message) {
	$useLocalObjectStack();
	$var($Throwable, throwable, getCause());
	if ($instanceOf($NoSuchMethodException, throwable)) {
		return $cast($NoSuchMethodException, throwable);
	}
	$var($NoSuchMethodException, exception, $new($NoSuchMethodException, message));
	exception->initCause(throwable);
	return exception;
}

SignatureException::SignatureException() {
}

SignatureException::SignatureException(const SignatureException& e) : $RuntimeException(e) {
}

void SignatureException::throw$() {
	throw *this;
}

$Class* SignatureException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SignatureException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(SignatureException, init$, void, $Throwable*)},
		{"toNoSuchMethodException", "(Ljava/lang/String;)Ljava/lang/NoSuchMethodException;", nullptr, 0, $method(SignatureException, toNoSuchMethodException, $NoSuchMethodException*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.finder.SignatureException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SignatureException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureException);
	});
	return class$;
}

$Class* SignatureException::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com