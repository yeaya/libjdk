#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/Tree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* VariableTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInitializer", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VariableTree, getInitializer, $ExpressionTree*)},
		{"getModifiers", "()Lcom/sun/source/tree/ModifiersTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VariableTree, getModifiers, $ModifiersTree*)},
		{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VariableTree, getName, $Name*)},
		{"getNameExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VariableTree, getNameExpression, $ExpressionTree*)},
		{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VariableTree, getType, $Tree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.VariableTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(VariableTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VariableTree);
	});
	return class$;
}

$Class* VariableTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com