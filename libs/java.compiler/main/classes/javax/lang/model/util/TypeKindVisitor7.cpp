#include <javax/lang/model/util/TypeKindVisitor7.h>
#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/TypeKindVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnionType = ::javax::lang::model::type::UnionType;
using $TypeKindVisitor6 = ::javax::lang::model::util::TypeKindVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void TypeKindVisitor7::init$() {
	$TypeKindVisitor6::init$(nullptr);
}

void TypeKindVisitor7::init$(Object$* defaultValue) {
	$TypeKindVisitor6::init$(defaultValue);
}

$Object* TypeKindVisitor7::visitUnion($UnionType* t, Object$* p) {
	return defaultAction(t, p);
}

TypeKindVisitor7::TypeKindVisitor7() {
}

$Class* TypeKindVisitor7::load$($String* name, bool initialize) {
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "12"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(TypeKindVisitor7, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(TypeKindVisitor7, init$, void, Object$*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"visitUnion", "(Ljavax/lang/model/type/UnionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/UnionType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor7, visitUnion, $Object*, $UnionType*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.TypeKindVisitor7",
		"javax.lang.model.util.TypeKindVisitor6",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/TypeKindVisitor6<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TypeKindVisitor7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeKindVisitor7);
	});
	return class$;
}

$Class* TypeKindVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax