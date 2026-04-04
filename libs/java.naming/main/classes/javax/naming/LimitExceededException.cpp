#include <javax/naming/LimitExceededException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void LimitExceededException::init$() {
	$NamingException::init$();
}

void LimitExceededException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

LimitExceededException::LimitExceededException() {
}

LimitExceededException::LimitExceededException(const LimitExceededException& e) : $NamingException(e) {
}

void LimitExceededException::throw$() {
	throw *this;
}

$Class* LimitExceededException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LimitExceededException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LimitExceededException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LimitExceededException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.LimitExceededException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LimitExceededException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LimitExceededException);
	});
	return class$;
}

$Class* LimitExceededException::class$ = nullptr;

	} // naming
} // javax