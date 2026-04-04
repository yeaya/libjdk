#include <javax/lang/model/util/SimpleAnnotationValueVisitor9.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleAnnotationValueVisitor8 = ::javax::lang::model::util::SimpleAnnotationValueVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleAnnotationValueVisitor9::init$() {
	$SimpleAnnotationValueVisitor8::init$(nullptr);
}

void SimpleAnnotationValueVisitor9::init$(Object$* defaultValue) {
	$SimpleAnnotationValueVisitor8::init$(defaultValue);
}

SimpleAnnotationValueVisitor9::SimpleAnnotationValueVisitor9() {
}

$Class* SimpleAnnotationValueVisitor9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleAnnotationValueVisitor9, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleAnnotationValueVisitor9, init$, void, Object$*)},
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
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.SimpleAnnotationValueVisitor9",
		"javax.lang.model.util.SimpleAnnotationValueVisitor8",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleAnnotationValueVisitor8<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleAnnotationValueVisitor9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleAnnotationValueVisitor9);
	});
	return class$;
}

$Class* SimpleAnnotationValueVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax