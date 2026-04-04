#include <com/sun/tools/javac/comp/DeferredAttr$PolyScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef CONDEXPR
#undef LAMBDA
#undef PARENS
#undef REFERENCE
#undef SWITCH_EXPRESSION

using $DeferredAttr$FilterScanner = ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void DeferredAttr$PolyScanner::init$() {
	$init($JCTree$Tag);
	$DeferredAttr$FilterScanner::init$($($EnumSet::of($JCTree$Tag::CONDEXPR, $JCTree$Tag::PARENS, $JCTree$Tag::LAMBDA, $JCTree$Tag::REFERENCE, $JCTree$Tag::SWITCH_EXPRESSION)));
}

DeferredAttr$PolyScanner::DeferredAttr$PolyScanner() {
}

$Class* DeferredAttr$PolyScanner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DeferredAttr$PolyScanner, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$PolyScanner", "com.sun.tools.javac.comp.DeferredAttr", "PolyScanner", $STATIC},
		{"com.sun.tools.javac.comp.DeferredAttr$FilterScanner", "com.sun.tools.javac.comp.DeferredAttr", "FilterScanner", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$PolyScanner",
		"com.sun.tools.javac.comp.DeferredAttr$FilterScanner",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$PolyScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$PolyScanner);
	});
	return class$;
}

$Class* DeferredAttr$PolyScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com