#include <com/sun/tools/javac/comp/Lower$TreeBuilder.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <jcpp.h>

using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Class* Lower$TreeBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"build", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lower$TreeBuilder, build, $JCTree$JCExpression*, $JCTree$JCExpression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Lower$TreeBuilder", "com.sun.tools.javac.comp.Lower", "TreeBuilder", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.Lower$TreeBuilder",
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
		"com.sun.tools.javac.comp.Lower"
	};
	$loadClass(Lower$TreeBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lower$TreeBuilder);
	});
	return class$;
}

$Class* Lower$TreeBuilder::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com