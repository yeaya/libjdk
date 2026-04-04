#include <com/sun/tools/javac/comp/Enter$UnenterScanner.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Enter$UnenterScanner::init$($Enter* this$0, $Symbol$ModuleSymbol* msym) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	$set(this, msym, msym);
}

void Enter$UnenterScanner::visitClassDef($JCTree$JCClassDecl* tree) {
	$var($Symbol$ClassSymbol, csym, $nc(tree)->sym);
	if (csym == nullptr) {
		return;
	}
	$nc(this->this$0->typeEnvs)->remove(csym);
	$nc(this->this$0->chk)->removeCompiled(csym);
	$nc(this->this$0->chk)->clearLocalClassNameIndexes(csym);
	$nc(this->this$0->syms)->removeClass(this->msym, $nc(csym)->flatname);
	$TreeScanner::visitClassDef(tree);
}

Enter$UnenterScanner::Enter$UnenterScanner() {
}

$Class* Enter$UnenterScanner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $FINAL | $SYNTHETIC, $field(Enter$UnenterScanner, this$0)},
		{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE | $FINAL, $field(Enter$UnenterScanner, msym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Enter;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(Enter$UnenterScanner, init$, void, $Enter*, $Symbol$ModuleSymbol*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(Enter$UnenterScanner, visitClassDef, void, $JCTree$JCClassDecl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Enter$UnenterScanner", "com.sun.tools.javac.comp.Enter", "UnenterScanner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Enter$UnenterScanner",
		"com.sun.tools.javac.tree.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Enter"
	};
	$loadClass(Enter$UnenterScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Enter$UnenterScanner);
	});
	return class$;
}

$Class* Enter$UnenterScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com