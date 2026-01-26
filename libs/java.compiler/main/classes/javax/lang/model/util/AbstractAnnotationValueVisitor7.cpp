#include <javax/lang/model/util/AbstractAnnotationValueVisitor7.h>

#include <javax/lang/model/util/AbstractAnnotationValueVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractAnnotationValueVisitor6 = ::javax::lang::model::util::AbstractAnnotationValueVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractAnnotationValueVisitor7_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
	{}
};

$CompoundAttribute _AbstractAnnotationValueVisitor7_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractAnnotationValueVisitor7_Attribute_var$0},
	{}
};

$NamedAttribute AbstractAnnotationValueVisitor7_Attribute_var$1[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _AbstractAnnotationValueVisitor7_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", AbstractAnnotationValueVisitor7_Attribute_var$1},
	{}
};

$MethodInfo _AbstractAnnotationValueVisitor7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractAnnotationValueVisitor7, init$, void), nullptr, nullptr, _AbstractAnnotationValueVisitor7_MethodAnnotations_init$0},
	{}
};

$ClassInfo _AbstractAnnotationValueVisitor7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractAnnotationValueVisitor7",
	"javax.lang.model.util.AbstractAnnotationValueVisitor6",
	nullptr,
	nullptr,
	_AbstractAnnotationValueVisitor7_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractAnnotationValueVisitor7_Annotations_
};

$Object* allocate$AbstractAnnotationValueVisitor7($Class* clazz) {
	return $of($alloc(AbstractAnnotationValueVisitor7));
}

void AbstractAnnotationValueVisitor7::init$() {
	$AbstractAnnotationValueVisitor6::init$();
}

AbstractAnnotationValueVisitor7::AbstractAnnotationValueVisitor7() {
}

$Class* AbstractAnnotationValueVisitor7::load$($String* name, bool initialize) {
	$loadClass(AbstractAnnotationValueVisitor7, name, initialize, &_AbstractAnnotationValueVisitor7_ClassInfo_, allocate$AbstractAnnotationValueVisitor7);
	return class$;
}

$Class* AbstractAnnotationValueVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax