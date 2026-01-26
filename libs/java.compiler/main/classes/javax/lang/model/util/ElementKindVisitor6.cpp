#include <javax/lang/model/util/ElementKindVisitor6.h>

#include <java/lang/AssertionError.h>
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
#include <javax/lang/model/util/ElementKindVisitor6$1.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <jcpp.h>

#undef PACKAGE
#undef TYPE_PARAMETER

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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
using $ElementKindVisitor6$1 = ::javax::lang::model::util::ElementKindVisitor6$1;
using $SimpleElementVisitor6 = ::javax::lang::model::util::SimpleElementVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute ElementKindVisitor6_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
	{}
};

$CompoundAttribute _ElementKindVisitor6_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", ElementKindVisitor6_Attribute_var$0},
	{}
};

$NamedAttribute ElementKindVisitor6_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _ElementKindVisitor6_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", ElementKindVisitor6_Attribute_var$1},
	{}
};

$NamedAttribute ElementKindVisitor6_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _ElementKindVisitor6_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", ElementKindVisitor6_Attribute_var$2},
	{}
};

$FieldInfo _ElementKindVisitor6_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ElementKindVisitor6, $assertionsDisabled)},
	{}
};

$MethodInfo _ElementKindVisitor6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(ElementKindVisitor6, init$, void), nullptr, nullptr, _ElementKindVisitor6_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(ElementKindVisitor6, init$, void, Object$*), nullptr, nullptr, _ElementKindVisitor6_MethodAnnotations_init$1},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitExecutable, $Object*, $ExecutableElement*, Object$*)},
	{"visitExecutableAsConstructor", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitExecutableAsConstructor, $Object*, $ExecutableElement*, Object$*)},
	{"visitExecutableAsInstanceInit", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitExecutableAsInstanceInit, $Object*, $ExecutableElement*, Object$*)},
	{"visitExecutableAsMethod", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitExecutableAsMethod, $Object*, $ExecutableElement*, Object$*)},
	{"visitExecutableAsStaticInit", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitExecutableAsStaticInit, $Object*, $ExecutableElement*, Object$*)},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/PackageElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitPackage, $Object*, $PackageElement*, Object$*)},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitType, $Object*, $TypeElement*, Object$*)},
	{"visitTypeAsAnnotationType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitTypeAsAnnotationType, $Object*, $TypeElement*, Object$*)},
	{"visitTypeAsClass", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitTypeAsClass, $Object*, $TypeElement*, Object$*)},
	{"visitTypeAsEnum", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitTypeAsEnum, $Object*, $TypeElement*, Object$*)},
	{"visitTypeAsInterface", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitTypeAsInterface, $Object*, $TypeElement*, Object$*)},
	{"visitTypeAsRecord", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitTypeAsRecord, $Object*, $TypeElement*, Object$*)},
	{"visitTypeParameter", "(Ljavax/lang/model/element/TypeParameterElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeParameterElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitTypeParameter, $Object*, $TypeParameterElement*, Object$*)},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitVariable, $Object*, $VariableElement*, Object$*)},
	{"visitVariableAsBindingVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitVariableAsBindingVariable, $Object*, $VariableElement*, Object$*)},
	{"visitVariableAsEnumConstant", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitVariableAsEnumConstant, $Object*, $VariableElement*, Object$*)},
	{"visitVariableAsExceptionParameter", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitVariableAsExceptionParameter, $Object*, $VariableElement*, Object$*)},
	{"visitVariableAsField", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitVariableAsField, $Object*, $VariableElement*, Object$*)},
	{"visitVariableAsLocalVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitVariableAsLocalVariable, $Object*, $VariableElement*, Object$*)},
	{"visitVariableAsParameter", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitVariableAsParameter, $Object*, $VariableElement*, Object$*)},
	{"visitVariableAsResourceVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor6, visitVariableAsResourceVariable, $Object*, $VariableElement*, Object$*)},
	{}
};

