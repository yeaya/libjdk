#include <org/reactivestreams/tck/flow/support/SubscriberBufferOverflowException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

void SubscriberBufferOverflowException::init$() {
	$RuntimeException::init$();
}

void SubscriberBufferOverflowException::init$($String* message) {
	$RuntimeException::init$(message);
}

void SubscriberBufferOverflowException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void SubscriberBufferOverflowException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

SubscriberBufferOverflowException::SubscriberBufferOverflowException() {
}

SubscriberBufferOverflowException::SubscriberBufferOverflowException(const SubscriberBufferOverflowException& e) : $RuntimeException(e) {
}

void SubscriberBufferOverflowException::throw$() {
	throw *this;
}

$Class* SubscriberBufferOverflowException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SubscriberBufferOverflowException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SubscriberBufferOverflowException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SubscriberBufferOverflowException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SubscriberBufferOverflowException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"org.reactivestreams.tck.flow.support.SubscriberBufferOverflowException",
		"java.lang.RuntimeException",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SubscriberBufferOverflowException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubscriberBufferOverflowException);
	});
	return class$;
}

$Class* SubscriberBufferOverflowException::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org