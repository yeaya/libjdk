#include <com/sun/tools/javac/comp/Resolve$13.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$BasicLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$BasicLookupHelper = ::com::sun::tools::javac::comp::Resolve$BasicLookupHelper;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
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

void Resolve$13::init$($Resolve* this$0, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes, $JCDiagnostic$DiagnosticPosition* val$pos) {
	$set(this, this$0, this$0);
	$set(this, val$pos, val$pos);
	$Resolve$BasicLookupHelper::init$(this$0, name, site, argtypes, typeargtypes);
}

$Symbol* Resolve$13::doLookup($Env* env, $Resolve$MethodResolutionPhase* phase) {
	$useLocalObjectStack();
	$var($JCDiagnostic$DiagnosticPosition, var$0, this->val$pos);
	$var($Type, var$1, this->site);
	$var($List, var$2, this->argtypes);
	$var($List, var$3, this->typeargtypes);
	bool var$4 = $nc(phase)->isBoxingRequired();
	return this->this$0->findConstructor(var$0, env, var$1, var$2, var$3, var$4, phase->isVarargsRequired());
}

Resolve$13::Resolve$13() {
}

$Class* Resolve$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$13, this$0)},
		{"val$pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$13, val$pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, 0, $method(Resolve$13, init$, void, $Resolve*, $Name*, $Type*, $List*, $List*, $JCDiagnostic$DiagnosticPosition*)},
		{"doLookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve$13, doLookup, $Symbol*, $Env*, $Resolve$MethodResolutionPhase*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve",
		"resolveConstructor",
		"(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$13", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$BasicLookupHelper", "com.sun.tools.javac.comp.Resolve", "BasicLookupHelper", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionContext", "com.sun.tools.javac.comp.Resolve", "MethodResolutionContext", 0},
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$13",
		"com.sun.tools.javac.comp.Resolve$BasicLookupHelper",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$13);
	});
	return class$;
}

$Class* Resolve$13::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com