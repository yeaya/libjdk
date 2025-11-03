#include <javax/lang/model/type/TypeVisitor.h>

#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/ErrorType.h>
#include <javax/lang/model/type/ExecutableType.h>
#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/NullType.h>
#include <javax/lang/model/type/PrimitiveType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVariable.h>
#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/type/WildcardType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayType = ::javax::lang::model::type::ArrayType;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $ErrorType = ::javax::lang::model::type::ErrorType;
using $ExecutableType = ::javax::lang::model::type::ExecutableType;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $NoType = ::javax::lang::model::type::NoType;
using $NullType = ::javax::lang::model::type::NullType;
using $PrimitiveType = ::javax::lang::model::type::PrimitiveType;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVariable = ::javax::lang::model::type::TypeVariable;
using $UnionType = ::javax::lang::model::type::UnionType;
using $WildcardType = ::javax::lang::model::type::WildcardType;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$MethodInfo _TypeVisitor_MethodInfo_[] = {
	{"visit", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visit", "(Ljavax/lang/model/type/TypeMirror;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;)TR;", $PUBLIC},
	{"visitArray", "(Ljavax/lang/model/type/ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/ArrayType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitDeclared", "(Ljavax/lang/model/type/DeclaredType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/DeclaredType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitError", "(Ljavax/lang/model/type/ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/ErrorType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitExecutable", "(Ljavax/lang/model/type/ExecutableType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/ExecutableType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitIntersection", "(Ljavax/lang/model/type/IntersectionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/IntersectionType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitNoType", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NoType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitNull", "(Ljavax/lang/model/type/NullType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NullType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitPrimitive", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitTypeVariable", "(Ljavax/lang/model/type/TypeVariable;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeVariable;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitUnion", "(Ljavax/lang/model/type/UnionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/UnionType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitUnknown", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitWildcard", "(Ljavax/lang/model/type/WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/WildcardType;TP;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeVisitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.TypeVisitor",
	nullptr,
	nullptr,
	nullptr,
	_TypeVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$TypeVisitor($Class* clazz) {
	return $of($alloc(TypeVisitor));
}

$Object* TypeVisitor::visit($TypeMirror* t) {
	return $of(visit(t, nullptr));
}

$Class* TypeVisitor::load$($String* name, bool initialize) {
	$loadClass(TypeVisitor, name, initialize, &_TypeVisitor_ClassInfo_, allocate$TypeVisitor);
	return class$;
}

$Class* TypeVisitor::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax