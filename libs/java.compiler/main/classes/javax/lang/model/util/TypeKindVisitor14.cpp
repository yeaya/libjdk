#include <javax/lang/model/util/TypeKindVisitor14.h>
#include <javax/lang/model/util/TypeKindVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeKindVisitor9 = ::javax::lang::model::util::TypeKindVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void TypeKindVisitor14::init$() {
	$TypeKindVisitor9::init$(nullptr);
}

void TypeKindVisitor14::init$(Object$* defaultValue) {
	$TypeKindVisitor9::init$(defaultValue);
}

TypeKindVisitor14::TypeKindVisitor14() {
}

$Class* TypeKindVisitor14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(TypeKindVisitor14, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(TypeKindVisitor14, init$, void, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.TypeKindVisitor14",
		"javax.lang.model.util.TypeKindVisitor9",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/TypeKindVisitor9<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TypeKindVisitor14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeKindVisitor14);
	});
	return class$;
}

$Class* TypeKindVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax