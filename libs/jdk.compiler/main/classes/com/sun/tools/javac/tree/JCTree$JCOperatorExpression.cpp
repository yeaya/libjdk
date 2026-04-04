#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCOperatorExpression$OperandPos = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

void JCTree$JCOperatorExpression::init$() {
	$JCTree$JCExpression::init$();
}

$Symbol$OperatorSymbol* JCTree$JCOperatorExpression::getOperator() {
	return this->operator$;
}

$JCTree$Tag* JCTree$JCOperatorExpression::getTag() {
	return this->opcode;
}

JCTree$JCOperatorExpression::JCTree$JCOperatorExpression() {
}

$Class* JCTree$JCOperatorExpression::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"opcode", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PROTECTED, $field(JCTree$JCOperatorExpression, opcode)},
		{"operator", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC, $field(JCTree$JCOperatorExpression, operator$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JCTree$JCOperatorExpression, init$, void)},
		{"getOperand", "(Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$JCOperatorExpression, getOperand, $JCTree$JCExpression*, $JCTree$JCOperatorExpression$OperandPos*)},
		{"getOperator", "()Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCOperatorExpression, getOperator, $Symbol$OperatorSymbol*)},
		{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $virtualMethod(JCTree$JCOperatorExpression, getTag, $JCTree$Tag*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "com.sun.tools.javac.tree.JCTree", "JCOperatorExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression$OperandPos", "com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "OperandPos", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.tree.JCTree$JCOperatorExpression",
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
	$loadClass(JCTree$JCOperatorExpression, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCTree$JCOperatorExpression));
	});
	return class$;
}

$Class* JCTree$JCOperatorExpression::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com