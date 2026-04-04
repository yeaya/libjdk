#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssert.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExports.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOpens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCProvides.h>
#include <com/sun/tools/javac/tree/JCTree$JCRequires.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCSkip.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSynchronized.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeIntersection.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCUses.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCArrayAccess = ::com::sun::tools::javac::tree::JCTree$JCArrayAccess;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCAssert = ::com::sun::tools::javac::tree::JCTree$JCAssert;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBindingPattern = ::com::sun::tools::javac::tree::JCTree$JCBindingPattern;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDefaultCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExports = ::com::sun::tools::javac::tree::JCTree$JCExports;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOpens = ::com::sun::tools::javac::tree::JCTree$JCOpens;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCParenthesizedPattern = ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCProvides = ::com::sun::tools::javac::tree::JCTree$JCProvides;
using $JCTree$JCRequires = ::com::sun::tools::javac::tree::JCTree$JCRequires;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCSkip = ::com::sun::tools::javac::tree::JCTree$JCSkip;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCSynchronized = ::com::sun::tools::javac::tree::JCTree$JCSynchronized;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCTypeIntersection = ::com::sun::tools::javac::tree::JCTree$JCTypeIntersection;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCUses = ::com::sun::tools::javac::tree::JCTree$JCUses;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$TypeBoundKind = ::com::sun::tools::javac::tree::JCTree$TypeBoundKind;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

void TreeScanner::init$() {
	$JCTree$Visitor::init$();
}

void TreeScanner::scan($JCTree* tree) {
	if (tree != nullptr) {
		tree->accept(this);
	}
}

void TreeScanner::scan($List* trees) {
	if (trees != nullptr) {
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			scan($cast($JCTree, l->head));
		}
	}
}

void TreeScanner::visitTopLevel($JCTree$JCCompilationUnit* tree) {
	scan($nc(tree)->defs);
}

void TreeScanner::visitPackageDef($JCTree$JCPackageDecl* tree) {
	scan($nc(tree)->annotations);
	scan(tree->pid);
}

void TreeScanner::visitModuleDef($JCTree$JCModuleDecl* tree) {
	scan($nc(tree)->mods);
	scan(tree->qualId);
	scan(tree->directives);
}

void TreeScanner::visitExports($JCTree$JCExports* tree) {
	scan($nc(tree)->qualid);
	scan(tree->moduleNames);
}

void TreeScanner::visitOpens($JCTree$JCOpens* tree) {
	scan($nc(tree)->qualid);
	scan(tree->moduleNames);
}

void TreeScanner::visitProvides($JCTree$JCProvides* tree) {
	scan($nc(tree)->serviceName);
	scan(tree->implNames);
}

void TreeScanner::visitRequires($JCTree$JCRequires* tree) {
	scan($nc(tree)->moduleName);
}

void TreeScanner::visitUses($JCTree$JCUses* tree) {
	scan($nc(tree)->qualid);
}

void TreeScanner::visitImport($JCTree$JCImport* tree) {
	scan($nc(tree)->qualid);
}

void TreeScanner::visitClassDef($JCTree$JCClassDecl* tree) {
	scan($nc(tree)->mods);
	scan(tree->typarams);
	scan(tree->extending);
	scan(tree->implementing);
	scan(tree->permitting);
	scan(tree->defs);
}

void TreeScanner::visitMethodDef($JCTree$JCMethodDecl* tree) {
	scan($nc(tree)->mods);
	scan(tree->restype);
	scan(tree->typarams);
	scan(tree->recvparam);
	scan(tree->params);
	scan(tree->thrown);
	scan(tree->defaultValue);
	scan(tree->body);
}

void TreeScanner::visitVarDef($JCTree$JCVariableDecl* tree) {
	scan($nc(tree)->mods);
	scan(tree->vartype);
	scan(tree->nameexpr);
	scan(tree->init);
}

void TreeScanner::visitSkip($JCTree$JCSkip* tree) {
}

void TreeScanner::visitBlock($JCTree$JCBlock* tree) {
	scan($nc(tree)->stats);
}

void TreeScanner::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	scan($nc(tree)->body);
	scan(tree->cond);
}

void TreeScanner::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	scan($nc(tree)->cond);
	scan(tree->body);
}

void TreeScanner::visitForLoop($JCTree$JCForLoop* tree) {
	scan($nc(tree)->init);
	scan(tree->cond);
	scan(tree->step);
	scan(tree->body);
}

void TreeScanner::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	scan($nc(tree)->var);
	scan(tree->expr);
	scan(tree->body);
}

void TreeScanner::visitLabelled($JCTree$JCLabeledStatement* tree) {
	scan($nc(tree)->body);
}

void TreeScanner::visitSwitch($JCTree$JCSwitch* tree) {
	scan($nc(tree)->selector);
	scan(tree->cases);
}

void TreeScanner::visitCase($JCTree$JCCase* tree) {
	scan($nc(tree)->labels);
	scan(tree->stats);
}

void TreeScanner::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	scan($nc(tree)->selector);
	scan(tree->cases);
}

void TreeScanner::visitSynchronized($JCTree$JCSynchronized* tree) {
	scan($nc(tree)->lock);
	scan(tree->body);
}

void TreeScanner::visitTry($JCTree$JCTry* tree) {
	scan($nc(tree)->resources);
	scan(tree->body);
	scan(tree->catchers);
	scan(tree->finalizer);
}

void TreeScanner::visitCatch($JCTree$JCCatch* tree) {
	scan($nc(tree)->param);
	scan(tree->body);
}

void TreeScanner::visitConditional($JCTree$JCConditional* tree) {
	scan($nc(tree)->cond);
	scan(tree->truepart);
	scan(tree->falsepart);
}

void TreeScanner::visitIf($JCTree$JCIf* tree) {
	scan($nc(tree)->cond);
	scan(tree->thenpart);
	scan(tree->elsepart);
}

void TreeScanner::visitExec($JCTree$JCExpressionStatement* tree) {
	scan($nc(tree)->expr);
}

void TreeScanner::visitBreak($JCTree$JCBreak* tree) {
}

void TreeScanner::visitYield($JCTree$JCYield* tree) {
	scan($nc(tree)->value);
}

void TreeScanner::visitContinue($JCTree$JCContinue* tree) {
}

void TreeScanner::visitReturn($JCTree$JCReturn* tree) {
	scan($nc(tree)->expr);
}

void TreeScanner::visitThrow($JCTree$JCThrow* tree) {
	scan($nc(tree)->expr);
}

void TreeScanner::visitAssert($JCTree$JCAssert* tree) {
	scan($nc(tree)->cond);
	scan(tree->detail);
}

void TreeScanner::visitApply($JCTree$JCMethodInvocation* tree) {
	scan($nc(tree)->typeargs);
	scan(tree->meth);
	scan(tree->args);
}

void TreeScanner::visitNewClass($JCTree$JCNewClass* tree) {
	scan($nc(tree)->encl);
	scan(tree->typeargs);
	scan(tree->clazz);
	scan(tree->args);
	scan(tree->def);
}

void TreeScanner::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalObjectStack();
	scan($nc(tree)->annotations);
	scan(tree->elemtype);
	scan(tree->dims);
	{
		$var($Iterator, i$, $nc(tree->dimAnnotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, annos, $cast($List, i$->next()));
			scan(annos);
		}
	}
	scan(tree->elems);
}

void TreeScanner::visitLambda($JCTree$JCLambda* tree) {
	scan($nc(tree)->body);
	scan(tree->params);
}

void TreeScanner::visitParens($JCTree$JCParens* tree) {
	scan($nc(tree)->expr);
}

void TreeScanner::visitAssign($JCTree$JCAssign* tree) {
	scan($nc(tree)->lhs);
	scan(tree->rhs);
}

void TreeScanner::visitAssignop($JCTree$JCAssignOp* tree) {
	scan($nc(tree)->lhs);
	scan(tree->rhs);
}

void TreeScanner::visitUnary($JCTree$JCUnary* tree) {
	scan($nc(tree)->arg);
}

void TreeScanner::visitBinary($JCTree$JCBinary* tree) {
	scan($nc(tree)->lhs);
	scan(tree->rhs);
}

void TreeScanner::visitTypeCast($JCTree$JCTypeCast* tree) {
	scan($nc(tree)->clazz);
	scan(tree->expr);
}

void TreeScanner::visitTypeTest($JCTree$JCInstanceOf* tree) {
	scan($nc(tree)->expr);
	scan(tree->pattern);
}

void TreeScanner::visitBindingPattern($JCTree$JCBindingPattern* tree) {
	scan($nc(tree)->var);
}

void TreeScanner::visitDefaultCaseLabel($JCTree$JCDefaultCaseLabel* tree) {
}

void TreeScanner::visitParenthesizedPattern($JCTree$JCParenthesizedPattern* that) {
	scan($nc(that)->pattern);
}

void TreeScanner::visitGuardPattern($JCTree$JCGuardPattern* that) {
	scan($nc(that)->patt);
	scan(that->expr);
}

void TreeScanner::visitIndexed($JCTree$JCArrayAccess* tree) {
	scan($nc(tree)->indexed);
	scan(tree->index);
}

void TreeScanner::visitSelect($JCTree$JCFieldAccess* tree) {
	scan($nc(tree)->selected);
}

void TreeScanner::visitReference($JCTree$JCMemberReference* tree) {
	scan($nc(tree)->expr);
	scan(tree->typeargs);
}

void TreeScanner::visitIdent($JCTree$JCIdent* tree) {
}

void TreeScanner::visitLiteral($JCTree$JCLiteral* tree) {
}

void TreeScanner::visitTypeIdent($JCTree$JCPrimitiveTypeTree* tree) {
}

void TreeScanner::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	scan($nc(tree)->elemtype);
}

void TreeScanner::visitTypeApply($JCTree$JCTypeApply* tree) {
	scan($nc(tree)->clazz);
	scan(tree->arguments);
}

void TreeScanner::visitTypeUnion($JCTree$JCTypeUnion* tree) {
	scan($nc(tree)->alternatives);
}

void TreeScanner::visitTypeIntersection($JCTree$JCTypeIntersection* tree) {
	scan($nc(tree)->bounds);
}

void TreeScanner::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	scan($nc(tree)->annotations);
	scan(tree->bounds);
}

void TreeScanner::visitWildcard($JCTree$JCWildcard* tree) {
	scan($nc(tree)->kind);
	if (tree->inner != nullptr) {
		scan(tree->inner);
	}
}

void TreeScanner::visitTypeBoundKind($JCTree$TypeBoundKind* that) {
}

void TreeScanner::visitModifiers($JCTree$JCModifiers* tree) {
	scan($nc(tree)->annotations);
}

void TreeScanner::visitAnnotation($JCTree$JCAnnotation* tree) {
	scan($nc(tree)->annotationType);
	scan(tree->args);
}

void TreeScanner::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	scan($nc(tree)->annotations);
	scan(tree->underlyingType);
}

void TreeScanner::visitErroneous($JCTree$JCErroneous* tree) {
}

void TreeScanner::visitLetExpr($JCTree$LetExpr* tree) {
	scan($nc(tree)->defs);
	scan(tree->expr);
}

void TreeScanner::visitTree($JCTree* tree) {
	$Assert::error();
}

TreeScanner::TreeScanner() {
}

