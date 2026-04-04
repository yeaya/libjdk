#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$Class* EndPosTable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEndPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EndPosTable, getEndPos, int32_t, $JCTree*)},
		{"replaceTree", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EndPosTable, replaceTree, int32_t, $JCTree*, $JCTree*)},
		{"storeEnd", "(Lcom/sun/tools/javac/tree/JCTree;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EndPosTable, storeEnd, void, $JCTree*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.tree.EndPosTable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EndPosTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EndPosTable);
	});
	return class$;
}

$Class* EndPosTable::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com