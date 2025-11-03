#include <javax/lang/model/util/ElementKindVisitor7.h>

#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/util/ElementKindVisitor6.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Element = ::javax::lang::model::element::Element;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $ElementKindVisitor6 = ::javax::lang::model::util::ElementKindVisitor6;
using $SimpleElementVisitor6 = ::javax::lang::model::util::SimpleElementVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute ElementKindVisitor7_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
	{}
};

$CompoundAttribute _ElementKindVisitor7_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", ElementKindVisitor7_Attribute_var$0},
	{}
};

$NamedAttribute ElementKindVisitor7_Attribute_var$1[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _ElementKindVisitor7_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", ElementKindVisitor7_Attribute_var$1},
	{}
};

$NamedAttribute ElementKindVisitor7_Attribute_var$2[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _ElementKindVisitor7_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", ElementKindVisitor7_Attribute_var$2},
	{}
};

$MethodInfo _ElementKindVisitor7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(static_cast<void(ElementKindVisitor7::*)()>(&ElementKindVisitor7::init$)), nullptr, nullptr, _ElementKindVisitor7_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(static_cast<void(ElementKindVisitor7::*)(Object$*)>(&ElementKindVisitor7::init$)), nullptr, nullptr, _ElementKindVisitor7_MethodAnnotations_init$1},
	{"visitVariableAsResourceVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _ElementKindVisitor7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.ElementKindVisitor7",
	"javax.lang.model.util.ElementKindVisitor6",
	nullptr,
	nullptr,
	_ElementKindVisitor7_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementKindVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_ElementKindVisitor7_Annotations_
};

$Object* allocate$ElementKindVisitor7($Class* clazz) {
	return $of($alloc(ElementKindVisitor7));
}

void ElementKindVisitor7::init$() {
	$ElementKindVisitor6::init$(nullptr);
}

void ElementKindVisitor7::init$(Object$* defaultValue) {
	$ElementKindVisitor6::init$(defaultValue);
}

$Object* ElementKindVisitor7::visitVariableAsResourceVariable($VariableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

ElementKindVisitor7::ElementKindVisitor7() {
}

$Class* ElementKindVisitor7::load$($String* name, bool initialize) {
	$loadClass(ElementKindVisitor7, name, initialize, &_ElementKindVisitor7_ClassInfo_, allocate$ElementKindVisitor7);
	return class$;
}

$Class* ElementKindVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax