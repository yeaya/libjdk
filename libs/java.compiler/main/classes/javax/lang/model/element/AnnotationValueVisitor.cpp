#include <javax/lang/model/element/AnnotationValueVisitor.h>

#include <java/util/List.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _AnnotationValueVisitor_MethodInfo_[] = {
	{"visit", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visit, $Object*, $AnnotationValue*, Object$*)},
	{"visit", "(Ljavax/lang/model/element/AnnotationValue;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;)TR;", $PUBLIC, $virtualMethod(AnnotationValueVisitor, visit, $Object*, $AnnotationValue*)},
	{"visitAnnotation", "(Ljavax/lang/model/element/AnnotationMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationMirror;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitAnnotation, $Object*, $AnnotationMirror*, Object$*)},
	{"visitArray", "(Ljava/util/List;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/util/List<+Ljavax/lang/model/element/AnnotationValue;>;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitArray, $Object*, $List*, Object$*)},
	{"visitBoolean", "(ZLjava/lang/Object;)Ljava/lang/Object;", "(ZTP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitBoolean, $Object*, bool, Object$*)},
	{"visitByte", "(BLjava/lang/Object;)Ljava/lang/Object;", "(BTP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitByte, $Object*, int8_t, Object$*)},
	{"visitChar", "(CLjava/lang/Object;)Ljava/lang/Object;", "(CTP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitChar, $Object*, char16_t, Object$*)},
	{"visitDouble", "(DLjava/lang/Object;)Ljava/lang/Object;", "(DTP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitDouble, $Object*, double, Object$*)},
	{"visitEnumConstant", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitEnumConstant, $Object*, $VariableElement*, Object$*)},
	{"visitFloat", "(FLjava/lang/Object;)Ljava/lang/Object;", "(FTP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitFloat, $Object*, float, Object$*)},
	{"visitInt", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitInt, $Object*, int32_t, Object$*)},
	{"visitLong", "(JLjava/lang/Object;)Ljava/lang/Object;", "(JTP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitLong, $Object*, int64_t, Object$*)},
	{"visitShort", "(SLjava/lang/Object;)Ljava/lang/Object;", "(STP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitShort, $Object*, int16_t, Object$*)},
	{"visitString", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/String;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitString, $Object*, $String*, Object$*)},
	{"visitType", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitType, $Object*, $TypeMirror*, Object$*)},
	{"visitUnknown", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationValueVisitor, visitUnknown, $Object*, $AnnotationValue*, Object$*)},
	{}
};

$ClassInfo _AnnotationValueVisitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.AnnotationValueVisitor",
	nullptr,
	nullptr,
	nullptr,
	_AnnotationValueVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$AnnotationValueVisitor($Class* clazz) {
	return $of($alloc(AnnotationValueVisitor));
}

$Object* AnnotationValueVisitor::visit($AnnotationValue* av) {
	return $of(visit(av, nullptr));
}

$Class* AnnotationValueVisitor::load$($String* name, bool initialize) {
	$loadClass(AnnotationValueVisitor, name, initialize, &_AnnotationValueVisitor_ClassInfo_, allocate$AnnotationValueVisitor);
	return class$;
}

$Class* AnnotationValueVisitor::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax