#include <com/sun/tools/javac/comp/MemberEnter$InitTreeVisitor.h>
#include <com/sun/tools/javac/comp/MemberEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/Enum.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ALLOWED_OPERATORS
#undef AND
#undef BITAND
#undef BITOR
#undef BITXOR
#undef COMPL
#undef DIV
#undef EQ
#undef GE
#undef GT
#undef LE
#undef LT
#undef MINUS
#undef MOD
#undef MUL
#undef NE
#undef NEG
#undef NOT
#undef OR
#undef PLUS
#undef POS
#undef SL
#undef SR
#undef USR

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $EnumArray = $Array<::java::lang::Enum>;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Set* MemberEnter$InitTreeVisitor::ALLOWED_OPERATORS = nullptr;

void MemberEnter$InitTreeVisitor::init$() {
	$JCTree$Visitor::init$();
	this->result = true;
}

void MemberEnter$InitTreeVisitor::visitTree($JCTree* tree) {
	this->result = false;
}

void MemberEnter$InitTreeVisitor::visitLiteral($JCTree$JCLiteral* that) {
}

void MemberEnter$InitTreeVisitor::visitTypeCast($JCTree$JCTypeCast* tree) {
	$nc($nc(tree)->expr)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitUnary($JCTree$JCUnary* that) {
	if (!$nc(MemberEnter$InitTreeVisitor::ALLOWED_OPERATORS)->contains($($nc(that)->getTag()))) {
		this->result = false;
		return;
	}
	$nc(that->arg)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitBinary($JCTree$JCBinary* that) {
	if (!$nc(MemberEnter$InitTreeVisitor::ALLOWED_OPERATORS)->contains($($nc(that)->getTag()))) {
		this->result = false;
		return;
	}
	$nc(that->lhs)->accept(this);
	$nc(that->rhs)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitConditional($JCTree$JCConditional* tree) {
	$nc($nc(tree)->cond)->accept(this);
	$nc(tree->truepart)->accept(this);
	$nc(tree->falsepart)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitParens($JCTree$JCParens* tree) {
	$nc($nc(tree)->expr)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitIdent($JCTree$JCIdent* that) {
}

void MemberEnter$InitTreeVisitor::visitSelect($JCTree$JCFieldAccess* tree) {
	$nc($nc(tree)->selected)->accept(this);
}

void MemberEnter$InitTreeVisitor::clinit$($Class* clazz) {
	$init($JCTree$Tag);
	$assignStatic(MemberEnter$InitTreeVisitor::ALLOWED_OPERATORS, $EnumSet::of($JCTree$Tag::POS, $$cast($EnumArray, $new($JCTree$TagArray, {
		$JCTree$Tag::NEG,
		$JCTree$Tag::NOT,
		$JCTree$Tag::COMPL,
		$JCTree$Tag::PLUS,
		$JCTree$Tag::MINUS,
		$JCTree$Tag::MUL,
		$JCTree$Tag::DIV,
		$JCTree$Tag::MOD,
		$JCTree$Tag::SL,
		$JCTree$Tag::SR,
		$JCTree$Tag::USR,
		$JCTree$Tag::LT,
		$JCTree$Tag::LE,
		$JCTree$Tag::GT,
		$JCTree$Tag::GE,
		$JCTree$Tag::EQ,
		$JCTree$Tag::NE,
		$JCTree$Tag::BITAND,
		$JCTree$Tag::BITXOR,
		$JCTree$Tag::BITOR,
		$JCTree$Tag::AND,
		$JCTree$Tag::OR
	}))));
}

MemberEnter$InitTreeVisitor::MemberEnter$InitTreeVisitor() {
}

$Class* MemberEnter$InitTreeVisitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ALLOWED_OPERATORS", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/tree/JCTree$Tag;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MemberEnter$InitTreeVisitor, ALLOWED_OPERATORS)},
		{"result", "Z", nullptr, 0, $field(MemberEnter$InitTreeVisitor, result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MemberEnter$InitTreeVisitor, init$, void)},
		{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC, $virtualMethod(MemberEnter$InitTreeVisitor, visitBinary, void, $JCTree$JCBinary*)},
		{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC, $virtualMethod(MemberEnter$InitTreeVisitor, visitConditional, void, $JCTree$JCConditional*)},
		{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC, $virtualMethod(MemberEnter$InitTreeVisitor, visitIdent, void, $JCTree$JCIdent*)},
		{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC, $virtualMethod(MemberEnter$InitTreeVisitor, visitLiteral, void, $JCTree$JCLiteral*)},
		{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC, $virtualMethod(MemberEnter$InitTreeVisitor, visitParens, void, $JCTree$JCParens*)},
		{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC, $virtualMethod(MemberEnter$InitTreeVisitor, visitSelect, void, $JCTree$JCFieldAccess*)},
		{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $virtualMethod(MemberEnter$InitTreeVisitor, visitTree, void, $JCTree*)},
		{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC, $virtualMethod(MemberEnter$InitTreeVisitor, visitTypeCast, void, $JCTree$JCTypeCast*)},
		{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC, $virtualMethod(MemberEnter$InitTreeVisitor, visitUnary, void, $JCTree$JCUnary*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor", "com.sun.tools.javac.comp.MemberEnter", "InitTreeVisitor", $STATIC},
		{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor",
		"com.sun.tools.javac.tree.JCTree$Visitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.MemberEnter"
	};
	$loadClass(MemberEnter$InitTreeVisitor, name, initialize, &classInfo$$, MemberEnter$InitTreeVisitor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MemberEnter$InitTreeVisitor);
	});
	return class$;
}

$Class* MemberEnter$InitTreeVisitor::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com