#include <javax/lang/model/util/SimpleAnnotationValueVisitor8.h>

#include <javax/lang/model/util/SimpleAnnotationValueVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleAnnotationValueVisitor7 = ::javax::lang::model::util::SimpleAnnotationValueVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleAnnotationValueVisitor8_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
	{}
};

$CompoundAttribute _SimpleAnnotationValueVisitor8_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleAnnotationValueVisitor8_Attribute_var$0},
	{}
};

$MethodInfo _SimpleAnnotationValueVisitor8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SimpleAnnotationValueVisitor8::*)()>(&SimpleAnnotationValueVisitor8::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(SimpleAnnotationValueVisitor8::*)(Object$*)>(&SimpleAnnotationValueVisitor8::init$))},
	{}
};

$ClassInfo _SimpleAnnotationValueVisitor8_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleAnnotationValueVisitor8",
	"javax.lang.model.util.SimpleAnnotationValueVisitor7",
	nullptr,
	nullptr,
	_SimpleAnnotationValueVisitor8_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleAnnotationValueVisitor7<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleAnnotationValueVisitor8_Annotations_
};

$Object* allocate$SimpleAnnotationValueVisitor8($Class* clazz) {
	return $of($alloc(SimpleAnnotationValueVisitor8));
}

void SimpleAnnotationValueVisitor8::init$() {
	$SimpleAnnotationValueVisitor7::init$(nullptr);
}

void SimpleAnnotationValueVisitor8::init$(Object$* defaultValue) {
	$SimpleAnnotationValueVisitor7::init$(defaultValue);
}

SimpleAnnotationValueVisitor8::SimpleAnnotationValueVisitor8() {
}

$Class* SimpleAnnotationValueVisitor8::load$($String* name, bool initialize) {
	$loadClass(SimpleAnnotationValueVisitor8, name, initialize, &_SimpleAnnotationValueVisitor8_ClassInfo_, allocate$SimpleAnnotationValueVisitor8);
	return class$;
}

$Class* SimpleAnnotationValueVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax