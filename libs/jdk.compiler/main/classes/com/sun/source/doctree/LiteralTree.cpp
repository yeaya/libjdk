#include <com/sun/source/doctree/LiteralTree.h>
#include <com/sun/source/doctree/TextTree.h>
#include <jcpp.h>

using $TextTree = ::com::sun::source::doctree::TextTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* LiteralTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBody", "()Lcom/sun/source/doctree/TextTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LiteralTree, getBody, $TextTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.LiteralTree",
		nullptr,
		"com.sun.source.doctree.InlineTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(LiteralTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LiteralTree);
	});
	return class$;
}

$Class* LiteralTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com