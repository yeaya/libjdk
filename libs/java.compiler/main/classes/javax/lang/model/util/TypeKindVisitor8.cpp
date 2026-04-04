#include <javax/lang/model/util/TypeKindVisitor8.h>
#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/TypeKindVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $TypeKindVisitor7 = ::javax::lang::model::util::TypeKindVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void TypeKindVisitor8::init$() {
	$TypeKindVisitor7::init$(nullptr);
}

void TypeKindVisitor8::init$(Object$* defaultValue) {
	$TypeKindVisitor7::init$(defaultValue);
}

$Object* TypeKindVisitor8::visitIntersection($IntersectionType* t, Object$* p) {
	return defaultAction(t, p);
}

TypeKindVisitor8::TypeKindVisitor8() {
}

$Class* TypeKindVisitor8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(TypeKindVisitor8, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(TypeKindVisitor8, init$, void, Object$*)},
		{"visitIntersection", "(Ljavax/lang/model/type/IntersectionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/IntersectionType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor8, visitIntersection, $Object*, $IntersectionType*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.TypeKindVisitor8",
		"javax.lang.model.util.TypeKindVisitor7",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/TypeKindVisitor7<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TypeKindVisitor8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeKindVisitor8);
	});
	return class$;
}

$Class* TypeKindVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax