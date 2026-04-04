#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/Enum.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef BLOCK
#undef CASE
#undef CATCH
#undef DOLOOP
#undef FOREACHLOOP
#undef FORLOOP
#undef IF
#undef RETURN
#undef SWITCH
#undef SYNCHRONIZED
#undef TRY
#undef WHILELOOP

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $EnumArray = $Array<::java::lang::Enum>;
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

void DeferredAttr$LambdaReturnScanner::init$() {
	$useLocalObjectStack();
	$init($JCTree$Tag);
	$DeferredAttr$FilterScanner::init$($($EnumSet::of($JCTree$Tag::BLOCK, $$cast($EnumArray, $new($JCTree$TagArray, {
		$JCTree$Tag::CASE,
		$JCTree$Tag::CATCH,
		$JCTree$Tag::DOLOOP,
		$JCTree$Tag::FOREACHLOOP,
		$JCTree$Tag::FORLOOP,
		$JCTree$Tag::IF,
		$JCTree$Tag::RETURN,
		$JCTree$Tag::SYNCHRONIZED,
		$JCTree$Tag::SWITCH,
		$JCTree$Tag::TRY,
		$JCTree$Tag::WHILELOOP
	})))));
}

DeferredAttr$LambdaReturnScanner::DeferredAttr$LambdaReturnScanner() {
}

$Class* DeferredAttr$LambdaReturnScanner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DeferredAttr$LambdaReturnScanner, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner", "com.sun.tools.javac.comp.DeferredAttr", "LambdaReturnScanner", $STATIC},
		{"com.sun.tools.javac.comp.DeferredAttr$FilterScanner", "com.sun.tools.javac.comp.DeferredAttr", "FilterScanner", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner",
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
	$loadClass(DeferredAttr$LambdaReturnScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$LambdaReturnScanner);
	});
	return class$;
}

$Class* DeferredAttr$LambdaReturnScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com