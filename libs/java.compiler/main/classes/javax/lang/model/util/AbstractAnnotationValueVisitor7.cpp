#include <javax/lang/model/util/AbstractAnnotationValueVisitor7.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractAnnotationValueVisitor6 = ::javax::lang::model::util::AbstractAnnotationValueVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractAnnotationValueVisitor7::init$() {
	$AbstractAnnotationValueVisitor6::init$();
}

AbstractAnnotationValueVisitor7::AbstractAnnotationValueVisitor7() {
}

$Class* AbstractAnnotationValueVisitor7::load$($String* name, bool initialize) {
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractAnnotationValueVisitor7, init$, void), nullptr, nullptr, init$methodAnnotations$$},
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
		"javax.lang.model.util.AbstractAnnotationValueVisitor7",
		"javax.lang.model.util.AbstractAnnotationValueVisitor6",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor6<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractAnnotationValueVisitor7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractAnnotationValueVisitor7);
	});
	return class$;
}

$Class* AbstractAnnotationValueVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax