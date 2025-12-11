#include <javax/lang/model/element/AnnotationValueVisitor.h>

#include <java/util/List.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _AnnotationValueVisitor_MethodInfo_[] = {
	{"visit", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visit", "(Ljavax/lang/model/element/AnnotationValue;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;)TR;", $PUBLIC},
	{"visitAnnotation", "(Ljavax/lang/model/element/AnnotationMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationMirror;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitArray", "(Ljava/util/List;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/util/List<+Ljavax/lang/model/element/AnnotationValue;>;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitBoolean", "(ZLjava/lang/Object;)Ljava/lang/Object;", "(ZTP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitByte", "(BLjava/lang/Object;)Ljava/lang/Object;", "(BTP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitChar", "(CLjava/lang/Object;)Ljava/lang/Object;", "(CTP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitDouble", "(DLjava/lang/Object;)Ljava/lang/Object;", "(DTP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitEnumConstant", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitFloat", "(FLjava/lang/Object;)Ljava/lang/Object;", "(FTP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitInt", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitLong", "(JLjava/lang/Object;)Ljava/lang/Object;", "(JTP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitShort", "(SLjava/lang/Object;)Ljava/lang/Object;", "(STP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitString", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/String;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitType", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitUnknown", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;TP;)TR;", $PUBLIC | $ABSTRACT},
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