#include <javax/lang/model/util/AbstractAnnotationValueVisitor14.h>

#include <javax/lang/model/util/AbstractAnnotationValueVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractAnnotationValueVisitor9 = ::javax::lang::model::util::AbstractAnnotationValueVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractAnnotationValueVisitor14_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
	{}
};

$CompoundAttribute _AbstractAnnotationValueVisitor14_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractAnnotationValueVisitor14_Attribute_var$0},
	{}
};

$MethodInfo _AbstractAnnotationValueVisitor14_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractAnnotationValueVisitor14::*)()>(&AbstractAnnotationValueVisitor14::init$))},
	{}
};

$ClassInfo _AbstractAnnotationValueVisitor14_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractAnnotationValueVisitor14",
	"javax.lang.model.util.AbstractAnnotationValueVisitor9",
	nullptr,
	nullptr,
	_AbstractAnnotationValueVisitor14_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor9<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractAnnotationValueVisitor14_Annotations_
};

$Object* allocate$AbstractAnnotationValueVisitor14($Class* clazz) {
	return $of($alloc(AbstractAnnotationValueVisitor14));
}

void AbstractAnnotationValueVisitor14::init$() {
	$AbstractAnnotationValueVisitor9::init$();
}

AbstractAnnotationValueVisitor14::AbstractAnnotationValueVisitor14() {
}

$Class* AbstractAnnotationValueVisitor14::load$($String* name, bool initialize) {
	$loadClass(AbstractAnnotationValueVisitor14, name, initialize, &_AbstractAnnotationValueVisitor14_ClassInfo_, allocate$AbstractAnnotationValueVisitor14);
	return class$;
}

$Class* AbstractAnnotationValueVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax