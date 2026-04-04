#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Analyzer$1.h>
#include <com/sun/tools/javac/comp/Analyzer$2.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerMode.h>
#include <com/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper.h>
#include <com/sun/tools/javac/comp/Analyzer$DiamondInitializer.h>
#include <com/sun/tools/javac/comp/Analyzer$LambdaAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerForEach.h>
#include <com/sun/tools/javac/comp/Analyzer$RedundantTypeArgAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer$RewritingContext.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementScanner.h>
#include <com/sun/tools/javac/comp/Analyzer$TreeRewriter.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ANALYZER
#undef DIAMOND_WITH_ANONYMOUS_CLASS_CREATION
#undef LABELLED
#undef NOPOS
#undef SYNTHETIC
#undef TYP

using $Analyzer$StatementAnalyzerArray = $Array<::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer>;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Types = ::com::sun::tools::javac::code::Types;
using $Analyzer$1 = ::com::sun::tools::javac::comp::Analyzer$1;
using $Analyzer$2 = ::com::sun::tools::javac::comp::Analyzer$2;
using $Analyzer$AnalyzerCopier = ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier;
using $Analyzer$AnalyzerMode = ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode;
using $Analyzer$DiamondInitializer = ::com::sun::tools::javac::comp::Analyzer$DiamondInitializer;
using $Analyzer$LambdaAnalyzer = ::com::sun::tools::javac::comp::Analyzer$LambdaAnalyzer;
using $Analyzer$RedundantLocalVarTypeAnalyzer = ::com::sun::tools::javac::comp::Analyzer$RedundantLocalVarTypeAnalyzer;
using $Analyzer$RedundantLocalVarTypeAnalyzerForEach = ::com::sun::tools::javac::comp::Analyzer$RedundantLocalVarTypeAnalyzerForEach;
using $Analyzer$RedundantTypeArgAnalyzer = ::com::sun::tools::javac::comp::Analyzer$RedundantTypeArgAnalyzer;
using $Analyzer$RewritingContext = ::com::sun::tools::javac::comp::Analyzer$RewritingContext;
using $Analyzer$StatementScanner = ::com::sun::tools::javac::comp::Analyzer$StatementScanner;
using $Analyzer$TreeRewriter = ::com::sun::tools::javac::comp::Analyzer$TreeRewriter;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$LocalCacheContext = ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttributionMode = ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Options = ::com::sun::tools::javac::util::Options;
using $Position = ::com::sun::tools::javac::util::Position;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Collectors = ::java::util::stream::Collectors;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Analyzer$$Lambda$lambda$doAnalysis$0 : public $Supplier {
	$class(Analyzer$$Lambda$lambda$doAnalysis$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Analyzer$RewritingContext* rewriting) {
		$set(this, rewriting, rewriting);
	}
	virtual $Object* get() override {
		 return Analyzer::lambda$doAnalysis$0(rewriting);
	}
	$Analyzer$RewritingContext* rewriting = nullptr;
};
$Class* Analyzer$$Lambda$lambda$doAnalysis$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rewriting", "Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;", nullptr, $PUBLIC, $field(Analyzer$$Lambda$lambda$doAnalysis$0, rewriting)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)V", nullptr, $PUBLIC, $method(Analyzer$$Lambda$lambda$doAnalysis$0, init$, void, $Analyzer$RewritingContext*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Analyzer$$Lambda$lambda$doAnalysis$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Analyzer$$Lambda$lambda$doAnalysis$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Analyzer$$Lambda$lambda$doAnalysis$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Analyzer$$Lambda$lambda$doAnalysis$0);
	});
	return class$;
}
$Class* Analyzer$$Lambda$lambda$doAnalysis$0::class$ = nullptr;

class Analyzer$$Lambda$lambda$doAnalysis$1$1 : public $Function {
	$class(Analyzer$$Lambda$lambda$doAnalysis$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* se) override {
		 return $of(Analyzer::lambda$doAnalysis$1($cast($StackTraceElement, se)));
	}
};
$Class* Analyzer$$Lambda$lambda$doAnalysis$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Analyzer$$Lambda$lambda$doAnalysis$1$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Analyzer$$Lambda$lambda$doAnalysis$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Analyzer$$Lambda$lambda$doAnalysis$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Analyzer$$Lambda$lambda$doAnalysis$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Analyzer$$Lambda$lambda$doAnalysis$1$1);
	});
	return class$;
}
$Class* Analyzer$$Lambda$lambda$doAnalysis$1$1::class$ = nullptr;

$Context$Key* Analyzer::analyzerKey = nullptr;

Analyzer* Analyzer::instance($Context* context) {
	$init(Analyzer);
	$var(Analyzer, instance, $cast(Analyzer, $nc(context)->get(Analyzer::analyzerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Analyzer, context));
	}
	return instance;
}

void Analyzer::init$($Context* context) {
	$useLocalObjectStack();
	$set(this, analyzers, $new($Analyzer$StatementAnalyzerArray, {
		$$new($Analyzer$DiamondInitializer, this),
		$$new($Analyzer$LambdaAnalyzer, this),
		$$new($Analyzer$RedundantTypeArgAnalyzer, this),
		$$new($Analyzer$RedundantLocalVarTypeAnalyzer, this),
		$$new($Analyzer$RedundantLocalVarTypeAnalyzerForEach, this)
	}));
	$set(this, flushDeferredHelper, $new($Analyzer$1, this));
	$set(this, queueDeferredHelper, $new($Analyzer$2, this));
	$set(this, deferredAnalysisHelper, this->queueDeferredHelper);
	$nc(context)->put(Analyzer::analyzerKey, this);
	$set(this, types, $Types::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, deferredAttr, $DeferredAttr::instance(context));
	$set(this, argumentAttr, $ArgumentAttr::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, copier, $new($Analyzer$AnalyzerCopier, this));
	$var($Options, options, $Options::instance(context));
	$var($String, findOpt, $nc(options)->get("find"_s));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	this->allowDiamondWithAnonymousClassCreation = $Source$Feature::DIAMOND_WITH_ANONYMOUS_CLASS_CREATION->allowedInSource(source);
	$set(this, analyzerModes, $Analyzer$AnalyzerMode::getAnalyzerModes(findOpt, source));
}

$Env* Analyzer::copyEnvIfNeeded($JCTree* tree, $Env* env) {
	$useLocalObjectStack();
	bool var$1 = !$nc(this->analyzerModes)->isEmpty() && !$nc($nc(($cast($AttrContext, $nc(env)->info)))->attributionMode)->isSpeculative$;
	bool var$0 = var$1 && $TreeInfo::isStatement(tree);
	$init($JCTree$Tag);
	if (var$0 && !$nc(tree)->hasTag($JCTree$Tag::LABELLED)) {
		$var($Env, analyzeEnv, env->dup(env->tree, $($nc($cast($AttrContext, env->info))->dup($($nc($nc(($cast($AttrContext, env->info)))->scope)->dupUnshared($nc($nc(($cast($AttrContext, env->info)))->scope)->owner))))));
		$set($nc($cast($AttrContext, $nc(analyzeEnv)->info)), returnResult, $nc(($cast($AttrContext, $nc(analyzeEnv)->info)))->returnResult != nullptr ? $new($Attr$ResultInfo, $nc(this->attr), ($cast($AttrContext, analyzeEnv->info))->returnResult->pkind, ($cast($AttrContext, analyzeEnv->info))->returnResult->pt) : ($Attr$ResultInfo*)nullptr);
		return analyzeEnv;
	} else {
		return nullptr;
	}
}

void Analyzer::analyzeIfNeeded($JCTree* tree, $Env* env) {
	if (env != nullptr) {
		$var($JCTree$JCStatement, stmt, $cast($JCTree$JCStatement, tree));
		analyze(stmt, env);
	}
}

void Analyzer::analyze($JCTree$JCStatement* statement, $Env* env) {
	$useLocalObjectStack();
	$var($Analyzer$StatementScanner, statementScanner, $new($Analyzer$StatementScanner, this, statement, env));
	statementScanner->scan();
	if (!$nc(statementScanner->rewritings)->isEmpty()) {
		$var($Iterator, i$, $nc(statementScanner->rewritings)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Analyzer$RewritingContext, rewriting, $cast($Analyzer$RewritingContext, i$->next()));
			{
				$nc(this->deferredAnalysisHelper)->queue(rewriting);
			}
		}
	}
}

void Analyzer::doAnalysis($Analyzer$RewritingContext* rewriting) {
	$useLocalObjectStack();
	$var($DiagnosticSource, prevSource, $nc(this->log)->currentSource());
	$var($ArgumentAttr$LocalCacheContext, localCacheContext, $nc(this->argumentAttr)->withLocalCacheContext());
	$var($Throwable, var$0, nullptr);
	try {
		try {
			this->log->useSource($($nc($nc($nc(rewriting)->env)->toplevel)->getSourceFile()));
			$var($JCTree$JCStatement, treeToAnalyze, $cast($JCTree$JCStatement, rewriting->originalTree));
			$var($JCTree, wrappedTree, nullptr);
			$init($Kinds$Kind);
			if ($nc($nc($nc(($cast($AttrContext, $nc(rewriting->env)->info)))->scope)->owner)->kind == $Kinds$Kind::TYP) {
				$assign(treeToAnalyze, $$nc($nc(this->make)->at($Position::NOPOS))->Block($Flags::SYNTHETIC, $($List::of($cast($JCTree$JCStatement, rewriting->originalTree)))));
				$assign(wrappedTree, rewriting->originalTree);
			}
			$var($Env, var$1, rewriting->env);
			$var($Attr$ResultInfo, var$2, $nc(this->attr)->statInfo);
			$var($TreeCopier, var$3, $new($Analyzer$TreeRewriter, this, rewriting, wrappedTree));
			$var($Supplier, var$4, $new(Analyzer$$Lambda$lambda$doAnalysis$0, rewriting));
			$init($DeferredAttr$AttributionMode);
			$var($DeferredAttr$AttributionMode, var$5, $DeferredAttr$AttributionMode::ANALYZER);
			$nc(this->deferredAttr)->attribSpeculative(treeToAnalyze, var$1, var$2, var$3, var$4, var$5, $(this->argumentAttr->withLocalCacheContext()));
			$nc(rewriting->analyzer)->process(rewriting->oldTree, rewriting->replacement, rewriting->erroneous);
		} catch ($Throwable& ex) {
			$var($StringBuilder, var$6, $new($StringBuilder));
			var$6->append("Analyzer error when processing: "_s);
			var$6->append($nc(rewriting)->originalTree);
			var$6->append(":"_s);
			var$6->append($(ex->toString()));
			var$6->append("\n"_s);
			var$6->append($$cast($String, $$nc($$nc($Arrays::stream($(ex->getStackTrace())))->map($$new(Analyzer$$Lambda$lambda$doAnalysis$1$1)))->collect($($Collectors::joining("\n"_s)))));
			$Assert::error($$str(var$6));
		}
	} catch ($Throwable& var$7) {
		$assign(var$0, var$7);
	} /*finally*/ {
		this->log->useSource($($nc(prevSource)->getFile()));
		$nc(localCacheContext)->leave();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Analyzer::flush($Env* flushEnv) {
	$nc(this->deferredAnalysisHelper)->flush(flushEnv);
}

$String* Analyzer::lambda$doAnalysis$1($StackTraceElement* se) {
	$init(Analyzer);
	return $nc(se)->toString();
}

$Log$DiagnosticHandler* Analyzer::lambda$doAnalysis$0($Analyzer$RewritingContext* rewriting) {
	$init(Analyzer);
	return $nc(rewriting)->diagHandler();
}

void Analyzer::clinit$($Class* clazz) {
	$assignStatic(Analyzer::analyzerKey, $new($Context$Key));
}

Analyzer::Analyzer() {
}

$Class* Analyzer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Analyzer$$Lambda$lambda$doAnalysis$0")) {
			return Analyzer$$Lambda$lambda$doAnalysis$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Analyzer$$Lambda$lambda$doAnalysis$1$1")) {
			return Analyzer$$Lambda$lambda$doAnalysis$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"analyzerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Analyzer;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Analyzer, analyzerKey)},
		{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL, $field(Analyzer, types)},
		{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(Analyzer, log)},
		{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL, $field(Analyzer, attr)},
		{"deferredAttr", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL, $field(Analyzer, deferredAttr)},
		{"argumentAttr", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL, $field(Analyzer, argumentAttr)},
		{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $FINAL, $field(Analyzer, make)},
		{"copier", "Lcom/sun/tools/javac/comp/Analyzer$AnalyzerCopier;", nullptr, $FINAL, $field(Analyzer, copier)},
		{"allowDiamondWithAnonymousClassCreation", "Z", nullptr, $PRIVATE | $FINAL, $field(Analyzer, allowDiamondWithAnonymousClassCreation)},
		{"analyzerModes", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;>;", $FINAL, $field(Analyzer, analyzerModes)},
		{"analyzers", "[Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer;", "[Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;>;", 0, $field(Analyzer, analyzers)},
		{"flushDeferredHelper", "Lcom/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper;", nullptr, 0, $field(Analyzer, flushDeferredHelper)},
		{"queueDeferredHelper", "Lcom/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper;", nullptr, 0, $field(Analyzer, queueDeferredHelper)},
		{"deferredAnalysisHelper", "Lcom/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper;", nullptr, 0, $field(Analyzer, deferredAnalysisHelper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(Analyzer, init$, void, $Context*)},
		{"analyze", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED, $virtualMethod(Analyzer, analyze, void, $JCTree$JCStatement*, $Env*)},
		{"analyzeIfNeeded", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $virtualMethod(Analyzer, analyzeIfNeeded, void, $JCTree*, $Env*)},
		{"copyEnvIfNeeded", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $virtualMethod(Analyzer, copyEnvIfNeeded, $Env*, $JCTree*, $Env*)},
		{"doAnalysis", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)V", nullptr, 0, $virtualMethod(Analyzer, doAnalysis, void, $Analyzer$RewritingContext*)},
		{"flush", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC, $virtualMethod(Analyzer, flush, void, $Env*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $PUBLIC | $STATIC, $staticMethod(Analyzer, instance, Analyzer*, $Context*)},
		{"lambda$doAnalysis$0", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)Lcom/sun/tools/javac/util/Log$DiagnosticHandler;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Analyzer, lambda$doAnalysis$0, $Log$DiagnosticHandler*, $Analyzer$RewritingContext*)},
		{"lambda$doAnalysis$1", "(Ljava/lang/StackTraceElement;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Analyzer, lambda$doAnalysis$1, $String*, $StackTraceElement*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Analyzer$TreeRewriter", "com.sun.tools.javac.comp.Analyzer", "TreeRewriter", 0},
		{"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier", "com.sun.tools.javac.comp.Analyzer", "AnalyzerCopier", 0},
		{"com.sun.tools.javac.comp.Analyzer$RewritingContext", "com.sun.tools.javac.comp.Analyzer", "RewritingContext", 0},
		{"com.sun.tools.javac.comp.Analyzer$StatementScanner", "com.sun.tools.javac.comp.Analyzer", "StatementScanner", 0},
		{"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper", "com.sun.tools.javac.comp.Analyzer", "DeferredAnalysisHelper", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerForEach", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzerForEach", 0},
		{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzer", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzer", 0},
		{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzerBase", $ABSTRACT},
		{"com.sun.tools.javac.comp.Analyzer$RedundantTypeArgAnalyzer", "com.sun.tools.javac.comp.Analyzer", "RedundantTypeArgAnalyzer", 0},
		{"com.sun.tools.javac.comp.Analyzer$LambdaAnalyzer", "com.sun.tools.javac.comp.Analyzer", "LambdaAnalyzer", 0},
		{"com.sun.tools.javac.comp.Analyzer$DiamondInitializer", "com.sun.tools.javac.comp.Analyzer", "DiamondInitializer", 0},
		{"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer", "com.sun.tools.javac.comp.Analyzer", "StatementAnalyzer", $ABSTRACT},
		{"com.sun.tools.javac.comp.Analyzer$AnalyzerMode", "com.sun.tools.javac.comp.Analyzer", "AnalyzerMode", $STATIC | $FINAL | $ENUM},
		{"com.sun.tools.javac.comp.Analyzer$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Analyzer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.Analyzer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Analyzer$TreeRewriter,com.sun.tools.javac.comp.Analyzer$AnalyzerCopier,com.sun.tools.javac.comp.Analyzer$RewritingContext,com.sun.tools.javac.comp.Analyzer$StatementScanner,com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper,com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerForEach,com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzer,com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase,com.sun.tools.javac.comp.Analyzer$RedundantTypeArgAnalyzer,com.sun.tools.javac.comp.Analyzer$LambdaAnalyzer,com.sun.tools.javac.comp.Analyzer$DiamondInitializer,com.sun.tools.javac.comp.Analyzer$StatementAnalyzer,com.sun.tools.javac.comp.Analyzer$AnalyzerMode,com.sun.tools.javac.comp.Analyzer$2,com.sun.tools.javac.comp.Analyzer$1"
	};
	$loadClass(Analyzer, name, initialize, &classInfo$$, Analyzer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Analyzer);
	});
	return class$;
}

$Class* Analyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com