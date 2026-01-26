#include <javax/lang/model/util/AbstractAnnotationValueVisitor6.h>

#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <javax/lang/model/element/UnknownAnnotationValueException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;
using $UnknownAnnotationValueException = ::javax::lang::model::element::UnknownAnnotationValueException;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractAnnotationValueVisitor6_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
	{}
};

$CompoundAttribute _AbstractAnnotationValueVisitor6_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractAnnotationValueVisitor6_Attribute_var$0},
	{}
};

$NamedAttribute AbstractAnnotationValueVisitor6_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AbstractAnnotationValueVisitor6_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", AbstractAnnotationValueVisitor6_Attribute_var$1},
	{}
};

$MethodInfo _AbstractAnnotationValueVisitor6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractAnnotationValueVisitor6, init$, void), nullptr, nullptr, _AbstractAnnotationValueVisitor6_MethodAnnotations_init$0},
	{"visit", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;TP;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractAnnotationValueVisitor6, visit, $Object*, $AnnotationValue*, Object$*)},
	{"visit", "(Ljavax/lang/model/element/AnnotationValue;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractAnnotationValueVisitor6, visit, $Object*, $AnnotationValue*)},
	{"visitUnknown", "(Ljavax/lang/model/element/AnnotationValue;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationValue;TP;)TR;", $PUBLIC, $virtualMethod(AbstractAnnotationValueVisitor6, visitUnknown, $Object*, $AnnotationValue*, Object$*)},
	{}
};

$ClassInfo _AbstractAnnotationValueVisitor6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractAnnotationValueVisitor6",
	"java.lang.Object",
	"javax.lang.model.element.AnnotationValueVisitor",
	nullptr,
	_AbstractAnnotationValueVisitor6_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractAnnotationValueVisitor6_Annotations_
};

$Object* allocate$AbstractAnnotationValueVisitor6($Class* clazz) {
	return $of($alloc(AbstractAnnotationValueVisitor6));
}

void AbstractAnnotationValueVisitor6::init$() {
}

$Object* AbstractAnnotationValueVisitor6::visit($AnnotationValue* av, Object$* p) {
	return $of($nc(av)->accept(this, p));
}

$Object* AbstractAnnotationValueVisitor6::visit($AnnotationValue* av) {
	return $of($nc(av)->accept(this, nullptr));
}

$Object* AbstractAnnotationValueVisitor6::visitUnknown($AnnotationValue* av, Object$* p) {
	$throwNew($UnknownAnnotationValueException, av, p);
	$shouldNotReachHere();
}

AbstractAnnotationValueVisitor6::AbstractAnnotationValueVisitor6() {
}

$Class* AbstractAnnotationValueVisitor6::load$($String* name, bool initialize) {
	$loadClass(AbstractAnnotationValueVisitor6, name, initialize, &_AbstractAnnotationValueVisitor6_ClassInfo_, allocate$AbstractAnnotationValueVisitor6);
	return class$;
}

$Class* AbstractAnnotationValueVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax