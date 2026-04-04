#include <com/sun/tools/javac/comp/TypeEnter$PermitsPhase.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$HeaderPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef HIERARCHY_PHASE
#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$AbstractHeaderPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase;
using $TypeEnter$HeaderPhase = ::com::sun::tools::javac::comp::TypeEnter$HeaderPhase;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void TypeEnter$PermitsPhase::init$($TypeEnter* this$0) {
	$set(this, this$0, this$0);
	$init($Dependencies$CompletionCause);
	$TypeEnter$AbstractHeaderPhase::init$(this$0, $Dependencies$CompletionCause::HIERARCHY_PHASE, $$new($TypeEnter$HeaderPhase, this$0));
}

void TypeEnter$PermitsPhase::runPhase($Env* env) {
	$useLocalObjectStack();
	$var($JCTree$JCClassDecl, tree, $nc(env)->enclClass);
	bool var$0 = !$nc($nc(tree)->sym)->isAnonymous();
	if (var$0 || tree->sym->isEnum()) {
		$var($Iterator, i$, $$nc($nc(this->this$0->types)->directSupertypes($nc(tree->sym)->type))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, supertype, $cast($Type, i$->next()));
			$init($Kinds$Kind);
			if ($nc($nc(supertype)->tsym)->kind == $Kinds$Kind::TYP) {
				$var($Symbol$ClassSymbol, supClass, $cast($Symbol$ClassSymbol, supertype->tsym));
				$var($Env, supClassEnv, $nc(this->this$0->enter)->getEnv(supClass));
				if ($nc(supClass)->isSealed() && !supClass->isPermittedExplicit && supClassEnv != nullptr && supClassEnv->toplevel == env->toplevel) {
					$set(supClass, permitted, $nc(supClass->permitted)->append(tree->sym));
				}
			}
		}
	}
}

TypeEnter$PermitsPhase::TypeEnter$PermitsPhase() {
}

$Class* TypeEnter$PermitsPhase::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$PermitsPhase, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;)V", nullptr, $PUBLIC, $method(TypeEnter$PermitsPhase, init$, void, $TypeEnter*)},
		{"runPhase", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED, $virtualMethod(TypeEnter$PermitsPhase, runPhase, void, $Env*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.TypeEnter$PermitsPhase", "com.sun.tools.javac.comp.TypeEnter", "PermitsPhase", $PRIVATE | $FINAL},
		{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.tools.javac.comp.TypeEnter$PermitsPhase",
		"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.TypeEnter"
	};
	$loadClass(TypeEnter$PermitsPhase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeEnter$PermitsPhase);
	});
	return class$;
}

$Class* TypeEnter$PermitsPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com