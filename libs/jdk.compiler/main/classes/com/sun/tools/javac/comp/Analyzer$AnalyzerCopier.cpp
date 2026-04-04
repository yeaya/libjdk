#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>
#include <com/sun/source/tree/LambdaExpressionTree.h>
#include <com/sun/source/tree/NewClassTree.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef IMPLICIT
#undef NULLCHK

using $LambdaExpressionTree = ::com::sun::source::tree::LambdaExpressionTree;
using $NewClassTree = ::com::sun::source::tree::NewClassTree;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0 : public $Consumer {
	$class(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* p) override {
		Analyzer$AnalyzerCopier::lambda$visitLambdaExpression$0($cast($JCTree$JCVariableDecl, p));
	}
};
$Class* Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0);
	});
	return class$;
}
$Class* Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::class$ = nullptr;

void Analyzer$AnalyzerCopier::init$($Analyzer* this$0) {
	$set(this, this$0, this$0);
	$TreeCopier::init$(this$0->make);
}

$JCTree* Analyzer$AnalyzerCopier::visitLambdaExpression($LambdaExpressionTree* node, $Void* _unused) {
	$useLocalObjectStack();
	$var($JCTree$JCLambda, oldLambda, $cast($JCTree$JCLambda, node));
	$var($JCTree$JCLambda, newLambda, $cast($JCTree$JCLambda, $cast($JCTree, $TreeCopier::visitLambdaExpression(node, _unused))));
	$init($JCTree$JCLambda$ParameterKind);
	if ($nc(oldLambda)->paramKind == $JCTree$JCLambda$ParameterKind::IMPLICIT) {
		$set($nc(newLambda), paramKind, $JCTree$JCLambda$ParameterKind::IMPLICIT);
		$nc(newLambda->params)->forEach($$new(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0));
	}
	return newLambda;
}

$JCTree* Analyzer$AnalyzerCopier::visitNewClass($NewClassTree* node, $Void* aVoid) {
	$useLocalObjectStack();
	$var($JCTree$JCNewClass, oldNewClazz, $cast($JCTree$JCNewClass, node));
	$var($JCTree$JCNewClass, newNewClazz, $cast($JCTree$JCNewClass, $cast($JCTree, $TreeCopier::visitNewClass(node, aVoid))));
	bool var$0 = !$nc($nc(oldNewClazz)->args)->isEmpty();
	$init($JCTree$Tag);
	if (var$0 && $nc($cast($JCTree$JCExpression, oldNewClazz->args->head))->hasTag($JCTree$Tag::NULLCHK)) {
		$set($nc(newNewClazz), encl, $nc($cast($JCTree$JCUnary, $nc($nc(newNewClazz)->args)->head))->arg);
		$set(newNewClazz, args, newNewClazz->args->tail);
	}
	return newNewClazz;
}

$Object* Analyzer$AnalyzerCopier::visitLambdaExpression($LambdaExpressionTree* node, Object$* _unused) {
	return $of(this->visitLambdaExpression(node, $cast($Void, _unused)));
}

$Object* Analyzer$AnalyzerCopier::visitNewClass($NewClassTree* node, Object$* aVoid) {
	return $of(this->visitNewClass(node, $cast($Void, aVoid)));
}

void Analyzer$AnalyzerCopier::lambda$visitLambdaExpression$0($JCTree$JCVariableDecl* p) {
	$init(Analyzer$AnalyzerCopier);
	$set($nc(p), vartype, nullptr);
}

Analyzer$AnalyzerCopier::Analyzer$AnalyzerCopier() {
}

$Class* Analyzer$AnalyzerCopier::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0")) {
			return Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$AnalyzerCopier, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;)V", nullptr, $PUBLIC, $method(Analyzer$AnalyzerCopier, init$, void, $Analyzer*)},
		{"lambda$visitLambdaExpression$0", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Analyzer$AnalyzerCopier, lambda$visitLambdaExpression$0, void, $JCTree$JCVariableDecl*)},
		{"visitLambdaExpression", "(Lcom/sun/source/tree/LambdaExpressionTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(Analyzer$AnalyzerCopier, visitLambdaExpression, $JCTree*, $LambdaExpressionTree*, $Void*)},
		{"visitLambdaExpression", "(Lcom/sun/source/tree/LambdaExpressionTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Analyzer$AnalyzerCopier, visitLambdaExpression, $Object*, $LambdaExpressionTree*, Object$*)},
		{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(Analyzer$AnalyzerCopier, visitNewClass, $JCTree*, $NewClassTree*, $Void*)},
		{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Analyzer$AnalyzerCopier, visitNewClass, $Object*, $NewClassTree*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier", "com.sun.tools.javac.comp.Analyzer", "AnalyzerCopier", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier",
		"com.sun.tools.javac.tree.TreeCopier",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/tree/TreeCopier<Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Analyzer"
	};
	$loadClass(Analyzer$AnalyzerCopier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Analyzer$AnalyzerCopier);
	});
	return class$;
}

$Class* Analyzer$AnalyzerCopier::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com