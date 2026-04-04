#include <org/reactivestreams/tck/flow/support/TestException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

void TestException::init$() {
	$RuntimeException::init$("Test Exception: Boom!"_s);
}

TestException::TestException() {
}

TestException::TestException(const TestException& e) : $RuntimeException(e) {
}

void TestException::throw$() {
	throw *this;
}

$Class* TestException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"org.reactivestreams.tck.flow.support.TestException",
		"java.lang.RuntimeException",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestException);
	});
	return class$;
}

$Class* TestException::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org