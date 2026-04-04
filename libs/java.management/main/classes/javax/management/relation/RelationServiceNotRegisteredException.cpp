#include <javax/management/relation/RelationServiceNotRegisteredException.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

void RelationServiceNotRegisteredException::init$() {
	$RelationException::init$();
}

void RelationServiceNotRegisteredException::init$($String* message) {
	$RelationException::init$(message);
}

RelationServiceNotRegisteredException::RelationServiceNotRegisteredException() {
}

RelationServiceNotRegisteredException::RelationServiceNotRegisteredException(const RelationServiceNotRegisteredException& e) : $RelationException(e) {
}

void RelationServiceNotRegisteredException::throw$() {
	throw *this;
}

$Class* RelationServiceNotRegisteredException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationServiceNotRegisteredException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RelationServiceNotRegisteredException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RelationServiceNotRegisteredException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.RelationServiceNotRegisteredException",
		"javax.management.relation.RelationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RelationServiceNotRegisteredException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RelationServiceNotRegisteredException);
	});
	return class$;
}

$Class* RelationServiceNotRegisteredException::class$ = nullptr;

		} // relation
	} // management
} // javax