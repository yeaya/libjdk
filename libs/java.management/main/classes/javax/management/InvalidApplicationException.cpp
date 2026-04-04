#include <javax/management/InvalidApplicationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

void InvalidApplicationException::init$(Object$* val) {
	$Exception::init$();
	$set(this, val, val);
}

InvalidApplicationException::InvalidApplicationException() {
}

InvalidApplicationException::InvalidApplicationException(const InvalidApplicationException& e) : $Exception(e) {
}

void InvalidApplicationException::throw$() {
	throw *this;
}

$Class* InvalidApplicationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidApplicationException, serialVersionUID)},
		{"val", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(InvalidApplicationException, val)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidApplicationException, init$, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.InvalidApplicationException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidApplicationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidApplicationException);
	});
	return class$;
}

$Class* InvalidApplicationException::class$ = nullptr;

	} // management
} // javax