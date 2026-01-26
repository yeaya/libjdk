#include <javax/lang/model/util/SimpleElementVisitor7.h>

#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Element = ::javax::lang::model::element::Element;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $SimpleElementVisitor6 = ::javax::lang::model::util::SimpleElementVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleElementVisitor7_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
	{}
};

$CompoundAttribute _SimpleElementVisitor7_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleElementVisitor7_Attribute_var$0},
	{}
};

$NamedAttribute SimpleElementVisitor7_Attribute_var$1[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _SimpleElementVisitor7_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", SimpleElementVisitor7_Attribute_var$1},
	{}
};

$NamedAttribute SimpleElementVisitor7_Attribute_var$2[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _SimpleElementVisitor7_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", SimpleElementVisitor7_Attribute_var$2},
	{}
};

$MethodInfo _SimpleElementVisitor7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(SimpleElementVisitor7, init$, void), nullptr, nullptr, _SimpleElementVisitor7_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(SimpleElementVisitor7, init$, void, Object$*), nullptr, nullptr, _SimpleElementVisitor7_MethodAnnotations_init$1},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(SimpleElementVisitor7, visitVariable, $Object*, $VariableElement*, Object$*)},
	{}
};

$ClassInfo _SimpleElementVisitor7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleElementVisitor7",
	"javax.lang.model.util.SimpleElementVisitor6",
	nullptr,
	nullptr,
	_SimpleElementVisitor7_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleElementVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleElementVisitor7_Annotations_
};

$Object* allocate$SimpleElementVisitor7($Class* clazz) {
	return $of($alloc(SimpleElementVisitor7));
}

void SimpleElementVisitor7::init$() {
	$SimpleElementVisitor6::init$(nullptr);
}

void SimpleElementVisitor7::init$(Object$* defaultValue) {
	$SimpleElementVisitor6::init$(defaultValue);
}

$Object* SimpleElementVisitor7::visitVariable($VariableElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

SimpleElementVisitor7::SimpleElementVisitor7() {
}

$Class* SimpleElementVisitor7::load$($String* name, bool initialize) {
	$loadClass(SimpleElementVisitor7, name, initialize, &_SimpleElementVisitor7_ClassInfo_, allocate$SimpleElementVisitor7);
	return class$;
}

$Class* SimpleElementVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax