#include <javax/lang/model/util/AbstractTypeVisitor6.h>
#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/type/UnknownTypeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $UnionType = ::javax::lang::model::type::UnionType;
using $UnknownTypeException = ::javax::lang::model::type::UnknownTypeException;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractTypeVisitor6::init$() {
}

$Object* AbstractTypeVisitor6::visit($TypeMirror* t, Object$* p) {
	return $nc(t)->accept(this, p);
}

$Object* AbstractTypeVisitor6::visit($TypeMirror* t) {
	return $nc(t)->accept(this, nullptr);
}

$Object* AbstractTypeVisitor6::visitUnion($UnionType* t, Object$* p) {
	return visitUnknown(t, p);
}

$Object* AbstractTypeVisitor6::visitIntersection($IntersectionType* t, Object$* p) {
	return visitUnknown(t, p);
}

$Object* AbstractTypeVisitor6::visitUnknown($TypeMirror* t, Object$* p) {
	$throwNew($UnknownTypeException, t, p);
	$shouldNotReachHere();
}

AbstractTypeVisitor6::AbstractTypeVisitor6() {
}

$Class* AbstractTypeVisitor6::load$($String* name, bool initialize) {
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(AbstractTypeVisitor6, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"visit", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractTypeVisitor6, visit, $Object*, $TypeMirror*, Object$*)},
		{"visit", "(Ljavax/lang/model/type/TypeMirror;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;)TR;", $PUBLIC | $FINAL, $virtualMethod(AbstractTypeVisitor6, visit, $Object*, $TypeMirror*)},
		{"visitIntersection", "(Ljavax/lang/model/type/IntersectionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/IntersectionType;TP;)TR;", $PUBLIC, $virtualMethod(AbstractTypeVisitor6, visitIntersection, $Object*, $IntersectionType*, Object$*)},
		{"visitUnion", "(Ljavax/lang/model/type/UnionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/UnionType;TP;)TR;", $PUBLIC, $virtualMethod(AbstractTypeVisitor6, visitUnion, $Object*, $UnionType*, Object$*)},
		{"visitUnknown", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC, $virtualMethod(AbstractTypeVisitor6, visitUnknown, $Object*, $TypeMirror*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.lang.model.util.AbstractTypeVisitor6",
		"java.lang.Object",
		"javax.lang.model.type.TypeVisitor",
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/lang/model/type/TypeVisitor<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractTypeVisitor6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractTypeVisitor6);
	});
	return class$;
}

$Class* AbstractTypeVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax