#include <javax/swing/tree/FixedHeightLayoutCache$SearchInfo.h>
#include <javax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode.h>
#include <javax/swing/tree/FixedHeightLayoutCache.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FixedHeightLayoutCache = ::javax::swing::tree::FixedHeightLayoutCache;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

void FixedHeightLayoutCache$SearchInfo::init$($FixedHeightLayoutCache* this$0) {
	$set(this, this$0, this$0);
}

$TreePath* FixedHeightLayoutCache$SearchInfo::getPath() {
	$useLocalObjectStack();
	if (this->node == nullptr) {
		return nullptr;
	}
	if (this->isNodeParentNode) {
		return $$nc($nc(this->node)->getTreePath())->pathByAddingChild($($nc(this->this$0->treeModel)->getChild($($nc(this->node)->getUserObject()), this->childIndex)));
	}
	return $nc(this->node)->path;
}

FixedHeightLayoutCache$SearchInfo::FixedHeightLayoutCache$SearchInfo() {
}

$Class* FixedHeightLayoutCache$SearchInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/tree/FixedHeightLayoutCache;", nullptr, $FINAL | $SYNTHETIC, $field(FixedHeightLayoutCache$SearchInfo, this$0)},
		{"node", "Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$SearchInfo, node)},
		{"isNodeParentNode", "Z", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$SearchInfo, isNodeParentNode)},
		{"childIndex", "I", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$SearchInfo, childIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/FixedHeightLayoutCache;)V", nullptr, $PRIVATE, $method(FixedHeightLayoutCache$SearchInfo, init$, void, $FixedHeightLayoutCache*)},
		{"getPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $virtualMethod(FixedHeightLayoutCache$SearchInfo, getPath, $TreePath*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.tree.FixedHeightLayoutCache$SearchInfo", "javax.swing.tree.FixedHeightLayoutCache", "SearchInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.tree.FixedHeightLayoutCache$SearchInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.tree.FixedHeightLayoutCache"
	};
	$loadClass(FixedHeightLayoutCache$SearchInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FixedHeightLayoutCache$SearchInfo);
	});
	return class$;
}

$Class* FixedHeightLayoutCache$SearchInfo::class$ = nullptr;

		} // tree
	} // swing
} // javax