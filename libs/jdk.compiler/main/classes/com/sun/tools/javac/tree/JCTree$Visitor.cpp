#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

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
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExports.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
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
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
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
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDefaultCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel;
using $JCTree$JCDirective = ::com::sun::tools::javac::tree::JCTree$JCDirective;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExports = ::com::sun::tools::javac::tree::JCTree$JCExports;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
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
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCParenthesizedPattern = ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCProvides = ::com::sun::tools::javac::tree::JCTree$JCProvides;
using $JCTree$JCRequires = ::com::sun::tools::javac::tree::JCTree$JCRequires;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCSkip = ::com::sun::tools::javac::tree::JCTree$JCSkip;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
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
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _JCTree$Visitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JCTree$Visitor, init$, void)},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitAnnotatedType, void, $JCTree$JCAnnotatedType*)},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitAnnotation, void, $JCTree$JCAnnotation*)},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitApply, void, $JCTree$JCMethodInvocation*)},
	{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitAssert, void, $JCTree$JCAssert*)},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitAssign, void, $JCTree$JCAssign*)},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitAssignop, void, $JCTree$JCAssignOp*)},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitBinary, void, $JCTree$JCBinary*)},
	{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitBindingPattern, void, $JCTree$JCBindingPattern*)},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitBlock, void, $JCTree$JCBlock*)},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitBreak, void, $JCTree$JCBreak*)},
	{"visitCase", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitCase, void, $JCTree$JCCase*)},
	{"visitCatch", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitCatch, void, $JCTree$JCCatch*)},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitClassDef, void, $JCTree$JCClassDecl*)},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitConditional, void, $JCTree$JCConditional*)},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitContinue, void, $JCTree$JCContinue*)},
	{"visitDefaultCaseLabel", "(Lcom/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitDefaultCaseLabel, void, $JCTree$JCDefaultCaseLabel*)},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitDoLoop, void, $JCTree$JCDoWhileLoop*)},
	{"visitErroneous", "(Lcom/sun/tools/javac/tree/JCTree$JCErroneous;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitErroneous, void, $JCTree$JCErroneous*)},
	{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitExec, void, $JCTree$JCExpressionStatement*)},
	{"visitExports", "(Lcom/sun/tools/javac/tree/JCTree$JCExports;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitExports, void, $JCTree$JCExports*)},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitForLoop, void, $JCTree$JCForLoop*)},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitForeachLoop, void, $JCTree$JCEnhancedForLoop*)},
	{"visitGuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitGuardPattern, void, $JCTree$JCGuardPattern*)},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitIdent, void, $JCTree$JCIdent*)},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitIf, void, $JCTree$JCIf*)},
	{"visitImport", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitImport, void, $JCTree$JCImport*)},
	{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitIndexed, void, $JCTree$JCArrayAccess*)},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitLabelled, void, $JCTree$JCLabeledStatement*)},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitLambda, void, $JCTree$JCLambda*)},
	{"visitLetExpr", "(Lcom/sun/tools/javac/tree/JCTree$LetExpr;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitLetExpr, void, $JCTree$LetExpr*)},
	{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitLiteral, void, $JCTree$JCLiteral*)},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitMethodDef, void, $JCTree$JCMethodDecl*)},
	{"visitModifiers", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitModifiers, void, $JCTree$JCModifiers*)},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitModuleDef, void, $JCTree$JCModuleDecl*)},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitNewArray, void, $JCTree$JCNewArray*)},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitNewClass, void, $JCTree$JCNewClass*)},
	{"visitOpens", "(Lcom/sun/tools/javac/tree/JCTree$JCOpens;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitOpens, void, $JCTree$JCOpens*)},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitPackageDef, void, $JCTree$JCPackageDecl*)},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitParens, void, $JCTree$JCParens*)},
	{"visitParenthesizedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCParenthesizedPattern;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitParenthesizedPattern, void, $JCTree$JCParenthesizedPattern*)},
	{"visitProvides", "(Lcom/sun/tools/javac/tree/JCTree$JCProvides;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitProvides, void, $JCTree$JCProvides*)},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitReference, void, $JCTree$JCMemberReference*)},
	{"visitRequires", "(Lcom/sun/tools/javac/tree/JCTree$JCRequires;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitRequires, void, $JCTree$JCRequires*)},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitReturn, void, $JCTree$JCReturn*)},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitSelect, void, $JCTree$JCFieldAccess*)},
	{"visitSkip", "(Lcom/sun/tools/javac/tree/JCTree$JCSkip;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitSkip, void, $JCTree$JCSkip*)},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitSwitch, void, $JCTree$JCSwitch*)},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitSwitchExpression, void, $JCTree$JCSwitchExpression*)},
	{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitSynchronized, void, $JCTree$JCSynchronized*)},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitThrow, void, $JCTree$JCThrow*)},
	{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTopLevel, void, $JCTree$JCCompilationUnit*)},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTree, void, $JCTree*)},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTry, void, $JCTree$JCTry*)},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTypeApply, void, $JCTree$JCTypeApply*)},
	{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTypeArray, void, $JCTree$JCArrayTypeTree*)},
	{"visitTypeBoundKind", "(Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTypeBoundKind, void, $JCTree$TypeBoundKind*)},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTypeCast, void, $JCTree$JCTypeCast*)},
	{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTypeIdent, void, $JCTree$JCPrimitiveTypeTree*)},
	{"visitTypeIntersection", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTypeIntersection, void, $JCTree$JCTypeIntersection*)},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTypeParameter, void, $JCTree$JCTypeParameter*)},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTypeTest, void, $JCTree$JCInstanceOf*)},
	{"visitTypeUnion", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitTypeUnion, void, $JCTree$JCTypeUnion*)},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitUnary, void, $JCTree$JCUnary*)},
	{"visitUses", "(Lcom/sun/tools/javac/tree/JCTree$JCUses;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitUses, void, $JCTree$JCUses*)},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitVarDef, void, $JCTree$JCVariableDecl*)},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitWhileLoop, void, $JCTree$JCWhileLoop*)},
	{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitWildcard, void, $JCTree$JCWildcard*)},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC, $virtualMethod(JCTree$Visitor, visitYield, void, $JCTree$JCYield*)},
	{}
};

