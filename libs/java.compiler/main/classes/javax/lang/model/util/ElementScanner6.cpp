#include <javax/lang/model/util/ElementScanner6.h>

#include <java/lang/Iterable.h>
#include <java/util/Collection.h>
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
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
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

$NamedAttribute ElementScanner6_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
	{}
};

$CompoundAttribute _ElementScanner6_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", ElementScanner6_Attribute_var$0},
	{}
};

$NamedAttribute ElementScanner6_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _ElementScanner6_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", ElementScanner6_Attribute_var$1},
	{}
};

$NamedAttribute ElementScanner6_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _ElementScanner6_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", ElementScanner6_Attribute_var$2},
	{}
};

$FieldInfo _ElementScanner6_FieldInfo_[] = {
	{"DEFAULT_VALUE", "Ljava/lang/Object;", "TR;", $PROTECTED | $FINAL, $field(ElementScanner6, DEFAULT_VALUE)},
	{}
};

$MethodInfo _ElementScanner6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(static_cast<void(ElementScanner6::*)()>(&ElementScanner6::init$)), nullptr, nullptr, _ElementScanner6_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(static_cast<void(ElementScanner6::*)(Object$*)>(&ElementScanner6::init$)), nullptr, nullptr, _ElementScanner6_MethodAnnotations_init$1},
	{"scan", "(Ljava/lang/Iterable;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;TP;)TR;", $PUBLIC | $FINAL, $method(static_cast<$Object*(ElementScanner6::*)($Iterable*,Object$*)>(&ElementScanner6::scan))},
	{"scan", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;TP;)TR;", $PUBLIC},
	{"scan", "(Ljavax/lang/model/element/Element;)Ljava/lang/Object;", "(Ljavax/lang/model/element/Element;)TR;", $PUBLIC | $FINAL, $method(static_cast<$Object*(ElementScanner6::*)($Element*)>(&ElementScanner6::scan))},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/PackageElement;TP;)TR;", $PUBLIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC},
	{"visitTypeParameter", "(Ljavax/lang/model/element/TypeParameterElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeParameterElement;TP;)TR;", $PUBLIC},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _ElementScanner6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.ElementScanner6",
	"javax.lang.model.util.AbstractElementVisitor6",
	nullptr,
	_ElementScanner6_FieldInfo_,
	_ElementScanner6_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_ElementScanner6_Annotations_
};

$Object* allocate$ElementScanner6($Class* clazz) {
	return $of($alloc(ElementScanner6));
}

void ElementScanner6::init$() {
	$AbstractElementVisitor6::init$();
	$set(this, DEFAULT_VALUE, nullptr);
}

void ElementScanner6::init$(Object$* defaultValue) {
	$AbstractElementVisitor6::init$();
	$set(this, DEFAULT_VALUE, defaultValue);
}

$Object* ElementScanner6::scan($Iterable* iterable, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, result, this->DEFAULT_VALUE);
	{
		$var($Iterator, i$, $nc(iterable)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, e, $cast($Element, i$->next()));
			$assign(result, scan(e, p));
		}
	}
	return $of(result);
}

$Object* ElementScanner6::scan($Element* e, Object$* p) {
	return $of($nc(e)->accept(this, p));
}

$Object* ElementScanner6::scan($Element* e) {
	return $of(scan(e, ($Object*)nullptr));
}

$Object* ElementScanner6::visitPackage($PackageElement* e, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(e)->getEnclosedElements())), p));
}

$Object* ElementScanner6::visitType($TypeElement* e, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(e)->getEnclosedElements())), p));
}

$Object* ElementScanner6::visitVariable($VariableElement* e, Object$* p) {
	$init($ElementKind);
	if ($nc(e)->getKind() != $ElementKind::RESOURCE_VARIABLE) {
		return $of(scan($(static_cast<$Iterable*>(e->getEnclosedElements())), p));
	} else {
		return $of(visitUnknown(e, p));
	}
}

$Object* ElementScanner6::visitExecutable($ExecutableElement* e, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(e)->getParameters())), p));
}

$Object* ElementScanner6::visitTypeParameter($TypeParameterElement* e, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(e)->getEnclosedElements())), p));
}

ElementScanner6::ElementScanner6() {
}

$Class* ElementScanner6::load$($String* name, bool initialize) {
	$loadClass(ElementScanner6, name, initialize, &_ElementScanner6_ClassInfo_, allocate$ElementScanner6);
	return class$;
}

$Class* ElementScanner6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax