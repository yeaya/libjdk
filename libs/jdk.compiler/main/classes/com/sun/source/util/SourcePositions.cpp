#include <com/sun/source/util/SourcePositions.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/Tree.h>
#include <jcpp.h>

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$Class* SourcePositions::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEndPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourcePositions, getEndPosition, int64_t, $CompilationUnitTree*, $Tree*)},
		{"getStartPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourcePositions, getStartPosition, int64_t, $CompilationUnitTree*, $Tree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.util.SourcePositions",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SourcePositions, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SourcePositions);
	});
	return class$;
}

$Class* SourcePositions::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com