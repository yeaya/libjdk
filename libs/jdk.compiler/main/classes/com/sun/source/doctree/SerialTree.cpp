#include <com/sun/source/doctree/SerialTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* SerialTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SerialTree, getDescription, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.SerialTree",
		nullptr,
		"com.sun.source.doctree.BlockTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(SerialTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerialTree);
	});
	return class$;
}

$Class* SerialTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com