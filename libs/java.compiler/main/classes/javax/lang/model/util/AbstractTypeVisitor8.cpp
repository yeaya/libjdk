#include <javax/lang/model/util/AbstractTypeVisitor8.h>
#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/util/AbstractTypeVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $AbstractTypeVisitor7 = ::javax::lang::model::util::AbstractTypeVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$Object* AbstractTypeVisitor8::visitIntersection($IntersectionType* t, Object$* p) {
	return this->$AbstractTypeVisitor7::visitIntersection(t, p);
}

void AbstractTypeVisitor8::init$() {
	$AbstractTypeVisitor7::init$();
}

AbstractTypeVisitor8::AbstractTypeVisitor8() {
}

$Class* AbstractTypeVisitor8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractTypeVisitor8, init$, void)},
		{"visitIntersection", "(Ljavax/lang/model/type/IntersectionType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
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
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.lang.model.util.AbstractTypeVisitor8",
		"javax.lang.model.util.AbstractTypeVisitor7",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractTypeVisitor7<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractTypeVisitor8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractTypeVisitor8);
	});
	return class$;
}

$Class* AbstractTypeVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax