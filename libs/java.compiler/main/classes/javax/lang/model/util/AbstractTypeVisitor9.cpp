#include <javax/lang/model/util/AbstractTypeVisitor9.h>

#include <javax/lang/model/util/AbstractTypeVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractTypeVisitor8 = ::javax::lang::model::util::AbstractTypeVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractTypeVisitor9_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
	{}
};

$CompoundAttribute _AbstractTypeVisitor9_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractTypeVisitor9_Attribute_var$0},
	{}
};

$MethodInfo _AbstractTypeVisitor9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractTypeVisitor9, init$, void)},
	{}
};

$ClassInfo _AbstractTypeVisitor9_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractTypeVisitor9",
	"javax.lang.model.util.AbstractTypeVisitor8",
	nullptr,
	nullptr,
	_AbstractTypeVisitor9_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractTypeVisitor8<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractTypeVisitor9_Annotations_
};

$Object* allocate$AbstractTypeVisitor9($Class* clazz) {
	return $of($alloc(AbstractTypeVisitor9));
}

void AbstractTypeVisitor9::init$() {
	$AbstractTypeVisitor8::init$();
}

AbstractTypeVisitor9::AbstractTypeVisitor9() {
}

$Class* AbstractTypeVisitor9::load$($String* name, bool initialize) {
	$loadClass(AbstractTypeVisitor9, name, initialize, &_AbstractTypeVisitor9_ClassInfo_, allocate$AbstractTypeVisitor9);
	return class$;
}

$Class* AbstractTypeVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax