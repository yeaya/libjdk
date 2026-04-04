#include <javax/naming/TimeLimitExceededException.h>
#include <javax/naming/LimitExceededException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LimitExceededException = ::javax::naming::LimitExceededException;

namespace javax {
	namespace naming {

void TimeLimitExceededException::init$() {
	$LimitExceededException::init$();
}

void TimeLimitExceededException::init$($String* explanation) {
	$LimitExceededException::init$(explanation);
}

TimeLimitExceededException::TimeLimitExceededException() {
}

TimeLimitExceededException::TimeLimitExceededException(const TimeLimitExceededException& e) : $LimitExceededException(e) {
}

void TimeLimitExceededException::throw$() {
	throw *this;
}

$Class* TimeLimitExceededException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeLimitExceededException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeLimitExceededException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TimeLimitExceededException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.TimeLimitExceededException",
		"javax.naming.LimitExceededException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TimeLimitExceededException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeLimitExceededException);
	});
	return class$;
}

$Class* TimeLimitExceededException::class$ = nullptr;

	} // naming
} // javax