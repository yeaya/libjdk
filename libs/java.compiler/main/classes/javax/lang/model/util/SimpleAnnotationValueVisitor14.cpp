#include <javax/lang/model/util/SimpleAnnotationValueVisitor14.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleAnnotationValueVisitor9 = ::javax::lang::model::util::SimpleAnnotationValueVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleAnnotationValueVisitor14::init$() {
	$SimpleAnnotationValueVisitor9::init$(nullptr);
}

void SimpleAnnotationValueVisitor14::init$(Object$* defaultValue) {
	$SimpleAnnotationValueVisitor9::init$(defaultValue);
}

SimpleAnnotationValueVisitor14::SimpleAnnotationValueVisitor14() {
}

$Class* SimpleAnnotationValueVisitor14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleAnnotationValueVisitor14, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleAnnotationValueVisitor14, init$, void, Object$*)},
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
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.SimpleAnnotationValueVisitor14",
		"javax.lang.model.util.SimpleAnnotationValueVisitor9",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleAnnotationValueVisitor9<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleAnnotationValueVisitor14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleAnnotationValueVisitor14);
	});
	return class$;
}

$Class* SimpleAnnotationValueVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax