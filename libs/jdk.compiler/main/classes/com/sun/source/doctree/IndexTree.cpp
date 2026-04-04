#include <com/sun/source/doctree/IndexTree.h>
#include <com/sun/source/doctree/DocTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* IndexTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(IndexTree, getDescription, $List*)},
		{"getSearchTerm", "()Lcom/sun/source/doctree/DocTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IndexTree, getSearchTerm, $DocTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.IndexTree",
		nullptr,
		"com.sun.source.doctree.InlineTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(IndexTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IndexTree);
	});
	return class$;
}

$Class* IndexTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com