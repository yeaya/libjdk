#include <javax/management/relation/InvalidRoleInfoException.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

void InvalidRoleInfoException::init$() {
	$RelationException::init$();
}

void InvalidRoleInfoException::init$($String* message) {
	$RelationException::init$(message);
}

InvalidRoleInfoException::InvalidRoleInfoException() {
}

InvalidRoleInfoException::InvalidRoleInfoException(const InvalidRoleInfoException& e) : $RelationException(e) {
}

void InvalidRoleInfoException::throw$() {
	throw *this;
}

$Class* InvalidRoleInfoException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidRoleInfoException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidRoleInfoException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidRoleInfoException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.InvalidRoleInfoException",
		"javax.management.relation.RelationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidRoleInfoException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidRoleInfoException);
	});
	return class$;
}

$Class* InvalidRoleInfoException::class$ = nullptr;

		} // relation
	} // management
} // javax