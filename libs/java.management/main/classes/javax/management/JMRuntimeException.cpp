#include <javax/management/JMRuntimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace management {

void JMRuntimeException::init$() {
	$RuntimeException::init$();
}

void JMRuntimeException::init$($String* message) {
	$RuntimeException::init$(message);
}

void JMRuntimeException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

JMRuntimeException::JMRuntimeException() {
}

JMRuntimeException::JMRuntimeException(const JMRuntimeException& e) : $RuntimeException(e) {
}

void JMRuntimeException::throw$() {
	throw *this;
}

$Class* JMRuntimeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMRuntimeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JMRuntimeException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JMRuntimeException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, 0, $method(JMRuntimeException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.JMRuntimeException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JMRuntimeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMRuntimeException);
	});
	return class$;
}

$Class* JMRuntimeException::class$ = nullptr;

	} // management
} // javax