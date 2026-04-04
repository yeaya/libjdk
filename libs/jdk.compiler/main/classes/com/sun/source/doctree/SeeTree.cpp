#include <com/sun/source/doctree/SeeTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* SeeTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getReference", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SeeTree, getReference, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.SeeTree",
		nullptr,
		"com.sun.source.doctree.BlockTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(SeeTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SeeTree);
	});
	return class$;
}

$Class* SeeTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com