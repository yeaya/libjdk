#include <com/sun/tools/sjavac/pubapi/TypeDesc$1.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/sjavac/pubapi/ArrayTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/PrimitiveTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/ReferenceTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/TypeVarTypeDesc.h>
#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/ErrorType.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/PrimitiveType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVariable.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <javax/lang/model/util/SimpleTypeVisitor14.h>
#include <jcpp.h>

#undef VOID

using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $ArrayTypeDesc = ::com::sun::tools::sjavac::pubapi::ArrayTypeDesc;
using $PrimitiveTypeDesc = ::com::sun::tools::sjavac::pubapi::PrimitiveTypeDesc;
using $ReferenceTypeDesc = ::com::sun::tools::sjavac::pubapi::ReferenceTypeDesc;
using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $TypeVarTypeDesc = ::com::sun::tools::sjavac::pubapi::TypeVarTypeDesc;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $ArrayType = ::javax::lang::model::type::ArrayType;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $ErrorType = ::javax::lang::model::type::ErrorType;
using $NoType = ::javax::lang::model::type::NoType;
using $PrimitiveType = ::javax::lang::model::type::PrimitiveType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeVariable = ::javax::lang::model::type::TypeVariable;
using $SimpleTypeVisitor14 = ::javax::lang::model::util::SimpleTypeVisitor14;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

void TypeDesc$1::init$() {
	$SimpleTypeVisitor14::init$();
}

$TypeDesc* TypeDesc$1::visitArray($ArrayType* t, $Void* p) {
	$useLocalObjectStack();
	return $new($ArrayTypeDesc, $$cast($TypeDesc, $$nc($nc(t)->getComponentType())->accept(this, p)));
}

$TypeDesc* TypeDesc$1::visitDeclared($DeclaredType* t, $Void* p) {
	$useLocalObjectStack();
	return $new($ReferenceTypeDesc, $($$nc($nc($nc($cast($Type$ClassType, t))->tsym)->flatName())->toString()));
}

$TypeDesc* TypeDesc$1::visitNoType($NoType* t, $Void* p) {
	$init($TypeKind);
	return $new($PrimitiveTypeDesc, $TypeKind::VOID);
}

$TypeDesc* TypeDesc$1::visitTypeVariable($TypeVariable* t, $Void* p) {
	return $new($TypeVarTypeDesc, $($nc($of(t))->toString()));
}

$TypeDesc* TypeDesc$1::visitPrimitive($PrimitiveType* t, $Void* p) {
	return $new($PrimitiveTypeDesc, $($nc(t)->getKind()));
}

$TypeDesc* TypeDesc$1::visitError($ErrorType* t, $Void* p) {
	return $new($ReferenceTypeDesc, "<error type>"_s);
}

$Object* TypeDesc$1::visitNoType($NoType* t, Object$* p) {
	return this->visitNoType(t, $cast($Void, p));
}

$Object* TypeDesc$1::visitTypeVariable($TypeVariable* t, Object$* p) {
	return this->visitTypeVariable(t, $cast($Void, p));
}

$Object* TypeDesc$1::visitError($ErrorType* t, Object$* p) {
	return this->visitError(t, $cast($Void, p));
}

$Object* TypeDesc$1::visitDeclared($DeclaredType* t, Object$* p) {
	return this->visitDeclared(t, $cast($Void, p));
}

$Object* TypeDesc$1::visitArray($ArrayType* t, Object$* p) {
	return this->visitArray(t, $cast($Void, p));
}

$Object* TypeDesc$1::visitPrimitive($PrimitiveType* t, Object$* p) {
	return this->visitPrimitive(t, $cast($Void, p));
}

TypeDesc$1::TypeDesc$1() {
}

$Class* TypeDesc$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TypeDesc$1, init$, void)},
		{"visitArray", "(Ljavax/lang/model/type/ArrayType;Ljava/lang/Void;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC, $virtualMethod(TypeDesc$1, visitArray, $TypeDesc*, $ArrayType*, $Void*)},
		{"visitArray", "(Ljavax/lang/model/type/ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TypeDesc$1, visitArray, $Object*, $ArrayType*, Object$*)},
		{"visitDeclared", "(Ljavax/lang/model/type/DeclaredType;Ljava/lang/Void;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC, $virtualMethod(TypeDesc$1, visitDeclared, $TypeDesc*, $DeclaredType*, $Void*)},
		{"visitDeclared", "(Ljavax/lang/model/type/DeclaredType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TypeDesc$1, visitDeclared, $Object*, $DeclaredType*, Object$*)},
		{"visitError", "(Ljavax/lang/model/type/ErrorType;Ljava/lang/Void;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC, $virtualMethod(TypeDesc$1, visitError, $TypeDesc*, $ErrorType*, $Void*)},
		{"visitError", "(Ljavax/lang/model/type/ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TypeDesc$1, visitError, $Object*, $ErrorType*, Object$*)},
		{"visitNoType", "(Ljavax/lang/model/type/NoType;Ljava/lang/Void;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC, $virtualMethod(TypeDesc$1, visitNoType, $TypeDesc*, $NoType*, $Void*)},
		{"visitNoType", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TypeDesc$1, visitNoType, $Object*, $NoType*, Object$*)},
		{"visitPrimitive", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Void;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC, $virtualMethod(TypeDesc$1, visitPrimitive, $TypeDesc*, $PrimitiveType*, $Void*)},
		{"visitPrimitive", "(Ljavax/lang/model/type/PrimitiveType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TypeDesc$1, visitPrimitive, $Object*, $PrimitiveType*, Object$*)},
		{"visitTypeVariable", "(Ljavax/lang/model/type/TypeVariable;Ljava/lang/Void;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC, $virtualMethod(TypeDesc$1, visitTypeVariable, $TypeDesc*, $TypeVariable*, $Void*)},
		{"visitTypeVariable", "(Ljavax/lang/model/type/TypeVariable;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TypeDesc$1, visitTypeVariable, $Object*, $TypeVariable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.sjavac.pubapi.TypeDesc",
		"fromType",
		"(Ljavax/lang/model/type/TypeMirror;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.pubapi.TypeDesc$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.sjavac.pubapi.TypeDesc$1",
		"javax.lang.model.util.SimpleTypeVisitor14",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/lang/model/util/SimpleTypeVisitor14<Lcom/sun/tools/sjavac/pubapi/TypeDesc;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.pubapi.TypeDesc"
	};
	$loadClass(TypeDesc$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeDesc$1);
	});
	return class$;
}

$Class* TypeDesc$1::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com