#include <javax/management/openmbean/InvalidKeyException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

void InvalidKeyException::init$() {
	$IllegalArgumentException::init$();
}

void InvalidKeyException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

InvalidKeyException::InvalidKeyException() {
}

InvalidKeyException::InvalidKeyException(const InvalidKeyException& e) : $IllegalArgumentException(e) {
}

void InvalidKeyException::throw$() {
	throw *this;
}

$Class* InvalidKeyException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidKeyException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidKeyException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidKeyException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.openmbean.InvalidKeyException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidKeyException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidKeyException);
	});
	return class$;
}

$Class* InvalidKeyException::class$ = nullptr;

		} // openmbean
	} // management
} // javax