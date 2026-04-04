#include <com/sun/tools/javac/code/Types$Rewriter.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Iterator.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef B
#undef EXTENDS
#undef WILDCARD

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$Rewriter::init$($Types* this$0, bool high, bool rewriteTypeVars) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
	this->high = high;
	this->rewriteTypeVars = rewriteTypeVars;
}

$Type* Types$Rewriter::visitClassType($Type$ClassType* t, $Void* s) {
	$useLocalObjectStack();
	$var($ListBuffer, rewritten, $new($ListBuffer));
	bool changed = false;
	{
		$var($Iterator, i$, $$nc($nc(t)->allparams())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, arg, $cast($Type, i$->next()));
			{
				$var($Type, bound, $cast($Type, visit(arg)));
				if (arg != bound) {
					changed = true;
				}
				rewritten->append(bound);
			}
		}
	}
	if (changed) {
		$var($Type, var$0, $nc(t->tsym)->type);
		$var($List, var$1, $nc(t->tsym->type)->allparams());
		return this->this$0->subst(var$0, var$1, $(rewritten->toList()));
	} else {
		return t;
	}
}

$Type* Types$Rewriter::visitType($Type* t, $Void* s) {
	return t;
}

$Type* Types$Rewriter::visitCapturedType($Type$CapturedType* t, $Void* s) {
	$useLocalObjectStack();
	$var($Type, w_bound, $nc($nc(t)->wildcard)->type);
	$var($Type, bound, $nc(w_bound)->contains(t) ? this->this$0->erasure(w_bound) : $cast($Type, visit(w_bound)));
	return rewriteAsWildcardType($$cast($Type, visit(bound)), $nc(t->wildcard)->bound, $nc(t->wildcard)->kind);
}

$Type* Types$Rewriter::visitTypeVar($Type$TypeVar* t, $Void* s) {
	$useLocalObjectStack();
	if (this->rewriteTypeVars) {
		$var($Type, bound, $$nc($nc(t)->getUpperBound())->contains(t) ? this->this$0->erasure($(t->getUpperBound())) : $cast($Type, visit($(t->getUpperBound()))));
		$init($BoundKind);
		return rewriteAsWildcardType(bound, t, $BoundKind::EXTENDS);
	} else {
		return t;
	}
}

$Type* Types$Rewriter::visitWildcardType($Type$WildcardType* t, $Void* s) {
	$var($Type, bound2, $cast($Type, visit($nc(t)->type)));
	return t->type == bound2 ? $cast($Type, t) : rewriteAsWildcardType(bound2, t->bound, t->kind);
}

$Type* Types$Rewriter::rewriteAsWildcardType($Type* bound, $Type$TypeVar* formal, $BoundKind* bk) {
	$useLocalObjectStack();
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->get($nc((bk))->ordinal())) {
	case 1:
		return this->high ? this->this$0->makeExtendsWildcard($(B(bound)), formal) : this->this$0->makeExtendsWildcard($nc(this->this$0->syms)->objectType, formal);
	case 2:
		return this->high ? this->this$0->makeSuperWildcard($nc(this->this$0->syms)->botType, formal) : this->this$0->makeSuperWildcard($(B(bound)), formal);
	case 3:
		return this->this$0->makeExtendsWildcard($nc(this->this$0->syms)->objectType, formal);
	default:
		$Assert::error($$str({"Invalid bound kind "_s, bk}));
		return nullptr;
	}
}

$Type* Types$Rewriter::B($Type* t$renamed) {
	$useLocalObjectStack();
	$var($Type, t, t$renamed);
	$init($TypeTag);
	while ($nc(t)->hasTag($TypeTag::WILDCARD)) {
		$var($Type$WildcardType, w, $cast($Type$WildcardType, t));
		$assign(t, this->high ? $cast($Type, w->getExtendsBound()) : $cast($Type, w->getSuperBound()));
		if (t == nullptr) {
			$assign(t, this->high ? $nc(this->this$0->syms)->objectType : $nc(this->this$0->syms)->botType);
		}
	}
	return t;
}

$Object* Types$Rewriter::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of(this->visitCapturedType(t, $cast($Void, s)));
}

$Object* Types$Rewriter::visitTypeVar($Type$TypeVar* t, Object$* s) {
	return $of(this->visitTypeVar(t, $cast($Void, s)));
}

$Object* Types$Rewriter::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Void, s)));
}

$Object* Types$Rewriter::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($Void, s)));
}

$Object* Types$Rewriter::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Void, s)));
}

Types$Rewriter::Types$Rewriter() {
}

$Class* Types$Rewriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$Rewriter, this$0)},
		{"high", "Z", nullptr, 0, $field(Types$Rewriter, high)},
		{"rewriteTypeVars", "Z", nullptr, 0, $field(Types$Rewriter, rewriteTypeVars)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;ZZ)V", nullptr, 0, $method(Types$Rewriter, init$, void, $Types*, bool, bool)},
		{"B", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Types$Rewriter, B, $Type*, $Type*)},
		{"rewriteAsWildcardType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/BoundKind;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(Types$Rewriter, rewriteAsWildcardType, $Type*, $Type*, $Type$TypeVar*, $BoundKind*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$Rewriter, visitCapturedType, $Type*, $Type$CapturedType*, $Void*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$Rewriter, visitCapturedType, $Object*, $Type$CapturedType*, Object$*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$Rewriter, visitClassType, $Type*, $Type$ClassType*, $Void*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$Rewriter, visitClassType, $Object*, $Type$ClassType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$Rewriter, visitType, $Type*, $Type*, $Void*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$Rewriter, visitType, $Object*, $Type*, Object$*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$Rewriter, visitTypeVar, $Type*, $Type$TypeVar*, $Void*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$Rewriter, visitTypeVar, $Object*, $Type$TypeVar*, Object$*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$Rewriter, visitWildcardType, $Type*, $Type$WildcardType*, $Void*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$Rewriter, visitWildcardType, $Object*, $Type$WildcardType*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$Rewriter", "com.sun.tools.javac.code.Types", "Rewriter", 0},
		{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$Rewriter",
		"com.sun.tools.javac.code.Types$UnaryVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/code/Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$Rewriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$Rewriter);
	});
	return class$;
}

$Class* Types$Rewriter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com