#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* UnknownBlockTagTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContent", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(UnknownBlockTagTree, getContent, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.UnknownBlockTagTree",
		nullptr,
		"com.sun.source.doctree.BlockTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(UnknownBlockTagTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownBlockTagTree);
	});
	return class$;
}

$Class* UnknownBlockTagTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com