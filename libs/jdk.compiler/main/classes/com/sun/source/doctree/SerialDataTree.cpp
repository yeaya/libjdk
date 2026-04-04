#include <com/sun/source/doctree/SerialDataTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* SerialDataTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SerialDataTree, getDescription, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.SerialDataTree",
		nullptr,
		"com.sun.source.doctree.BlockTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(SerialDataTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerialDataTree);
	});
	return class$;
}

$Class* SerialDataTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com