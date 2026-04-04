#include <com/sun/tools/javac/comp/Resolve$9.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveDeferredRecoveryMap.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef SPECULATIVE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$ResolveDeferredRecoveryMap = ::com::sun::tools::javac::comp::Resolve$ResolveDeferredRecoveryMap;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
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

void Resolve$9::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
}

bool Resolve$9::resolveDiagnosticNeeded($Type* site, $List* argtypes, $List* typeargtypes) {
	bool var$1 = !$nc(site)->isErroneous();
	bool var$0 = var$1 && !$Type::isErroneous(argtypes);
	return var$0 && (typeargtypes == nullptr || !$Type::isErroneous(typeargtypes));
}

$List* Resolve$9::getArgumentTypes($Resolve$ResolveError* errSym, $Symbol* accessedSym, $Name* name, $List* argtypes) {
	$init($DeferredAttr$AttrMode);
	return $nc(argtypes)->map($$new($Resolve$ResolveDeferredRecoveryMap, this->this$0, $DeferredAttr$AttrMode::SPECULATIVE, accessedSym, $nc(this->this$0->currentResolutionContext)->step));
}

Resolve$9::Resolve$9() {
}

$Class* Resolve$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$9, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(Resolve$9, init$, void, $Resolve*)},
		{"getArgumentTypes", "(Lcom/sun/tools/javac/comp/Resolve$ResolveError;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/comp/Resolve$ResolveError;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Resolve$9, getArgumentTypes, $List*, $Resolve$ResolveError*, $Symbol*, $Name*, $List*)},
		{"resolveDiagnosticNeeded", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC, $virtualMethod(Resolve$9, resolveDiagnosticNeeded, bool, $Type*, $List*, $List*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$9", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$LogResolveHelper", "com.sun.tools.javac.comp.Resolve", "LogResolveHelper", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$9",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Resolve$LogResolveHelper",
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
	$loadClass(Resolve$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$9);
	});
	return class$;
}

$Class* Resolve$9::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com