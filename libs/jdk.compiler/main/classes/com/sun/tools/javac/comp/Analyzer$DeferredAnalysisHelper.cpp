#include <com/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper.h>
#include <com/sun/tools/javac/comp/Analyzer$RewritingContext.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <jcpp.h>

using $Analyzer$RewritingContext = ::com::sun::tools::javac::comp::Analyzer$RewritingContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Class* Analyzer$DeferredAnalysisHelper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"flush", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Analyzer$DeferredAnalysisHelper, flush, void, $Env*)},
		{"queue", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Analyzer$DeferredAnalysisHelper, queue, void, $Analyzer$RewritingContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper", "com.sun.tools.javac.comp.Analyzer", "DeferredAnalysisHelper", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Analyzer"
	};
	$loadClass(Analyzer$DeferredAnalysisHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Analyzer$DeferredAnalysisHelper);
	});
	return class$;
}

$Class* Analyzer$DeferredAnalysisHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com