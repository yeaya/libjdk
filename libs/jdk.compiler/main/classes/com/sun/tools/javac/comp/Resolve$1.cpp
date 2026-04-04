#include <com/sun/tools/javac/comp/Resolve$1.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$AccessError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$AccessError = ::com::sun::tools::javac::comp::Resolve$AccessError;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$1::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$Types$SimpleVisitor::init$();
}

void Resolve$1::visit($List* ts, $Env* env) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(ts)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Type, t, $cast($Type, i$->next()));
		{
			visit(t, env);
		}
	}
}

$Void* Resolve$1::visitType($Type* t, $Env* env) {
	return nullptr;
}

$Void* Resolve$1::visitArrayType($Type$ArrayType* t, $Env* env) {
	visit($nc(t)->elemtype, env);
	return nullptr;
}

$Void* Resolve$1::visitClassType($Type$ClassType* t, $Env* env) {
	$useLocalObjectStack();
	visit($($nc(t)->getTypeArguments()), env);
	if (!this->this$0->isAccessible(env, t, true)) {
		$var($Symbol, var$0, $new($Resolve$AccessError, this->this$0, env, nullptr, t->tsym));
		this->this$0->accessBase(var$0, $($nc($nc(env)->tree)->pos()), $nc($nc(env)->enclClass)->sym, t, $nc(t->tsym)->name, true);
	}
	return nullptr;
}

$Void* Resolve$1::visitWildcardType($Type$WildcardType* t, $Env* env) {
	visit($nc(t)->type, env);
	return nullptr;
}

$Void* Resolve$1::visitMethodType($Type$MethodType* t, $Env* env) {
	$useLocalObjectStack();
	visit($($nc(t)->getParameterTypes()), env);
	visit($(t->getReturnType()), env);
	visit($(t->getThrownTypes()), env);
	return nullptr;
}

$Object* Resolve$1::visitMethodType($Type$MethodType* t, Object$* env) {
	return this->visitMethodType(t, $cast($Env, env));
}

$Object* Resolve$1::visitArrayType($Type$ArrayType* t, Object$* env) {
	return this->visitArrayType(t, $cast($Env, env));
}

$Object* Resolve$1::visitWildcardType($Type$WildcardType* t, Object$* env) {
	return this->visitWildcardType(t, $cast($Env, env));
}

$Object* Resolve$1::visitClassType($Type$ClassType* t, Object$* env) {
	return this->visitClassType(t, $cast($Env, env));
}

$Object* Resolve$1::visitType($Type* t, Object$* env) {
	return this->visitType(t, $cast($Env, env));
}

Resolve$1::Resolve$1() {
}

$Class* Resolve$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(Resolve$1, init$, void, $Resolve*)},
		{"visit", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $virtualMethod(Resolve$1, visit, void, $List*, $Env*)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC, $virtualMethod(Resolve$1, visitArrayType, $Void*, $Type$ArrayType*, $Env*)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Resolve$1, visitArrayType, $Object*, $Type$ArrayType*, Object$*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC, $virtualMethod(Resolve$1, visitClassType, $Void*, $Type$ClassType*, $Env*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Resolve$1, visitClassType, $Object*, $Type$ClassType*, Object$*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC, $virtualMethod(Resolve$1, visitMethodType, $Void*, $Type$MethodType*, $Env*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Resolve$1, visitMethodType, $Object*, $Type$MethodType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC, $virtualMethod(Resolve$1, visitType, $Void*, $Type*, $Env*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Resolve$1, visitType, $Object*, $Type*, Object$*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/comp/Env;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/lang/Void;", $PUBLIC, $virtualMethod(Resolve$1, visitWildcardType, $Void*, $Type$WildcardType*, $Env*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Resolve$1, visitWildcardType, $Object*, $Type$WildcardType*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$1",
		"com.sun.tools.javac.code.Types$SimpleVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Void;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$1);
	});
	return class$;
}

$Class* Resolve$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com