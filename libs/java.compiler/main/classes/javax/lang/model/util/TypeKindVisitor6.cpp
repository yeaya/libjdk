#include <javax/lang/model/util/TypeKindVisitor6.h>

#include <java/lang/AssertionError.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/PrimitiveType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/AbstractTypeVisitor6.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/TypeKindVisitor6$1.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NoType = ::javax::lang::model::type::NoType;
using $PrimitiveType = ::javax::lang::model::type::PrimitiveType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $SimpleTypeVisitor6 = ::javax::lang::model::util::SimpleTypeVisitor6;
using $TypeKindVisitor6$1 = ::javax::lang::model::util::TypeKindVisitor6$1;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute TypeKindVisitor6_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
	{}
};

$CompoundAttribute _TypeKindVisitor6_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", TypeKindVisitor6_Attribute_var$0},
	{}
};

$NamedAttribute TypeKindVisitor6_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _TypeKindVisitor6_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", TypeKindVisitor6_Attribute_var$1},
	{}
};

$NamedAttribute TypeKindVisitor6_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _TypeKindVisitor6_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", TypeKindVisitor6_Attribute_var$2},
	{}
};

$MethodInfo _TypeKindVisitor6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(TypeKindVisitor6, init$, void), nullptr, nullptr, _TypeKindVisitor6_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(TypeKindVisitor6, init$, void, Object$*), nullptr, nullptr, _TypeKindVisitor6_MethodAnnotations_init$1},
	{"visitNoType", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NoType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitNoType, $Object*, $NoType*, Object$*)},
	{"visitNoTypeAsModule", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NoType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitNoTypeAsModule, $Object*, $NoType*, Object$*)},
	{"visitNoTypeAsNone", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NoType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitNoTypeAsNone, $Object*, $NoType*, Object$*)},
	{"visitNoTypeAsPackage", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NoType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitNoTypeAsPackage, $Object*, $NoType*, Object$*)},
	{"visitNoTypeAsVoid", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NoType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitNoTypeAsVoid, $Object*, $NoType*, Object$*)},
	{"visitPrimitive", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitPrimitive, $Object*, $PrimitiveType*, Object$*)},
	{"visitPrimitiveAsBoolean", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitPrimitiveAsBoolean, $Object*, $PrimitiveType*, Object$*)},
	{"visitPrimitiveAsByte", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitPrimitiveAsByte, $Object*, $PrimitiveType*, Object$*)},
	{"visitPrimitiveAsChar", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitPrimitiveAsChar, $Object*, $PrimitiveType*, Object$*)},
	{"visitPrimitiveAsDouble", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitPrimitiveAsDouble, $Object*, $PrimitiveType*, Object$*)},
	{"visitPrimitiveAsFloat", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitPrimitiveAsFloat, $Object*, $PrimitiveType*, Object$*)},
	{"visitPrimitiveAsInt", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitPrimitiveAsInt, $Object*, $PrimitiveType*, Object$*)},
	{"visitPrimitiveAsLong", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitPrimitiveAsLong, $Object*, $PrimitiveType*, Object$*)},
	{"visitPrimitiveAsShort", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/PrimitiveType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor6, visitPrimitiveAsShort, $Object*, $PrimitiveType*, Object$*)},
	{}
};

$InnerClassInfo _TypeKindVisitor6_InnerClassesInfo_[] = {
	{"javax.lang.model.util.TypeKindVisitor6$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TypeKindVisitor6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.TypeKindVisitor6",
	"javax.lang.model.util.SimpleTypeVisitor6",
	nullptr,
	nullptr,
	_TypeKindVisitor6_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleTypeVisitor6<TR;TP;>;",
	nullptr,
	_TypeKindVisitor6_InnerClassesInfo_,
	_TypeKindVisitor6_Annotations_,
	nullptr,
	"javax.lang.model.util.TypeKindVisitor6$1"
};

$Object* allocate$TypeKindVisitor6($Class* clazz) {
	return $of($alloc(TypeKindVisitor6));
}

void TypeKindVisitor6::init$() {
	$SimpleTypeVisitor6::init$(nullptr);
}

void TypeKindVisitor6::init$(Object$* defaultValue) {
	$SimpleTypeVisitor6::init$(defaultValue);
}

$Object* TypeKindVisitor6::visitPrimitive($PrimitiveType* t, Object$* p) {
	$TypeKind* k = $nc(t)->getKind();
	$init($TypeKindVisitor6$1);
	switch ($nc($TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc((k))->ordinal())) {
	case 1:
		{
			return $of(visitPrimitiveAsBoolean(t, p));
		}
	case 2:
		{
			return $of(visitPrimitiveAsByte(t, p));
		}
	case 3:
		{
			return $of(visitPrimitiveAsShort(t, p));
		}
	case 4:
		{
			return $of(visitPrimitiveAsInt(t, p));
		}
	case 5:
		{
			return $of(visitPrimitiveAsLong(t, p));
		}
	case 6:
		{
			return $of(visitPrimitiveAsChar(t, p));
		}
	case 7:
		{
			return $of(visitPrimitiveAsFloat(t, p));
		}
	case 8:
		{
			return $of(visitPrimitiveAsDouble(t, p));
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Bad kind "_s, k, " for PrimitiveType"_s, t})));
		}
	}
}

$Object* TypeKindVisitor6::visitPrimitiveAsBoolean($PrimitiveType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitPrimitiveAsByte($PrimitiveType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitPrimitiveAsShort($PrimitiveType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitPrimitiveAsInt($PrimitiveType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitPrimitiveAsLong($PrimitiveType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitPrimitiveAsChar($PrimitiveType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitPrimitiveAsFloat($PrimitiveType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitPrimitiveAsDouble($PrimitiveType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitNoType($NoType* t, Object$* p) {
	$TypeKind* k = $nc(t)->getKind();
	$init($TypeKindVisitor6$1);
	switch ($nc($TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc((k))->ordinal())) {
	case 9:
		{
			return $of(visitNoTypeAsVoid(t, p));
		}
	case 10:
		{
			return $of(visitNoTypeAsPackage(t, p));
		}
	case 11:
		{
			return $of(visitNoTypeAsModule(t, p));
		}
	case 12:
		{
			return $of(visitNoTypeAsNone(t, p));
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Bad kind "_s, k, " for NoType"_s, t})));
		}
	}
}

$Object* TypeKindVisitor6::visitNoTypeAsVoid($NoType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitNoTypeAsPackage($NoType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* TypeKindVisitor6::visitNoTypeAsModule($NoType* t, Object$* p) {
	return $of(visitUnknown(t, p));
}

$Object* TypeKindVisitor6::visitNoTypeAsNone($NoType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

TypeKindVisitor6::TypeKindVisitor6() {
}

$Class* TypeKindVisitor6::load$($String* name, bool initialize) {
	$loadClass(TypeKindVisitor6, name, initialize, &_TypeKindVisitor6_ClassInfo_, allocate$TypeKindVisitor6);
	return class$;
}

$Class* TypeKindVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax