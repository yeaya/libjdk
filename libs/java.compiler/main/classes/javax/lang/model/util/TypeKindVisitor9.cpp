#include <javax/lang/model/util/TypeKindVisitor9.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/TypeKindVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NoType = ::javax::lang::model::type::NoType;
using $TypeKindVisitor8 = ::javax::lang::model::util::TypeKindVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void TypeKindVisitor9::init$() {
	$TypeKindVisitor8::init$(nullptr);
}

void TypeKindVisitor9::init$(Object$* defaultValue) {
	$TypeKindVisitor8::init$(defaultValue);
}

$Object* TypeKindVisitor9::visitNoTypeAsModule($NoType* t, Object$* p) {
	return defaultAction(t, p);
}

TypeKindVisitor9::TypeKindVisitor9() {
}

$Class* TypeKindVisitor9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(TypeKindVisitor9, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(TypeKindVisitor9, init$, void, Object$*)},
		{"visitNoTypeAsModule", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NoType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor9, visitNoTypeAsModule, $Object*, $NoType*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.TypeKindVisitor9",
		"javax.lang.model.util.TypeKindVisitor8",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/TypeKindVisitor8<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TypeKindVisitor9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeKindVisitor9);
	});
	return class$;
}

$Class* TypeKindVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax