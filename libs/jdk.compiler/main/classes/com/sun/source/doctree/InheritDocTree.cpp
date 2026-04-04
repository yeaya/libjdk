#include <com/sun/source/doctree/InheritDocTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* InheritDocTree::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.InheritDocTree",
		nullptr,
		"com.sun.source.doctree.InlineTagTree"
	};
	$loadClass(InheritDocTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritDocTree);
	});
	return class$;
}

$Class* InheritDocTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com