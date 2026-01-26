#include <javax/lang/model/util/SimpleAnnotationValueVisitor14.h>

#include <javax/lang/model/util/SimpleAnnotationValueVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleAnnotationValueVisitor9 = ::javax::lang::model::util::SimpleAnnotationValueVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleAnnotationValueVisitor14_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
	{}
};

$CompoundAttribute _SimpleAnnotationValueVisitor14_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleAnnotationValueVisitor14_Attribute_var$0},
	{}
};

$MethodInfo _SimpleAnnotationValueVisitor14_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleAnnotationValueVisitor14, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleAnnotationValueVisitor14, init$, void, Object$*)},
	{}
};

$ClassInfo _SimpleAnnotationValueVisitor14_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleAnnotationValueVisitor14",
	"javax.lang.model.util.SimpleAnnotationValueVisitor9",
	nullptr,
	nullptr,
	_SimpleAnnotationValueVisitor14_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleAnnotationValueVisitor9<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleAnnotationValueVisitor14_Annotations_
};

$Object* allocate$SimpleAnnotationValueVisitor14($Class* clazz) {
	return $of($alloc(SimpleAnnotationValueVisitor14));
}

void SimpleAnnotationValueVisitor14::init$() {
	$SimpleAnnotationValueVisitor9::init$(nullptr);
}

void SimpleAnnotationValueVisitor14::init$(Object$* defaultValue) {
	$SimpleAnnotationValueVisitor9::init$(defaultValue);
}

SimpleAnnotationValueVisitor14::SimpleAnnotationValueVisitor14() {
}

$Class* SimpleAnnotationValueVisitor14::load$($String* name, bool initialize) {
	$loadClass(SimpleAnnotationValueVisitor14, name, initialize, &_SimpleAnnotationValueVisitor14_ClassInfo_, allocate$SimpleAnnotationValueVisitor14);
	return class$;
}

$Class* SimpleAnnotationValueVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax