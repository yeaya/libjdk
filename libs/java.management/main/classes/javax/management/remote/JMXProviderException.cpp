#include <javax/management/remote/JMXProviderException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {

void JMXProviderException::init$() {
	$IOException::init$();
	$set(this, cause, nullptr);
}

void JMXProviderException::init$($String* message) {
	$IOException::init$(message);
	$set(this, cause, nullptr);
}

void JMXProviderException::init$($String* message, $Throwable* cause) {
	$IOException::init$(message);
	$set(this, cause, nullptr);
	$set(this, cause, cause);
}

$Throwable* JMXProviderException::getCause() {
	return this->cause;
}

JMXProviderException::JMXProviderException() {
}

JMXProviderException::JMXProviderException(const JMXProviderException& e) : $IOException(e) {
}

void JMXProviderException::throw$() {
	throw *this;
}

$Class* JMXProviderException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMXProviderException, serialVersionUID)},
		{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(JMXProviderException, cause)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JMXProviderException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JMXProviderException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(JMXProviderException, init$, void, $String*, $Throwable*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(JMXProviderException, getCause, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.remote.JMXProviderException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JMXProviderException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXProviderException);
	});
	return class$;
}

$Class* JMXProviderException::class$ = nullptr;

		} // remote
	} // management
} // javax