#include <javax/management/openmbean/InvalidOpenTypeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

void InvalidOpenTypeException::init$() {
	$IllegalArgumentException::init$();
}

void InvalidOpenTypeException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

InvalidOpenTypeException::InvalidOpenTypeException() {
}

InvalidOpenTypeException::InvalidOpenTypeException(const InvalidOpenTypeException& e) : $IllegalArgumentException(e) {
}

void InvalidOpenTypeException::throw$() {
	throw *this;
}

$Class* InvalidOpenTypeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidOpenTypeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidOpenTypeException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidOpenTypeException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.openmbean.InvalidOpenTypeException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidOpenTypeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidOpenTypeException);
	});
	return class$;
}

$Class* InvalidOpenTypeException::class$ = nullptr;

		} // openmbean
	} // management
} // javax