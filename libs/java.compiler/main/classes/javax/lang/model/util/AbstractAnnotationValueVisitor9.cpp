#include <javax/lang/model/util/AbstractAnnotationValueVisitor9.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractAnnotationValueVisitor8 = ::javax::lang::model::util::AbstractAnnotationValueVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractAnnotationValueVisitor9::init$() {
	$AbstractAnnotationValueVisitor8::init$();
}

AbstractAnnotationValueVisitor9::AbstractAnnotationValueVisitor9() {
}

$Class* AbstractAnnotationValueVisitor9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractAnnotationValueVisitor9, init$, void)},
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
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.lang.model.util.AbstractAnnotationValueVisitor9",
		"javax.lang.model.util.AbstractAnnotationValueVisitor8",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor8<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractAnnotationValueVisitor9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractAnnotationValueVisitor9);
	});
	return class$;
}

$Class* AbstractAnnotationValueVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax