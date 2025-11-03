#include <javax/lang/model/util/AbstractElementVisitor6.h>

#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/UnknownElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Element = ::javax::lang::model::element::Element;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $UnknownElementException = ::javax::lang::model::element::UnknownElementException;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractElementVisitor6_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
	{}
};

$CompoundAttribute _AbstractElementVisitor6_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractElementVisitor6_Attribute_var$0},
	{}
};

$NamedAttribute AbstractElementVisitor6_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AbstractElementVisitor6_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", AbstractElementVisitor6_Attribute_var$1},
	{}
};

$MethodInfo _AbstractElementVisitor6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(static_cast<void(AbstractElementVisitor6::*)()>(&AbstractElementVisitor6::init$)), nullptr, nullptr, _AbstractElementVisitor6_MethodAnnotations_init$0},
	{"visit", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;TP;)TR;", $PUBLIC | $FINAL},
	{"visit", "(Ljavax/lang/model/element/Element;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;)TR;", $PUBLIC | $FINAL},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC},
	{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC},
	{"visitUnknown", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _AbstractElementVisitor6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractElementVisitor6",
	"java.lang.Object",
	"javax.lang.model.element.ElementVisitor",
	nullptr,
	_AbstractElementVisitor6_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/lang/model/element/ElementVisitor<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractElementVisitor6_Annotations_
};

$Object* allocate$AbstractElementVisitor6($Class* clazz) {
	return $of($alloc(AbstractElementVisitor6));
}

void AbstractElementVisitor6::init$() {
}

$Object* AbstractElementVisitor6::visit($Element* e, Object$* p) {
	return $of($nc(e)->accept(this, p));
}

$Object* AbstractElementVisitor6::visit($Element* e) {
	return $of($nc(e)->accept(this, nullptr));
}

$Object* AbstractElementVisitor6::visitUnknown($Element* e, Object$* p) {
	$throwNew($UnknownElementException, e, p);
	$shouldNotReachHere();
}

$Object* AbstractElementVisitor6::visitModule($ModuleElement* e, Object$* p) {
	return $of($ElementVisitor::visitModule(e, p));
}

$Object* AbstractElementVisitor6::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return $of($ElementVisitor::visitRecordComponent(e, p));
}

AbstractElementVisitor6::AbstractElementVisitor6() {
}

$Class* AbstractElementVisitor6::load$($String* name, bool initialize) {
	$loadClass(AbstractElementVisitor6, name, initialize, &_AbstractElementVisitor6_ClassInfo_, allocate$AbstractElementVisitor6);
	return class$;
}

$Class* AbstractElementVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax