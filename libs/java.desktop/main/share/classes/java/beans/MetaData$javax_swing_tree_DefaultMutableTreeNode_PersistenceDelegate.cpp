#include <java/beans/MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;

namespace java {
	namespace beans {

void MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($DefaultMutableTreeNode, m, $cast($DefaultMutableTreeNode, oldInstance));
	$var($DefaultMutableTreeNode, n, $cast($DefaultMutableTreeNode, newInstance));
	for (int32_t i = $nc(n)->getChildCount(); i < $nc(m)->getChildCount(); ++i) {
		invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {$(m->getChildAt(i))}), out);
	}
}

MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate::MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate", "java.beans.MetaData", "javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate",
		"java.beans.DefaultPersistenceDelegate",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.MetaData"
	};
	$loadClass(MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$javax_swing_tree_DefaultMutableTreeNode_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java