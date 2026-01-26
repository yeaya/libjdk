#include <javax/lang/model/util/SimpleAnnotationValueVisitor7.h>

#include <javax/lang/model/util/SimpleAnnotationValueVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleAnnotationValueVisitor6 = ::javax::lang::model::util::SimpleAnnotationValueVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleAnnotationValueVisitor7_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
	{}
};

$CompoundAttribute _SimpleAnnotationValueVisitor7_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleAnnotationValueVisitor7_Attribute_var$0},
	{}
};

$NamedAttribute SimpleAnnotationValueVisitor7_Attribute_var$1[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _SimpleAnnotationValueVisitor7_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", SimpleAnnotationValueVisitor7_Attribute_var$1},
	{}
};

$NamedAttribute SimpleAnnotationValueVisitor7_Attribute_var$2[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _SimpleAnnotationValueVisitor7_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", SimpleAnnotationValueVisitor7_Attribute_var$2},
	{}
};

$MethodInfo _SimpleAnnotationValueVisitor7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(SimpleAnnotationValueVisitor7, init$, void), nullptr, nullptr, _SimpleAnnotationValueVisitor7_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(SimpleAnnotationValueVisitor7, init$, void, Object$*), nullptr, nullptr, _SimpleAnnotationValueVisitor7_MethodAnnotations_init$1},
	{}
};

$ClassInfo _SimpleAnnotationValueVisitor7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleAnnotationValueVisitor7",
	"javax.lang.model.util.SimpleAnnotationValueVisitor6",
	nullptr,
	nullptr,
	_SimpleAnnotationValueVisitor7_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleAnnotationValueVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleAnnotationValueVisitor7_Annotations_
};

$Object* allocate$SimpleAnnotationValueVisitor7($Class* clazz) {
	return $of($alloc(SimpleAnnotationValueVisitor7));
}

void SimpleAnnotationValueVisitor7::init$() {
	$SimpleAnnotationValueVisitor6::init$(nullptr);
}

void SimpleAnnotationValueVisitor7::init$(Object$* defaultValue) {
	$SimpleAnnotationValueVisitor6::init$(defaultValue);
}

SimpleAnnotationValueVisitor7::SimpleAnnotationValueVisitor7() {
}

$Class* SimpleAnnotationValueVisitor7::load$($String* name, bool initialize) {
	$loadClass(SimpleAnnotationValueVisitor7, name, initialize, &_SimpleAnnotationValueVisitor7_ClassInfo_, allocate$SimpleAnnotationValueVisitor7);
	return class$;
}

$Class* SimpleAnnotationValueVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax