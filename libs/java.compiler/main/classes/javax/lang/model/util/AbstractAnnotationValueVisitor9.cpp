#include <javax/lang/model/util/AbstractAnnotationValueVisitor9.h>

#include <javax/lang/model/util/AbstractAnnotationValueVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractAnnotationValueVisitor8 = ::javax::lang::model::util::AbstractAnnotationValueVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractAnnotationValueVisitor9_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
	{}
};

$CompoundAttribute _AbstractAnnotationValueVisitor9_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractAnnotationValueVisitor9_Attribute_var$0},
	{}
};

$MethodInfo _AbstractAnnotationValueVisitor9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractAnnotationValueVisitor9, init$, void)},
	{}
};

$ClassInfo _AbstractAnnotationValueVisitor9_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractAnnotationValueVisitor9",
	"javax.lang.model.util.AbstractAnnotationValueVisitor8",
	nullptr,
	nullptr,
	_AbstractAnnotationValueVisitor9_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor8<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractAnnotationValueVisitor9_Annotations_
};

$Object* allocate$AbstractAnnotationValueVisitor9($Class* clazz) {
	return $of($alloc(AbstractAnnotationValueVisitor9));
}

void AbstractAnnotationValueVisitor9::init$() {
	$AbstractAnnotationValueVisitor8::init$();
}

AbstractAnnotationValueVisitor9::AbstractAnnotationValueVisitor9() {
}

$Class* AbstractAnnotationValueVisitor9::load$($String* name, bool initialize) {
	$loadClass(AbstractAnnotationValueVisitor9, name, initialize, &_AbstractAnnotationValueVisitor9_ClassInfo_, allocate$AbstractAnnotationValueVisitor9);
	return class$;
}

$Class* AbstractAnnotationValueVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax