#include <javax/lang/model/util/AbstractTypeVisitor7.h>

#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/util/AbstractTypeVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnionType = ::javax::lang::model::type::UnionType;
using $AbstractTypeVisitor6 = ::javax::lang::model::util::AbstractTypeVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractTypeVisitor7_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
	{}
};

$CompoundAttribute _AbstractTypeVisitor7_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractTypeVisitor7_Attribute_var$0},
	{}
};

$NamedAttribute AbstractTypeVisitor7_Attribute_var$1[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _AbstractTypeVisitor7_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", AbstractTypeVisitor7_Attribute_var$1},
	{}
};

$MethodInfo _AbstractTypeVisitor7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractTypeVisitor7, init$, void), nullptr, nullptr, _AbstractTypeVisitor7_MethodAnnotations_init$0},
	{"visitUnion", "(Ljavax/lang/model/type/UnionType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractTypeVisitor7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractTypeVisitor7",
	"javax.lang.model.util.AbstractTypeVisitor6",
	nullptr,
	nullptr,
	_AbstractTypeVisitor7_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractTypeVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractTypeVisitor7_Annotations_
};

$Object* allocate$AbstractTypeVisitor7($Class* clazz) {
	return $of($alloc(AbstractTypeVisitor7));
}

$Object* AbstractTypeVisitor7::visitUnion($UnionType* t, Object$* p) {
	 return this->$AbstractTypeVisitor6::visitUnion(t, p);
}

void AbstractTypeVisitor7::init$() {
	$AbstractTypeVisitor6::init$();
}

AbstractTypeVisitor7::AbstractTypeVisitor7() {
}

$Class* AbstractTypeVisitor7::load$($String* name, bool initialize) {
	$loadClass(AbstractTypeVisitor7, name, initialize, &_AbstractTypeVisitor7_ClassInfo_, allocate$AbstractTypeVisitor7);
	return class$;
}

$Class* AbstractTypeVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax