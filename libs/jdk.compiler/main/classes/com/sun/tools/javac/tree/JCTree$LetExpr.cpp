#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef LETEXPR

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

void JCTree$LetExpr::init$($List* defs, $JCTree$JCExpression* expr) {
	$JCTree$JCExpression::init$();
	$set(this, defs, defs);
	$set(this, expr, expr);
}

void JCTree$LetExpr::accept($JCTree$Visitor* v) {
	$nc(v)->visitLetExpr(this);
}

$Tree$Kind* JCTree$LetExpr::getKind() {
	$throwNew($AssertionError, $of("LetExpr is not part of a public API"_s));
	$shouldNotReachHere();
}

$Object* JCTree$LetExpr::accept($TreeVisitor* v, Object$* d) {
	$throwNew($AssertionError, $of("LetExpr is not part of a public API"_s));
	$shouldNotReachHere();
}

$JCTree$Tag* JCTree$LetExpr::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::LETEXPR;
}

JCTree$LetExpr::JCTree$LetExpr() {
}

$Class* JCTree$LetExpr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $PUBLIC, $field(JCTree$LetExpr, defs)},
		{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$LetExpr, expr)},
		{"needsCond", "Z", nullptr, $PUBLIC, $field(JCTree$LetExpr, needsCond)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", $PROTECTED, $method(JCTree$LetExpr, init$, void, $List*, $JCTree$JCExpression*)},
		{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$LetExpr, accept, void, $JCTree$Visitor*)},
		{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(JCTree$LetExpr, accept, $Object*, $TreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC, $virtualMethod(JCTree$LetExpr, getKind, $Tree$Kind*)},
		{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $virtualMethod(JCTree$LetExpr, getTag, $JCTree$Tag*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$LetExpr", "com.sun.tools.javac.tree.JCTree", "LetExpr", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.JCTree$LetExpr",
		"com.sun.tools.javac.tree.JCTree$JCExpression",
		nullptr,
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
	$loadClass(JCTree$LetExpr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$LetExpr));
	});
	return class$;
}

$Class* JCTree$LetExpr::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com