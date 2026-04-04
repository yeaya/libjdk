#include <com/sun/source/doctree/CommentTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* CommentTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBody", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CommentTree, getBody, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.CommentTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(CommentTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CommentTree);
	});
	return class$;
}

$Class* CommentTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com