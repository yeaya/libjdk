#include <javax/lang/model/util/SimpleAnnotationValueVisitor7.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleAnnotationValueVisitor6 = ::javax::lang::model::util::SimpleAnnotationValueVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleAnnotationValueVisitor7::init$() {
	$SimpleAnnotationValueVisitor6::init$(nullptr);
}

void SimpleAnnotationValueVisitor7::init$(Object$* defaultValue) {
	$SimpleAnnotationValueVisitor6::init$(defaultValue);
}

SimpleAnnotationValueVisitor7::SimpleAnnotationValueVisitor7() {
}

$Class* SimpleAnnotationValueVisitor7::load$($String* name, bool initialize) {
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
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(SimpleAnnotationValueVisitor7, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(SimpleAnnotationValueVisitor7, init$, void, Object$*), nullptr, nullptr, init$methodAnnotations$$$1},
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
		"javax.lang.model.util.SimpleAnnotationValueVisitor7",
		"javax.lang.model.util.SimpleAnnotationValueVisitor6",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleAnnotationValueVisitor6<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleAnnotationValueVisitor7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleAnnotationValueVisitor7);
	});
	return class$;
}

$Class* SimpleAnnotationValueVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax