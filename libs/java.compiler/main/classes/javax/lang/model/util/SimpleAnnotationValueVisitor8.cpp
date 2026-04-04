#include <javax/lang/model/util/SimpleAnnotationValueVisitor8.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleAnnotationValueVisitor7 = ::javax::lang::model::util::SimpleAnnotationValueVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleAnnotationValueVisitor8::init$() {
	$SimpleAnnotationValueVisitor7::init$(nullptr);
}

void SimpleAnnotationValueVisitor8::init$(Object$* defaultValue) {
	$SimpleAnnotationValueVisitor7::init$(defaultValue);
}

SimpleAnnotationValueVisitor8::SimpleAnnotationValueVisitor8() {
}

$Class* SimpleAnnotationValueVisitor8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleAnnotationValueVisitor8, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleAnnotationValueVisitor8, init$, void, Object$*)},
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
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.SimpleAnnotationValueVisitor8",
		"javax.lang.model.util.SimpleAnnotationValueVisitor7",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleAnnotationValueVisitor7<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleAnnotationValueVisitor8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleAnnotationValueVisitor8);
	});
	return class$;
}

$Class* SimpleAnnotationValueVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax