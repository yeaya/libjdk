#include <javax/management/relation/RelationTypeNotFoundException.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

void RelationTypeNotFoundException::init$() {
	$RelationException::init$();
}

void RelationTypeNotFoundException::init$($String* message) {
	$RelationException::init$(message);
}

RelationTypeNotFoundException::RelationTypeNotFoundException() {
}

RelationTypeNotFoundException::RelationTypeNotFoundException(const RelationTypeNotFoundException& e) : $RelationException(e) {
}

void RelationTypeNotFoundException::throw$() {
	throw *this;
}

$Class* RelationTypeNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationTypeNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RelationTypeNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RelationTypeNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.RelationTypeNotFoundException",
		"javax.management.relation.RelationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RelationTypeNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RelationTypeNotFoundException);
	});
	return class$;
}

$Class* RelationTypeNotFoundException::class$ = nullptr;

		} // relation
	} // management
} // javax