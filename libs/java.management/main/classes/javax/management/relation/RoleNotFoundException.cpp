#include <javax/management/relation/RoleNotFoundException.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

void RoleNotFoundException::init$() {
	$RelationException::init$();
}

void RoleNotFoundException::init$($String* message) {
	$RelationException::init$(message);
}

RoleNotFoundException::RoleNotFoundException() {
}

RoleNotFoundException::RoleNotFoundException(const RoleNotFoundException& e) : $RelationException(e) {
}

void RoleNotFoundException::throw$() {
	throw *this;
}

$Class* RoleNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RoleNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RoleNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.RoleNotFoundException",
		"javax.management.relation.RelationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RoleNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RoleNotFoundException);
	});
	return class$;
}

$Class* RoleNotFoundException::class$ = nullptr;

		} // relation
	} // management
} // javax