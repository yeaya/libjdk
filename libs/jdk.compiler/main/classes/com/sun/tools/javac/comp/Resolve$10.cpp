#include <com/sun/tools/javac/comp/Resolve$10.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$BasicLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$BasicLookupHelper = ::com::sun::tools::javac::comp::Resolve$BasicLookupHelper;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
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

void Resolve$10::init$($Resolve* this$0, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes) {
	$set(this, this$0, this$0);
	$Resolve$BasicLookupHelper::init$(this$0, name, site, argtypes, typeargtypes);
}

$Symbol* Resolve$10::doLookup($Env* env, $Resolve$MethodResolutionPhase* phase) {
	$useLocalObjectStack();
	$var($Name, var$0, this->name);
	$var($List, var$1, this->argtypes);
	$var($List, var$2, this->typeargtypes);
	bool var$3 = $nc(phase)->isBoxingRequired();
	return this->this$0->findFun(env, var$0, var$1, var$2, var$3, phase->isVarargsRequired());
}

Resolve$10::Resolve$10() {
}

$Class* Resolve$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$10, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", nullptr, 0, $method(Resolve$10, init$, void, $Resolve*, $Name*, $Type*, $List*, $List*)},
		{"doLookup", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve$10, doLookup, $Symbol*, $Env*, $Resolve$MethodResolutionPhase*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve",
		"resolveMethod",
		"(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$10", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$BasicLookupHelper", "com.sun.tools.javac.comp.Resolve", "BasicLookupHelper", $ABSTRACT},
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$10",
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
	$loadClass(Resolve$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$10);
	});
	return class$;
}

$Class* Resolve$10::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com