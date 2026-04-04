#include <javax/lang/model/util/AbstractAnnotationValueVisitor8.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractAnnotationValueVisitor7 = ::javax::lang::model::util::AbstractAnnotationValueVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractAnnotationValueVisitor8::init$() {
	$AbstractAnnotationValueVisitor7::init$();
}

AbstractAnnotationValueVisitor8::AbstractAnnotationValueVisitor8() {
}

$Class* AbstractAnnotationValueVisitor8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractAnnotationValueVisitor8, init$, void)},
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
		"javax.lang.model.util.AbstractAnnotationValueVisitor8",
		"javax.lang.model.util.AbstractAnnotationValueVisitor7",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor7<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractAnnotationValueVisitor8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractAnnotationValueVisitor8);
	});
	return class$;
}

$Class* AbstractAnnotationValueVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax