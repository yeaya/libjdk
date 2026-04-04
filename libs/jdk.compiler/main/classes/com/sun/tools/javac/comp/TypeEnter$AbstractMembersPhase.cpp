#include <com/sun/tools/javac/comp/TypeEnter$AbstractMembersPhase.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef CLASS
#undef FIRSTPOS

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $List = ::com::sun::tools::javac::util::List;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void TypeEnter$AbstractMembersPhase::init$($TypeEnter* this$0, $Dependencies$CompletionCause* completionCause, $TypeEnter$Phase* next) {
	$set(this, this$0, this$0);
	$TypeEnter$Phase::init$(this$0, completionCause, next);
	$set(this, todo, $List::nil());
}

void TypeEnter$AbstractMembersPhase::doCompleteEnvs($List* envs) {
	$useLocalObjectStack();
	$set(this, todo, $nc(this->todo)->prependList(envs));
	if (this->completing) {
		return;
	}
	bool prevCompleting = this->completing;
	this->completing = true;
	$var($Throwable, var$0, nullptr);
	try {
		while ($nc(this->todo)->nonEmpty()) {
			$var($Env, head, $cast($Env, this->todo->head));
			$set(this, todo, this->todo->tail);
			$TypeEnter$Phase::doCompleteEnvs($($List::of(head)));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->completing = prevCompleting;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TypeEnter$AbstractMembersPhase::enterThisAndSuper($Symbol$ClassSymbol* sym, $Env* env) {
	$useLocalObjectStack();
	$var($Type$ClassType, ct, $cast($Type$ClassType, $nc(sym)->type));
	$var($Symbol$VarSymbol, thisSym, $new($Symbol$VarSymbol, 0x10 | 0x00040000, $nc(this->this$0->names)->_this, sym->type, sym));
	thisSym->pos = $Position::FIRSTPOS;
	$nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->enter(thisSym);
	$init($TypeTag);
	if ((sym->flags_field & 0x0200) == 0 && $nc($nc(ct)->supertype_field)->hasTag($TypeTag::CLASS)) {
		$var($Symbol$VarSymbol, superSym, $new($Symbol$VarSymbol, 0x10 | 0x00040000, this->this$0->names->_super, ct->supertype_field, sym));
		superSym->pos = $Position::FIRSTPOS;
		$nc($nc(($cast($AttrContext, env->info)))->scope)->enter(superSym);
	}
}

TypeEnter$AbstractMembersPhase::TypeEnter$AbstractMembersPhase() {
}

$Class* TypeEnter$AbstractMembersPhase::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractMembersPhase, this$0)},
		{"completing", "Z", nullptr, $PRIVATE, $field(TypeEnter$AbstractMembersPhase, completing)},
		{"todo", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PRIVATE, $field(TypeEnter$AbstractMembersPhase, todo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;Lcom/sun/tools/javac/comp/TypeEnter$Phase;)V", nullptr, $PUBLIC, $method(TypeEnter$AbstractMembersPhase, init$, void, $TypeEnter*, $Dependencies$CompletionCause*, $TypeEnter$Phase*)},
		{"doCompleteEnvs", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;)V", $PROTECTED, $virtualMethod(TypeEnter$AbstractMembersPhase, doCompleteEnvs, void, $List*)},
		{"enterThisAndSuper", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $virtualMethod(TypeEnter$AbstractMembersPhase, enterThisAndSuper, void, $Symbol$ClassSymbol*, $Env*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractMembersPhase", $PRIVATE | $ABSTRACT},
		{"com.sun.tools.javac.comp.TypeEnter$Phase", "com.sun.tools.javac.comp.TypeEnter", "Phase", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase",
		"com.sun.tools.javac.comp.TypeEnter$Phase",
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
	$loadClass(TypeEnter$AbstractMembersPhase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeEnter$AbstractMembersPhase);
	});
	return class$;
}

$Class* TypeEnter$AbstractMembersPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com