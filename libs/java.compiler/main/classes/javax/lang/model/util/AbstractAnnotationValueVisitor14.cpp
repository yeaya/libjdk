#include <javax/lang/model/util/AbstractAnnotationValueVisitor14.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractAnnotationValueVisitor9 = ::javax::lang::model::util::AbstractAnnotationValueVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractAnnotationValueVisitor14::init$() {
	$AbstractAnnotationValueVisitor9::init$();
}

AbstractAnnotationValueVisitor14::AbstractAnnotationValueVisitor14() {
}

$Class* AbstractAnnotationValueVisitor14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractAnnotationValueVisitor14, init$, void)},
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
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.lang.model.util.AbstractAnnotationValueVisitor14",
		"javax.lang.model.util.AbstractAnnotationValueVisitor9",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor9<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractAnnotationValueVisitor14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractAnnotationValueVisitor14);
	});
	return class$;
}

$Class* AbstractAnnotationValueVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax