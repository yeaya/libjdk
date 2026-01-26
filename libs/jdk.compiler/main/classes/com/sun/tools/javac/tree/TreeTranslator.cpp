#include <com/sun/tools/javac/tree/TreeTranslator.h>

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
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
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
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDefaultCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
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
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCParenthesizedPattern = ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
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
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$TypeBoundKind = ::com::sun::tools::javac::tree::JCTree$TypeBoundKind;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeTranslator_FieldInfo_[] = {
	{"result", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PROTECTED, $field(TreeTranslator, result)},
	{}
};

$MethodInfo _TreeTranslator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TreeTranslator, init$, void)},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PUBLIC, $virtualMethod(TreeTranslator, translate, $JCTree*, $JCTree*)},
	{"translate", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;)Lcom/sun/tools/javac/util/List<TT;>;", $PUBLIC, $virtualMethod(TreeTranslator, translate, $List*, $List*)},
	{"translateAnnotations", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC, $virtualMethod(TreeTranslator, translateAnnotations, $List*, $List*)},
	{"translateCases", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;", $PUBLIC, $virtualMethod(TreeTranslator, translateCases, $List*, $List*)},
	{"translateCatchers", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;", $PUBLIC, $virtualMethod(TreeTranslator, translateCatchers, $List*, $List*)},
	{"translateTypeParams", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;", $PUBLIC, $virtualMethod(TreeTranslator, translateTypeParams, $List*, $List*)},
	{"translateVarDefs", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", $PUBLIC, $virtualMethod(TreeTranslator, translateVarDefs, $List*, $List*)},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitAnnotatedType, void, $JCTree$JCAnnotatedType*)},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitAnnotation, void, $JCTree$JCAnnotation*)},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitApply, void, $JCTree$JCMethodInvocation*)},
	{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitAssert, void, $JCTree$JCAssert*)},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitAssign, void, $JCTree$JCAssign*)},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitAssignop, void, $JCTree$JCAssignOp*)},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitBinary, void, $JCTree$JCBinary*)},
	{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitBindingPattern, void, $JCTree$JCBindingPattern*)},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitBlock, void, $JCTree$JCBlock*)},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitBreak, void, $JCTree$JCBreak*)},
	{"visitCase", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitCase, void, $JCTree$JCCase*)},
	{"visitCatch", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitCatch, void, $JCTree$JCCatch*)},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitClassDef, void, $JCTree$JCClassDecl*)},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitConditional, void, $JCTree$JCConditional*)},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitContinue, void, $JCTree$JCContinue*)},
	{"visitDefaultCaseLabel", "(Lcom/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitDefaultCaseLabel, void, $JCTree$JCDefaultCaseLabel*)},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitDoLoop, void, $JCTree$JCDoWhileLoop*)},
	{"visitErroneous", "(Lcom/sun/tools/javac/tree/JCTree$JCErroneous;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitErroneous, void, $JCTree$JCErroneous*)},
	{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitExec, void, $JCTree$JCExpressionStatement*)},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitForLoop, void, $JCTree$JCForLoop*)},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitForeachLoop, void, $JCTree$JCEnhancedForLoop*)},
	{"visitGuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitGuardPattern, void, $JCTree$JCGuardPattern*)},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitIdent, void, $JCTree$JCIdent*)},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitIf, void, $JCTree$JCIf*)},
	{"visitImport", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitImport, void, $JCTree$JCImport*)},
	{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitIndexed, void, $JCTree$JCArrayAccess*)},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitLabelled, void, $JCTree$JCLabeledStatement*)},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitLambda, void, $JCTree$JCLambda*)},
	{"visitLetExpr", "(Lcom/sun/tools/javac/tree/JCTree$LetExpr;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitLetExpr, void, $JCTree$LetExpr*)},
	{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitLiteral, void, $JCTree$JCLiteral*)},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitMethodDef, void, $JCTree$JCMethodDecl*)},
	{"visitModifiers", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitModifiers, void, $JCTree$JCModifiers*)},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitNewArray, void, $JCTree$JCNewArray*)},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitNewClass, void, $JCTree$JCNewClass*)},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitPackageDef, void, $JCTree$JCPackageDecl*)},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitParens, void, $JCTree$JCParens*)},
	{"visitParenthesizedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCParenthesizedPattern;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitParenthesizedPattern, void, $JCTree$JCParenthesizedPattern*)},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitReference, void, $JCTree$JCMemberReference*)},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitReturn, void, $JCTree$JCReturn*)},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitSelect, void, $JCTree$JCFieldAccess*)},
	{"visitSkip", "(Lcom/sun/tools/javac/tree/JCTree$JCSkip;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitSkip, void, $JCTree$JCSkip*)},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitSwitch, void, $JCTree$JCSwitch*)},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitSwitchExpression, void, $JCTree$JCSwitchExpression*)},
	{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitSynchronized, void, $JCTree$JCSynchronized*)},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitThrow, void, $JCTree$JCThrow*)},
	{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTopLevel, void, $JCTree$JCCompilationUnit*)},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTree, void, $JCTree*)},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTry, void, $JCTree$JCTry*)},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTypeApply, void, $JCTree$JCTypeApply*)},
	{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTypeArray, void, $JCTree$JCArrayTypeTree*)},
	{"visitTypeBoundKind", "(Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTypeBoundKind, void, $JCTree$TypeBoundKind*)},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTypeCast, void, $JCTree$JCTypeCast*)},
	{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTypeIdent, void, $JCTree$JCPrimitiveTypeTree*)},
	{"visitTypeIntersection", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTypeIntersection, void, $JCTree$JCTypeIntersection*)},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTypeParameter, void, $JCTree$JCTypeParameter*)},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTypeTest, void, $JCTree$JCInstanceOf*)},
	{"visitTypeUnion", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitTypeUnion, void, $JCTree$JCTypeUnion*)},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitUnary, void, $JCTree$JCUnary*)},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitVarDef, void, $JCTree$JCVariableDecl*)},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitWhileLoop, void, $JCTree$JCWhileLoop*)},
	{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitWildcard, void, $JCTree$JCWildcard*)},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC, $virtualMethod(TreeTranslator, visitYield, void, $JCTree$JCYield*)},
	{}
};

$InnerClassInfo _TreeTranslator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeTranslator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.TreeTranslator",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_TreeTranslator_FieldInfo_,
	_TreeTranslator_MethodInfo_,
	nullptr,
	nullptr,
	_TreeTranslator_InnerClassesInfo_
};

$Object* allocate$TreeTranslator($Class* clazz) {
	return $of($alloc(TreeTranslator));
}

void TreeTranslator::init$() {
	$JCTree$Visitor::init$();
}

$JCTree* TreeTranslator::translate($JCTree* tree) {
	if (tree == nullptr) {
		return nullptr;
	} else {
		$nc(tree)->accept(this);
		$var($JCTree, tmpResult, this->result);
		$set(this, result, nullptr);
		return tmpResult;
	}
}

$List* TreeTranslator::translate($List* trees) {
	if (trees == nullptr) {
		return nullptr;
	}
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set(l, head, translate($cast($JCTree, l->head)));
		}
	}
	return trees;
}

$List* TreeTranslator::translateVarDefs($List* trees) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set(l, head, translate($cast($JCTree$JCVariableDecl, l->head)));
		}
	}
	return trees;
}

$List* TreeTranslator::translateTypeParams($List* trees) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set(l, head, translate($cast($JCTree$JCTypeParameter, l->head)));
		}
	}
	return trees;
}

$List* TreeTranslator::translateCases($List* trees) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set(l, head, translate($cast($JCTree$JCCase, l->head)));
		}
	}
	return trees;
}

$List* TreeTranslator::translateCatchers($List* trees) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set(l, head, translate($cast($JCTree$JCCatch, l->head)));
		}
	}
	return trees;
}

$List* TreeTranslator::translateAnnotations($List* trees) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$set(l, head, translate($cast($JCTree$JCAnnotation, l->head)));
		}
	}
	return trees;
}

void TreeTranslator::visitTopLevel($JCTree$JCCompilationUnit* tree) {
	$set($nc(tree), defs, translate(tree->defs));
	$set(this, result, tree);
}

void TreeTranslator::visitPackageDef($JCTree$JCPackageDecl* tree) {
	$set($nc(tree), annotations, translate(tree->annotations));
	$set(tree, pid, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->pid))));
	$set(this, result, tree);
}

void TreeTranslator::visitImport($JCTree$JCImport* tree) {
	$set($nc(tree), qualid, translate(tree->qualid));
	$set(this, result, tree);
}

void TreeTranslator::visitClassDef($JCTree$JCClassDecl* tree) {
	$set($nc(tree), mods, $cast($JCTree$JCModifiers, translate(static_cast<$JCTree*>(tree->mods))));
	$set(tree, typarams, translateTypeParams(tree->typarams));
	$set(tree, extending, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->extending))));
	$set(tree, implementing, translate(tree->implementing));
	$set(tree, defs, translate(tree->defs));
	$set(this, result, tree);
}

void TreeTranslator::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$set($nc(tree), mods, $cast($JCTree$JCModifiers, translate(static_cast<$JCTree*>(tree->mods))));
	$set(tree, restype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->restype))));
	$set(tree, typarams, translateTypeParams(tree->typarams));
	$set(tree, recvparam, $cast($JCTree$JCVariableDecl, translate(static_cast<$JCTree*>(tree->recvparam))));
	$set(tree, params, translateVarDefs(tree->params));
	$set(tree, thrown, translate(tree->thrown));
	$set(tree, body, $cast($JCTree$JCBlock, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TreeTranslator::visitVarDef($JCTree$JCVariableDecl* tree) {
	$set($nc(tree), mods, $cast($JCTree$JCModifiers, translate(static_cast<$JCTree*>(tree->mods))));
	$set(tree, nameexpr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->nameexpr))));
	$set(tree, vartype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->vartype))));
	$set(tree, init, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->init))));
	$set(this, result, tree);
}

void TreeTranslator::visitSkip($JCTree$JCSkip* tree) {
	$set(this, result, tree);
}

void TreeTranslator::visitBlock($JCTree$JCBlock* tree) {
	$set($nc(tree), stats, translate(tree->stats));
	$set(this, result, tree);
}

void TreeTranslator::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$set($nc(tree), body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(tree, cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond))));
	$set(this, result, tree);
}

void TreeTranslator::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$set($nc(tree), cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond))));
	$set(tree, body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TreeTranslator::visitForLoop($JCTree$JCForLoop* tree) {
	$set($nc(tree), init, translate(tree->init));
	$set(tree, cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond))));
	$set(tree, step, translate(tree->step));
	$set(tree, body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TreeTranslator::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$set($nc(tree), var, $cast($JCTree$JCVariableDecl, translate(static_cast<$JCTree*>(tree->var))));
	$set(tree, expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(tree, body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TreeTranslator::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$set($nc(tree), body, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TreeTranslator::visitSwitch($JCTree$JCSwitch* tree) {
	$set($nc(tree), selector, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->selector))));
	$set(tree, cases, translateCases(tree->cases));
	$set(this, result, tree);
}

void TreeTranslator::visitCase($JCTree$JCCase* tree) {
	$set($nc(tree), labels, translate(tree->labels));
	$set(tree, stats, translate(tree->stats));
	$set(this, result, tree);
}

void TreeTranslator::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$set($nc(tree), selector, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->selector))));
	$set(tree, cases, translateCases(tree->cases));
	$set(this, result, tree);
}

void TreeTranslator::visitSynchronized($JCTree$JCSynchronized* tree) {
	$set($nc(tree), lock, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lock))));
	$set(tree, body, $cast($JCTree$JCBlock, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TreeTranslator::visitTry($JCTree$JCTry* tree) {
	$set($nc(tree), resources, translate(tree->resources));
	$set(tree, body, $cast($JCTree$JCBlock, translate(static_cast<$JCTree*>(tree->body))));
	$set(tree, catchers, translateCatchers(tree->catchers));
	$set(tree, finalizer, $cast($JCTree$JCBlock, translate(static_cast<$JCTree*>(tree->finalizer))));
	$set(this, result, tree);
}

void TreeTranslator::visitCatch($JCTree$JCCatch* tree) {
	$set($nc(tree), param, $cast($JCTree$JCVariableDecl, translate(static_cast<$JCTree*>(tree->param))));
	$set(tree, body, $cast($JCTree$JCBlock, translate(static_cast<$JCTree*>(tree->body))));
	$set(this, result, tree);
}

void TreeTranslator::visitConditional($JCTree$JCConditional* tree) {
	$set($nc(tree), cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond))));
	$set(tree, truepart, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->truepart))));
	$set(tree, falsepart, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->falsepart))));
	$set(this, result, tree);
}

