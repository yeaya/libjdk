#include <javax/management/relation/RelationException.h>
#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {
		namespace relation {

void RelationException::init$() {
	$JMException::init$();
}

void RelationException::init$($String* message) {
	$JMException::init$(message);
}

RelationException::RelationException() {
}

RelationException::RelationException(const RelationException& e) : $JMException(e) {
}

void RelationException::throw$() {
	throw *this;
}

$Class* RelationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RelationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RelationException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.RelationException",
		"javax.management.JMException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RelationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RelationException);
	});
	return class$;
}

$Class* RelationException::class$ = nullptr;

		} // relation
	} // management
} // javax