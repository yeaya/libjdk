#include <javax/lang/model/util/ElementKindVisitor14.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/util/ElementKindVisitor9.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $ElementKindVisitor9 = ::javax::lang::model::util::ElementKindVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void ElementKindVisitor14::init$() {
	$ElementKindVisitor9::init$(nullptr);
}

void ElementKindVisitor14::init$(Object$* defaultValue) {
	$ElementKindVisitor9::init$(defaultValue);
}

$Object* ElementKindVisitor14::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor14::visitTypeAsRecord($TypeElement* e, Object$* p) {
	return defaultAction($cast($Parameterizable, e), p);
}

$Object* ElementKindVisitor14::visitVariableAsBindingVariable($VariableElement* e, Object$* p) {
	return defaultAction(e, p);
}

ElementKindVisitor14::ElementKindVisitor14() {
}

$Class* ElementKindVisitor14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ElementKindVisitor14, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(ElementKindVisitor14, init$, void, Object$*)},
		{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor14, visitRecordComponent, $Object*, $RecordComponentElement*, Object$*)},
		{"visitTypeAsRecord", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor14, visitTypeAsRecord, $Object*, $TypeElement*, Object$*)},
		{"visitVariableAsBindingVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor14, visitVariableAsBindingVariable, $Object*, $VariableElement*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.ElementKindVisitor14",
		"javax.lang.model.util.ElementKindVisitor9",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementKindVisitor9<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementKindVisitor14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementKindVisitor14);
	});
	return class$;
}

$Class* ElementKindVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax