#include <com/sun/tools/javac/util/RichDiagnosticFormatter$1.h>

#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$DefaultSymbolVisitor.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$ClassNameSimplifier.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef CAPTURED
#undef CLASS
#undef ERROR
#undef INTERSECTION
#undef NONE
#undef TYPEVAR

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultSymbolVisitor = ::com::sun::tools::javac::code::Types$DefaultSymbolVisitor;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $RichDiagnosticFormatter = ::com::sun::tools::javac::util::RichDiagnosticFormatter;
using $RichDiagnosticFormatter$ClassNameSimplifier = ::com::sun::tools::javac::util::RichDiagnosticFormatter$ClassNameSimplifier;
using $RichDiagnosticFormatter$WhereClauseKind = ::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _RichDiagnosticFormatter$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(RichDiagnosticFormatter$1, this$0)},
	{}
};

$MethodInfo _RichDiagnosticFormatter$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/RichDiagnosticFormatter;)V", nullptr, 0, $method(RichDiagnosticFormatter$1, init$, void, $RichDiagnosticFormatter*)},
	{"getBounds", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(RichDiagnosticFormatter$1, getBounds, $List*, $Type*)},
	{"visit", "(Lcom/sun/tools/javac/util/List;)Ljava/lang/Void;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/Void;", $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visit, $Void*, $List*)},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visitArrayType, $Void*, $Type$ArrayType*, $Void*)},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter$1, visitArrayType, $Object*, $Type$ArrayType*, Object$*)},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visitCapturedType, $Void*, $Type$CapturedType*, $Void*)},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter$1, visitCapturedType, $Object*, $Type$CapturedType*, Object$*)},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visitClassType, $Void*, $Type$ClassType*, $Void*)},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter$1, visitClassType, $Object*, $Type$ClassType*, Object$*)},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visitErrorType, $Void*, $Type$ErrorType*, $Void*)},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter$1, visitErrorType, $Object*, $Type$ErrorType*, Object$*)},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visitForAll, $Void*, $Type$ForAll*, $Void*)},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter$1, visitForAll, $Object*, $Type$ForAll*, Object$*)},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visitMethodType, $Void*, $Type$MethodType*, $Void*)},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter$1, visitMethodType, $Object*, $Type$MethodType*, Object$*)},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visitType, $Void*, $Type*, $Void*)},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter$1, visitType, $Object*, $Type*, Object$*)},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visitTypeVar, $Void*, $Type$TypeVar*, $Void*)},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter$1, visitTypeVar, $Object*, $Type$TypeVar*, Object$*)},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RichDiagnosticFormatter$1, visitWildcardType, $Void*, $Type$WildcardType*, $Void*)},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RichDiagnosticFormatter$1, visitWildcardType, $Object*, $Type$WildcardType*, Object$*)},
	{}
};

$EnclosingMethodInfo _RichDiagnosticFormatter$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.RichDiagnosticFormatter",
	nullptr,
	nullptr
};

$InnerClassInfo _RichDiagnosticFormatter$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RichDiagnosticFormatter$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.RichDiagnosticFormatter$1",
	"com.sun.tools.javac.code.Types$UnaryVisitor",
	nullptr,
	_RichDiagnosticFormatter$1_FieldInfo_,
	_RichDiagnosticFormatter$1_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Void;>;",
	&_RichDiagnosticFormatter$1_EnclosingMethodInfo_,
	_RichDiagnosticFormatter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.RichDiagnosticFormatter"
};

$Object* allocate$RichDiagnosticFormatter$1($Class* clazz) {
	return $of($alloc(RichDiagnosticFormatter$1));
}

void RichDiagnosticFormatter$1::init$($RichDiagnosticFormatter* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$Void* RichDiagnosticFormatter$1::visit($List* ts) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			visit(t);
		}
	}
	return nullptr;
}

$Void* RichDiagnosticFormatter$1::visitForAll($Type$ForAll* t, $Void* ignored) {
	visit($nc(t)->tvars);
	visit($nc(t)->qtype);
	return nullptr;
}

$Void* RichDiagnosticFormatter$1::visitMethodType($Type$MethodType* t, $Void* ignored) {
	visit($nc(t)->argtypes$);
	visit($nc(t)->restype);
	return nullptr;
}

$Void* RichDiagnosticFormatter$1::visitErrorType($Type$ErrorType* t, $Void* ignored) {
	$var($Type, ot, $nc(t)->getOriginalType());
	if (ot != nullptr) {
		visit(ot);
	}
	return nullptr;
}

$Void* RichDiagnosticFormatter$1::visitArrayType($Type$ArrayType* t, $Void* ignored) {
	visit($nc(t)->elemtype);
	return nullptr;
}

$Void* RichDiagnosticFormatter$1::visitWildcardType($Type$WildcardType* t, $Void* ignored) {
	visit($nc(t)->type);
	return nullptr;
}

$Void* RichDiagnosticFormatter$1::visitType($Type* t, $Void* ignored) {
	return nullptr;
}

$Void* RichDiagnosticFormatter$1::visitCapturedType($Type$CapturedType* t, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	$init($RichDiagnosticFormatter$WhereClauseKind);
	if (this->this$0->indexOf(t, $RichDiagnosticFormatter$WhereClauseKind::CAPTURED) == -1) {
		$var($String, suffix, $nc(t)->lower == $nc(this->this$0->syms)->botType ? ".1"_s : ""_s);
		$var($JCDiagnostic, d, $nc(this->this$0->diags)->fragment($$str({"where.captured"_s, suffix}), $$new($ObjectArray, {
			$of(t),
			$($of($nc(t)->getUpperBound())),
			$of(t->lower),
			$of(t->wildcard)
		})));
		$nc(($cast($Map, $($nc(this->this$0->whereClauses)->get($RichDiagnosticFormatter$WhereClauseKind::CAPTURED)))))->put(t, d);
		visit($nc(t)->wildcard);
		visit($nc(t)->lower);
		visit($($nc(t)->getUpperBound()));
	}
	return nullptr;
}

$Void* RichDiagnosticFormatter$1::visitClassType($Type$ClassType* t, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->isCompound()) {
		$init($RichDiagnosticFormatter$WhereClauseKind);
		if (this->this$0->indexOf(t, $RichDiagnosticFormatter$WhereClauseKind::INTERSECTION) == -1) {
			$var($Type, supertype, $nc(this->this$0->types)->supertype(t));
			$var($List, interfaces, $nc(this->this$0->types)->interfaces(t));
			$var($JCDiagnostic, d, $nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::WhereIntersection(t, $($nc(interfaces)->prepend(supertype))))));
			$nc(($cast($Map, $($nc(this->this$0->whereClauses)->get($RichDiagnosticFormatter$WhereClauseKind::INTERSECTION)))))->put(t, d);
			visit(supertype);
			visit(interfaces);
		}
	} else if ($nc($nc(t->tsym)->name)->isEmpty()) {
		$var($Type$ClassType, norm, $cast($Type$ClassType, $nc(t->tsym)->type));
		if (norm != nullptr) {
			if (norm->interfaces_field != nullptr && $nc(norm->interfaces_field)->nonEmpty()) {
				visit($cast($Type, $nc(norm->interfaces_field)->head));
			} else {
				visit(norm->supertype_field);
			}
		}
	}
	$nc(this->this$0->nameSimplifier)->addUsage($nc(t)->tsym);
	visit($($nc(t)->getTypeArguments()));
	$var($Type, enclosingType, nullptr);
	try {
		$assign(enclosingType, $nc(t)->getEnclosingType());
	} catch ($Symbol$CompletionFailure& cf) {
		return nullptr;
	}
	$init($Type);
	if (!$equals(enclosingType, $Type::noType)) {
		visit($($nc(t)->getEnclosingType()));
	}
	return nullptr;
}

$Void* RichDiagnosticFormatter$1::visitTypeVar($Type$TypeVar* t$renamed, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	$var($Type$TypeVar, t, t$renamed);
	$assign(t, $cast($Type$TypeVar, $nc(t)->stripMetadataIfNeeded()));
	$init($RichDiagnosticFormatter$WhereClauseKind);
	if (this->this$0->indexOf(t, $RichDiagnosticFormatter$WhereClauseKind::TYPEVAR) == -1) {
		$var($Type, bound, t->getUpperBound());
		{
			$var($Type$ErrorType, errorType, nullptr);
			while (true) {
				bool var$0 = $instanceOf($Type$ErrorType, bound);
				if (var$0) {
					$assign(errorType, $cast($Type$ErrorType, bound));
					var$0 = true;
				}
				if (!(var$0)) {
					break;
				}
				{
					$assign(bound, $nc(errorType)->getOriginalType());
				}
			}
		}
		bool var$1 = (bound != nullptr);
		if (var$1) {
			$init($TypeTag);
			bool var$2 = bound->hasTag($TypeTag::CLASS);
			var$1 = (var$2 || bound->hasTag($TypeTag::TYPEVAR));
		}
		$var($List, bounds, var$1 ? getBounds(bound) : $List::nil());
		$nc(this->this$0->nameSimplifier)->addUsage(t->tsym);
		$init($TypeTag);
		bool var$3 = $nc(bounds)->head == nullptr || $nc(($cast($Type, $nc(bounds)->head)))->hasTag($TypeTag::NONE);
		bool boundErroneous = var$3 || $nc(($cast($Type, $nc(bounds)->head)))->hasTag($TypeTag::ERROR);
		if (((int64_t)($nc(t->tsym)->flags() & (uint64_t)(int64_t)4096)) == 0) {
			$var($JCDiagnostic, d, $nc(this->this$0->diags)->fragment($$str({"where.typevar"_s, (boundErroneous ? ".1"_s : ""_s)}), $$new($ObjectArray, {
				$of(t),
				$of(bounds),
				$($of($Kinds::kindName($($nc(t->tsym)->location())))),
				$($of($nc(t->tsym)->location()))
			})));
			$nc(($cast($Map, $($nc(this->this$0->whereClauses)->get($RichDiagnosticFormatter$WhereClauseKind::TYPEVAR)))))->put(t, d);
			$nc(this->this$0->symbolPreprocessor)->visit($($nc(t->tsym)->location()), nullptr);
			visit(bounds);
		} else {
			$Assert::check(!boundErroneous);
			$var($JCDiagnostic, d, $nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::WhereFreshTypevar(t, bounds))));
			$nc(($cast($Map, $($nc(this->this$0->whereClauses)->get($RichDiagnosticFormatter$WhereClauseKind::TYPEVAR)))))->put(t, d);
			visit(bounds);
		}
	}
	return nullptr;
}

$List* RichDiagnosticFormatter$1::getBounds($Type* bound) {
	return $nc(bound)->isCompound() ? $nc(this->this$0->types)->directSupertypes(bound) : $List::of(bound);
}

$Object* RichDiagnosticFormatter$1::visitForAll($Type$ForAll* t, Object$* ignored) {
	return $of(this->visitForAll(t, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$1::visitCapturedType($Type$CapturedType* t, Object$* ignored) {
	return $of(this->visitCapturedType(t, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$1::visitErrorType($Type$ErrorType* t, Object$* ignored) {
	return $of(this->visitErrorType(t, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$1::visitTypeVar($Type$TypeVar* t, Object$* ignored) {
	return $of(this->visitTypeVar(t, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$1::visitMethodType($Type$MethodType* t, Object$* ignored) {
	return $of(this->visitMethodType(t, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$1::visitArrayType($Type$ArrayType* t, Object$* ignored) {
	return $of(this->visitArrayType(t, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$1::visitWildcardType($Type$WildcardType* t, Object$* ignored) {
	return $of(this->visitWildcardType(t, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$1::visitClassType($Type$ClassType* t, Object$* ignored) {
	return $of(this->visitClassType(t, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$1::visitType($Type* t, Object$* ignored) {
	return $of(this->visitType(t, $cast($Void, ignored)));
}

RichDiagnosticFormatter$1::RichDiagnosticFormatter$1() {
}

$Class* RichDiagnosticFormatter$1::load$($String* name, bool initialize) {
	$loadClass(RichDiagnosticFormatter$1, name, initialize, &_RichDiagnosticFormatter$1_ClassInfo_, allocate$RichDiagnosticFormatter$1);
	return class$;
}

$Class* RichDiagnosticFormatter$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com