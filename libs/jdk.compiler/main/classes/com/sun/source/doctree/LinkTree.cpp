#include <com/sun/source/doctree/LinkTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* LinkTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLabel", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(LinkTree, getLabel, $List*)},
		{"getReference", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LinkTree, getReference, $ReferenceTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.LinkTree",
		nullptr,
		"com.sun.source.doctree.InlineTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(LinkTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkTree);
	});
	return class$;
}

$Class* LinkTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com