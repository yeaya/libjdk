#include <javax/lang/model/util/AbstractAnnotationValueVisitor8.h>

#include <javax/lang/model/util/AbstractAnnotationValueVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractAnnotationValueVisitor7 = ::javax::lang::model::util::AbstractAnnotationValueVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractAnnotationValueVisitor8_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
	{}
};

$CompoundAttribute _AbstractAnnotationValueVisitor8_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractAnnotationValueVisitor8_Attribute_var$0},
	{}
};

$MethodInfo _AbstractAnnotationValueVisitor8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractAnnotationValueVisitor8::*)()>(&AbstractAnnotationValueVisitor8::init$))},
	{}
};

$ClassInfo _AbstractAnnotationValueVisitor8_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractAnnotationValueVisitor8",
	"javax.lang.model.util.AbstractAnnotationValueVisitor7",
	nullptr,
	nullptr,
	_AbstractAnnotationValueVisitor8_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor7<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractAnnotationValueVisitor8_Annotations_
};

$Object* allocate$AbstractAnnotationValueVisitor8($Class* clazz) {
	return $of($alloc(AbstractAnnotationValueVisitor8));
}

void AbstractAnnotationValueVisitor8::init$() {
	$AbstractAnnotationValueVisitor7::init$();
}

AbstractAnnotationValueVisitor8::AbstractAnnotationValueVisitor8() {
}

$Class* AbstractAnnotationValueVisitor8::load$($String* name, bool initialize) {
	$loadClass(AbstractAnnotationValueVisitor8, name, initialize, &_AbstractAnnotationValueVisitor8_ClassInfo_, allocate$AbstractAnnotationValueVisitor8);
	return class$;
}

$Class* AbstractAnnotationValueVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax