#include <javax/naming/SizeLimitExceededException.h>
#include <javax/naming/LimitExceededException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LimitExceededException = ::javax::naming::LimitExceededException;

namespace javax {
	namespace naming {

void SizeLimitExceededException::init$() {
	$LimitExceededException::init$();
}

void SizeLimitExceededException::init$($String* explanation) {
	$LimitExceededException::init$(explanation);
}

SizeLimitExceededException::SizeLimitExceededException() {
}

SizeLimitExceededException::SizeLimitExceededException(const SizeLimitExceededException& e) : $LimitExceededException(e) {
}

void SizeLimitExceededException::throw$() {
	throw *this;
}

$Class* SizeLimitExceededException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SizeLimitExceededException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SizeLimitExceededException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SizeLimitExceededException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.SizeLimitExceededException",
		"javax.naming.LimitExceededException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SizeLimitExceededException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SizeLimitExceededException);
	});
	return class$;
}

$Class* SizeLimitExceededException::class$ = nullptr;

	} // naming
} // javax