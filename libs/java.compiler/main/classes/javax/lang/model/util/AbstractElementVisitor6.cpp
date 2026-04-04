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

void AbstractElementVisitor6::init$() {
}

$Object* AbstractElementVisitor6::visit($Element* e, Object$* p) {
	return $nc(e)->accept(this, p);
}

$Object* AbstractElementVisitor6::visit($Element* e) {
	return $nc(e)->accept(this, nullptr);
}

$Object* AbstractElementVisitor6::visitUnknown($Element* e, Object$* p) {
	$throwNew($UnknownElementException, e, p);
	$shouldNotReachHere();
}

$Object* AbstractElementVisitor6::visitModule($ModuleElement* e, Object$* p) {
	return $ElementVisitor::visitModule(e, p);
}

$Object* AbstractElementVisitor6::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return $ElementVisitor::visitRecordComponent(e, p);
}

AbstractElementVisitor6::AbstractElementVisitor6() {
}

$Class* AbstractElementVisitor6::load$($String* name, bool initialize) {
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractElementVisitor6, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"visit", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;TP;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractElementVisitor6, visit, $Object*, $Element*, Object$*)},
		{"visit", "(Ljavax/lang/model/element/Element;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractElementVisitor6, visit, $Object*, $Element*)},
		{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC, $virtualMethod(AbstractElementVisitor6, visitModule, $Object*, $ModuleElement*, Object$*)},
		{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC, $virtualMethod(AbstractElementVisitor6, visitRecordComponent, $Object*, $RecordComponentElement*, Object$*)},
		{"visitUnknown", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;TP;)TR;", $PUBLIC, $virtualMethod(AbstractElementVisitor6, visitUnknown, $Object*, $Element*, Object$*)},
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
		"javax.lang.model.util.AbstractElementVisitor6",
		"java.lang.Object",
		"javax.lang.model.element.ElementVisitor",
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/lang/model/element/ElementVisitor<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractElementVisitor6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractElementVisitor6);
	});
	return class$;
}

$Class* AbstractElementVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax