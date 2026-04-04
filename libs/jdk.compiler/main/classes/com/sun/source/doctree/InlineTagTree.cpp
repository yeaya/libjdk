#include <com/sun/source/doctree/InlineTagTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* InlineTagTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InlineTagTree, getTagName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.InlineTagTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(InlineTagTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InlineTagTree);
	});
	return class$;
}

$Class* InlineTagTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com