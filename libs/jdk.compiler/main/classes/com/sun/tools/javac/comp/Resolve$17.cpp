#include <com/sun/tools/javac/comp/Resolve$17.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve$BadMethodReferenceError.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceChooser.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <jcpp.h>

#undef NON_STATIC
#undef STATIC

using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$BadMethodReferenceError = ::com::sun::tools::javac::comp::Resolve$BadMethodReferenceError;
using $Resolve$ReferenceChooser = ::com::sun::tools::javac::comp::Resolve$ReferenceChooser;
using $Resolve$ReferenceLookupResult = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult;
using $Resolve$ReferenceLookupResult$StaticKind = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind;
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

void Resolve$17::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$Resolve$ReferenceChooser::init$(this$0);
}

$Resolve$ReferenceLookupResult* Resolve$17::boundResult($Resolve$ReferenceLookupResult* boundRes) {
	bool var$0 = !$nc(boundRes)->isSuccess();
	$init($Resolve$ReferenceLookupResult$StaticKind);
	return (var$0 || !boundRes->hasKind($Resolve$ReferenceLookupResult$StaticKind::STATIC)) ? boundRes : $Resolve$ReferenceLookupResult::error($$new($Resolve$BadMethodReferenceError, this->this$0, boundRes->sym, false));
}

$Resolve$ReferenceLookupResult* Resolve$17::unboundResult($Resolve$ReferenceLookupResult* boundRes, $Resolve$ReferenceLookupResult* unboundRes) {
	bool var$0 = $nc(boundRes)->isSuccess();
	$init($Resolve$ReferenceLookupResult$StaticKind);
	if (var$0 && !boundRes->hasKind($Resolve$ReferenceLookupResult$StaticKind::NON_STATIC)) {
		return boundRes;
	} else {
		bool var$1 = $nc(unboundRes)->isSuccess();
		if (var$1 && !unboundRes->hasKind($Resolve$ReferenceLookupResult$StaticKind::STATIC)) {
			return unboundRes;
		} else {
			bool var$2 = boundRes->isSuccess();
			if (var$2 || unboundRes->isSuccess()) {
				return $Resolve$ReferenceLookupResult::error($$new($Resolve$BadMethodReferenceError, this->this$0, boundRes->isSuccess() ? boundRes->sym : unboundRes->sym, true));
			} else {
				bool var$3 = boundRes->canIgnore();
				return (var$3 && !unboundRes->canIgnore()) ? unboundRes : boundRes;
			}
		}
	}
}

Resolve$17::Resolve$17() {
}

$Class* Resolve$17::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$17, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(Resolve$17, init$, void, $Resolve*)},
		{"boundResult", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, 0, $virtualMethod(Resolve$17, boundResult, $Resolve$ReferenceLookupResult*, $Resolve$ReferenceLookupResult*)},
		{"unboundResult", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, 0, $virtualMethod(Resolve$17, unboundResult, $Resolve$ReferenceLookupResult*, $Resolve$ReferenceLookupResult*, $Resolve$ReferenceLookupResult*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$17", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$ReferenceChooser", "com.sun.tools.javac.comp.Resolve", "ReferenceChooser", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$17",
		"com.sun.tools.javac.comp.Resolve$ReferenceChooser",
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
	$loadClass(Resolve$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$17);
	});
	return class$;
}

$Class* Resolve$17::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com