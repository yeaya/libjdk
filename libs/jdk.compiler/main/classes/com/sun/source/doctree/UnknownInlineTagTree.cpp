#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* UnknownInlineTagTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContent", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(UnknownInlineTagTree, getContent, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.UnknownInlineTagTree",
		nullptr,
		"com.sun.source.doctree.InlineTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(UnknownInlineTagTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownInlineTagTree);
	});
	return class$;
}

$Class* UnknownInlineTagTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com