$Class* TreeScanner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TreeScanner, init$, void)},
		{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, scan, void, $JCTree*)},
		{"scan", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)V", $PUBLIC, $virtualMethod(TreeScanner, scan, void, $List*)},
		{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitAnnotatedType, void, $JCTree$JCAnnotatedType*)},
		{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitAnnotation, void, $JCTree$JCAnnotation*)},
		{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitApply, void, $JCTree$JCMethodInvocation*)},
		{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitAssert, void, $JCTree$JCAssert*)},
		{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitAssign, void, $JCTree$JCAssign*)},
		{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitAssignop, void, $JCTree$JCAssignOp*)},
		{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitBinary, void, $JCTree$JCBinary*)},
		{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitBindingPattern, void, $JCTree$JCBindingPattern*)},
		{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitBlock, void, $JCTree$JCBlock*)},
		{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitBreak, void, $JCTree$JCBreak*)},
		{"visitCase", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitCase, void, $JCTree$JCCase*)},
		{"visitCatch", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitCatch, void, $JCTree$JCCatch*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitConditional, void, $JCTree$JCConditional*)},
		{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitContinue, void, $JCTree$JCContinue*)},
		{"visitDefaultCaseLabel", "(Lcom/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitDefaultCaseLabel, void, $JCTree$JCDefaultCaseLabel*)},
		{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitDoLoop, void, $JCTree$JCDoWhileLoop*)},
		{"visitErroneous", "(Lcom/sun/tools/javac/tree/JCTree$JCErroneous;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitErroneous, void, $JCTree$JCErroneous*)},
		{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitExec, void, $JCTree$JCExpressionStatement*)},
		{"visitExports", "(Lcom/sun/tools/javac/tree/JCTree$JCExports;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitExports, void, $JCTree$JCExports*)},
		{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitForLoop, void, $JCTree$JCForLoop*)},
		{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitForeachLoop, void, $JCTree$JCEnhancedForLoop*)},
		{"visitGuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitGuardPattern, void, $JCTree$JCGuardPattern*)},
		{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitIdent, void, $JCTree$JCIdent*)},
		{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitIf, void, $JCTree$JCIf*)},
		{"visitImport", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitImport, void, $JCTree$JCImport*)},
		{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitIndexed, void, $JCTree$JCArrayAccess*)},
		{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitLabelled, void, $JCTree$JCLabeledStatement*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitLambda, void, $JCTree$JCLambda*)},
		{"visitLetExpr", "(Lcom/sun/tools/javac/tree/JCTree$LetExpr;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitLetExpr, void, $JCTree$LetExpr*)},
		{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitLiteral, void, $JCTree$JCLiteral*)},
		{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitMethodDef, void, $JCTree$JCMethodDecl*)},
		{"visitModifiers", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitModifiers, void, $JCTree$JCModifiers*)},
		{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitModuleDef, void, $JCTree$JCModuleDecl*)},
		{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitNewArray, void, $JCTree$JCNewArray*)},
		{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitNewClass, void, $JCTree$JCNewClass*)},
		{"visitOpens", "(Lcom/sun/tools/javac/tree/JCTree$JCOpens;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitOpens, void, $JCTree$JCOpens*)},
		{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitPackageDef, void, $JCTree$JCPackageDecl*)},
		{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitParens, void, $JCTree$JCParens*)},
		{"visitParenthesizedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCParenthesizedPattern;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitParenthesizedPattern, void, $JCTree$JCParenthesizedPattern*)},
		{"visitProvides", "(Lcom/sun/tools/javac/tree/JCTree$JCProvides;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitProvides, void, $JCTree$JCProvides*)},
		{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitReference, void, $JCTree$JCMemberReference*)},
		{"visitRequires", "(Lcom/sun/tools/javac/tree/JCTree$JCRequires;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitRequires, void, $JCTree$JCRequires*)},
		{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitReturn, void, $JCTree$JCReturn*)},
		{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitSelect, void, $JCTree$JCFieldAccess*)},
		{"visitSkip", "(Lcom/sun/tools/javac/tree/JCTree$JCSkip;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitSkip, void, $JCTree$JCSkip*)},
		{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitSwitch, void, $JCTree$JCSwitch*)},
		{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitSwitchExpression, void, $JCTree$JCSwitchExpression*)},
		{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitSynchronized, void, $JCTree$JCSynchronized*)},
		{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitThrow, void, $JCTree$JCThrow*)},
		{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTopLevel, void, $JCTree$JCCompilationUnit*)},
		{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTree, void, $JCTree*)},
		{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTry, void, $JCTree$JCTry*)},
		{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTypeApply, void, $JCTree$JCTypeApply*)},
		{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTypeArray, void, $JCTree$JCArrayTypeTree*)},
		{"visitTypeBoundKind", "(Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTypeBoundKind, void, $JCTree$TypeBoundKind*)},
		{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTypeCast, void, $JCTree$JCTypeCast*)},
		{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTypeIdent, void, $JCTree$JCPrimitiveTypeTree*)},
		{"visitTypeIntersection", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTypeIntersection, void, $JCTree$JCTypeIntersection*)},
		{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTypeParameter, void, $JCTree$JCTypeParameter*)},
		{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTypeTest, void, $JCTree$JCInstanceOf*)},
		{"visitTypeUnion", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitTypeUnion, void, $JCTree$JCTypeUnion*)},
		{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitUnary, void, $JCTree$JCUnary*)},
		{"visitUses", "(Lcom/sun/tools/javac/tree/JCTree$JCUses;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitUses, void, $JCTree$JCUses*)},
		{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitVarDef, void, $JCTree$JCVariableDecl*)},
		{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitWhileLoop, void, $JCTree$JCWhileLoop*)},
		{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitWildcard, void, $JCTree$JCWildcard*)},
		{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC, $virtualMethod(TreeScanner, visitYield, void, $JCTree$JCYield*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.TreeScanner",
		"com.sun.tools.javac.tree.JCTree$Visitor",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(TreeScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeScanner);
	});
	return class$;
}

$Class* TreeScanner::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com