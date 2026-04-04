#include <javax/management/relation/InvalidRelationServiceException.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

void InvalidRelationServiceException::init$() {
	$RelationException::init$();
}

void InvalidRelationServiceException::init$($String* message) {
	$RelationException::init$(message);
}

InvalidRelationServiceException::InvalidRelationServiceException() {
}

InvalidRelationServiceException::InvalidRelationServiceException(const InvalidRelationServiceException& e) : $RelationException(e) {
}

void InvalidRelationServiceException::throw$() {
	throw *this;
}

$Class* InvalidRelationServiceException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidRelationServiceException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidRelationServiceException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidRelationServiceException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.InvalidRelationServiceException",
		"javax.management.relation.RelationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidRelationServiceException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidRelationServiceException);
	});
	return class$;
}

$Class* InvalidRelationServiceException::class$ = nullptr;

		} // relation
	} // management
} // javax