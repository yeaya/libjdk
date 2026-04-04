#include <com/sun/source/doctree/ValueTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <jcpp.h>

using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* ValueTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getReference", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValueTree, getReference, $ReferenceTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.ValueTree",
		nullptr,
		"com.sun.source.doctree.InlineTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ValueTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ValueTree);
	});
	return class$;
}

$Class* ValueTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com