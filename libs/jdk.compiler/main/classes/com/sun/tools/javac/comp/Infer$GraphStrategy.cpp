#include <com/sun/tools/javac/comp/Infer$GraphStrategy.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <jcpp.h>

using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $Infer$GraphSolver$InferenceGraph$Node = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Class* Infer$GraphStrategy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"done", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Infer$GraphStrategy, done, bool)},
		{"pickNode", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;)Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Infer$GraphStrategy, pickNode, $Infer$GraphSolver$InferenceGraph$Node*, $Infer$GraphSolver$InferenceGraph*), "com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$GraphStrategy", "com.sun.tools.javac.comp.Infer", "GraphStrategy", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException", "com.sun.tools.javac.comp.Infer$GraphStrategy", "NodeNotFoundException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.Infer$GraphStrategy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$GraphStrategy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$GraphStrategy);
	});
	return class$;
}

$Class* Infer$GraphStrategy::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com