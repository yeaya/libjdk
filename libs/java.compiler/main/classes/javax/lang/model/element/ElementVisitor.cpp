#include <javax/lang/model/element/ElementVisitor.h>

#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/QualifiedNameable.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/TypeParameterElement.h>
#include <javax/lang/model/element/VariableElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::lang::model::element::Element;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $QualifiedNameable = ::javax::lang::model::element::QualifiedNameable;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _ElementVisitor_MethodInfo_[] = {
	{"visit", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visit", "(Ljavax/lang/model/element/Element;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;)TR;", $PUBLIC},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/PackageElement;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitTypeParameter", "(Ljavax/lang/model/element/TypeParameterElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeParameterElement;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitUnknown", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ElementVisitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.ElementVisitor",
	nullptr,
	nullptr,
	nullptr,
	_ElementVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$ElementVisitor($Class* clazz) {
	return $of($alloc(ElementVisitor));
}

$Object* ElementVisitor::visit($Element* e) {
	return $of(visit(e, nullptr));
}

$Object* ElementVisitor::visitModule($ModuleElement* e, Object$* p) {
	return $of(visitUnknown(e, p));
}

$Object* ElementVisitor::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return $of(visitUnknown(e, p));
}

$Class* ElementVisitor::load$($String* name, bool initialize) {
	$loadClass(ElementVisitor, name, initialize, &_ElementVisitor_ClassInfo_, allocate$ElementVisitor);
	return class$;
}

$Class* ElementVisitor::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax