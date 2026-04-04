#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerMode.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$AnalyzerMode = ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Analyzer$StatementAnalyzer::init$($Analyzer* this$0, $Analyzer$AnalyzerMode* mode, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$set(this, mode, mode);
	$set(this, tag, tag);
}

bool Analyzer$StatementAnalyzer::isEnabled() {
	return $nc(this->this$0->analyzerModes)->contains(this->mode);
}

Analyzer$StatementAnalyzer::Analyzer$StatementAnalyzer() {
}

$Class* Analyzer$StatementAnalyzer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$StatementAnalyzer, this$0)},
		{"mode", "Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, 0, $field(Analyzer$StatementAnalyzer, mode)},
		{"tag", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, 0, $field(Analyzer$StatementAnalyzer, tag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(Analyzer$StatementAnalyzer, init$, void, $Analyzer*, $Analyzer$AnalyzerMode*, $JCTree$Tag*)},
		{"isEnabled", "()Z", nullptr, 0, $virtualMethod(Analyzer$StatementAnalyzer, isEnabled, bool)},
		{"match", "(Lcom/sun/tools/javac/tree/JCTree;)Z", "(TS;)Z", $ABSTRACT, $virtualMethod(Analyzer$StatementAnalyzer, match, bool, $JCTree*)},
		{"process", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Z)V", "(TS;TT;Z)V", $ABSTRACT, $virtualMethod(Analyzer$StatementAnalyzer, process, void, $JCTree*, $JCTree*, bool)},
		{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List;", "(TS;)Lcom/sun/tools/javac/util/List<TT;>;", $ABSTRACT, $virtualMethod(Analyzer$StatementAnalyzer, rewrite, $List*, $JCTree*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer", "com.sun.tools.javac.comp.Analyzer", "StatementAnalyzer", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<S:Lcom/sun/tools/javac/tree/JCTree;T:Lcom/sun/tools/javac/tree/JCTree;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Analyzer"
	};
	$loadClass(Analyzer$StatementAnalyzer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Analyzer$StatementAnalyzer);
	});
	return class$;
}

$Class* Analyzer$StatementAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com