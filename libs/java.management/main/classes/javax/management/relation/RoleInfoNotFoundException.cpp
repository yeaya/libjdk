#include <javax/management/relation/RoleInfoNotFoundException.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

void RoleInfoNotFoundException::init$() {
	$RelationException::init$();
}

void RoleInfoNotFoundException::init$($String* message) {
	$RelationException::init$(message);
}

RoleInfoNotFoundException::RoleInfoNotFoundException() {
}

RoleInfoNotFoundException::RoleInfoNotFoundException(const RoleInfoNotFoundException& e) : $RelationException(e) {
}

void RoleInfoNotFoundException::throw$() {
	throw *this;
}

$Class* RoleInfoNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleInfoNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RoleInfoNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RoleInfoNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.RoleInfoNotFoundException",
		"javax.management.relation.RelationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RoleInfoNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RoleInfoNotFoundException);
	});
	return class$;
}

$Class* RoleInfoNotFoundException::class$ = nullptr;

		} // relation
	} // management
} // javax