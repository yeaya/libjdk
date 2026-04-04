#include <com/sun/tools/javac/comp/Infer$BestLeafSolver.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy$NodeNotFoundException.h>
#include <com/sun/tools/javac/comp/Infer$LeafSolver.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $Infer$GraphSolver$InferenceGraph$Node = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node;
using $Infer$GraphStrategy$NodeNotFoundException = ::com::sun::tools::javac::comp::Infer$GraphStrategy$NodeNotFoundException;
using $Infer$LeafSolver = ::com::sun::tools::javac::comp::Infer$LeafSolver;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$BestLeafSolver::init$($Infer* this$0, $List* varsToSolve) {
	$set(this, this$0, this$0);
	$Infer$LeafSolver::init$(this$0);
	$set(this, treeCache, $new($HashMap));
	$set(this, noPath, $new($Pair, nullptr, $($Integer::valueOf($Integer::MAX_VALUE))));
	$set(this, varsToSolve, varsToSolve);
}

$Pair* Infer$BestLeafSolver::computeTreeToLeafs($Infer$GraphSolver$InferenceGraph$Node* n) {
	$useLocalObjectStack();
	$var($Pair, cachedPath, $cast($Pair, this->treeCache->get(n)));
	if (cachedPath == nullptr) {
		if ($nc(n)->isLeaf()) {
			$var($Object, var$0, $List::of(n));
			$assign(cachedPath, $new($Pair, var$0, $($Integer::valueOf($nc($cast($ListBuffer, n->data))->length()))));
		} else {
			$var($Object, var$1, $List::of(n));
			$var($Pair, path, $new($Pair, var$1, $($Integer::valueOf($nc($cast($ListBuffer, n->data))->length()))));
			{
				$var($Iterator, i$, $$nc(n->getAllDependencies())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Infer$GraphSolver$InferenceGraph$Node, n2, $cast($Infer$GraphSolver$InferenceGraph$Node, i$->next()));
					{
						if (n2 == n) {
							continue;
						}
						$var($Pair, subpath, computeTreeToLeafs(n2));
						$var($Object, var$2, $nc($cast($List, path->fst))->prependList($cast($List, $nc(subpath)->fst)));
						int32_t var$3 = $nc($cast($Integer, path->snd))->intValue();
						$assign(path, $new($Pair, var$2, $($Integer::valueOf(var$3 + $nc($cast($Integer, subpath->snd))->intValue()))));
					}
				}
			}
			$assign(cachedPath, path);
		}
		this->treeCache->put(n, cachedPath);
	}
	return cachedPath;
}

$Infer$GraphSolver$InferenceGraph$Node* Infer$BestLeafSolver::pickNode($Infer$GraphSolver$InferenceGraph* g) {
	$useLocalObjectStack();
	this->treeCache->clear();
	$var($Pair, bestPath, this->noPath);
	{
		$var($Iterator, i$, $nc($nc(g)->nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Infer$GraphSolver$InferenceGraph$Node, n, $cast($Infer$GraphSolver$InferenceGraph$Node, i$->next()));
			if (!$Collections::disjoint($cast($Collection, $nc(n)->data), $cast($AbstractCollection, this->varsToSolve))) {
				$var($Pair, path, computeTreeToLeafs(n));
				int32_t var$0 = $nc($cast($Integer, $nc(path)->snd))->intValue();
				if (var$0 < $nc($cast($Integer, $nc(bestPath)->snd))->intValue()) {
					$assign(bestPath, path);
				}
			}
		}
	}
	if (bestPath == this->noPath) {
		$throwNew($Infer$GraphStrategy$NodeNotFoundException, g);
	}
	return $cast($Infer$GraphSolver$InferenceGraph$Node, $nc(($cast($List, $nc(bestPath)->fst)))->head);
}

Infer$BestLeafSolver::Infer$BestLeafSolver() {
}

$Class* Infer$BestLeafSolver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$BestLeafSolver, this$0)},
		{"varsToSolve", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Infer$BestLeafSolver, varsToSolve)},
		{"treeCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;Ljava/lang/Integer;>;>;", $FINAL, $field(Infer$BestLeafSolver, treeCache)},
		{"noPath", "Lcom/sun/tools/javac/util/Pair;", "Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;Ljava/lang/Integer;>;", $FINAL, $field(Infer$BestLeafSolver, noPath)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(Infer$BestLeafSolver, init$, void, $Infer*, $List*)},
		{"computeTreeToLeafs", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;Ljava/lang/Integer;>;", 0, $virtualMethod(Infer$BestLeafSolver, computeTreeToLeafs, $Pair*, $Infer$GraphSolver$InferenceGraph$Node*)},
		{"pickNode", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;)Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;", nullptr, $PUBLIC, $virtualMethod(Infer$BestLeafSolver, pickNode, $Infer$GraphSolver$InferenceGraph$Node*, $Infer$GraphSolver$InferenceGraph*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$BestLeafSolver", "com.sun.tools.javac.comp.Infer", "BestLeafSolver", $ABSTRACT},
		{"com.sun.tools.javac.comp.Infer$LeafSolver", "com.sun.tools.javac.comp.Infer", "LeafSolver", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.Infer$BestLeafSolver",
		"com.sun.tools.javac.comp.Infer$LeafSolver",
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
	$loadClass(Infer$BestLeafSolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$BestLeafSolver);
	});
	return class$;
}

$Class* Infer$BestLeafSolver::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com