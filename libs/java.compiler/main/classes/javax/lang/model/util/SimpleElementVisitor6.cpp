#include <javax/lang/model/util/SimpleElementVisitor6.h>

#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/QualifiedNameable.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/TypeParameterElement.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <jcpp.h>

#undef DEFAULT_VALUE
#undef RESOURCE_VARIABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $QualifiedNameable = ::javax::lang::model::element::QualifiedNameable;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $TypeParameterElement = ::javax::lang::model::element::TypeParameterElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $AbstractElementVisitor6 = ::javax::lang::model::util::AbstractElementVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleElementVisitor6_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
	{}
};

$CompoundAttribute _SimpleElementVisitor6_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleElementVisitor6_Attribute_var$0},
	{}
};

$NamedAttribute SimpleElementVisitor6_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _SimpleElementVisitor6_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", SimpleElementVisitor6_Attribute_var$1},
	{}
};

$NamedAttribute SimpleElementVisitor6_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _SimpleElementVisitor6_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", SimpleElementVisitor6_Attribute_var$2},
	{}
};

$FieldInfo _SimpleElementVisitor6_FieldInfo_[] = {
	{"DEFAULT_VALUE", "Ljava/lang/Object;", "TR;", $PROTECTED | $FINAL, $field(SimpleElementVisitor6, DEFAULT_VALUE)},
	{}
};

$MethodInfo _SimpleElementVisitor6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(SimpleElementVisitor6, init$, void), nullptr, nullptr, _SimpleElementVisitor6_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(SimpleElementVisitor6, init$, void, Object$*), nullptr, nullptr, _SimpleElementVisitor6_MethodAnnotations_init$1},
	{"defaultAction", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;TP;)TR;", $PROTECTED, $virtualMethod(SimpleElementVisitor6, defaultAction, $Object*, $Element*, Object$*)},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC, $virtualMethod(SimpleElementVisitor6, visitExecutable, $Object*, $ExecutableElement*, Object$*)},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/PackageElement;TP;)TR;", $PUBLIC, $virtualMethod(SimpleElementVisitor6, visitPackage, $Object*, $PackageElement*, Object$*)},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(SimpleElementVisitor6, visitType, $Object*, $TypeElement*, Object$*)},
	{"visitTypeParameter", "(Ljavax/lang/model/element/TypeParameterElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeParameterElement;TP;)TR;", $PUBLIC, $virtualMethod(SimpleElementVisitor6, visitTypeParameter, $Object*, $TypeParameterElement*, Object$*)},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(SimpleElementVisitor6, visitVariable, $Object*, $VariableElement*, Object$*)},
	{}
};

$ClassInfo _SimpleElementVisitor6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleElementVisitor6",
	"javax.lang.model.util.AbstractElementVisitor6",
	nullptr,
	_SimpleElementVisitor6_FieldInfo_,
	_SimpleElementVisitor6_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleElementVisitor6_Annotations_
};

$Object* allocate$SimpleElementVisitor6($Class* clazz) {
	return $of($alloc(SimpleElementVisitor6));
}

void SimpleElementVisitor6::init$() {
	$AbstractElementVisitor6::init$();
	$set(this, DEFAULT_VALUE, nullptr);
}

void SimpleElementVisitor6::init$(Object$* defaultValue) {
	$AbstractElementVisitor6::init$();
	$set(this, DEFAULT_VALUE, defaultValue);
}

$Object* SimpleElementVisitor6::defaultAction($Element* e, Object$* p) {
	return $of(this->DEFAULT_VALUE);
}

$Object* SimpleElementVisitor6::visitPackage($PackageElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* SimpleElementVisitor6::visitType($TypeElement* e, Object$* p) {
	return $of(defaultAction(static_cast<$Element*>(static_cast<$Parameterizable*>(e)), p));
}

$Object* SimpleElementVisitor6::visitVariable($VariableElement* e, Object$* p) {
	$init($ElementKind);
	if ($nc(e)->getKind() != $ElementKind::RESOURCE_VARIABLE) {
		return $of(defaultAction(e, p));
	} else {
		return $of(visitUnknown(e, p));
	}
}

$Object* SimpleElementVisitor6::visitExecutable($ExecutableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* SimpleElementVisitor6::visitTypeParameter($TypeParameterElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

SimpleElementVisitor6::SimpleElementVisitor6() {
}

$Class* SimpleElementVisitor6::load$($String* name, bool initialize) {
	$loadClass(SimpleElementVisitor6, name, initialize, &_SimpleElementVisitor6_ClassInfo_, allocate$SimpleElementVisitor6);
	return class$;
}

$Class* SimpleElementVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax