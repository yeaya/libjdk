#include <javax/lang/model/util/SimpleTypeVisitor6.h>

#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/ErrorType.h>
#include <javax/lang/model/type/ExecutableType.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/NullType.h>
#include <javax/lang/model/type/PrimitiveType.h>
#include <javax/lang/model/type/ReferenceType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVariable.h>
#include <javax/lang/model/type/WildcardType.h>
#include <javax/lang/model/util/AbstractTypeVisitor6.h>
#include <jcpp.h>

#undef DEFAULT_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ArrayType = ::javax::lang::model::type::ArrayType;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $ErrorType = ::javax::lang::model::type::ErrorType;
using $ExecutableType = ::javax::lang::model::type::ExecutableType;
using $NoType = ::javax::lang::model::type::NoType;
using $NullType = ::javax::lang::model::type::NullType;
using $PrimitiveType = ::javax::lang::model::type::PrimitiveType;
using $ReferenceType = ::javax::lang::model::type::ReferenceType;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVariable = ::javax::lang::model::type::TypeVariable;
using $WildcardType = ::javax::lang::model::type::WildcardType;
using $AbstractTypeVisitor6 = ::javax::lang::model::util::AbstractTypeVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleTypeVisitor6_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
	{}
};

$CompoundAttribute _SimpleTypeVisitor6_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleTypeVisitor6_Attribute_var$0},
	{}
};

$NamedAttribute SimpleTypeVisitor6_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _SimpleTypeVisitor6_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", SimpleTypeVisitor6_Attribute_var$1},
	{}
};

$NamedAttribute SimpleTypeVisitor6_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _SimpleTypeVisitor6_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", SimpleTypeVisitor6_Attribute_var$2},
	{}
};

$FieldInfo _SimpleTypeVisitor6_FieldInfo_[] = {
	{"DEFAULT_VALUE", "Ljava/lang/Object;", "TR;", $PROTECTED | $FINAL, $field(SimpleTypeVisitor6, DEFAULT_VALUE)},
	{}
};

$MethodInfo _SimpleTypeVisitor6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(SimpleTypeVisitor6, init$, void), nullptr, nullptr, _SimpleTypeVisitor6_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(SimpleTypeVisitor6, init$, void, Object$*), nullptr, nullptr, _SimpleTypeVisitor6_MethodAnnotations_init$1},
	{"defaultAction", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PROTECTED, $virtualMethod(SimpleTypeVisitor6, defaultAction, $Object*, $TypeMirror*, Object$*)},
	{"visitArray", "(Ljavax/lang/model/type/ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/ArrayType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor6, visitArray, $Object*, $ArrayType*, Object$*)},
	{"visitDeclared", "(Ljavax/lang/model/type/DeclaredType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/DeclaredType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor6, visitDeclared, $Object*, $DeclaredType*, Object$*)},
	{"visitError", "(Ljavax/lang/model/type/ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/ErrorType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor6, visitError, $Object*, $ErrorType*, Object$*)},
	{"visitExecutable", "(Ljavax/lang/model/type/ExecutableType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/ExecutableType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor6, visitExecutable, $Object*, $ExecutableType*, Object$*)},
	{"visitNoType", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NoType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor6, visitNoType, $Object*, $NoType*, Object$*)},
	{"visitNull", "(Ljavax/lang/model/type/NullType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NullType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor6, visitNull, $Object*, $NullType*, Object$*)},
	{"visitPrimitive", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor6, visitPrimitive, $Object*, $PrimitiveType*, Object$*)},
	{"visitTypeVariable", "(Ljavax/lang/model/type/TypeVariable;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeVariable;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor6, visitTypeVariable, $Object*, $TypeVariable*, Object$*)},
	{"visitWildcard", "(Ljavax/lang/model/type/WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/WildcardType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor6, visitWildcard, $Object*, $WildcardType*, Object$*)},
	{}
};

$ClassInfo _SimpleTypeVisitor6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleTypeVisitor6",
	"javax.lang.model.util.AbstractTypeVisitor6",
	nullptr,
	_SimpleTypeVisitor6_FieldInfo_,
	_SimpleTypeVisitor6_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractTypeVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleTypeVisitor6_Annotations_
};

$Object* allocate$SimpleTypeVisitor6($Class* clazz) {
	return $of($alloc(SimpleTypeVisitor6));
}

void SimpleTypeVisitor6::init$() {
	$AbstractTypeVisitor6::init$();
	$set(this, DEFAULT_VALUE, nullptr);
}

void SimpleTypeVisitor6::init$(Object$* defaultValue) {
	$AbstractTypeVisitor6::init$();
	$set(this, DEFAULT_VALUE, defaultValue);
}

$Object* SimpleTypeVisitor6::defaultAction($TypeMirror* e, Object$* p) {
	return $of(this->DEFAULT_VALUE);
}

$Object* SimpleTypeVisitor6::visitPrimitive($PrimitiveType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* SimpleTypeVisitor6::visitNull($NullType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* SimpleTypeVisitor6::visitArray($ArrayType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* SimpleTypeVisitor6::visitDeclared($DeclaredType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* SimpleTypeVisitor6::visitError($ErrorType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* SimpleTypeVisitor6::visitTypeVariable($TypeVariable* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* SimpleTypeVisitor6::visitWildcard($WildcardType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* SimpleTypeVisitor6::visitExecutable($ExecutableType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* SimpleTypeVisitor6::visitNoType($NoType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

SimpleTypeVisitor6::SimpleTypeVisitor6() {
}

$Class* SimpleTypeVisitor6::load$($String* name, bool initialize) {
	$loadClass(SimpleTypeVisitor6, name, initialize, &_SimpleTypeVisitor6_ClassInfo_, allocate$SimpleTypeVisitor6);
	return class$;
}

$Class* SimpleTypeVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax