#include <javax/lang/model/util/AbstractTypeVisitor14.h>

#include <javax/lang/model/util/AbstractTypeVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractTypeVisitor9 = ::javax::lang::model::util::AbstractTypeVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractTypeVisitor14_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
	{}
};

$CompoundAttribute _AbstractTypeVisitor14_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractTypeVisitor14_Attribute_var$0},
	{}
};

$MethodInfo _AbstractTypeVisitor14_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractTypeVisitor14, init$, void)},
	{}
};

$ClassInfo _AbstractTypeVisitor14_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractTypeVisitor14",
	"javax.lang.model.util.AbstractTypeVisitor9",
	nullptr,
	nullptr,
	_AbstractTypeVisitor14_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractTypeVisitor9<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractTypeVisitor14_Annotations_
};

$Object* allocate$AbstractTypeVisitor14($Class* clazz) {
	return $of($alloc(AbstractTypeVisitor14));
}

void AbstractTypeVisitor14::init$() {
	$AbstractTypeVisitor9::init$();
}

AbstractTypeVisitor14::AbstractTypeVisitor14() {
}

$Class* AbstractTypeVisitor14::load$($String* name, bool initialize) {
	$loadClass(AbstractTypeVisitor14, name, initialize, &_AbstractTypeVisitor14_ClassInfo_, allocate$AbstractTypeVisitor14);
	return class$;
}

$Class* AbstractTypeVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax