#include <Test8013571.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/TreeModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;

void Test8013571::main($StringArray* args) {
	$init(Test8013571);
	$useLocalObjectStack();
	$var($DefaultMutableTreeNode, root, create("root"_s, $$new($StringArray, 0)));
	$nc(root)->add($(create("colors"_s, $$new($StringArray, {
		"blue"_s,
		"violet"_s,
		"red"_s,
		"yellow"_s
	}))));
	root->add($(create("sports"_s, $$new($StringArray, {
		"basketball"_s,
		"soccer"_s,
		"football"_s,
		"hockey"_s
	}))));
	root->add($(create("food"_s, $$new($StringArray, {
		"hot dogs"_s,
		"pizza"_s,
		"ravioli"_s,
		"bananas"_s
	}))));
	$var(Test8013571, model, $new(Test8013571, root));
	$var($JTree, tree, $new($JTree, model));
	model->fireTreeChanged(tree);
}

$DefaultMutableTreeNode* Test8013571::create($String* name, $StringArray* values) {
	$init(Test8013571);
	$useLocalObjectStack();
	$var($DefaultMutableTreeNode, node, $new($DefaultMutableTreeNode, name));
	{
		$var($StringArray, arr$, values);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, value, arr$->get(i$));
			{
				node->add($(create(value, $$new($StringArray, 0))));
			}
		}
	}
	return node;
}

void Test8013571::init$($DefaultMutableTreeNode* root) {
	$DefaultTreeModel::init$(root);
}

void Test8013571::fireTreeChanged(Object$* source) {
	fireTreeNodesInserted(source, nullptr, nullptr, nullptr);
	fireTreeNodesChanged(source, nullptr, nullptr, nullptr);
	fireTreeNodesRemoved(source, nullptr, nullptr, nullptr);
	fireTreeStructureChanged(source, nullptr, nullptr, nullptr);
}

Test8013571::Test8013571() {
}

$Class* Test8013571::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;)V", nullptr, $PRIVATE, $method(Test8013571, init$, void, $DefaultMutableTreeNode*)},
		{"create", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(Test8013571, create, $DefaultMutableTreeNode*, $String*, $StringArray*)},
		{"fireTreeChanged", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(Test8013571, fireTreeChanged, void, Object$*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8013571, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8013571",
		"javax.swing.tree.DefaultTreeModel",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test8013571, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test8013571));
	});
	return class$;
}

$Class* Test8013571::class$ = nullptr;