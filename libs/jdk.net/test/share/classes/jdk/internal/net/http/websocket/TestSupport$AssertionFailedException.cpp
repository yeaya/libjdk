#include <jdk/internal/net/http/websocket/TestSupport$AssertionFailedException.h>
#include <jdk/internal/net/http/websocket/TestSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

void TestSupport$AssertionFailedException::init$($String* message) {
	$RuntimeException::init$(message);
}

void TestSupport$AssertionFailedException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

TestSupport$AssertionFailedException::TestSupport$AssertionFailedException() {
}

TestSupport$AssertionFailedException::TestSupport$AssertionFailedException(const TestSupport$AssertionFailedException& e) : $RuntimeException(e) {
}

void TestSupport$AssertionFailedException::throw$() {
	throw *this;
}

$Class* TestSupport$AssertionFailedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestSupport$AssertionFailedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(TestSupport$AssertionFailedException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, 0, $method(TestSupport$AssertionFailedException, init$, void, $String*, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TestSupport$AssertionFailedException", "jdk.internal.net.http.websocket.TestSupport", "AssertionFailedException", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.websocket.TestSupport$AssertionFailedException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.TestSupport"
	};
	$loadClass(TestSupport$AssertionFailedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSupport$AssertionFailedException);
	});
	return class$;
}

$Class* TestSupport$AssertionFailedException::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk