#include <javax/lang/model/util/ElementScanner7.h>

#include <java/lang/Iterable.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $ElementScanner6 = ::javax::lang::model::util::ElementScanner6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute ElementScanner7_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
	{}
};

$CompoundAttribute _ElementScanner7_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", ElementScanner7_Attribute_var$0},
	{}
};

$NamedAttribute ElementScanner7_Attribute_var$1[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _ElementScanner7_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", ElementScanner7_Attribute_var$1},
	{}
};

$NamedAttribute ElementScanner7_Attribute_var$2[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _ElementScanner7_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", ElementScanner7_Attribute_var$2},
	{}
};

$MethodInfo _ElementScanner7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(static_cast<void(ElementScanner7::*)()>(&ElementScanner7::init$)), nullptr, nullptr, _ElementScanner7_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(static_cast<void(ElementScanner7::*)(Object$*)>(&ElementScanner7::init$)), nullptr, nullptr, _ElementScanner7_MethodAnnotations_init$1},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _ElementScanner7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.ElementScanner7",
	"javax.lang.model.util.ElementScanner6",
	nullptr,
	nullptr,
	_ElementScanner7_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementScanner6<TR;TP;>;",
	nullptr,
	nullptr,
	_ElementScanner7_Annotations_
};

$Object* allocate$ElementScanner7($Class* clazz) {
	return $of($alloc(ElementScanner7));
}

void ElementScanner7::init$() {
	$ElementScanner6::init$(nullptr);
}

void ElementScanner7::init$(Object$* defaultValue) {
	$ElementScanner6::init$(defaultValue);
}

$Object* ElementScanner7::visitVariable($VariableElement* e, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(e)->getEnclosedElements())), p));
}

ElementScanner7::ElementScanner7() {
}

$Class* ElementScanner7::load$($String* name, bool initialize) {
	$loadClass(ElementScanner7, name, initialize, &_ElementScanner7_ClassInfo_, allocate$ElementScanner7);
	return class$;
}

$Class* ElementScanner7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax