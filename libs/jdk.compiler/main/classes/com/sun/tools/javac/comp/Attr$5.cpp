#include <com/sun/tools/javac/comp/Attr$5.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
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

void Attr$5::init$($Attr* this$0, $Check$CheckContext* enclosingContext) {
	$set(this, this$0, this$0);
	$Check$NestedCheckContext::init$(enclosingContext);
}

void Attr$5::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	$useLocalObjectStack();
	$nc(this->enclosingContext)->report(pos, $($nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::IncompatibleTypeInConditional(details)))));
}

Attr$5::Attr$5() {
}

$Class* Attr$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$5, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, 0, $method(Attr$5, init$, void, $Attr*, $Check$CheckContext*)},
		{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC, $virtualMethod(Attr$5, report, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Attr",
		"conditionalContext",
		"(Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Check$CheckContext;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$5", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
		{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Attr$5",
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
	$loadClass(Attr$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attr$5);
	});
	return class$;
}

$Class* Attr$5::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com