void TreeTranslator::visitIf($JCTree$JCIf* tree) {
	$set($nc(tree), cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond))));
	$set(tree, thenpart, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->thenpart))));
	$set(tree, elsepart, $cast($JCTree$JCStatement, translate(static_cast<$JCTree*>(tree->elsepart))));
	$set(this, result, tree);
}

void TreeTranslator::visitExec($JCTree$JCExpressionStatement* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(this, result, tree);
}

void TreeTranslator::visitBreak($JCTree$JCBreak* tree) {
	$set(this, result, tree);
}

void TreeTranslator::visitYield($JCTree$JCYield* tree) {
	$set($nc(tree), value, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->value))));
	$set(this, result, tree);
}

void TreeTranslator::visitContinue($JCTree$JCContinue* tree) {
	$set(this, result, tree);
}

void TreeTranslator::visitReturn($JCTree$JCReturn* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(this, result, tree);
}

void TreeTranslator::visitThrow($JCTree$JCThrow* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(this, result, tree);
}

void TreeTranslator::visitAssert($JCTree$JCAssert* tree) {
	$set($nc(tree), cond, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->cond))));
	$set(tree, detail, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->detail))));
	$set(this, result, tree);
}

void TreeTranslator::visitApply($JCTree$JCMethodInvocation* tree) {
	$set($nc(tree), meth, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->meth))));
	$set(tree, args, translate(tree->args));
	$set(this, result, tree);
}

void TreeTranslator::visitNewClass($JCTree$JCNewClass* tree) {
	$set($nc(tree), encl, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->encl))));
	$set(tree, clazz, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->clazz))));
	$set(tree, args, translate(tree->args));
	$set(tree, def, $cast($JCTree$JCClassDecl, translate(static_cast<$JCTree*>(tree->def))));
	$set(this, result, tree);
}

void TreeTranslator::visitLambda($JCTree$JCLambda* tree) {
	$set($nc(tree), params, translate(tree->params));
	$set(tree, body, translate(tree->body));
	$set(this, result, tree);
}

void TreeTranslator::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	$set($nc(tree), annotations, translate(tree->annotations));
	$var($List, dimAnnos, $List::nil());
	{
		$var($Iterator, i$, $nc(tree->dimAnnotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, origDimAnnos, $cast($List, i$->next()));
			$assign(dimAnnos, $nc(dimAnnos)->append($(translate(origDimAnnos))));
		}
	}
	$set(tree, dimAnnotations, dimAnnos);
	$set(tree, elemtype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->elemtype))));
	$set(tree, dims, translate(tree->dims));
	$set(tree, elems, translate(tree->elems));
	$set(this, result, tree);
}

void TreeTranslator::visitParens($JCTree$JCParens* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(this, result, tree);
}

void TreeTranslator::visitAssign($JCTree$JCAssign* tree) {
	$set($nc(tree), lhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lhs))));
	$set(tree, rhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->rhs))));
	$set(this, result, tree);
}

void TreeTranslator::visitAssignop($JCTree$JCAssignOp* tree) {
	$set($nc(tree), lhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lhs))));
	$set(tree, rhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->rhs))));
	$set(this, result, tree);
}

void TreeTranslator::visitUnary($JCTree$JCUnary* tree) {
	$set($nc(tree), arg, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->arg))));
	$set(this, result, tree);
}

void TreeTranslator::visitBinary($JCTree$JCBinary* tree) {
	$set($nc(tree), lhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->lhs))));
	$set(tree, rhs, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->rhs))));
	$set(this, result, tree);
}

