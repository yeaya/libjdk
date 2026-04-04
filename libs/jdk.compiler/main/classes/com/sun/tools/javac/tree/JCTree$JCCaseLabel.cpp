#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* JCTree$JCCaseLabel::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCCaseLabel::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCCaseLabel::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCCaseLabel::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCCaseLabel::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCCaseLabel::init$() {
	$JCTree::init$();
}

bool JCTree$JCCaseLabel::isNullPattern() {
	bool var$0 = isExpression();
	return var$0 && $TreeInfo::isNull($cast($JCTree$JCExpression, this));
}

JCTree$JCCaseLabel::JCTree$JCCaseLabel() {
}

$Class* JCTree$JCCaseLabel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JCTree$JCCaseLabel, init$, void)},
		{"isExpression", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$JCCaseLabel, isExpression, bool)},
		{"isNullPattern", "()Z", nullptr, $PUBLIC, $virtualMethod(JCTree$JCCaseLabel, isNullPattern, bool)},
		{"isPattern", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$JCCaseLabel, isPattern, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$JCCaseLabel", "com.sun.tools.javac.tree.JCTree", "JCCaseLabel", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.tree.JCTree$JCCaseLabel",
		"com.sun.tools.javac.tree.JCTree",
		"com.sun.source.tree.CaseLabelTree",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.JCTree"
	};
	$loadClass(JCTree$JCCaseLabel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$JCCaseLabel));
	});
	return class$;
}

$Class* JCTree$JCCaseLabel::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com