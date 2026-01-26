#include <javax/lang/model/util/SimpleElementVisitor8.h>

#include <javax/lang/model/util/SimpleElementVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleElementVisitor7 = ::javax::lang::model::util::SimpleElementVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleElementVisitor8_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
	{}
};

$CompoundAttribute _SimpleElementVisitor8_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleElementVisitor8_Attribute_var$0},
	{}
};

$MethodInfo _SimpleElementVisitor8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleElementVisitor8, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleElementVisitor8, init$, void, Object$*)},
	{}
};

$ClassInfo _SimpleElementVisitor8_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleElementVisitor8",
	"javax.lang.model.util.SimpleElementVisitor7",
	nullptr,
	nullptr,
	_SimpleElementVisitor8_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleElementVisitor7<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleElementVisitor8_Annotations_
};

$Object* allocate$SimpleElementVisitor8($Class* clazz) {
	return $of($alloc(SimpleElementVisitor8));
}

void SimpleElementVisitor8::init$() {
	$SimpleElementVisitor7::init$(nullptr);
}

void SimpleElementVisitor8::init$(Object$* defaultValue) {
	$SimpleElementVisitor7::init$(defaultValue);
}

SimpleElementVisitor8::SimpleElementVisitor8() {
}

$Class* SimpleElementVisitor8::load$($String* name, bool initialize) {
	$loadClass(SimpleElementVisitor8, name, initialize, &_SimpleElementVisitor8_ClassInfo_, allocate$SimpleElementVisitor8);
	return class$;
}

$Class* SimpleElementVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax