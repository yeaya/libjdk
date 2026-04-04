#include <javax/management/relation/InvalidRoleValueException.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

void InvalidRoleValueException::init$() {
	$RelationException::init$();
}

void InvalidRoleValueException::init$($String* message) {
	$RelationException::init$(message);
}

InvalidRoleValueException::InvalidRoleValueException() {
}

InvalidRoleValueException::InvalidRoleValueException(const InvalidRoleValueException& e) : $RelationException(e) {
}

void InvalidRoleValueException::throw$() {
	throw *this;
}

$Class* InvalidRoleValueException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidRoleValueException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidRoleValueException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidRoleValueException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.InvalidRoleValueException",
		"javax.management.relation.RelationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidRoleValueException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidRoleValueException);
	});
	return class$;
}

$Class* InvalidRoleValueException::class$ = nullptr;

		} // relation
	} // management
} // javax