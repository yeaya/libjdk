#include <com/sun/source/tree/BlockTree.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _BlockTree_MethodInfo_[] = {
	{"getStatements", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/StatementTree;>;", $PUBLIC | $ABSTRACT},
	{"isStatic", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BlockTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.BlockTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_BlockTree_MethodInfo_
};

$Object* allocate$BlockTree($Class* clazz) {
	return $of($alloc(BlockTree));
}

$Class* BlockTree::load$($String* name, bool initialize) {
	$loadClass(BlockTree, name, initialize, &_BlockTree_ClassInfo_, allocate$BlockTree);
	return class$;
}

$Class* BlockTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com