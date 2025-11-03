#include <javax/lang/model/util/AbstractTypeVisitor8.h>

#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/util/AbstractTypeVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $AbstractTypeVisitor7 = ::javax::lang::model::util::AbstractTypeVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractTypeVisitor8_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
	{}
};

$CompoundAttribute _AbstractTypeVisitor8_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractTypeVisitor8_Attribute_var$0},
	{}
};

$MethodInfo _AbstractTypeVisitor8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractTypeVisitor8::*)()>(&AbstractTypeVisitor8::init$))},
	{"visitIntersection", "(Ljavax/lang/model/type/IntersectionType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractTypeVisitor8_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractTypeVisitor8",
	"javax.lang.model.util.AbstractTypeVisitor7",
	nullptr,
	nullptr,
	_AbstractTypeVisitor8_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractTypeVisitor7<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractTypeVisitor8_Annotations_
};

$Object* allocate$AbstractTypeVisitor8($Class* clazz) {
	return $of($alloc(AbstractTypeVisitor8));
}

$Object* AbstractTypeVisitor8::visitIntersection($IntersectionType* t, Object$* p) {
	 return this->$AbstractTypeVisitor7::visitIntersection(t, p);
}

void AbstractTypeVisitor8::init$() {
	$AbstractTypeVisitor7::init$();
}

AbstractTypeVisitor8::AbstractTypeVisitor8() {
}

$Class* AbstractTypeVisitor8::load$($String* name, bool initialize) {
	$loadClass(AbstractTypeVisitor8, name, initialize, &_AbstractTypeVisitor8_ClassInfo_, allocate$AbstractTypeVisitor8);
	return class$;
}

$Class* AbstractTypeVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax