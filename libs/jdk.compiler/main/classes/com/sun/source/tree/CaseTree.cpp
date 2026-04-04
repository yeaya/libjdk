#include <com/sun/source/tree/CaseTree.h>
#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef STATEMENT

using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Tree* CaseTree::getBody() {
	return nullptr;
}

$CaseTree$CaseKind* CaseTree::getCaseKind() {
	$init($CaseTree$CaseKind);
	return $CaseTree$CaseKind::STATEMENT;
}

$Class* CaseTree::load$($String* name, bool initialize) {
	$CompoundAttribute getExpressionmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getLabelsmethodAnnotations$$[] = {
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getBody", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC, $virtualMethod(CaseTree, getBody, $Tree*)},
		{"getCaseKind", "()Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC, $virtualMethod(CaseTree, getCaseKind, $CaseTree$CaseKind*)},
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(CaseTree, getExpression, $ExpressionTree*), nullptr, nullptr, getExpressionmethodAnnotations$$},
		{"getExpressions", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CaseTree, getExpressions, $List*)},
		{"getLabels", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/CaseLabelTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CaseTree, getLabels, $List*), nullptr, nullptr, getLabelsmethodAnnotations$$},
		{"getStatements", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/StatementTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CaseTree, getStatements, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.tree.CaseTree$CaseKind", "com.sun.source.tree.CaseTree", "CaseKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.CaseTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.source.tree.CaseTree$CaseKind"
	};
	$loadClass(CaseTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CaseTree);
	});
	return class$;
}

$Class* CaseTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com