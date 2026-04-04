#include <com/sun/source/doctree/ReferenceTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* ReferenceTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReferenceTree, getSignature, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.ReferenceTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ReferenceTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceTree);
	});
	return class$;
}

$Class* ReferenceTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com