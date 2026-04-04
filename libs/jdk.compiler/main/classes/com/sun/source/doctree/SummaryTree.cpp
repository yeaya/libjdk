#include <com/sun/source/doctree/SummaryTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* SummaryTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getSummary", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SummaryTree, getSummary, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.SummaryTree",
		nullptr,
		"com.sun.source.doctree.InlineTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(SummaryTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SummaryTree);
	});
	return class$;
}

$Class* SummaryTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com