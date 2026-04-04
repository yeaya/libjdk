#include <com/sun/tools/javac/comp/Check$2.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Check$2::init$() {
	$Types$SimpleVisitor::init$();
}

$Boolean* Check$2::visitType($Type* t, $Void* s) {
	return $Boolean::valueOf(true);
}

$Boolean* Check$2::visitClassType($Type$ClassType* t, $Void* s) {
	$useLocalObjectStack();
	bool var$0 = $nc(t)->isUnion();
	if (var$0 || t->isIntersection()) {
		return $Boolean::valueOf(false);
	}
	{
		$var($Iterator, i$, $$nc(t->allparams())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, targ, $cast($Type, i$->next()));
			if (!$$sure($Boolean, visit(targ, s))->booleanValue()) {
				return $Boolean::valueOf(false);
			}
		}
	}
	return $Boolean::valueOf(true);
}

$Boolean* Check$2::visitTypeVar($Type$TypeVar* t, $Void* s) {
	return $Boolean::valueOf(($nc($nc(t)->tsym)->flags() & 0x1000) == 0);
}

$Boolean* Check$2::visitCapturedType($Type$CapturedType* t, $Void* s) {
	return $Boolean::valueOf(false);
}

$Boolean* Check$2::visitArrayType($Type$ArrayType* t, $Void* s) {
	return $cast($Boolean, visit($nc(t)->elemtype, s));
}

$Boolean* Check$2::visitWildcardType($Type$WildcardType* t, $Void* s) {
	return $cast($Boolean, visit($nc(t)->type, s));
}

$Object* Check$2::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of(this->visitCapturedType(t, $cast($Void, s)));
}

$Object* Check$2::visitTypeVar($Type$TypeVar* t, Object$* s) {
	return $of(this->visitTypeVar(t, $cast($Void, s)));
}

$Object* Check$2::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(this->visitArrayType(t, $cast($Void, s)));
}

$Object* Check$2::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Void, s)));
}

$Object* Check$2::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($Void, s)));
}

$Object* Check$2::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Void, s)));
}

Check$2::Check$2() {
}

$Class* Check$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Check$2, init$, void)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$2, visitArrayType, $Boolean*, $Type$ArrayType*, $Void*)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$2, visitArrayType, $Object*, $Type$ArrayType*, Object$*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$2, visitCapturedType, $Boolean*, $Type$CapturedType*, $Void*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$2, visitCapturedType, $Object*, $Type$CapturedType*, Object$*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$2, visitClassType, $Boolean*, $Type$ClassType*, $Void*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$2, visitClassType, $Object*, $Type$ClassType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$2, visitType, $Boolean*, $Type*, $Void*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$2, visitType, $Object*, $Type*, Object$*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$2, visitTypeVar, $Boolean*, $Type$TypeVar*, $Void*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$2, visitTypeVar, $Object*, $Type$TypeVar*, Object$*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$2, visitWildcardType, $Boolean*, $Type$WildcardType*, $Void*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$2, visitWildcardType, $Object*, $Type$WildcardType*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Check",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Check$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Check$2",
		"com.sun.tools.javac.code.Types$SimpleVisitor",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Boolean;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Check"
	};
	$loadClass(Check$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$2);
	});
	return class$;
}

$Class* Check$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com