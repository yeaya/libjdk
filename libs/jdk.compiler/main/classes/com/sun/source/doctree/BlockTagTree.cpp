#include <com/sun/source/doctree/BlockTagTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* BlockTagTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BlockTagTree, getTagName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.BlockTagTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(BlockTagTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BlockTagTree);
	});
	return class$;
}

$Class* BlockTagTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com