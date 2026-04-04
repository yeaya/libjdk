#include <com/sun/tools/javac/comp/Infer$GraphSolver.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$GraphInferenceSteps.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/lang/Iterable.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

using $Infer$GraphInferenceStepsArray = $Array<::com::sun::tools::javac::comp::Infer$GraphInferenceSteps>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$GraphInferenceSteps = ::com::sun::tools::javac::comp::Infer$GraphInferenceSteps;
using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $Infer$GraphSolver$InferenceGraph$Node = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node;
using $Infer$GraphStrategy = ::com::sun::tools::javac::comp::Infer$GraphStrategy;
using $Infer$InferenceException = ::com::sun::tools::javac::comp::Infer$InferenceException;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$GraphSolver::init$($Infer* this$0, $InferenceContext* inferenceContext, $Warner* warn) {
	$set(this, this$0, this$0);
	$set(this, inferenceContext, inferenceContext);
	$set(this, warn, warn);
}

void Infer$GraphSolver::solve($Infer$GraphStrategy* sstrategy) {
	$useLocalObjectStack();
	this->this$0->doIncorporation(this->inferenceContext, this->warn);
	$var($Infer$GraphSolver$InferenceGraph, inferenceGraph, $new($Infer$GraphSolver$InferenceGraph, this));
	while (!$nc(sstrategy)->done()) {
		if (this->this$0->dependenciesFolder != nullptr) {
			$set(this->this$0, pendingGraphs, $nc(this->this$0->pendingGraphs)->prepend($(inferenceGraph->toDot())));
		}
		$var($Infer$GraphSolver$InferenceGraph$Node, nodeToSolve, sstrategy->pickNode(inferenceGraph));
		$var($List, varsToSolve, $List::from($cast($Iterable, $nc(nodeToSolve)->data)));
		$var($List, saved_undet, $nc(this->inferenceContext)->save());
		try {
			bool outer$continue = false;
			while ($Type::containsAny($($nc(this->inferenceContext)->restvars()), varsToSolve)) {
				{
					$var($Infer$GraphInferenceStepsArray, arr$, $Infer$GraphInferenceSteps::values());
					for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
						$Infer$GraphInferenceSteps* step = arr$->get(i$);
						if ($$nc($nc(this->inferenceContext)->solveBasic(varsToSolve, $nc(step)->steps))->nonEmpty()) {
							this->this$0->doIncorporation(this->inferenceContext, this->warn);
							outer$continue = true;
							break;
						}
					}
					if (outer$continue) {
						outer$continue = false;
						continue;
					}
				}
				$throw($(this->this$0->error(nullptr)));
			}
		} catch ($Infer$InferenceException& ex) {
			$nc(this->inferenceContext)->rollback(saved_undet);
			this->this$0->instantiateAsUninferredVars(varsToSolve, this->inferenceContext);
			this->this$0->doIncorporation(this->inferenceContext, this->warn);
		}
		inferenceGraph->deleteNode(nodeToSolve);
	}
}

Infer$GraphSolver::Infer$GraphSolver() {
}

$Class* Infer$GraphSolver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$GraphSolver, this$0)},
		{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, 0, $field(Infer$GraphSolver, inferenceContext)},
		{"warn", "Lcom/sun/tools/javac/util/Warner;", nullptr, 0, $field(Infer$GraphSolver, warn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0, $method(Infer$GraphSolver, init$, void, $Infer*, $InferenceContext*, $Warner*)},
		{"solve", "(Lcom/sun/tools/javac/comp/Infer$GraphStrategy;)V", nullptr, 0, $virtualMethod(Infer$GraphSolver, solve, void, $Infer$GraphStrategy*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$GraphSolver", "com.sun.tools.javac.comp.Infer", "GraphSolver", 0},
		{"com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph", "com.sun.tools.javac.comp.Infer$GraphSolver", "InferenceGraph", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Infer$GraphSolver",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$GraphSolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$GraphSolver);
	});
	return class$;
}

$Class* Infer$GraphSolver::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com