#include <com/sun/tools/javac/comp/Infer$GraphStrategy$NodeNotFoundException.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy.h>
#include <jcpp.h>

using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$GraphStrategy$NodeNotFoundException::init$($Infer$GraphSolver$InferenceGraph* graph) {
	$RuntimeException::init$();
	$set(this, graph, graph);
}

Infer$GraphStrategy$NodeNotFoundException::Infer$GraphStrategy$NodeNotFoundException() {
}

Infer$GraphStrategy$NodeNotFoundException::Infer$GraphStrategy$NodeNotFoundException(const Infer$GraphStrategy$NodeNotFoundException& e) : $RuntimeException(e) {
}

void Infer$GraphStrategy$NodeNotFoundException::throw$() {
	throw *this;
}

$Class* Infer$GraphStrategy$NodeNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Infer$GraphStrategy$NodeNotFoundException, serialVersionUID)},
		{"graph", "Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;", nullptr, $TRANSIENT, $field(Infer$GraphStrategy$NodeNotFoundException, graph)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;)V", nullptr, $PUBLIC, $method(Infer$GraphStrategy$NodeNotFoundException, init$, void, $Infer$GraphSolver$InferenceGraph*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$GraphStrategy", "com.sun.tools.javac.comp.Infer", "GraphStrategy", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException", "com.sun.tools.javac.comp.Infer$GraphStrategy", "NodeNotFoundException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException",
		"java.lang.RuntimeException",
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
	$loadClass(Infer$GraphStrategy$NodeNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$GraphStrategy$NodeNotFoundException);
	});
	return class$;
}

$Class* Infer$GraphStrategy$NodeNotFoundException::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com