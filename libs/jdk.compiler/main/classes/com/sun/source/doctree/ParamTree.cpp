#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* ParamTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ParamTree, getDescription, $List*)},
		{"getName", "()Lcom/sun/source/doctree/IdentifierTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParamTree, getName, $IdentifierTree*)},
		{"isTypeParameter", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParamTree, isTypeParameter, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.ParamTree",
		nullptr,
		"com.sun.source.doctree.BlockTagTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ParamTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParamTree);
	});
	return class$;
}

$Class* ParamTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com