$InnerClassInfo _JCTree$Visitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$Visitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$Visitor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JCTree$Visitor_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$Visitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$Visitor($Class* clazz) {
	return $of($alloc(JCTree$Visitor));
}

void JCTree$Visitor::init$() {
}

void JCTree$Visitor::visitTopLevel($JCTree$JCCompilationUnit* that) {
	visitTree(that);
}

void JCTree$Visitor::visitPackageDef($JCTree$JCPackageDecl* that) {
	visitTree(that);
}

void JCTree$Visitor::visitImport($JCTree$JCImport* that) {
	visitTree(that);
}

void JCTree$Visitor::visitClassDef($JCTree$JCClassDecl* that) {
	visitTree(that);
}

void JCTree$Visitor::visitMethodDef($JCTree$JCMethodDecl* that) {
	visitTree(that);
}

void JCTree$Visitor::visitVarDef($JCTree$JCVariableDecl* that) {
	visitTree(that);
}

void JCTree$Visitor::visitSkip($JCTree$JCSkip* that) {
	visitTree(that);
}

void JCTree$Visitor::visitBlock($JCTree$JCBlock* that) {
	visitTree(that);
}

void JCTree$Visitor::visitDoLoop($JCTree$JCDoWhileLoop* that) {
	visitTree(that);
}

void JCTree$Visitor::visitWhileLoop($JCTree$JCWhileLoop* that) {
	visitTree(that);
}

void JCTree$Visitor::visitForLoop($JCTree$JCForLoop* that) {
	visitTree(that);
}

void JCTree$Visitor::visitForeachLoop($JCTree$JCEnhancedForLoop* that) {
	visitTree(that);
}

void JCTree$Visitor::visitLabelled($JCTree$JCLabeledStatement* that) {
	visitTree(that);
}

void JCTree$Visitor::visitSwitch($JCTree$JCSwitch* that) {
	visitTree(that);
}

void JCTree$Visitor::visitCase($JCTree$JCCase* that) {
	visitTree(that);
}

void JCTree$Visitor::visitSwitchExpression($JCTree$JCSwitchExpression* that) {
	visitTree(that);
}

