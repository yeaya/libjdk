#include <javax/lang/model/util/ElementScanner6.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/PackageElement.h>
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
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Iterator = ::java::util::Iterator;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $TypeParameterElement = ::javax::lang::model::element::TypeParameterElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $AbstractElementVisitor6 = ::javax::lang::model::util::AbstractElementVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void ElementScanner6::init$() {
	$AbstractElementVisitor6::init$();
	$set(this, DEFAULT_VALUE, nullptr);
}

void ElementScanner6::init$(Object$* defaultValue) {
	$AbstractElementVisitor6::init$();
	$set(this, DEFAULT_VALUE, defaultValue);
}

$Object* ElementScanner6::scan($Iterable* iterable, Object$* p) {
	$useLocalObjectStack();
	$var($Object, result, this->DEFAULT_VALUE);
	{
		$var($Iterator, i$, $nc(iterable)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, e, $cast($Element, i$->next()));
			$assign(result, scan(e, p));
		}
	}
	return result;
}

$Object* ElementScanner6::scan($Element* e, Object$* p) {
	return $nc(e)->accept(this, p);
}

$Object* ElementScanner6::scan($Element* e) {
	return scan(e, nullptr);
}

$Object* ElementScanner6::visitPackage($PackageElement* e, Object$* p) {
	return scan($($nc(e)->getEnclosedElements()), p);
}

$Object* ElementScanner6::visitType($TypeElement* e, Object$* p) {
	return scan($($nc(e)->getEnclosedElements()), p);
}

$Object* ElementScanner6::visitVariable($VariableElement* e, Object$* p) {
	$init($ElementKind);
	if ($nc(e)->getKind() != $ElementKind::RESOURCE_VARIABLE) {
		return scan($(e->getEnclosedElements()), p);
	} else {
		return visitUnknown(e, p);
	}
}

$Object* ElementScanner6::visitExecutable($ExecutableElement* e, Object$* p) {
	return scan($($nc(e)->getParameters()), p);
}

$Object* ElementScanner6::visitTypeParameter($TypeParameterElement* e, Object$* p) {
	return scan($($nc(e)->getEnclosedElements()), p);
}

ElementScanner6::ElementScanner6() {
}

$Class* ElementScanner6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_VALUE", "Ljava/lang/Object;", "TR;", $PROTECTED | $FINAL, $field(ElementScanner6, DEFAULT_VALUE)},
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
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(ElementScanner6, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(ElementScanner6, init$, void, Object$*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"scan", "(Ljava/lang/Iterable;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;TP;)TR;", $PUBLIC | $FINAL, $method(ElementScanner6, scan, $Object*, $Iterable*, Object$*)},
		{"scan", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner6, scan, $Object*, $Element*, Object$*)},
		{"scan", "(Ljavax/lang/model/element/Element;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;)TR;", $PUBLIC | $FINAL, $method(ElementScanner6, scan, $Object*, $Element*)},
		{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner6, visitExecutable, $Object*, $ExecutableElement*, Object$*)},
		{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/PackageElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner6, visitPackage, $Object*, $PackageElement*, Object$*)},
		{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner6, visitType, $Object*, $TypeElement*, Object$*)},
		{"visitTypeParameter", "(Ljavax/lang/model/element/TypeParameterElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeParameterElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner6, visitTypeParameter, $Object*, $TypeParameterElement*, Object$*)},
		{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner6, visitVariable, $Object*, $VariableElement*, Object$*)},
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
		"javax.lang.model.util.ElementScanner6",
		"javax.lang.model.util.AbstractElementVisitor6",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor6<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementScanner6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementScanner6);
	});
	return class$;
}

$Class* ElementScanner6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax