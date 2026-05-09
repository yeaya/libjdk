#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef THROW

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
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

$String* JCTree$JCThrow::toString() {
	return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCThrow::clone() {
	return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCThrow::hashCode() {
	return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCThrow::equals(Object$* arg0) {
	return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCThrow::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCThrow::init$($JCTree$JCExpression* expr) {
	$JCTree$JCStatement::init$();
	$set(this, expr, expr);
}

void JCTree$JCThrow::accept($JCTree$Visitor* v) {
	$nc(v)->visitThrow(this);
}

$Tree$Kind* JCTree$JCThrow::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::THROW;
}

$ExpressionTree* JCTree$JCThrow::getExpression() {
	return this->expr;
}

$Object* JCTree$JCThrow::accept($TreeVisitor* v, Object$* d) {
	return $nc(v)->visitThrow(this, d);
}

$JCTree$Tag* JCTree$JCThrow::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::THROW;
}

JCTree$JCThrow::JCTree$JCThrow() {
}

$Class* JCTree$JCThrow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCThrow, expr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(JCTree$JCThrow, init$, void, $JCTree$JCExpression*)},
		{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$JCThrow, accept, void, $JCTree$Visitor*)},
		{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(JCTree$JCThrow, accept, $Object*, $TreeVisitor*, Object$*)},
		{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCThrow, getExpression, $ExpressionTree*)},
		{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCThrow, getKind, $Tree$Kind*)},
		{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCThrow, getTag, $JCTree$Tag*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$JCThrow", "com.sun.tools.javac.tree.JCTree", "JCThrow", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.JCTree$JCThrow",
		"com.sun.tools.javac.tree.JCTree$JCStatement",
		"com.sun.source.tree.ThrowTree",
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
	$loadClass(JCTree$JCThrow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$JCThrow));
	});
	return class$;
}

$Class* JCTree$JCThrow::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com