void TreeTranslator::visitTypeCast($JCTree$JCTypeCast* tree) {
	$set($nc(tree), clazz, translate(tree->clazz));
	$set(tree, expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(this, result, tree);
}

void TreeTranslator::visitTypeTest($JCTree$JCInstanceOf* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(tree, pattern, translate(tree->pattern));
	$set(this, result, tree);
}

void TreeTranslator::visitBindingPattern($JCTree$JCBindingPattern* tree) {
	$set($nc(tree), var, $cast($JCTree$JCVariableDecl, translate(static_cast<$JCTree*>(tree->var))));
	$set(this, result, tree);
}

void TreeTranslator::visitDefaultCaseLabel($JCTree$JCDefaultCaseLabel* tree) {
	$set(this, result, tree);
}

void TreeTranslator::visitParenthesizedPattern($JCTree$JCParenthesizedPattern* tree) {
	$set($nc(tree), pattern, $cast($JCTree$JCPattern, translate(static_cast<$JCTree*>(tree->pattern))));
	$set(this, result, tree);
}

void TreeTranslator::visitGuardPattern($JCTree$JCGuardPattern* tree) {
	$set($nc(tree), patt, $cast($JCTree$JCPattern, translate(static_cast<$JCTree*>(tree->patt))));
	$set(tree, expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(this, result, tree);
}

void TreeTranslator::visitIndexed($JCTree$JCArrayAccess* tree) {
	$set($nc(tree), indexed, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->indexed))));
	$set(tree, index, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->index))));
	$set(this, result, tree);
}

void TreeTranslator::visitSelect($JCTree$JCFieldAccess* tree) {
	$set($nc(tree), selected, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->selected))));
	$set(this, result, tree);
}

void TreeTranslator::visitReference($JCTree$JCMemberReference* tree) {
	$set($nc(tree), expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(this, result, tree);
}

void TreeTranslator::visitIdent($JCTree$JCIdent* tree) {
	$set(this, result, tree);
}

void TreeTranslator::visitLiteral($JCTree$JCLiteral* tree) {
	$set(this, result, tree);
}

void TreeTranslator::visitTypeIdent($JCTree$JCPrimitiveTypeTree* tree) {
	$set(this, result, tree);
}

void TreeTranslator::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	$set($nc(tree), elemtype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->elemtype))));
	$set(this, result, tree);
}

void TreeTranslator::visitTypeApply($JCTree$JCTypeApply* tree) {
	$set($nc(tree), clazz, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->clazz))));
	$set(tree, arguments, translate(tree->arguments));
	$set(this, result, tree);
}

void TreeTranslator::visitTypeUnion($JCTree$JCTypeUnion* tree) {
	$set($nc(tree), alternatives, translate(tree->alternatives));
	$set(this, result, tree);
}

void TreeTranslator::visitTypeIntersection($JCTree$JCTypeIntersection* tree) {
	$set($nc(tree), bounds, translate(tree->bounds));
	$set(this, result, tree);
}

void TreeTranslator::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	$set($nc(tree), annotations, translate(tree->annotations));
	$set(tree, bounds, translate(tree->bounds));
	$set(this, result, tree);
}

void TreeTranslator::visitWildcard($JCTree$JCWildcard* tree) {
	$set($nc(tree), kind, $cast($JCTree$TypeBoundKind, translate(static_cast<$JCTree*>(tree->kind))));
	$set(tree, inner, translate(tree->inner));
	$set(this, result, tree);
}

void TreeTranslator::visitTypeBoundKind($JCTree$TypeBoundKind* tree) {
	$set(this, result, tree);
}

void TreeTranslator::visitErroneous($JCTree$JCErroneous* tree) {
	$set(this, result, tree);
}

void TreeTranslator::visitLetExpr($JCTree$LetExpr* tree) {
	$set($nc(tree), defs, translate(tree->defs));
	$set(tree, expr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
	$set(this, result, tree);
}

void TreeTranslator::visitModifiers($JCTree$JCModifiers* tree) {
	$set($nc(tree), annotations, translateAnnotations(tree->annotations));
	$set(this, result, tree);
}

void TreeTranslator::visitAnnotation($JCTree$JCAnnotation* tree) {
	$set($nc(tree), annotationType, translate(tree->annotationType));
	$set(tree, args, translate(tree->args));
	$set(this, result, tree);
}

void TreeTranslator::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	$set($nc(tree), annotations, translate(tree->annotations));
	$set(tree, underlyingType, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->underlyingType))));
	$set(this, result, tree);
}

void TreeTranslator::visitTree($JCTree* tree) {
	$throwNew($AssertionError, $of(tree));
}

TreeTranslator::TreeTranslator() {
}

$Class* TreeTranslator::load$($String* name, bool initialize) {
	$loadClass(TreeTranslator, name, initialize, &_TreeTranslator_ClassInfo_, allocate$TreeTranslator);
	return class$;
}

$Class* TreeTranslator::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com