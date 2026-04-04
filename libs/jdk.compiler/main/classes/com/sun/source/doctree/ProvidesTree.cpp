#include <com/sun/source/doctree/ProvidesTree.h>
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

$Class* ProvidesTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ProvidesTree, getDescription, $List*)},
		{"getServiceType", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProvidesTree, getServiceType, $ReferenceTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.ProvidesTree",
		nullptr,
		"com.sun.source.doctree.BlockTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProvidesTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProvidesTree);
	});
	return class$;
}

$Class* ProvidesTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com