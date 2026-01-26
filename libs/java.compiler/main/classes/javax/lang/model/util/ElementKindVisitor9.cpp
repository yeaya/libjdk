#include <javax/lang/model/util/ElementKindVisitor9.h>

#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/QualifiedNameable.h>
#include <javax/lang/model/util/ElementKindVisitor8.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Element = ::javax::lang::model::element::Element;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $QualifiedNameable = ::javax::lang::model::element::QualifiedNameable;
using $ElementKindVisitor8 = ::javax::lang::model::util::ElementKindVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute ElementKindVisitor9_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
	{}
};

$CompoundAttribute _ElementKindVisitor9_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", ElementKindVisitor9_Attribute_var$0},
	{}
};

$MethodInfo _ElementKindVisitor9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ElementKindVisitor9, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(ElementKindVisitor9, init$, void, Object$*)},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor9, visitModule, $Object*, $ModuleElement*, Object$*)},
	{}
};

$ClassInfo _ElementKindVisitor9_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.ElementKindVisitor9",
	"javax.lang.model.util.ElementKindVisitor8",
	nullptr,
	nullptr,
	_ElementKindVisitor9_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementKindVisitor8<TR;TP;>;",
	nullptr,
	nullptr,
	_ElementKindVisitor9_Annotations_
};

$Object* allocate$ElementKindVisitor9($Class* clazz) {
	return $of($alloc(ElementKindVisitor9));
}

void ElementKindVisitor9::init$() {
	$ElementKindVisitor8::init$(nullptr);
}

void ElementKindVisitor9::init$(Object$* defaultValue) {
	$ElementKindVisitor8::init$(defaultValue);
}

$Object* ElementKindVisitor9::visitModule($ModuleElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

ElementKindVisitor9::ElementKindVisitor9() {
}

$Class* ElementKindVisitor9::load$($String* name, bool initialize) {
	$loadClass(ElementKindVisitor9, name, initialize, &_ElementKindVisitor9_ClassInfo_, allocate$ElementKindVisitor9);
	return class$;
}

$Class* ElementKindVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax