#include <com/sun/tools/javac/comp/Flow$SnippetAliveAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$AliveAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <jcpp.h>

#undef DEAD

using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$AliveAnalyzer = ::com::sun::tools::javac::comp::Flow$AliveAnalyzer;
using $Flow$Liveness = ::com::sun::tools::javac::comp::Flow$Liveness;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Flow$SnippetAliveAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$AliveAnalyzer::init$(this$0);
}

void Flow$SnippetAliveAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
}

void Flow$SnippetAliveAnalyzer::visitLambda($JCTree$JCLambda* tree) {
}

bool Flow$SnippetAliveAnalyzer::isAlive() {
	$init($Flow$Liveness);
	return this->alive != $Flow$Liveness::DEAD;
}

Flow$SnippetAliveAnalyzer::Flow$SnippetAliveAnalyzer() {
}

$Class* Flow$SnippetAliveAnalyzer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$SnippetAliveAnalyzer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, 0, $method(Flow$SnippetAliveAnalyzer, init$, void, $Flow*)},
		{"isAlive", "()Z", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetAliveAnalyzer, isAlive, bool)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetAliveAnalyzer, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(Flow$SnippetAliveAnalyzer, visitLambda, void, $JCTree$JCLambda*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Flow$SnippetAliveAnalyzer", "com.sun.tools.javac.comp.Flow", "SnippetAliveAnalyzer", 0},
		{"com.sun.tools.javac.comp.Flow$AliveAnalyzer", "com.sun.tools.javac.comp.Flow", "AliveAnalyzer", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Flow$SnippetAliveAnalyzer",
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
	$loadClass(Flow$SnippetAliveAnalyzer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Flow$SnippetAliveAnalyzer);
	});
	return class$;
}

$Class* Flow$SnippetAliveAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com