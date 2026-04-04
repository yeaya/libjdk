#include <com/sun/source/doctree/DocRootTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* DocRootTree::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.DocRootTree",
		nullptr,
		"com.sun.source.doctree.InlineTagTree"
	};
	$loadClass(DocRootTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocRootTree);
	});
	return class$;
}

$Class* DocRootTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com