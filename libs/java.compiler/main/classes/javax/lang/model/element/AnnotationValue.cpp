#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$String* AnnotationValue::toString() {
	return this->$Object::toString();
}

$Class* AnnotationValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValue, accept, $Object*, $AnnotationValueVisitor*, Object$*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValue, getValue, $Object*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.AnnotationValue",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AnnotationValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationValue);
	});
	return class$;
}

$Class* AnnotationValue::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax