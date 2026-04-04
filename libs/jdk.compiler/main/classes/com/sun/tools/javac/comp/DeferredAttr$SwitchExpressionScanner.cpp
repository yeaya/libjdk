#include <com/sun/tools/javac/comp/DeferredAttr$SwitchExpressionScanner.h>
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
#undef SWITCH
#undef SYNCHRONIZED
#undef TRY
#undef WHILELOOP
#undef YIELD

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

void DeferredAttr$SwitchExpressionScanner::init$() {
	$useLocalObjectStack();
	$init($JCTree$Tag);
	$DeferredAttr$FilterScanner::init$($($EnumSet::of($JCTree$Tag::BLOCK, $$cast($EnumArray, $new($JCTree$TagArray, {
		$JCTree$Tag::CASE,
		$JCTree$Tag::CATCH,
		$JCTree$Tag::DOLOOP,
		$JCTree$Tag::FOREACHLOOP,
		$JCTree$Tag::FORLOOP,
		$JCTree$Tag::IF,
		$JCTree$Tag::SYNCHRONIZED,
		$JCTree$Tag::SWITCH,
		$JCTree$Tag::TRY,
		$JCTree$Tag::WHILELOOP,
		$JCTree$Tag::YIELD
	})))));
}

DeferredAttr$SwitchExpressionScanner::DeferredAttr$SwitchExpressionScanner() {
}

$Class* DeferredAttr$SwitchExpressionScanner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DeferredAttr$SwitchExpressionScanner, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner", "com.sun.tools.javac.comp.DeferredAttr", "SwitchExpressionScanner", $STATIC},
		{"com.sun.tools.javac.comp.DeferredAttr$FilterScanner", "com.sun.tools.javac.comp.DeferredAttr", "FilterScanner", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner",
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
	$loadClass(DeferredAttr$SwitchExpressionScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$SwitchExpressionScanner);
	});
	return class$;
}

$Class* DeferredAttr$SwitchExpressionScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com