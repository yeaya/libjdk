#include <javax/lang/model/util/AbstractTypeVisitor7.h>
#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/util/AbstractTypeVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnionType = ::javax::lang::model::type::UnionType;
using $AbstractTypeVisitor6 = ::javax::lang::model::util::AbstractTypeVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$Object* AbstractTypeVisitor7::visitUnion($UnionType* t, Object$* p) {
	return this->$AbstractTypeVisitor6::visitUnion(t, p);
}

void AbstractTypeVisitor7::init$() {
	$AbstractTypeVisitor6::init$();
}

AbstractTypeVisitor7::AbstractTypeVisitor7() {
}

$Class* AbstractTypeVisitor7::load$($String* name, bool initialize) {
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractTypeVisitor7, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"visitUnion", "(Ljavax/lang/model/type/UnionType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
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
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.lang.model.util.AbstractTypeVisitor7",
		"javax.lang.model.util.AbstractTypeVisitor6",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractTypeVisitor6<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractTypeVisitor7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractTypeVisitor7);
	});
	return class$;
}

$Class* AbstractTypeVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax