#include <javax/management/relation/RelationNotFoundException.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

void RelationNotFoundException::init$() {
	$RelationException::init$();
}

void RelationNotFoundException::init$($String* message) {
	$RelationException::init$(message);
}

RelationNotFoundException::RelationNotFoundException() {
}

RelationNotFoundException::RelationNotFoundException(const RelationNotFoundException& e) : $RelationException(e) {
}

void RelationNotFoundException::throw$() {
	throw *this;
}

$Class* RelationNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RelationNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RelationNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.RelationNotFoundException",
		"javax.management.relation.RelationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RelationNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RelationNotFoundException);
	});
	return class$;
}

$Class* RelationNotFoundException::class$ = nullptr;

		} // relation
	} // management
} // javax