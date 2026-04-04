#include <com/sun/tools/javac/comp/Flow$FlowAnalyzer.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$FlowAnalyzer$ThrownPendingExit.h>
#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/AssertionError.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef METHODDEF
#undef MTH
#undef RETURN
#undef SWITCH_EXPRESSION
#undef VAR
#undef VARDEF

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$BaseAnalyzer = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer;
using $Flow$BaseAnalyzer$PendingExit = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit;
using $Flow$FlowAnalyzer$ThrownPendingExit = ::com::sun::tools::javac::comp::Flow$FlowAnalyzer$ThrownPendingExit;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Flow$FlowAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$BaseAnalyzer::init$();
}

void Flow$FlowAnalyzer::markDead() {
}

void Flow$FlowAnalyzer::errorUncaught() {
	$useLocalObjectStack();
	$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, $nc(this->pendingExits)->next()));
	for (; exit != nullptr; $assign(exit, $cast($Flow$BaseAnalyzer$PendingExit, $nc(this->pendingExits)->next()))) {
		{
			$var($Flow$FlowAnalyzer$ThrownPendingExit, thrownExit, nullptr);
			bool var$0 = $instanceOf($Flow$FlowAnalyzer$ThrownPendingExit, exit);
			if (var$0) {
				$assign(thrownExit, $cast($Flow$FlowAnalyzer$ThrownPendingExit, exit));
				var$0 = true;
			}
			if (var$0) {
				if (this->classDef != nullptr && this->classDef->pos$ == $nc(exit->tree)->pos$) {
					$var($JCDiagnostic$DiagnosticPosition, var$1, exit->tree->pos());
					$nc(this->this$0->log)->error(var$1, $($CompilerProperties$Errors::UnreportedExceptionDefaultConstructor($nc(thrownExit)->thrown)));
				} else {
					$init($JCTree$Tag);
					bool var$2 = $nc(exit->tree)->hasTag($JCTree$Tag::VARDEF);
					if (var$2 && $nc($cast($JCTree$JCVariableDecl, exit->tree)->sym)->isResourceVariable()) {
						$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(exit->tree)->pos());
						$nc(this->this$0->log)->error(var$3, $($CompilerProperties$Errors::UnreportedExceptionImplicitClose($nc(thrownExit)->thrown, $nc($cast($JCTree$JCVariableDecl, exit->tree)->sym)->name)));
					} else {
						$var($JCDiagnostic$DiagnosticPosition, var$4, $nc(exit->tree)->pos());
						$nc(this->this$0->log)->error(var$4, $($CompilerProperties$Errors::UnreportedExceptionNeedToCatchOrThrow($nc(thrownExit)->thrown)));
					}
				}
			} else {
				$Assert::check($nc(this->this$0->log)->hasErrorOn($($nc(exit->tree)->pos())));
			}
		}
	}
}

void Flow$FlowAnalyzer::markThrown($JCTree* tree, $Type* exc) {
	$useLocalObjectStack();
	if (!$nc(this->this$0->chk)->isUnchecked($($nc(tree)->pos()), exc)) {
		if (!this->this$0->chk->isHandled(exc, this->caught)) {
			$nc(this->pendingExits)->append($$new($Flow$FlowAnalyzer$ThrownPendingExit, this, tree, exc));
		}
		$set(this, thrown, this->this$0->chk->incl(exc, this->thrown));
	}
}

void Flow$FlowAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalObjectStack();
	if ($nc(tree)->sym == nullptr) {
		return;
	}
	$var($JCTree$JCClassDecl, classDefPrev, this->classDef);
	$var($List, thrownPrev, this->thrown);
	$var($List, caughtPrev, this->caught);
	$var($ListBuffer, pendingExitsPrev, this->pendingExits);
	$var($Lint, lintPrev, this->this$0->lint);
	bool anonymousClass = tree->name == $nc(this->this$0->names)->empty;
	$set(this, pendingExits, $new($ListBuffer));
	if (!anonymousClass) {
		$set(this, caught, $List::nil());
	}
	$set(this, classDef, tree);
	$set(this, thrown, $List::nil());
	$set(this->this$0, lint, $nc(this->this$0->lint)->augment(tree->sym));
	$var($Throwable, var$0, nullptr);
	try {
		{
			$var($List, l, tree->defs);
			for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
				$init($JCTree$Tag);
				bool var$1 = !$nc($cast($JCTree, l->head))->hasTag($JCTree$Tag::METHODDEF);
				if (var$1 && ($TreeInfo::flags($cast($JCTree, l->head)) & 8) != 0) {
					scan($cast($JCTree, l->head));
					errorUncaught();
				}
			}
		}
		if (!anonymousClass) {
			bool firstConstructor = true;
			{
				$var($List, l, tree->defs);
				for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
					if ($TreeInfo::isInitialConstructor($cast($JCTree, l->head))) {
						$var($List, mthrown, $nc($nc($nc($cast($JCTree$JCMethodDecl, l->head))->sym)->type)->getThrownTypes());
						if (firstConstructor) {
							$set(this, caught, mthrown);
							firstConstructor = false;
						} else {
							$set(this, caught, $nc(this->this$0->chk)->intersect(mthrown, this->caught));
						}
					}
				}
			}
		}
		{
			$var($List, l, tree->defs);
			for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
				$init($JCTree$Tag);
				bool var$2 = !$nc($cast($JCTree, l->head))->hasTag($JCTree$Tag::METHODDEF);
				if (var$2 && ($TreeInfo::flags($cast($JCTree, l->head)) & 8) == 0) {
					scan($cast($JCTree, l->head));
					errorUncaught();
				}
			}
		}
		if (anonymousClass) {
			{
				$var($List, l, tree->defs);
				for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
					if ($TreeInfo::isConstructor($cast($JCTree, l->head))) {
						$var($JCTree$JCMethodDecl, mdef, $cast($JCTree$JCMethodDecl, l->head));
						scan(mdef);
						$set($nc(mdef), thrown, $nc(this->this$0->make)->Types(this->thrown));
						$set($nc(mdef->sym), type, $nc(this->this$0->types)->createMethodTypeWithThrown($nc(mdef->sym)->type, this->thrown));
					}
				}
			}
			$assign(thrownPrev, $nc(this->this$0->chk)->union$(this->thrown, thrownPrev));
		}
		{
			$var($List, l, tree->defs);
			for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
				if (anonymousClass && $TreeInfo::isConstructor($cast($JCTree, l->head))) {
					continue;
				}
				$init($JCTree$Tag);
				if ($nc($cast($JCTree, l->head))->hasTag($JCTree$Tag::METHODDEF)) {
					scan($cast($JCTree, l->head));
					errorUncaught();
				}
			}
		}
		$set(this, thrown, thrownPrev);
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} /*finally*/ {
		$set(this, pendingExits, pendingExitsPrev);
		$set(this, caught, caughtPrev);
		$set(this, classDef, classDefPrev);
		$set(this->this$0, lint, lintPrev);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Flow$FlowAnalyzer::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalObjectStack();
	if ($nc(tree)->body == nullptr) {
		return;
	}
	$var($List, caughtPrev, this->caught);
	$var($List, mthrown, $nc($nc(tree->sym)->type)->getThrownTypes());
	$var($Lint, lintPrev, this->this$0->lint);
	$set(this->this$0, lint, $nc(this->this$0->lint)->augment(tree->sym));
	$Assert::check($nc(this->pendingExits)->isEmpty());
	$var($Throwable, var$0, nullptr);
	try {
		{
			$var($List, l, tree->params);
			for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
				$var($JCTree$JCVariableDecl, def, $cast($JCTree$JCVariableDecl, l->head));
				scan(def);
			}
		}
		if ($TreeInfo::isInitialConstructor(tree)) {
			$set(this, caught, $nc(this->this$0->chk)->union$(this->caught, mthrown));
		} else if (($nc(tree->sym)->flags() & (0x00100000 | 8)) != 0x00100000) {
			$set(this, caught, mthrown);
		}
		scan(tree->body);
		$var($List, exits, $nc(this->pendingExits)->toList());
		$set(this, pendingExits, $new($ListBuffer));
		while ($nc(exits)->nonEmpty()) {
			$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, exits->head));
			$assign(exits, exits->tail);
			if (!($instanceOf($Flow$FlowAnalyzer$ThrownPendingExit, exit))) {
				$init($JCTree$Tag);
				bool var$1 = $nc($nc(exit)->tree)->hasTag($JCTree$Tag::RETURN);
				$Assert::check(var$1 || $nc(this->this$0->log)->hasErrorOn($(exit->tree->pos())));
			} else {
				$nc(this->pendingExits)->append(exit);
			}
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$set(this, caught, caughtPrev);
		$set(this->this$0, lint, lintPrev);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Flow$FlowAnalyzer::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalObjectStack();
	if ($nc(tree)->init != nullptr) {
		$var($Lint, lintPrev, this->this$0->lint);
		$set(this->this$0, lint, $nc(this->this$0->lint)->augment(tree->sym));
		$var($Throwable, var$0, nullptr);
		try {
			scan(tree->init);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this->this$0, lint, lintPrev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$FlowAnalyzer::visitBlock($JCTree$JCBlock* tree) {
	scan($nc(tree)->stats);
}

void Flow$FlowAnalyzer::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan($nc(tree)->body);
	resolveContinues(tree);
	scan(tree->cond);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan($nc(tree)->cond);
	scan(tree->body);
	resolveContinues(tree);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitForLoop($JCTree$JCForLoop* tree) {
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	scan($nc(tree)->init);
	$set(this, pendingExits, $new($ListBuffer));
	if (tree->cond != nullptr) {
		scan(tree->cond);
	}
	scan(tree->body);
	resolveContinues(tree);
	scan(tree->step);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	visitVarDef($nc(tree)->var);
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	scan(tree->expr);
	$set(this, pendingExits, $new($ListBuffer));
	scan(tree->body);
	resolveContinues(tree);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan($nc(tree)->body);
	resolveBreaks(tree, prevPendingExits);
}

void Flow$FlowAnalyzer::visitSwitch($JCTree$JCSwitch* tree) {
	handleSwitch(tree, $nc(tree)->selector, $nc(tree)->cases);
}

void Flow$FlowAnalyzer::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	handleSwitch(tree, $nc(tree)->selector, $nc(tree)->cases);
}

void Flow$FlowAnalyzer::handleSwitch($JCTree* tree, $JCTree$JCExpression* selector, $List* cases) {
	$useLocalObjectStack();
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	scan(selector);
	{
		$var($List, l, cases);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, l->head));
			scan($nc(c)->labels);
			scan(c->stats);
		}
	}
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::SWITCH_EXPRESSION)) {
		resolveYields(tree, prevPendingExits);
	} else {
		resolveBreaks(tree, prevPendingExits);
	}
}

void Flow$FlowAnalyzer::visitTry($JCTree$JCTry* tree) {
	$useLocalObjectStack();
	$var($List, caughtPrev, this->caught);
	$var($List, thrownPrev, this->thrown);
	$set(this, thrown, $List::nil());
	{
		$var($List, l, $nc(tree)->catchers);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$var($List, subClauses, $TreeInfo::isMultiCatch($cast($JCTree$JCCatch, l->head)) ? $nc($cast($JCTree$JCTypeUnion, $nc($nc(($cast($JCTree$JCCatch, l->head)))->param)->vartype))->alternatives : $List::of($nc($nc(($cast($JCTree$JCCatch, l->head)))->param)->vartype));
			{
				$var($Iterator, i$, $nc(subClauses)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCExpression, ct, $cast($JCTree$JCExpression, i$->next()));
					{
						$set(this, caught, $nc(this->this$0->chk)->incl($nc(ct)->type, this->caught));
					}
				}
			}
		}
	}
	$var($ListBuffer, prevPendingExits, this->pendingExits);
	$set(this, pendingExits, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(tree->resources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, resource, $cast($JCTree, i$->next()));
			{
				$var($JCTree$JCExpression, expression, nullptr);
				{
					$var($JCTree$JCVariableDecl, variableDecl, nullptr);
					bool var$0 = $instanceOf($JCTree$JCVariableDecl, resource);
					if (var$0) {
						$assign(variableDecl, $cast($JCTree$JCVariableDecl, resource));
						var$0 = true;
					}
					if (var$0) {
						visitVarDef(variableDecl);
					} else {
						bool var$1 = $instanceOf($JCTree$JCExpression, resource);
						if (var$1) {
							$assign(expression, $cast($JCTree$JCExpression, resource));
							var$1 = true;
						}
						if (var$1) {
							scan(expression);
						} else {
							$throwNew($AssertionError, tree);
						}
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(tree->resources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, resource, $cast($JCTree, i$->next()));
			{
				$var($List, closeableSupertypes, $nc($nc(resource)->type)->isCompound() ? $$nc($nc(this->this$0->types)->interfaces(resource->type))->prepend($($nc(this->this$0->types)->supertype(resource->type))) : $List::of(resource->type));
				{
					$var($Iterator, i$, $nc(closeableSupertypes)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, sup, $cast($Type, i$->next()));
						if ($nc(this->this$0->types)->asSuper(sup, $nc($nc(this->this$0->syms)->autoCloseableType)->tsym) != nullptr) {
							$var($Env, var$2, this->this$0->attrEnv);
							$var($Type, var$3, this->this$0->types->skipTypeVars(sup, false));
							$var($Name, var$4, $nc(this->this$0->names)->close);
							$var($List, var$5, $List::nil());
							$var($Symbol, closeMethod, $nc(this->this$0->rs)->resolveQualifiedMethod(tree, var$2, var$3, var$4, var$5, $($List::nil())));
							$var($Type, mt, this->this$0->types->memberType(resource->type, closeMethod));
							$init($Kinds$Kind);
							if ($nc(closeMethod)->kind == $Kinds$Kind::MTH) {
								$var($Iterator, i$, $$nc($nc(mt)->getThrownTypes())->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Type, t, $cast($Type, i$->next()));
									{
										markThrown(resource, t);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	scan(tree->body);
	$var($List, thrownInTry, $nc(this->this$0->chk)->union$(this->thrown, $($List::of($nc(this->this$0->syms)->runtimeExceptionType, $nc(this->this$0->syms)->errorType))));
	$set(this, thrown, thrownPrev);
	$set(this, caught, caughtPrev);
	$var($List, caughtInTry, $List::nil());
	{
		$var($List, l, tree->catchers);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$var($JCTree$JCVariableDecl, param, $nc(($cast($JCTree$JCCatch, l->head)))->param);
			$var($List, subClauses, $TreeInfo::isMultiCatch($cast($JCTree$JCCatch, l->head)) ? $nc($cast($JCTree$JCTypeUnion, $nc(($cast($JCTree$JCCatch, l->head))->param)->vartype))->alternatives : $List::of($nc(($cast($JCTree$JCCatch, l->head))->param)->vartype));
			$var($List, ctypes, $List::nil());
			$var($List, rethrownTypes, this->this$0->chk->diff(thrownInTry, caughtInTry));
			{
				$var($Iterator, i$, $nc(subClauses)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCExpression, ct, $cast($JCTree$JCExpression, i$->next()));
					{
						$var($Type, exc, $nc(ct)->type);
						if (exc != this->this$0->syms->unknownType) {
							$assign(ctypes, $nc(ctypes)->append(exc));
							if ($nc(this->this$0->types)->isSameType(exc, this->this$0->syms->objectType)) {
								continue;
							}
							$var($JCDiagnostic$DiagnosticPosition, pos, subClauses->size() > 1 ? ct->pos() : $nc($cast($JCTree$JCCatch, l->head))->pos());
							checkCaughtType(pos, exc, thrownInTry, caughtInTry);
							$assign(caughtInTry, this->this$0->chk->incl(exc, caughtInTry));
						}
					}
				}
			}
			scan(param);
			$nc(this->preciseRethrowTypes)->put($nc(param)->sym, $(this->this$0->chk->intersect(ctypes, rethrownTypes)));
			scan($nc(($cast($JCTree$JCCatch, l->head)))->body);
			$nc(this->preciseRethrowTypes)->remove(param->sym);
		}
	}
	if (tree->finalizer != nullptr) {
		$var($List, savedThrown, this->thrown);
		$set(this, thrown, $List::nil());
		$var($ListBuffer, exits, this->pendingExits);
		$set(this, pendingExits, prevPendingExits);
		scan(tree->finalizer);
		if (!tree->finallyCanCompleteNormally) {
			$set(this, thrown, this->this$0->chk->union$(this->thrown, thrownPrev));
		} else {
			$set(this, thrown, this->this$0->chk->union$(this->thrown, $(this->this$0->chk->diff(thrownInTry, caughtInTry))));
			$set(this, thrown, this->this$0->chk->union$(this->thrown, savedThrown));
			while ($nc(exits)->nonEmpty()) {
				$nc(this->pendingExits)->append($$cast($Flow$BaseAnalyzer$PendingExit, exits->next()));
			}
		}
	} else {
		$set(this, thrown, this->this$0->chk->union$(this->thrown, $(this->this$0->chk->diff(thrownInTry, caughtInTry))));
		$var($ListBuffer, exits, this->pendingExits);
		$set(this, pendingExits, prevPendingExits);
		while ($nc(exits)->nonEmpty()) {
			$nc(this->pendingExits)->append($$cast($Flow$BaseAnalyzer$PendingExit, exits->next()));
		}
	}
}

void Flow$FlowAnalyzer::visitIf($JCTree$JCIf* tree) {
	scan($nc(tree)->cond);
	scan(tree->thenpart);
	if (tree->elsepart != nullptr) {
		scan(tree->elsepart);
	}
}

void Flow$FlowAnalyzer::checkCaughtType($JCDiagnostic$DiagnosticPosition* pos, $Type* exc, $List* thrownInTry, $List* caughtInTry) {
	$useLocalObjectStack();
	if ($nc(this->this$0->chk)->subset(exc, caughtInTry)) {
		$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::ExceptAlreadyCaught(exc)));
	} else {
		bool var$1 = !this->this$0->chk->isUnchecked(pos, exc);
		bool var$0 = var$1 && !isExceptionOrThrowable(exc);
		if (var$0 && !this->this$0->chk->intersects(exc, thrownInTry)) {
			$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::ExceptNeverThrownInTry(exc)));
		} else {
			$var($List, catchableThrownTypes, this->this$0->chk->intersect($($List::of(exc)), thrownInTry));
			bool var$2 = $$nc(this->this$0->chk->diff(catchableThrownTypes, caughtInTry))->isEmpty();
			if (var$2 && !isExceptionOrThrowable(exc)) {
				$var($JCDiagnostic$Warning, key, $nc(catchableThrownTypes)->length() == 1 ? $CompilerProperties$Warnings::UnreachableCatch(catchableThrownTypes) : $CompilerProperties$Warnings::UnreachableCatch1(catchableThrownTypes));
				$nc(this->this$0->log)->warning(pos, key);
			}
		}
	}
}

bool Flow$FlowAnalyzer::isExceptionOrThrowable($Type* exc) {
	return $nc(exc)->tsym == $nc($nc(this->this$0->syms)->throwableType)->tsym || exc->tsym == $nc(this->this$0->syms->exceptionType)->tsym;
}

void Flow$FlowAnalyzer::visitBreak($JCTree$JCBreak* tree) {
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$FlowAnalyzer::visitYield($JCTree$JCYield* tree) {
	scan($nc(tree)->value);
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$FlowAnalyzer::visitContinue($JCTree$JCContinue* tree) {
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$FlowAnalyzer::visitReturn($JCTree$JCReturn* tree) {
	scan($nc(tree)->expr);
	recordExit($$new($Flow$BaseAnalyzer$PendingExit, tree));
}

void Flow$FlowAnalyzer::visitThrow($JCTree$JCThrow* tree) {
	$useLocalObjectStack();
	scan($nc(tree)->expr);
	$var($Symbol, sym, $TreeInfo::symbol(tree->expr));
	$init($Kinds$Kind);
	bool var$0 = sym != nullptr && sym->kind == $Kinds$Kind::VAR && (sym->flags() & (0x10 | (int64_t)0x0000020000000000)) != 0;
	if (var$0 && $nc(this->preciseRethrowTypes)->get(sym) != nullptr) {
		$var($Iterator, i$, $$sure($List, $nc(this->preciseRethrowTypes)->get(sym))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				markThrown(tree, t);
			}
		}
	} else {
		markThrown(tree, $nc(tree->expr)->type);
	}
	markDead();
}

void Flow$FlowAnalyzer::visitApply($JCTree$JCMethodInvocation* tree) {
	scan($nc(tree)->meth);
	scan(tree->args);
	{
		$var($List, l, $nc($nc(tree->meth)->type)->getThrownTypes());
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			markThrown(tree, $cast($Type, l->head));
		}
	}
}

void Flow$FlowAnalyzer::visitNewClass($JCTree$JCNewClass* tree) {
	$useLocalObjectStack();
	scan($nc(tree)->encl);
	scan(tree->args);
	{
		$var($List, l, $nc(tree->constructorType)->getThrownTypes());
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			markThrown(tree, $cast($Type, l->head));
		}
	}
	$var($List, caughtPrev, this->caught);
	$var($Throwable, var$0, nullptr);
	try {
		if (tree->def != nullptr) {
			$var($List, l, $nc($nc(tree->constructor)->type)->getThrownTypes());
			for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
				$set(this, caught, $nc(this->this$0->chk)->incl($cast($Type, l->head), this->caught));
			}
		}
		scan(tree->def);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$set(this, caught, caughtPrev);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Flow$FlowAnalyzer::visitLambda($JCTree$JCLambda* tree) {
	$useLocalObjectStack();
	if ($nc(tree)->type != nullptr && tree->type->isErroneous()) {
		return;
	}
	$var($List, prevCaught, this->caught);
	$var($List, prevThrown, this->thrown);
	$var($ListBuffer, prevPending, this->pendingExits);
	$var($Throwable, var$0, nullptr);
	try {
		$set(this, pendingExits, $new($ListBuffer));
		$set(this, caught, $$nc(tree->getDescriptorType(this->this$0->types))->getThrownTypes());
		$set(this, thrown, $List::nil());
		scan(tree->body);
		$var($List, exits, $nc(this->pendingExits)->toList());
		$set(this, pendingExits, $new($ListBuffer));
		while ($nc(exits)->nonEmpty()) {
			$var($Flow$BaseAnalyzer$PendingExit, exit, $cast($Flow$BaseAnalyzer$PendingExit, exits->head));
			$assign(exits, exits->tail);
			if (!($instanceOf($Flow$FlowAnalyzer$ThrownPendingExit, exit))) {
				$init($JCTree$Tag);
				bool var$1 = $nc($nc(exit)->tree)->hasTag($JCTree$Tag::RETURN);
				$Assert::check(var$1 || $nc(this->this$0->log)->hasErrorOn($(exit->tree->pos())));
			} else {
				$nc(this->pendingExits)->append(exit);
			}
		}
		errorUncaught();
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$set(this, pendingExits, prevPending);
		$set(this, caught, prevCaught);
		$set(this, thrown, prevThrown);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Flow$FlowAnalyzer::visitModuleDef($JCTree$JCModuleDecl* tree) {
}

void Flow$FlowAnalyzer::analyzeTree($Env* env, $TreeMaker* make) {
	analyzeTree(env, $nc(env)->tree, make);
}

void Flow$FlowAnalyzer::analyzeTree($Env* env, $JCTree* tree, $TreeMaker* make) {
	$var($Throwable, var$0, nullptr);
	try {
		$set(this->this$0, attrEnv, env);
		$set(this->this$0, make, make);
		$set(this, pendingExits, $new($ListBuffer));
		$set(this, preciseRethrowTypes, $new($HashMap));
		$set(this, thrown, $set(this, caught, nullptr));
		$set(this, classDef, nullptr);
		scan(tree);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$set(this, pendingExits, nullptr);
		$set(this->this$0, make, nullptr);
		$set(this, thrown, $set(this, caught, nullptr));
		$set(this, classDef, nullptr);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

Flow$FlowAnalyzer::Flow$FlowAnalyzer() {
}

$Class* Flow$FlowAnalyzer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$FlowAnalyzer, this$0)},
		{"preciseRethrowTypes", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", 0, $field(Flow$FlowAnalyzer, preciseRethrowTypes)},
		{"classDef", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, 0, $field(Flow$FlowAnalyzer, classDef)},
		{"thrown", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Flow$FlowAnalyzer, thrown)},
		{"caught", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Flow$FlowAnalyzer, caught)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, 0, $method(Flow$FlowAnalyzer, init$, void, $Flow*)},
		{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, analyzeTree, void, $Env*, $TreeMaker*)},
		{"analyzeTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)V", $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, analyzeTree, void, $Env*, $JCTree*, $TreeMaker*)},
		{"checkCaughtType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", 0, $virtualMethod(Flow$FlowAnalyzer, checkCaughtType, void, $JCDiagnostic$DiagnosticPosition*, $Type*, $List*, $List*)},
		{"errorUncaught", "()V", nullptr, 0, $virtualMethod(Flow$FlowAnalyzer, errorUncaught, void)},
		{"handleSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)V", $PRIVATE, $method(Flow$FlowAnalyzer, handleSwitch, void, $JCTree*, $JCTree$JCExpression*, $List*)},
		{"isExceptionOrThrowable", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(Flow$FlowAnalyzer, isExceptionOrThrowable, bool, $Type*)},
		{"markDead", "()V", nullptr, 0, $virtualMethod(Flow$FlowAnalyzer, markDead, void)},
		{"markThrown", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Flow$FlowAnalyzer, markThrown, void, $JCTree*, $Type*)},
		{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitApply, void, $JCTree$JCMethodInvocation*)},
		{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitBlock, void, $JCTree$JCBlock*)},
		{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitBreak, void, $JCTree$JCBreak*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitContinue, void, $JCTree$JCContinue*)},
		{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitDoLoop, void, $JCTree$JCDoWhileLoop*)},
		{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitForLoop, void, $JCTree$JCForLoop*)},
		{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitForeachLoop, void, $JCTree$JCEnhancedForLoop*)},
		{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitIf, void, $JCTree$JCIf*)},
		{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitLabelled, void, $JCTree$JCLabeledStatement*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitLambda, void, $JCTree$JCLambda*)},
		{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitMethodDef, void, $JCTree$JCMethodDecl*)},
		{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitModuleDef, void, $JCTree$JCModuleDecl*)},
		{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitNewClass, void, $JCTree$JCNewClass*)},
		{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitReturn, void, $JCTree$JCReturn*)},
		{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitSwitch, void, $JCTree$JCSwitch*)},
		{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitSwitchExpression, void, $JCTree$JCSwitchExpression*)},
		{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitThrow, void, $JCTree$JCThrow*)},
		{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitTry, void, $JCTree$JCTry*)},
		{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitVarDef, void, $JCTree$JCVariableDecl*)},
		{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitWhileLoop, void, $JCTree$JCWhileLoop*)},
		{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC, $virtualMethod(Flow$FlowAnalyzer, visitYield, void, $JCTree$JCYield*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Flow$FlowAnalyzer", "com.sun.tools.javac.comp.Flow", "FlowAnalyzer", 0},
		{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.comp.Flow$FlowAnalyzer$ThrownPendingExit", "com.sun.tools.javac.comp.Flow$FlowAnalyzer", "ThrownPendingExit", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Flow$FlowAnalyzer",
		"com.sun.tools.javac.comp.Flow$BaseAnalyzer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Flow"
	};
	$loadClass(Flow$FlowAnalyzer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Flow$FlowAnalyzer);
	});
	return class$;
}

$Class* Flow$FlowAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com