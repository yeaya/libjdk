#include <com/sun/tools/javac/comp/Modules$2.h>
#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Modules$ModuleVisitor.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/Log.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Modules$ModuleVisitor = ::com::sun::tools::javac::comp::Modules$ModuleVisitor;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Modules$2::init$($Modules* this$0, $JCTree$JCCompilationUnit* val$tree) {
	$set(this, this$0, this$0);
	$set(this, val$tree, val$tree);
}

void Modules$2::complete($Symbol* sym) {
	$useLocalObjectStack();
	$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, sym));
	$nc(msym)->flags_field |= 0x10000000;
	$var($Modules$ModuleVisitor, v, $new($Modules$ModuleVisitor, this->this$0));
	$var($JavaFileObject, prev, $nc(this->this$0->log)->useSource($nc(this->val$tree)->sourcefile));
	$var($JCTree$JCModuleDecl, moduleDecl, this->val$tree->getModuleDecl());
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->this$0->deferredLintHandler)->setPos($($nc(moduleDecl)->pos())));
	$var($Throwable, var$0, nullptr);
	try {
		moduleDecl->accept(v);
		this->this$0->completeModule(msym);
		this->this$0->checkCyclicDependencies(moduleDecl);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->this$0->log->useSource(prev);
		this->this$0->deferredLintHandler->setPos(prevLintPos);
		msym->flags_field &= (uint64_t)~0x10000000;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$String* Modules$2::toString() {
	return $str({"SourceCompleter: "_s, $($nc($nc(this->val$tree)->sourcefile)->getName())});
}

Modules$2::Modules$2() {
}

$Class* Modules$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Modules;", nullptr, $FINAL | $SYNTHETIC, $field(Modules$2, this$0)},
		{"val$tree", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $FINAL | $SYNTHETIC, $field(Modules$2, val$tree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Modules;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", "()V", 0, $method(Modules$2, init$, void, $Modules*, $JCTree$JCCompilationUnit*)},
		{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(Modules$2, complete, void, $Symbol*), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Modules$2, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Modules",
		"getSourceCompleter",
		"(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/code/Symbol$Completer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Modules$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.tree.JCTree$JCCompilationUnit", "com.sun.tools.javac.tree.JCTree", "JCCompilationUnit", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Modules$2",
		"java.lang.Object",
		"com.sun.tools.javac.code.Symbol$Completer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Modules"
	};
	$loadClass(Modules$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$2);
	});
	return class$;
}

$Class* Modules$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com