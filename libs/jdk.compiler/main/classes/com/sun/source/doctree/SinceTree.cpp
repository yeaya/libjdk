#include <com/sun/source/doctree/SinceTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* SinceTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SinceTree, getBody, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.SinceTree",
		nullptr,
		"com.sun.source.doctree.BlockTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(SinceTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SinceTree);
	});
	return class$;
}

$Class* SinceTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com