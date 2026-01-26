#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerBase.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerMode.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef LOCAL
#undef NOPOS

using $Types = ::com::sun::tools::javac::code::Types;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$AnalyzerCopier = ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier;
using $Analyzer$AnalyzerMode = ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode;
using $Analyzer$StatementAnalyzer = ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $Log = ::com::sun::tools::javac::util::Log;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Analyzer$RedundantLocalVarTypeAnalyzerBase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$RedundantLocalVarTypeAnalyzerBase, this$0)},
	{}
};

$MethodInfo _Analyzer$RedundantLocalVarTypeAnalyzerBase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(Analyzer$RedundantLocalVarTypeAnalyzerBase, init$, void, $Analyzer*, $JCTree$Tag*)},
	{"isImplicitlyTyped", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, 0, $virtualMethod(Analyzer$RedundantLocalVarTypeAnalyzerBase, isImplicitlyTyped, bool, $JCTree$JCVariableDecl*)},
	{"processVar", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Z)V", nullptr, 0, $virtualMethod(Analyzer$RedundantLocalVarTypeAnalyzerBase, processVar, void, $JCTree$JCVariableDecl*, $JCTree$JCVariableDecl*, bool)},
	{"rewriteVarType", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, 0, $virtualMethod(Analyzer$RedundantLocalVarTypeAnalyzerBase, rewriteVarType, $JCTree$JCVariableDecl*, $JCTree$JCVariableDecl*)},
	{}
};

$InnerClassInfo _Analyzer$RedundantLocalVarTypeAnalyzerBase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzerBase", $ABSTRACT},
	{"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer", "com.sun.tools.javac.comp.Analyzer", "StatementAnalyzer", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Analyzer$RedundantLocalVarTypeAnalyzerBase_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase",
	"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer",
	nullptr,
	_Analyzer$RedundantLocalVarTypeAnalyzerBase_FieldInfo_,
	_Analyzer$RedundantLocalVarTypeAnalyzerBase_MethodInfo_,
	"<X:Lcom/sun/tools/javac/tree/JCTree$JCStatement;>Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer<TX;TX;>;",
	nullptr,
	_Analyzer$RedundantLocalVarTypeAnalyzerBase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$RedundantLocalVarTypeAnalyzerBase($Class* clazz) {
	return $of($alloc(Analyzer$RedundantLocalVarTypeAnalyzerBase));
}

void Analyzer$RedundantLocalVarTypeAnalyzerBase::init$($Analyzer* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$init($Analyzer$AnalyzerMode);
	$Analyzer$StatementAnalyzer::init$(this$0, $Analyzer$AnalyzerMode::LOCAL, tag);
}

bool Analyzer$RedundantLocalVarTypeAnalyzerBase::isImplicitlyTyped($JCTree$JCVariableDecl* decl) {
	return $nc($nc(decl)->vartype)->pos$ == $Position::NOPOS;
}

$JCTree$JCVariableDecl* Analyzer$RedundantLocalVarTypeAnalyzerBase::rewriteVarType($JCTree$JCVariableDecl* oldTree) {
	$var($JCTree$JCVariableDecl, newTree, $cast($JCTree$JCVariableDecl, $nc(this->this$0->copier)->copy(static_cast<$JCTree*>(oldTree))));
	$set($nc(newTree), vartype, nullptr);
	return newTree;
}

void Analyzer$RedundantLocalVarTypeAnalyzerBase::processVar($JCTree$JCVariableDecl* oldTree, $JCTree$JCVariableDecl* newTree, bool hasErrors) {
	if (!hasErrors) {
		if ($nc(this->this$0->types)->isSameType($nc(oldTree)->type, $nc(newTree)->type)) {
			$init($CompilerProperties$Warnings);
			$nc(this->this$0->log)->warning(static_cast<$JCDiagnostic$DiagnosticPosition*>(oldTree), $CompilerProperties$Warnings::LocalRedundantType);
		}
	}
}

Analyzer$RedundantLocalVarTypeAnalyzerBase::Analyzer$RedundantLocalVarTypeAnalyzerBase() {
}

$Class* Analyzer$RedundantLocalVarTypeAnalyzerBase::load$($String* name, bool initialize) {
	$loadClass(Analyzer$RedundantLocalVarTypeAnalyzerBase, name, initialize, &_Analyzer$RedundantLocalVarTypeAnalyzerBase_ClassInfo_, allocate$Analyzer$RedundantLocalVarTypeAnalyzerBase);
	return class$;
}

$Class* Analyzer$RedundantLocalVarTypeAnalyzerBase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com