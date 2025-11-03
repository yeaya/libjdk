#include <javax/lang/model/util/SimpleAnnotationValueVisitor9.h>

#include <javax/lang/model/util/SimpleAnnotationValueVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleAnnotationValueVisitor8 = ::javax::lang::model::util::SimpleAnnotationValueVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleAnnotationValueVisitor9_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
	{}
};

$CompoundAttribute _SimpleAnnotationValueVisitor9_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleAnnotationValueVisitor9_Attribute_var$0},
	{}
};

$MethodInfo _SimpleAnnotationValueVisitor9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SimpleAnnotationValueVisitor9::*)()>(&SimpleAnnotationValueVisitor9::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(SimpleAnnotationValueVisitor9::*)(Object$*)>(&SimpleAnnotationValueVisitor9::init$))},
	{}
};

$ClassInfo _SimpleAnnotationValueVisitor9_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleAnnotationValueVisitor9",
	"javax.lang.model.util.SimpleAnnotationValueVisitor8",
	nullptr,
	nullptr,
	_SimpleAnnotationValueVisitor9_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleAnnotationValueVisitor8<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleAnnotationValueVisitor9_Annotations_
};

$Object* allocate$SimpleAnnotationValueVisitor9($Class* clazz) {
	return $of($alloc(SimpleAnnotationValueVisitor9));
}

void SimpleAnnotationValueVisitor9::init$() {
	$SimpleAnnotationValueVisitor8::init$(nullptr);
}

void SimpleAnnotationValueVisitor9::init$(Object$* defaultValue) {
	$SimpleAnnotationValueVisitor8::init$(defaultValue);
}

SimpleAnnotationValueVisitor9::SimpleAnnotationValueVisitor9() {
}

$Class* SimpleAnnotationValueVisitor9::load$($String* name, bool initialize) {
	$loadClass(SimpleAnnotationValueVisitor9, name, initialize, &_SimpleAnnotationValueVisitor9_ClassInfo_, allocate$SimpleAnnotationValueVisitor9);
	return class$;
}

$Class* SimpleAnnotationValueVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax