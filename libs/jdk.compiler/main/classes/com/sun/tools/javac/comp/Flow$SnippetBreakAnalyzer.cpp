#include <com/sun/tools/javac/comp/Flow$SnippetBreakAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$AliveAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ALIVE

using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$AliveAnalyzer = ::com::sun::tools::javac::comp::Flow$AliveAnalyzer;
using $Flow$Liveness = ::com::sun::tools::javac::comp::Flow$Liveness;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Flow$SnippetBreakAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$AliveAnalyzer::init$(this$0);
	$set(this, seenTrees, $new($HashSet));
}

void Flow$SnippetBreakAnalyzer::visitLabelled($JCTree$JCLabeledStatement* tree) {
	this->seenTrees->add(tree);
	$Flow$AliveAnalyzer::visitLabelled(tree);
}

void Flow$SnippetBreakAnalyzer::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	this->seenTrees->add(tree);
	$Flow$AliveAnalyzer::visitWhileLoop(tree);
}

void Flow$SnippetBreakAnalyzer::visitForLoop($JCTree$JCForLoop* tree) {
	this->seenTrees->add(tree);
	$Flow$AliveAnalyzer::visitForLoop(tree);
}

void Flow$SnippetBreakAnalyzer::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	this->seenTrees->add(tree);
	$Flow$AliveAnalyzer::visitForeachLoop(tree);
}

void Flow$SnippetBreakAnalyzer::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	this->seenTrees->add(tree);
	$Flow$AliveAnalyzer::visitDoLoop(tree);
}

void Flow$SnippetBreakAnalyzer::visitBreak($JCTree$JCBreak* tree) {
	$init($Flow$Liveness);
	this->breaksOut$ |= (this->alive == $Flow$Liveness::ALIVE && !this->seenTrees->contains($nc(tree)->target));
	$Flow$AliveAnalyzer::visitBreak(tree);
}

bool Flow$SnippetBreakAnalyzer::breaksOut() {
	return this->breaksOut$;
}

Flow$SnippetBreakAnalyzer::Flow$SnippetBreakAnalyzer() {
}

$Class* Flow$SnippetBreakAnalyzer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$SnippetBreakAnalyzer, this$0)},
		{"seenTrees", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/tree/JCTree;>;", $PRIVATE | $FINAL, $field(Flow$SnippetBreakAnalyzer, seenTrees)},
		{"breaksOut", "Z", nullptr, $PRIVATE, $field(Flow$SnippetBreakAnalyzer, breaksOut$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, $PUBLIC, $method(Flow$SnippetBreakAnalyzer, init$, void, $Flow*)},
		{"breaksOut", "()Z", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetBreakAnalyzer, breaksOut, bool)},
		{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetBreakAnalyzer, visitBreak, void, $JCTree$JCBreak*)},
		{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetBreakAnalyzer, visitDoLoop, void, $JCTree$JCDoWhileLoop*)},
		{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetBreakAnalyzer, visitForLoop, void, $JCTree$JCForLoop*)},
		{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetBreakAnalyzer, visitForeachLoop, void, $JCTree$JCEnhancedForLoop*)},
		{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetBreakAnalyzer, visitLabelled, void, $JCTree$JCLabeledStatement*)},
		{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetBreakAnalyzer, visitWhileLoop, void, $JCTree$JCWhileLoop*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Flow$SnippetBreakAnalyzer", "com.sun.tools.javac.comp.Flow", "SnippetBreakAnalyzer", 0},
		{"com.sun.tools.javac.comp.Flow$AliveAnalyzer", "com.sun.tools.javac.comp.Flow", "AliveAnalyzer", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Flow$SnippetBreakAnalyzer",
		"com.sun.tools.javac.comp.Flow$AliveAnalyzer",
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
	$loadClass(Flow$SnippetBreakAnalyzer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Flow$SnippetBreakAnalyzer);
	});
	return class$;
}

$Class* Flow$SnippetBreakAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com