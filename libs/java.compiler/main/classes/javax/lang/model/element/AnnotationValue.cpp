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

$MethodInfo _AnnotationValue_MethodInfo_[] = {
	{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AnnotationValue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.AnnotationValue",
	nullptr,
	nullptr,
	nullptr,
	_AnnotationValue_MethodInfo_
};

$Object* allocate$AnnotationValue($Class* clazz) {
	return $of($alloc(AnnotationValue));
}

$String* AnnotationValue::toString() {
	 return this->$Object::toString();
}

$Class* AnnotationValue::load$($String* name, bool initialize) {
	$loadClass(AnnotationValue, name, initialize, &_AnnotationValue_ClassInfo_, allocate$AnnotationValue);
	return class$;
}

$Class* AnnotationValue::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax