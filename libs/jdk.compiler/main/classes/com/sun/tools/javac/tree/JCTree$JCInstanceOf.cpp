#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/PatternTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef BINDINGPATTERN
#undef INSTANCE_OF
#undef TYPETEST

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $PatternTree = ::com::sun::source::tree::PatternTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBindingPattern = ::com::sun::tools::javac::tree::JCTree$JCBindingPattern;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* JCTree$JCInstanceOf::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCInstanceOf::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCInstanceOf::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCInstanceOf::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCInstanceOf::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCInstanceOf::init$($JCTree$JCExpression* expr, $JCTree* pattern) {
	$JCTree$JCExpression::init$();
	$set(this, expr, expr);
	$set(this, pattern, pattern);
}

void JCTree$JCInstanceOf::accept($JCTree$Visitor* v) {
	$nc(v)->visitTypeTest(this);
}

$Tree$Kind* JCTree$JCInstanceOf::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::INSTANCE_OF;
}

$JCTree* JCTree$JCInstanceOf::getType() {
	$init($JCTree$Tag);
	return $instanceOf($JCTree$JCPattern, this->pattern) ? this->pattern->hasTag($JCTree$Tag::BINDINGPATTERN) ? $cast($JCTree, $nc($cast($JCTree$JCBindingPattern, this->pattern)->var)->vartype) : ($JCTree*)nullptr : this->pattern;
}

$PatternTree* JCTree$JCInstanceOf::getPattern() {
	$useLocalObjectStack();
	$var($JCTree$JCPattern, jcPattern, nullptr);
	$var($JCTree, patt72114$temp, this->pattern);
	bool var$0 = $instanceOf($JCTree$JCPattern, patt72114$temp);
	if (var$0) {
		$assign(jcPattern, $cast($JCTree$JCPattern, patt72114$temp));
		var$0 = true;
	}
	return var$0 ? jcPattern : ($JCTree$JCPattern*)nullptr;
}

$ExpressionTree* JCTree$JCInstanceOf::getExpression() {
	return this->expr;
}

$Object* JCTree$JCInstanceOf::accept($TreeVisitor* v, Object$* d) {
	return $nc(v)->visitInstanceOf(this, d);
}

$JCTree$Tag* JCTree$JCInstanceOf::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TYPETEST;
}

JCTree$JCInstanceOf::JCTree$JCInstanceOf() {
}

$Class* JCTree$JCInstanceOf::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCInstanceOf, expr)},
		{"pattern", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCInstanceOf, pattern)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PROTECTED, $method(JCTree$JCInstanceOf, init$, void, $JCTree$JCExpression*, $JCTree*)},
		{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$JCInstanceOf, accept, void, $JCTree$Visitor*)},
		{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(JCTree$JCInstanceOf, accept, $Object*, $TreeVisitor*, Object$*)},
		{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCInstanceOf, getExpression, $ExpressionTree*)},
		{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCInstanceOf, getKind, $Tree$Kind*)},
		{"getPattern", "()Lcom/sun/tools/javac/tree/JCTree$JCPattern;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCInstanceOf, getPattern, $PatternTree*)},
		{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCInstanceOf, getTag, $JCTree$Tag*)},
		{"getType", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCInstanceOf, getType, $JCTree*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$JCInstanceOf", "com.sun.tools.javac.tree.JCTree", "JCInstanceOf", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.JCTree$JCInstanceOf",
		"com.sun.tools.javac.tree.JCTree$JCExpression",
		"com.sun.source.tree.InstanceOfTree",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.JCTree"
	};
	$loadClass(JCTree$JCInstanceOf, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$JCInstanceOf));
	});
	return class$;
}

$Class* JCTree$JCInstanceOf::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com