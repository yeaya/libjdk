#include <javax/management/relation/InvalidRelationIdException.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

void InvalidRelationIdException::init$() {
	$RelationException::init$();
}

void InvalidRelationIdException::init$($String* message) {
	$RelationException::init$(message);
}

InvalidRelationIdException::InvalidRelationIdException() {
}

InvalidRelationIdException::InvalidRelationIdException(const InvalidRelationIdException& e) : $RelationException(e) {
}

void InvalidRelationIdException::throw$() {
	throw *this;
}

$Class* InvalidRelationIdException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidRelationIdException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidRelationIdException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidRelationIdException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.InvalidRelationIdException",
		"javax.management.relation.RelationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidRelationIdException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidRelationIdException);
	});
	return class$;
}

$Class* InvalidRelationIdException::class$ = nullptr;

		} // relation
	} // management
} // javax