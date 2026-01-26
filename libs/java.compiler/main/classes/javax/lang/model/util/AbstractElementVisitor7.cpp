#include <javax/lang/model/util/AbstractElementVisitor7.h>

#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractElementVisitor6 = ::javax::lang::model::util::AbstractElementVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractElementVisitor7_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
	{}
};

$CompoundAttribute _AbstractElementVisitor7_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractElementVisitor7_Attribute_var$0},
	{}
};

$NamedAttribute AbstractElementVisitor7_Attribute_var$1[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _AbstractElementVisitor7_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", AbstractElementVisitor7_Attribute_var$1},
	{}
};

$MethodInfo _AbstractElementVisitor7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractElementVisitor7, init$, void), nullptr, nullptr, _AbstractElementVisitor7_MethodAnnotations_init$0},
	{}
};

$ClassInfo _AbstractElementVisitor7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractElementVisitor7",
	"javax.lang.model.util.AbstractElementVisitor6",
	nullptr,
	nullptr,
	_AbstractElementVisitor7_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractElementVisitor7_Annotations_
};

$Object* allocate$AbstractElementVisitor7($Class* clazz) {
	return $of($alloc(AbstractElementVisitor7));
}

void AbstractElementVisitor7::init$() {
	$AbstractElementVisitor6::init$();
}

AbstractElementVisitor7::AbstractElementVisitor7() {
}

$Class* AbstractElementVisitor7::load$($String* name, bool initialize) {
	$loadClass(AbstractElementVisitor7, name, initialize, &_AbstractElementVisitor7_ClassInfo_, allocate$AbstractElementVisitor7);
	return class$;
}

$Class* AbstractElementVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax