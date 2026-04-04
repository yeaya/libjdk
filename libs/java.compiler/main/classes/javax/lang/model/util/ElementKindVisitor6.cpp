#include <javax/lang/model/util/ElementKindVisitor6.h>
#include <java/lang/AssertionError.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/Parameterizable.h>
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
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $TypeParameterElement = ::javax::lang::model::element::TypeParameterElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $ElementKindVisitor6$1 = ::javax::lang::model::util::ElementKindVisitor6$1;
using $SimpleElementVisitor6 = ::javax::lang::model::util::SimpleElementVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

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
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitType($TypeElement* e, Object$* p) {
	$ElementKind* k = $nc(e)->getKind();
	$init($ElementKindVisitor6$1);
	switch ($nc($ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((k))->ordinal())) {
	case 1:
		return visitTypeAsAnnotationType(e, p);
	case 2:
		return visitTypeAsClass(e, p);
	case 3:
		return visitTypeAsEnum(e, p);
	case 4:
		return visitTypeAsInterface(e, p);
	case 5:
		return visitTypeAsRecord(e, p);
	default:
		$throwNew($AssertionError, $$of($str({"Bad kind "_s, k, " for TypeElement"_s, e})));
	}
}

$Object* ElementKindVisitor6::visitTypeAsAnnotationType($TypeElement* e, Object$* p) {
	return defaultAction($cast($Parameterizable, e), p);
}

$Object* ElementKindVisitor6::visitTypeAsClass($TypeElement* e, Object$* p) {
	return defaultAction($cast($Parameterizable, e), p);
}

$Object* ElementKindVisitor6::visitTypeAsEnum($TypeElement* e, Object$* p) {
	return defaultAction($cast($Parameterizable, e), p);
}

$Object* ElementKindVisitor6::visitTypeAsInterface($TypeElement* e, Object$* p) {
	return defaultAction($cast($Parameterizable, e), p);
}

$Object* ElementKindVisitor6::visitTypeAsRecord($TypeElement* e, Object$* p) {
	return visitUnknown($cast($Parameterizable, e), p);
}

$Object* ElementKindVisitor6::visitVariable($VariableElement* e, Object$* p) {
	$ElementKind* k = $nc(e)->getKind();
	$init($ElementKindVisitor6$1);
	switch ($nc($ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((k))->ordinal())) {
	case 6:
		return visitVariableAsEnumConstant(e, p);
	case 7:
		return visitVariableAsExceptionParameter(e, p);
	case 8:
		return visitVariableAsField(e, p);
	case 9:
		return visitVariableAsLocalVariable(e, p);
	case 10:
		return visitVariableAsParameter(e, p);
	case 11:
		return visitVariableAsResourceVariable(e, p);
	case 12:
		return visitVariableAsBindingVariable(e, p);
	default:
		$throwNew($AssertionError, $$of($str({"Bad kind "_s, k, " for VariableElement"_s, e})));
	}
}

$Object* ElementKindVisitor6::visitVariableAsEnumConstant($VariableElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitVariableAsExceptionParameter($VariableElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitVariableAsField($VariableElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitVariableAsLocalVariable($VariableElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitVariableAsParameter($VariableElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitVariableAsResourceVariable($VariableElement* e, Object$* p) {
	return visitUnknown(e, p);
}

$Object* ElementKindVisitor6::visitVariableAsBindingVariable($VariableElement* e, Object$* p) {
	return visitUnknown(e, p);
}

$Object* ElementKindVisitor6::visitExecutable($ExecutableElement* e, Object$* p) {
	$ElementKind* k = $nc(e)->getKind();
	$init($ElementKindVisitor6$1);
	switch ($nc($ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((k))->ordinal())) {
	case 13:
		return visitExecutableAsConstructor(e, p);
	case 14:
		return visitExecutableAsInstanceInit(e, p);
	case 15:
		return visitExecutableAsMethod(e, p);
	case 16:
		return visitExecutableAsStaticInit(e, p);
	default:
		$throwNew($AssertionError, $$of($str({"Bad kind "_s, k, " for ExecutableElement"_s, e})));
	}
}

$Object* ElementKindVisitor6::visitExecutableAsConstructor($ExecutableElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitExecutableAsInstanceInit($ExecutableElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitExecutableAsMethod($ExecutableElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitExecutableAsStaticInit($ExecutableElement* e, Object$* p) {
	return defaultAction(e, p);
}

$Object* ElementKindVisitor6::visitTypeParameter($TypeParameterElement* e, Object$* p) {
	$init($ElementKind);
	if (!ElementKindVisitor6::$assertionsDisabled && !($nc(e)->getKind() == $ElementKind::TYPE_PARAMETER)) {
		$throwNew($AssertionError, $of("Bad kind on TypeParameterElement"_s));
	}
	return defaultAction(e, p);
}

void ElementKindVisitor6::clinit$($Class* clazz) {
	ElementKindVisitor6::$assertionsDisabled = !ElementKindVisitor6::class$->desiredAssertionStatus();
}

ElementKindVisitor6::ElementKindVisitor6() {
}

$Class* ElementKindVisitor6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ElementKindVisitor6, $assertionsDisabled)},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(ElementKindVisitor6, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(ElementKindVisitor6, init$, void, Object$*), nullptr, nullptr, init$methodAnnotations$$$1},
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
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.lang.model.util.ElementKindVisitor6$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
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
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.ElementKindVisitor6",
		"javax.lang.model.util.SimpleElementVisitor6",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleElementVisitor6<TR;TP;>;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.lang.model.util.ElementKindVisitor6$1"
	};
	$loadClass(ElementKindVisitor6, name, initialize, &classInfo$$, ElementKindVisitor6::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ElementKindVisitor6);
	});
	return class$;
}

$Class* ElementKindVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax