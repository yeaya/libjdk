#include <com/sun/tools/javac/comp/Attr$11.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Pair = ::com::sun::tools::javac::util::Pair;
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

void Attr$11::init$($Attr* this$0, $Resolve* x0, $Resolve$MethodResolutionContext* context, $Symbol* val$sym, $JCDiagnostic* val$diag) {
	$set(this, this$0, this$0);
	$set(this, val$sym, val$sym);
	$set(this, val$diag, val$diag);
	$Resolve$InapplicableSymbolError::init$($nc(x0), context);
}

$Pair* Attr$11::errCandidate() {
	return $new($Pair, this->val$sym, this->val$diag);
}

Attr$11::Attr$11() {
}

$Class* Attr$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$11, this$0)},
		{"val$diag", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$11, val$diag)},
		{"val$sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$11, val$sym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(Attr$11, init$, void, $Attr*, $Resolve*, $Resolve$MethodResolutionContext*, $Symbol*, $JCDiagnostic*)},
		{"errCandidate", "()Lcom/sun/tools/javac/util/Pair;", "()Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PROTECTED, $virtualMethod(Attr$11, errCandidate, $Pair*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Attr",
		"checkMethod",
		"(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$11", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolError", 0},
		{"com.sun.tools.javac.comp.Attr$ResultInfo", "com.sun.tools.javac.comp.Attr", "ResultInfo", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Attr$11",
		"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError",
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
	$loadClass(Attr$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Attr$11));
	});
	return class$;
}

$Class* Attr$11::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com