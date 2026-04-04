#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Flow$BaseAnalyzer$PendingExit::init$($JCTree* tree) {
	$set(this, tree, tree);
}

void Flow$BaseAnalyzer$PendingExit::resolveJump() {
}

Flow$BaseAnalyzer$PendingExit::Flow$BaseAnalyzer$PendingExit() {
}

$Class* Flow$BaseAnalyzer$PendingExit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Flow$BaseAnalyzer$PendingExit, tree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $method(Flow$BaseAnalyzer$PendingExit, init$, void, $JCTree*)},
		{"resolveJump", "()V", nullptr, 0, $virtualMethod(Flow$BaseAnalyzer$PendingExit, resolveJump, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit", "com.sun.tools.javac.comp.Flow$BaseAnalyzer", "PendingExit", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit",
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
		"com.sun.tools.javac.comp.Flow"
	};
	$loadClass(Flow$BaseAnalyzer$PendingExit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Flow$BaseAnalyzer$PendingExit);
	});
	return class$;
}

$Class* Flow$BaseAnalyzer$PendingExit::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com