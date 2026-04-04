#include <javax/management/remote/JMXServerErrorException.h>
#include <java/io/IOException.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {

void JMXServerErrorException::init$($String* s, $Error* err) {
	$IOException::init$(s);
	$set(this, cause, err);
}

$Throwable* JMXServerErrorException::getCause() {
	return this->cause;
}

JMXServerErrorException::JMXServerErrorException() {
}

JMXServerErrorException::JMXServerErrorException(const JMXServerErrorException& e) : $IOException(e) {
}

void JMXServerErrorException::throw$() {
	throw *this;
}

$Class* JMXServerErrorException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMXServerErrorException, serialVersionUID)},
		{"cause", "Ljava/lang/Error;", nullptr, $PRIVATE | $FINAL, $field(JMXServerErrorException, cause)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Error;)V", nullptr, $PUBLIC, $method(JMXServerErrorException, init$, void, $String*, $Error*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(JMXServerErrorException, getCause, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.remote.JMXServerErrorException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JMXServerErrorException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXServerErrorException);
	});
	return class$;
}

$Class* JMXServerErrorException::class$ = nullptr;

		} // remote
	} // management
} // javax