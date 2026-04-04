#include <HandshakeFailureTest$ExceptionChecker.h>
#include <HandshakeFailureTest$ExpectedExceptionType.h>
#include <HandshakeFailureTest.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef WSAECONNABORTED

using $HandshakeFailureTest = ::HandshakeFailureTest;
using $HandshakeFailureTest$ExpectedExceptionType = ::HandshakeFailureTest$ExpectedExceptionType;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HandshakeFailureTest$ExceptionChecker::init$() {
	$set(this, aborted, nullptr);
}

void HandshakeFailureTest$ExceptionChecker::check($Throwable* expected) {
	$init($HandshakeFailureTest$ExpectedExceptionType);
	if ($HandshakeFailureTest$ExpectedExceptionType::WSAECONNABORTED == $HandshakeFailureTest::checkExceptionOrCause(expected)) {
		++this->count;
		$set(this, aborted, expected);
	}
}

void HandshakeFailureTest$ExceptionChecker::check(int32_t max) {
	$useLocalObjectStack();
	if (this->count > max) {
		$nc($System::out)->println($$str({"WSAECONNABORTED received too many times: "_s, $$str(this->count)}));
		$nc(this->aborted)->printStackTrace($System::out);
		$throwNew($AssertionError, $$str({"WSAECONNABORTED received too many times: "_s, $$str(this->count)}), this->aborted);
	}
}

HandshakeFailureTest$ExceptionChecker::HandshakeFailureTest$ExceptionChecker() {
}

$Class* HandshakeFailureTest$ExceptionChecker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, 0, $field(HandshakeFailureTest$ExceptionChecker, count)},
		{"aborted", "Ljava/lang/Throwable;", nullptr, 0, $field(HandshakeFailureTest$ExceptionChecker, aborted)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HandshakeFailureTest$ExceptionChecker, init$, void)},
		{"check", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(HandshakeFailureTest$ExceptionChecker, check, void, $Throwable*)},
		{"check", "(I)V", nullptr, $PUBLIC, $method(HandshakeFailureTest$ExceptionChecker, check, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HandshakeFailureTest$ExceptionChecker", "HandshakeFailureTest", "ExceptionChecker", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"HandshakeFailureTest$ExceptionChecker",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HandshakeFailureTest"
	};
	$loadClass(HandshakeFailureTest$ExceptionChecker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeFailureTest$ExceptionChecker);
	});
	return class$;
}

$Class* HandshakeFailureTest$ExceptionChecker::class$ = nullptr;