void JCTree$Visitor::visitSynchronized($JCTree$JCSynchronized* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTry($JCTree$JCTry* that) {
	visitTree(that);
}

void JCTree$Visitor::visitCatch($JCTree$JCCatch* that) {
	visitTree(that);
}

void JCTree$Visitor::visitConditional($JCTree$JCConditional* that) {
	visitTree(that);
}

void JCTree$Visitor::visitIf($JCTree$JCIf* that) {
	visitTree(that);
}

void JCTree$Visitor::visitExec($JCTree$JCExpressionStatement* that) {
	visitTree(that);
}

void JCTree$Visitor::visitBreak($JCTree$JCBreak* that) {
	visitTree(that);
}

void JCTree$Visitor::visitYield($JCTree$JCYield* that) {
	visitTree(that);
}

void JCTree$Visitor::visitContinue($JCTree$JCContinue* that) {
	visitTree(that);
}

void JCTree$Visitor::visitReturn($JCTree$JCReturn* that) {
	visitTree(that);
}

void JCTree$Visitor::visitThrow($JCTree$JCThrow* that) {
	visitTree(that);
}

void JCTree$Visitor::visitAssert($JCTree$JCAssert* that) {
	visitTree(that);
}

void JCTree$Visitor::visitApply($JCTree$JCMethodInvocation* that) {
	visitTree(that);
}

void JCTree$Visitor::visitNewClass($JCTree$JCNewClass* that) {
	visitTree(that);
}

void JCTree$Visitor::visitNewArray($JCTree$JCNewArray* that) {
	visitTree(that);
}

void JCTree$Visitor::visitLambda($JCTree$JCLambda* that) {
	visitTree(that);
}

void JCTree$Visitor::visitParens($JCTree$JCParens* that) {
	visitTree(that);
}

void JCTree$Visitor::visitAssign($JCTree$JCAssign* that) {
	visitTree(that);
}

void JCTree$Visitor::visitAssignop($JCTree$JCAssignOp* that) {
	visitTree(that);
}

void JCTree$Visitor::visitUnary($JCTree$JCUnary* that) {
	visitTree(that);
}

void JCTree$Visitor::visitBinary($JCTree$JCBinary* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTypeCast($JCTree$JCTypeCast* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTypeTest($JCTree$JCInstanceOf* that) {
	visitTree(that);
}

void JCTree$Visitor::visitBindingPattern($JCTree$JCBindingPattern* that) {
	visitTree(that);
}

void JCTree$Visitor::visitDefaultCaseLabel($JCTree$JCDefaultCaseLabel* that) {
	visitTree(that);
}

void JCTree$Visitor::visitParenthesizedPattern($JCTree$JCParenthesizedPattern* that) {
	visitTree(that);
}

void JCTree$Visitor::visitGuardPattern($JCTree$JCGuardPattern* that) {
	visitTree(that);
}

void JCTree$Visitor::visitIndexed($JCTree$JCArrayAccess* that) {
	visitTree(that);
}

void JCTree$Visitor::visitSelect($JCTree$JCFieldAccess* that) {
	visitTree(that);
}

void JCTree$Visitor::visitReference($JCTree$JCMemberReference* that) {
	visitTree(that);
}

void JCTree$Visitor::visitIdent($JCTree$JCIdent* that) {
	visitTree(that);
}

void JCTree$Visitor::visitLiteral($JCTree$JCLiteral* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTypeIdent($JCTree$JCPrimitiveTypeTree* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTypeArray($JCTree$JCArrayTypeTree* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTypeApply($JCTree$JCTypeApply* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTypeUnion($JCTree$JCTypeUnion* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTypeIntersection($JCTree$JCTypeIntersection* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTypeParameter($JCTree$JCTypeParameter* that) {
	visitTree(that);
}

void JCTree$Visitor::visitWildcard($JCTree$JCWildcard* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTypeBoundKind($JCTree$TypeBoundKind* that) {
	visitTree(that);
}

void JCTree$Visitor::visitAnnotation($JCTree$JCAnnotation* that) {
	visitTree(that);
}

void JCTree$Visitor::visitModifiers($JCTree$JCModifiers* that) {
	visitTree(that);
}

void JCTree$Visitor::visitAnnotatedType($JCTree$JCAnnotatedType* that) {
	visitTree(that);
}

void JCTree$Visitor::visitErroneous($JCTree$JCErroneous* that) {
	visitTree(that);
}

void JCTree$Visitor::visitModuleDef($JCTree$JCModuleDecl* that) {
	visitTree(that);
}

void JCTree$Visitor::visitExports($JCTree$JCExports* that) {
	visitTree(that);
}

void JCTree$Visitor::visitOpens($JCTree$JCOpens* that) {
	visitTree(that);
}

void JCTree$Visitor::visitProvides($JCTree$JCProvides* that) {
	visitTree(that);
}

void JCTree$Visitor::visitRequires($JCTree$JCRequires* that) {
	visitTree(that);
}

void JCTree$Visitor::visitUses($JCTree$JCUses* that) {
	visitTree(that);
}

void JCTree$Visitor::visitLetExpr($JCTree$LetExpr* that) {
	visitTree(that);
}

void JCTree$Visitor::visitTree($JCTree* that) {
	$Assert::error();
}

JCTree$Visitor::JCTree$Visitor() {
}

$Class* JCTree$Visitor::load$($String* name, bool initialize) {
	$loadClass(JCTree$Visitor, name, initialize, &_JCTree$Visitor_ClassInfo_, allocate$JCTree$Visitor);
	return class$;
}

$Class* JCTree$Visitor::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com