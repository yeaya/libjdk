#include <javax/lang/model/util/AbstractElementVisitor8.h>

#include <javax/lang/model/util/AbstractElementVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractElementVisitor7 = ::javax::lang::model::util::AbstractElementVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractElementVisitor8_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
	{}
};

$CompoundAttribute _AbstractElementVisitor8_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractElementVisitor8_Attribute_var$0},
	{}
};

$MethodInfo _AbstractElementVisitor8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractElementVisitor8, init$, void)},
	{}
};

$ClassInfo _AbstractElementVisitor8_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractElementVisitor8",
	"javax.lang.model.util.AbstractElementVisitor7",
	nullptr,
	nullptr,
	_AbstractElementVisitor8_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor7<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractElementVisitor8_Annotations_
};

$Object* allocate$AbstractElementVisitor8($Class* clazz) {
	return $of($alloc(AbstractElementVisitor8));
}

void AbstractElementVisitor8::init$() {
	$AbstractElementVisitor7::init$();
}

AbstractElementVisitor8::AbstractElementVisitor8() {
}

$Class* AbstractElementVisitor8::load$($String* name, bool initialize) {
	$loadClass(AbstractElementVisitor8, name, initialize, &_AbstractElementVisitor8_ClassInfo_, allocate$AbstractElementVisitor8);
	return class$;
}

$Class* AbstractElementVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax