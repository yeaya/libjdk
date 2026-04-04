#include <com/sun/source/tree/LabeledStatementTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* LabeledStatementTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLabel", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LabeledStatementTree, getLabel, $Name*)},
		{"getStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LabeledStatementTree, getStatement, $StatementTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.LabeledStatementTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(LabeledStatementTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LabeledStatementTree);
	});
	return class$;
}

$Class* LabeledStatementTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com