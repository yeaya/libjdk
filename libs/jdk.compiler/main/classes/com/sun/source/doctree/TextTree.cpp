#include <com/sun/source/doctree/TextTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* TextTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBody", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextTree, getBody, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.TextTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(TextTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextTree);
	});
	return class$;
}

$Class* TextTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com