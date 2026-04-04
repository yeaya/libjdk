#include <javax/lang/model/util/AbstractAnnotationValueVisitor6.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/UnknownAnnotationValueException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $UnknownAnnotationValueException = ::javax::lang::model::element::UnknownAnnotationValueException;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractAnnotationValueVisitor6::init$() {
}

$Object* AbstractAnnotationValueVisitor6::visit($AnnotationValue* av, Object$* p) {
	return $nc(av)->accept(this, p);
}

$Object* AbstractAnnotationValueVisitor6::visit($AnnotationValue* av) {
	return $nc(av)->accept(this, nullptr);
}

$Object* AbstractAnnotationValueVisitor6::visitUnknown($AnnotationValue* av, Object$* p) {
	$throwNew($UnknownAnnotationValueException, av, p);
	$shouldNotReachHere();
}

AbstractAnnotationValueVisitor6::AbstractAnnotationValueVisitor6() {
}

$Class* AbstractAnnotationValueVisitor6::load$($String* name, bool initialize) {
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractAnnotationValueVisitor6, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"visit", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;TP;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractAnnotationValueVisitor6, visit, $Object*, $AnnotationValue*, Object$*)},
		{"visit", "(Ljavax/lang/model/element/AnnotationValue;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractAnnotationValueVisitor6, visit, $Object*, $AnnotationValue*)},
		{"visitUnknown", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;TP;)TR;", $PUBLIC, $virtualMethod(AbstractAnnotationValueVisitor6, visitUnknown, $Object*, $AnnotationValue*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.lang.model.util.AbstractAnnotationValueVisitor6",
		"java.lang.Object",
		"javax.lang.model.element.AnnotationValueVisitor",
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractAnnotationValueVisitor6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractAnnotationValueVisitor6);
	});
	return class$;
}

$Class* AbstractAnnotationValueVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax