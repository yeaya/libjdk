#include <com/sun/source/doctree/DocTypeTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* DocTypeTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTypeTree, getText, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.DocTypeTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(DocTypeTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocTypeTree);
	});
	return class$;
}

$Class* DocTypeTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com