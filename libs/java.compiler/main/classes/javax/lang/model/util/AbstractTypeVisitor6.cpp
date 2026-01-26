#include <javax/lang/model/util/AbstractTypeVisitor6.h>

#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/type/UnknownTypeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;
using $UnionType = ::javax::lang::model::type::UnionType;
using $UnknownTypeException = ::javax::lang::model::type::UnknownTypeException;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractTypeVisitor6_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
	{}
};

$CompoundAttribute _AbstractTypeVisitor6_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractTypeVisitor6_Attribute_var$0},
	{}
};

$NamedAttribute AbstractTypeVisitor6_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AbstractTypeVisitor6_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", AbstractTypeVisitor6_Attribute_var$1},
	{}
};

$MethodInfo _AbstractTypeVisitor6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractTypeVisitor6, init$, void), nullptr, nullptr, _AbstractTypeVisitor6_MethodAnnotations_init$0},
	{"visit", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractTypeVisitor6, visit, $Object*, $TypeMirror*, Object$*)},
	{"visit", "(Ljavax/lang/model/type/TypeMirror;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractTypeVisitor6, visit, $Object*, $TypeMirror*)},
	{"visitIntersection", "(Ljavax/lang/model/type/IntersectionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/IntersectionType;TP;)TR;", $PUBLIC, $virtualMethod(AbstractTypeVisitor6, visitIntersection, $Object*, $IntersectionType*, Object$*)},
	{"visitUnion", "(Ljavax/lang/model/type/UnionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/UnionType;TP;)TR;", $PUBLIC, $virtualMethod(AbstractTypeVisitor6, visitUnion, $Object*, $UnionType*, Object$*)},
	{"visitUnknown", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC, $virtualMethod(AbstractTypeVisitor6, visitUnknown, $Object*, $TypeMirror*, Object$*)},
	{}
};

$ClassInfo _AbstractTypeVisitor6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractTypeVisitor6",
	"java.lang.Object",
	"javax.lang.model.type.TypeVisitor",
	nullptr,
	_AbstractTypeVisitor6_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/lang/model/type/TypeVisitor<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractTypeVisitor6_Annotations_
};

$Object* allocate$AbstractTypeVisitor6($Class* clazz) {
	return $of($alloc(AbstractTypeVisitor6));
}

void AbstractTypeVisitor6::init$() {
}

$Object* AbstractTypeVisitor6::visit($TypeMirror* t, Object$* p) {
	return $of($nc(t)->accept(this, p));
}

$Object* AbstractTypeVisitor6::visit($TypeMirror* t) {
	return $of($nc(t)->accept(this, nullptr));
}

$Object* AbstractTypeVisitor6::visitUnion($UnionType* t, Object$* p) {
	return $of(visitUnknown(t, p));
}

$Object* AbstractTypeVisitor6::visitIntersection($IntersectionType* t, Object$* p) {
	return $of(visitUnknown(t, p));
}

$Object* AbstractTypeVisitor6::visitUnknown($TypeMirror* t, Object$* p) {
	$throwNew($UnknownTypeException, t, p);
	$shouldNotReachHere();
}

AbstractTypeVisitor6::AbstractTypeVisitor6() {
}

$Class* AbstractTypeVisitor6::load$($String* name, bool initialize) {
	$loadClass(AbstractTypeVisitor6, name, initialize, &_AbstractTypeVisitor6_ClassInfo_, allocate$AbstractTypeVisitor6);
	return class$;
}

$Class* AbstractTypeVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax