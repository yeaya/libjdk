#include <com/sun/tools/javac/comp/Resolve$16.h>
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

void Resolve$16::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$Resolve$ReferenceChooser::init$(this$0);
}

$Resolve$ReferenceLookupResult* Resolve$16::boundResult($Resolve$ReferenceLookupResult* boundRes) {
	bool var$0 = !$nc(boundRes)->isSuccess();
	$init($Resolve$ReferenceLookupResult$StaticKind);
	return var$0 || boundRes->hasKind($Resolve$ReferenceLookupResult$StaticKind::NON_STATIC) ? boundRes : $Resolve$ReferenceLookupResult::error($$new($Resolve$BadMethodReferenceError, this->this$0, boundRes->sym, false));
}

$Resolve$ReferenceLookupResult* Resolve$16::unboundResult($Resolve$ReferenceLookupResult* boundRes, $Resolve$ReferenceLookupResult* unboundRes) {
	$useLocalObjectStack();
	bool var$1 = $nc(boundRes)->isSuccess();
	bool var$0 = var$1 && $nc(boundRes->sym)->isStatic();
	if (var$0) {
		bool var$2 = !$nc(unboundRes)->isSuccess();
		$init($Resolve$ReferenceLookupResult$StaticKind);
		var$0 = var$2 || unboundRes->hasKind($Resolve$ReferenceLookupResult$StaticKind::STATIC);
	}
	if (var$0) {
		return boundRes;
	} else {
		bool var$4 = $nc(unboundRes)->isSuccess();
		bool var$3 = var$4 && !$nc(unboundRes->sym)->isStatic();
		if (var$3) {
			bool var$5 = !boundRes->isSuccess();
			$init($Resolve$ReferenceLookupResult$StaticKind);
			var$3 = var$5 || boundRes->hasKind($Resolve$ReferenceLookupResult$StaticKind::NON_STATIC);
		}
		if (var$3) {
			return unboundRes;
		} else {
			bool var$6 = boundRes->isSuccess();
			if (var$6 && unboundRes->isSuccess()) {
				return $Resolve$ReferenceLookupResult::error($(this->this$0->ambiguityError(boundRes->sym, unboundRes->sym)));
			} else {
				bool var$7 = boundRes->isSuccess();
				if (var$7 || unboundRes->isSuccess()) {
					return $Resolve$ReferenceLookupResult::error($$new($Resolve$BadMethodReferenceError, this->this$0, boundRes->isSuccess() ? boundRes->sym : unboundRes->sym, true));
				} else {
					bool var$8 = boundRes->canIgnore();
					return (var$8 && !unboundRes->canIgnore()) ? unboundRes : boundRes;
				}
			}
		}
	}
}

Resolve$16::Resolve$16() {
}

$Class* Resolve$16::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$16, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(Resolve$16, init$, void, $Resolve*)},
		{"boundResult", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, 0, $virtualMethod(Resolve$16, boundResult, $Resolve$ReferenceLookupResult*, $Resolve$ReferenceLookupResult*)},
		{"unboundResult", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, 0, $virtualMethod(Resolve$16, unboundResult, $Resolve$ReferenceLookupResult*, $Resolve$ReferenceLookupResult*, $Resolve$ReferenceLookupResult*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$16", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$ReferenceChooser", "com.sun.tools.javac.comp.Resolve", "ReferenceChooser", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$16",
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
	$loadClass(Resolve$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$16);
	});
	return class$;
}

$Class* Resolve$16::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com