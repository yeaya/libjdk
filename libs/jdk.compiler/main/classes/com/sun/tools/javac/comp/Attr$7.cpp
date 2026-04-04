#include <com/sun/tools/javac/comp/Attr$7.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Attr$7::init$($Attr* this$0, $Check$CheckContext* enclosingContext, $JCTree$JCNewClass* val$clazz, $Symbol$TypeSymbol* val$tsym) {
	$set(this, this$0, this$0);
	$set(this, val$clazz, val$clazz);
	$set(this, val$tsym, val$tsym);
	$Check$NestedCheckContext::init$(enclosingContext);
}

void Attr$7::report($JCDiagnostic$DiagnosticPosition* _unused, $JCDiagnostic* details) {
	$useLocalObjectStack();
	$nc(this->enclosingContext)->report($nc(this->val$clazz)->clazz, $($nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::CantApplyDiamond1($($CompilerProperties$Fragments::Diamond(this->val$tsym)), details)))));
}

Attr$7::Attr$7() {
}

$Class* Attr$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$7, this$0)},
		{"val$tsym", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$7, val$tsym)},
		{"val$clazz", "Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$7, val$clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(Attr$7, init$, void, $Attr*, $Check$CheckContext*, $JCTree$JCNewClass*, $Symbol$TypeSymbol*)},
		{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC, $virtualMethod(Attr$7, report, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Attr",
		"diamondContext",
		"(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Check$CheckContext;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$7", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCNewClass", "com.sun.tools.javac.tree.JCTree", "JCNewClass", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Attr$7",
		"com.sun.tools.javac.comp.Check$NestedCheckContext",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Attr"
	};
	$loadClass(Attr$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attr$7);
	});
	return class$;
}

$Class* Attr$7::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com