$InnerClassInfo _ElementKindVisitor6_InnerClassesInfo_[] = {
	{"javax.lang.model.util.ElementKindVisitor6$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ElementKindVisitor6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.ElementKindVisitor6",
	"javax.lang.model.util.SimpleElementVisitor6",
	nullptr,
	_ElementKindVisitor6_FieldInfo_,
	_ElementKindVisitor6_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleElementVisitor6<TR;TP;>;",
	nullptr,
	_ElementKindVisitor6_InnerClassesInfo_,
	_ElementKindVisitor6_Annotations_,
	nullptr,
	"javax.lang.model.util.ElementKindVisitor6$1"
};

$Object* allocate$ElementKindVisitor6($Class* clazz) {
	return $of($alloc(ElementKindVisitor6));
}

bool ElementKindVisitor6::$assertionsDisabled = false;

void ElementKindVisitor6::init$() {
	$SimpleElementVisitor6::init$(nullptr);
}

void ElementKindVisitor6::init$(Object$* defaultValue) {
	$SimpleElementVisitor6::init$(defaultValue);
}

$Object* ElementKindVisitor6::visitPackage($PackageElement* e, Object$* p) {
	$init($ElementKind);
	if (!ElementKindVisitor6::$assertionsDisabled && !($nc(e)->getKind() == $ElementKind::PACKAGE)) {
		$throwNew($AssertionError, $of("Bad kind on PackageElement"_s));
	}
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitType($TypeElement* e, Object$* p) {
	$ElementKind* k = $nc(e)->getKind();
	$init($ElementKindVisitor6$1);
	switch ($nc($ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((k))->ordinal())) {
	case 1:
		{
			return $of(visitTypeAsAnnotationType(e, p));
		}
	case 2:
		{
			return $of(visitTypeAsClass(e, p));
		}
	case 3:
		{
			return $of(visitTypeAsEnum(e, p));
		}
	case 4:
		{
			return $of(visitTypeAsInterface(e, p));
		}
	case 5:
		{
			return $of(visitTypeAsRecord(e, p));
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Bad kind "_s, k, " for TypeElement"_s, e})));
		}
	}
}

$Object* ElementKindVisitor6::visitTypeAsAnnotationType($TypeElement* e, Object$* p) {
	return $of(defaultAction(static_cast<$Element*>(static_cast<$Parameterizable*>(e)), p));
}

$Object* ElementKindVisitor6::visitTypeAsClass($TypeElement* e, Object$* p) {
	return $of(defaultAction(static_cast<$Element*>(static_cast<$Parameterizable*>(e)), p));
}

$Object* ElementKindVisitor6::visitTypeAsEnum($TypeElement* e, Object$* p) {
	return $of(defaultAction(static_cast<$Element*>(static_cast<$Parameterizable*>(e)), p));
}

$Object* ElementKindVisitor6::visitTypeAsInterface($TypeElement* e, Object$* p) {
	return $of(defaultAction(static_cast<$Element*>(static_cast<$Parameterizable*>(e)), p));
}

$Object* ElementKindVisitor6::visitTypeAsRecord($TypeElement* e, Object$* p) {
	return $of(visitUnknown(static_cast<$Element*>(static_cast<$Parameterizable*>(e)), p));
}

$Object* ElementKindVisitor6::visitVariable($VariableElement* e, Object$* p) {
	$ElementKind* k = $nc(e)->getKind();
	$init($ElementKindVisitor6$1);
	switch ($nc($ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((k))->ordinal())) {
	case 6:
		{
			return $of(visitVariableAsEnumConstant(e, p));
		}
	case 7:
		{
			return $of(visitVariableAsExceptionParameter(e, p));
		}
	case 8:
		{
			return $of(visitVariableAsField(e, p));
		}
	case 9:
		{
			return $of(visitVariableAsLocalVariable(e, p));
		}
	case 10:
		{
			return $of(visitVariableAsParameter(e, p));
		}
	case 11:
		{
			return $of(visitVariableAsResourceVariable(e, p));
		}
	case 12:
		{
			return $of(visitVariableAsBindingVariable(e, p));
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Bad kind "_s, k, " for VariableElement"_s, e})));
		}
	}
}

$Object* ElementKindVisitor6::visitVariableAsEnumConstant($VariableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitVariableAsExceptionParameter($VariableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitVariableAsField($VariableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitVariableAsLocalVariable($VariableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitVariableAsParameter($VariableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitVariableAsResourceVariable($VariableElement* e, Object$* p) {
	return $of(visitUnknown(e, p));
}

$Object* ElementKindVisitor6::visitVariableAsBindingVariable($VariableElement* e, Object$* p) {
	return $of(visitUnknown(e, p));
}

$Object* ElementKindVisitor6::visitExecutable($ExecutableElement* e, Object$* p) {
	$ElementKind* k = $nc(e)->getKind();
	$init($ElementKindVisitor6$1);
	switch ($nc($ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((k))->ordinal())) {
	case 13:
		{
			return $of(visitExecutableAsConstructor(e, p));
		}
	case 14:
		{
			return $of(visitExecutableAsInstanceInit(e, p));
		}
	case 15:
		{
			return $of(visitExecutableAsMethod(e, p));
		}
	case 16:
		{
			return $of(visitExecutableAsStaticInit(e, p));
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Bad kind "_s, k, " for ExecutableElement"_s, e})));
		}
	}
}

$Object* ElementKindVisitor6::visitExecutableAsConstructor($ExecutableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitExecutableAsInstanceInit($ExecutableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitExecutableAsMethod($ExecutableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitExecutableAsStaticInit($ExecutableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

$Object* ElementKindVisitor6::visitTypeParameter($TypeParameterElement* e, Object$* p) {
	$init($ElementKind);
	if (!ElementKindVisitor6::$assertionsDisabled && !($nc(e)->getKind() == $ElementKind::TYPE_PARAMETER)) {
		$throwNew($AssertionError, $of("Bad kind on TypeParameterElement"_s));
	}
	return $of(defaultAction(e, p));
}

void clinit$ElementKindVisitor6($Class* class$) {
	ElementKindVisitor6::$assertionsDisabled = !ElementKindVisitor6::class$->desiredAssertionStatus();
}

ElementKindVisitor6::ElementKindVisitor6() {
}

$Class* ElementKindVisitor6::load$($String* name, bool initialize) {
	$loadClass(ElementKindVisitor6, name, initialize, &_ElementKindVisitor6_ClassInfo_, clinit$ElementKindVisitor6, allocate$ElementKindVisitor6);
	return class$;
}

$Class* ElementKindVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax