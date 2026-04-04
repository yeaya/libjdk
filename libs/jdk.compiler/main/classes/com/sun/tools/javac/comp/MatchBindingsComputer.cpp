#include <com/sun/tools/javac/comp/MatchBindingsComputer.h>
#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/MatchBindingsComputer$1.h>
#include <com/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef EMPTY
#undef NOT

using $ListArray = $Array<::com::sun::tools::javac::util::List>;
using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $MatchBindingsComputer$1 = ::com::sun::tools::javac::comp::MatchBindingsComputer$1;
using $MatchBindingsComputer$MatchBindings = ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::EMPTY = nullptr;
$Context$Key* MatchBindingsComputer::matchBindingsComputerKey = nullptr;

MatchBindingsComputer* MatchBindingsComputer::instance($Context* context) {
	$init(MatchBindingsComputer);
	$var(MatchBindingsComputer, instance, $cast(MatchBindingsComputer, $nc(context)->get(MatchBindingsComputer::matchBindingsComputerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(MatchBindingsComputer, context));
	}
	return instance;
}

void MatchBindingsComputer::init$($Context* context) {
	$TreeScanner::init$();
	$set(this, log, $Log::instance(context));
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::conditional($JCTree* tree, $MatchBindingsComputer$MatchBindings* condBindings, $MatchBindingsComputer$MatchBindings* trueBindings, $MatchBindingsComputer$MatchBindings* falseBindings) {
	$useLocalObjectStack();
	if (condBindings == MatchBindingsComputer::EMPTY && trueBindings == MatchBindingsComputer::EMPTY && falseBindings == MatchBindingsComputer::EMPTY) {
		return MatchBindingsComputer::EMPTY;
	}
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
	$var($List, xTzT, intersection(pos, $nc(condBindings)->bindingsWhenTrue, $nc(falseBindings)->bindingsWhenTrue));
	$var($List, xFyT, intersection(pos, condBindings->bindingsWhenFalse, $nc(trueBindings)->bindingsWhenTrue));
	$var($List, yTzT, intersection(pos, trueBindings->bindingsWhenTrue, falseBindings->bindingsWhenTrue));
	$var($List, xTzF, intersection(pos, condBindings->bindingsWhenTrue, falseBindings->bindingsWhenFalse));
	$var($List, xFyF, intersection(pos, condBindings->bindingsWhenFalse, trueBindings->bindingsWhenFalse));
	$var($List, yFzF, intersection(pos, trueBindings->bindingsWhenFalse, falseBindings->bindingsWhenFalse));
	$var($List, bindingsWhenTrue, union$(pos, yTzT, $$new($ListArray, {
		xTzT,
		xFyT
	})));
	$var($List, bindingsWhenFalse, union$(pos, yFzF, $$new($ListArray, {
		xTzF,
		xFyF
	})));
	return $new($MatchBindingsComputer$MatchBindings, bindingsWhenTrue, bindingsWhenFalse);
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::unary($JCTree* tree, $MatchBindingsComputer$MatchBindings* bindings) {
	$init($JCTree$Tag);
	if (bindings == MatchBindingsComputer::EMPTY || !$nc(tree)->hasTag($JCTree$Tag::NOT)) {
		return bindings;
	}
	return $new($MatchBindingsComputer$MatchBindings, $nc(bindings)->bindingsWhenFalse, $nc(bindings)->bindingsWhenTrue);
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::binary($JCTree* tree, $MatchBindingsComputer$MatchBindings* lhsBindings, $MatchBindingsComputer$MatchBindings* rhsBindings) {
	$useLocalObjectStack();
	$init($MatchBindingsComputer$1);
	switch ($nc($MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get(($$nc($nc(tree)->getTag()))->ordinal())) {
	case 1:
		{
			return andOperation($(tree->pos()), lhsBindings, rhsBindings);
		}
	case 2:
		{
			$var($List, bindingsWhenTrue, intersection($(tree->pos()), $nc(lhsBindings)->bindingsWhenTrue, $nc(rhsBindings)->bindingsWhenTrue));
			$var($List, bindingsWhenFalse, union$($(tree->pos()), lhsBindings->bindingsWhenFalse, $$new($ListArray, {rhsBindings->bindingsWhenFalse})));
			return $new($MatchBindingsComputer$MatchBindings, bindingsWhenTrue, bindingsWhenFalse);
		}
	}
	return MatchBindingsComputer::EMPTY;
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::guardedPattern($JCTree$JCGuardPattern* tree, $MatchBindingsComputer$MatchBindings* patternBindings, $MatchBindingsComputer$MatchBindings* guardBindings) {
	return andOperation($($nc(tree)->pos()), patternBindings, guardBindings);
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::andOperation($JCDiagnostic$DiagnosticPosition* pos, $MatchBindingsComputer$MatchBindings* lhsBindings, $MatchBindingsComputer$MatchBindings* rhsBindings) {
	$useLocalObjectStack();
	$var($List, bindingsWhenTrue, union$(pos, $nc(lhsBindings)->bindingsWhenTrue, $$new($ListArray, {$nc(rhsBindings)->bindingsWhenTrue})));
	$var($List, bindingsWhenFalse, intersection(pos, lhsBindings->bindingsWhenFalse, rhsBindings->bindingsWhenFalse));
	return $new($MatchBindingsComputer$MatchBindings, bindingsWhenTrue, bindingsWhenFalse);
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::switchCase($JCTree* tree, $MatchBindingsComputer$MatchBindings* prevBindings, $MatchBindingsComputer$MatchBindings* currentBindings) {
	$useLocalObjectStack();
	if (prevBindings == nullptr) {
		return currentBindings;
	}
	if ($nc(prevBindings)->nullPattern) {
		return currentBindings;
	}
	if ($nc(currentBindings)->nullPattern) {
		return prevBindings;
	}
	$var($List, var$0, intersection($($nc(tree)->pos()), prevBindings->bindingsWhenTrue, currentBindings->bindingsWhenTrue));
	return $new($MatchBindingsComputer$MatchBindings, var$0, $(intersection($(tree->pos()), prevBindings->bindingsWhenFalse, currentBindings->bindingsWhenFalse)));
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::finishBindings($JCTree* tree, $MatchBindingsComputer$MatchBindings* matchBindings) {
	$init($MatchBindingsComputer$1);
	switch ($nc($MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get(($$nc($nc(tree)->getTag()))->ordinal())) {
	case 3:
	case 1:
	case 2:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		return matchBindings;
	default:
		return MatchBindingsComputer::EMPTY;
	}
}

$List* MatchBindingsComputer::intersection($JCDiagnostic$DiagnosticPosition* pos, $List* lhsBindings, $List* rhsBindings) {
	$useLocalObjectStack();
	$var($List, list, $List::nil());
	{
		$var($Iterator, i$, $nc(lhsBindings)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$BindingSymbol, v1, $cast($Symbol$BindingSymbol, i$->next()));
			{
				$var($Iterator, i$, $nc(rhsBindings)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol$BindingSymbol, v2, $cast($Symbol$BindingSymbol, i$->next()));
					{
						bool var$0 = $nc(v1)->name == $nc(v2)->name && (v1->flags() & (int64_t)0x0000040000000000) == 0;
						if (var$0 && (v2->flags() & (int64_t)0x0000040000000000) == 0) {
							$init($CompilerProperties$Errors);
							$nc(this->log)->error(pos, $CompilerProperties$Errors::MatchBindingExists);
							v2->flags_field |= (int64_t)0x0000040000000000;
							$assign(list, $nc(list)->append(v2));
						}
					}
				}
			}
		}
	}
	return list;
}

$List* MatchBindingsComputer::union$($JCDiagnostic$DiagnosticPosition* pos, $List* lhsBindings, $ListArray* rhsBindings_s) {
	$useLocalObjectStack();
	$var($List, list, lhsBindings);
	{
		$var($ListArray, arr$, rhsBindings_s);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($List, rhsBindings, arr$->get(i$));
			{
				$var($Iterator, i$, $nc(rhsBindings)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol$BindingSymbol, v, $cast($Symbol$BindingSymbol, i$->next()));
					{
						{
							$var($Iterator, i$, $nc(list)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Symbol$BindingSymbol, ov, $cast($Symbol$BindingSymbol, i$->next()));
								{
									bool var$0 = $nc(ov)->name == $nc(v)->name && (ov->flags() & (int64_t)0x0000040000000000) == 0;
									if (var$0 && (v->flags() & (int64_t)0x0000040000000000) == 0) {
										$init($CompilerProperties$Errors);
										$nc(this->log)->error(pos, $CompilerProperties$Errors::MatchBindingExists);
										v->flags_field |= (int64_t)0x0000040000000000;
									}
								}
							}
						}
						$assign(list, list->append(v));
					}
				}
			}
		}
	}
	return list;
}

void MatchBindingsComputer::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$var($List, var$0, $List::nil());
	$assignStatic(MatchBindingsComputer::EMPTY, $new($MatchBindingsComputer$MatchBindings, var$0, $($List::nil())));
	$assignStatic(MatchBindingsComputer::matchBindingsComputerKey, $new($Context$Key));
}

MatchBindingsComputer::MatchBindingsComputer() {
}

$Class* MatchBindingsComputer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY", "Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MatchBindingsComputer, EMPTY)},
		{"matchBindingsComputerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/MatchBindingsComputer;>;", $PROTECTED | $STATIC | $FINAL, $staticField(MatchBindingsComputer, matchBindingsComputerKey)},
		{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(MatchBindingsComputer, log)},
		{}
	};
	$CompoundAttribute union$methodAnnotations$$[] = {
		{"Ljava/lang/SafeVarargs;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(MatchBindingsComputer, init$, void, $Context*)},
		{"andOperation", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC, $virtualMethod(MatchBindingsComputer, andOperation, $MatchBindingsComputer$MatchBindings*, $JCDiagnostic$DiagnosticPosition*, $MatchBindingsComputer$MatchBindings*, $MatchBindingsComputer$MatchBindings*)},
		{"binary", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC, $virtualMethod(MatchBindingsComputer, binary, $MatchBindingsComputer$MatchBindings*, $JCTree*, $MatchBindingsComputer$MatchBindings*, $MatchBindingsComputer$MatchBindings*)},
		{"conditional", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC, $virtualMethod(MatchBindingsComputer, conditional, $MatchBindingsComputer$MatchBindings*, $JCTree*, $MatchBindingsComputer$MatchBindings*, $MatchBindingsComputer$MatchBindings*, $MatchBindingsComputer$MatchBindings*)},
		{"finishBindings", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC, $virtualMethod(MatchBindingsComputer, finishBindings, $MatchBindingsComputer$MatchBindings*, $JCTree*, $MatchBindingsComputer$MatchBindings*)},
		{"guardedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC, $virtualMethod(MatchBindingsComputer, guardedPattern, $MatchBindingsComputer$MatchBindings*, $JCTree$JCGuardPattern*, $MatchBindingsComputer$MatchBindings*, $MatchBindingsComputer$MatchBindings*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/MatchBindingsComputer;", nullptr, $PUBLIC | $STATIC, $staticMethod(MatchBindingsComputer, instance, MatchBindingsComputer*, $Context*)},
		{"intersection", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;", $PRIVATE, $method(MatchBindingsComputer, intersection, $List*, $JCDiagnostic$DiagnosticPosition*, $List*, $List*)},
		{"switchCase", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC, $virtualMethod(MatchBindingsComputer, switchCase, $MatchBindingsComputer$MatchBindings*, $JCTree*, $MatchBindingsComputer$MatchBindings*, $MatchBindingsComputer$MatchBindings*)},
		{"unary", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC, $virtualMethod(MatchBindingsComputer, unary, $MatchBindingsComputer$MatchBindings*, $JCTree*, $MatchBindingsComputer$MatchBindings*)},
		{"union", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;[Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;[Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;", $PRIVATE | $FINAL | $TRANSIENT, $method(MatchBindingsComputer, union$, $List*, $JCDiagnostic$DiagnosticPosition*, $List*, $ListArray*), nullptr, nullptr, union$methodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.MatchBindingsComputer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"com.sun.tools.javac.comp.MatchBindingsComputer$MatchBindings", "com.sun.tools.javac.comp.MatchBindingsComputer", "MatchBindings", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.MatchBindingsComputer",
		"com.sun.tools.javac.tree.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.MatchBindingsComputer$1,com.sun.tools.javac.comp.MatchBindingsComputer$MatchBindings"
	};
	$loadClass(MatchBindingsComputer, name, initialize, &classInfo$$, MatchBindingsComputer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MatchBindingsComputer);
	});
	return class$;
}

$Class* MatchBindingsComputer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com