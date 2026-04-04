#include <com/sun/tools/javac/code/Types$15.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef TYPEVAR

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$15::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$Type* Types$15::visitType($Type* t, $Void* ignored) {
	$init($Type);
	return $Type::noType;
}

$Type* Types$15::visitClassType($Type$ClassType* t, $Void* ignored) {
	$useLocalObjectStack();
	if ($nc(t)->supertype_field == nullptr) {
		$var($Type, supertype, $nc($cast($Symbol$ClassSymbol, t->tsym))->getSuperclass());
		if (t->isInterface()) {
			$assign(supertype, $nc($cast($Type$ClassType, $nc(t->tsym)->type))->supertype_field);
		}
		if (t->supertype_field == nullptr) {
			$var($List, actuals, $$nc(this->this$0->classBound(t))->allparams());
			$var($List, formals, $nc($nc(t->tsym)->type)->allparams());
			if (t->hasErasedSupertypes()) {
				$set(t, supertype_field, this->this$0->erasureRecursive(supertype));
			} else if ($nc(formals)->nonEmpty()) {
				$set(t, supertype_field, this->this$0->subst(supertype, formals, actuals));
			} else {
				$set(t, supertype_field, supertype);
			}
		}
	}
	return t->supertype_field;
}

$Type* Types$15::visitTypeVar($Type$TypeVar* t, $Void* ignored) {
	$useLocalObjectStack();
	$init($TypeTag);
	bool var$0 = $$nc($nc(t)->getUpperBound())->hasTag($TypeTag::TYPEVAR);
	if (!var$0) {
		bool var$1 = !$$nc(t->getUpperBound())->isCompound();
		var$0 = var$1 && !$$nc(t->getUpperBound())->isInterface();
	}
	if (var$0) {
		return t->getUpperBound();
	} else {
		return this->this$0->supertype($(t->getUpperBound()));
	}
}

$Type* Types$15::visitArrayType($Type$ArrayType* t, $Void* ignored) {
	bool var$0 = $nc($nc(t)->elemtype)->isPrimitive();
	if (var$0 || this->this$0->isSameType(t->elemtype, $nc(this->this$0->syms)->objectType)) {
		return this->this$0->arraySuperType();
	} else {
		return $new($Type$ArrayType, $(this->this$0->supertype(t->elemtype)), t->tsym);
	}
}

$Type* Types$15::visitErrorType($Type$ErrorType* t, $Void* ignored) {
	$init($Type);
	return $Type::noType;
}

$Object* Types$15::visitErrorType($Type$ErrorType* t, Object$* ignored) {
	return $of(this->visitErrorType(t, $cast($Void, ignored)));
}

$Object* Types$15::visitTypeVar($Type$TypeVar* t, Object$* ignored) {
	return $of(this->visitTypeVar(t, $cast($Void, ignored)));
}

$Object* Types$15::visitArrayType($Type$ArrayType* t, Object$* ignored) {
	return $of(this->visitArrayType(t, $cast($Void, ignored)));
}

$Object* Types$15::visitClassType($Type$ClassType* t, Object$* ignored) {
	return $of(this->visitClassType(t, $cast($Void, ignored)));
}

$Object* Types$15::visitType($Type* t, Object$* ignored) {
	return $of(this->visitType(t, $cast($Void, ignored)));
}

Types$15::Types$15() {
}

$Class* Types$15::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$15, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$15, init$, void, $Types*)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$15, visitArrayType, $Type*, $Type$ArrayType*, $Void*)},
		{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$15, visitArrayType, $Object*, $Type$ArrayType*, Object$*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$15, visitClassType, $Type*, $Type$ClassType*, $Void*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$15, visitClassType, $Object*, $Type$ClassType*, Object$*)},
		{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$15, visitErrorType, $Type*, $Type$ErrorType*, $Void*)},
		{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$15, visitErrorType, $Object*, $Type$ErrorType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$15, visitType, $Type*, $Type*, $Void*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$15, visitType, $Object*, $Type*, Object$*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$15, visitTypeVar, $Type*, $Type$TypeVar*, $Void*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$15, visitTypeVar, $Object*, $Type$TypeVar*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$15", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$15",
		"com.sun.tools.javac.code.Types$UnaryVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/code/Type;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$15);
	});
	return class$;
}

$Class* Types$15::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com