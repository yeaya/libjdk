#include <com/sun/tools/javac/tree/JCTree$Factory.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/ModuleTree$ModuleKind.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/TypeTag.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExports.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOpens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCUses.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $ModuleTree$ModuleKind = ::com::sun::source::tree::ModuleTree$ModuleKind;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
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
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExports = ::com::sun::tools::javac::tree::JCTree$JCExports;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOpens = ::com::sun::tools::javac::tree::JCTree$JCOpens;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
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
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCUses = ::com::sun::tools::javac::tree::JCTree$JCUses;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$TypeBoundKind = ::com::sun::tools::javac::tree::JCTree$TypeBoundKind;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _JCTree$Factory_MethodInfo_[] = {
	{"Annotation", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Annotation, $JCTree$JCAnnotation*, $JCTree*, $List*)},
	{"Apply", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Apply, $JCTree$JCMethodInvocation*, $List*, $JCTree$JCExpression*, $List*)},
	{"Assert", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCAssert;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Assert, $JCTree$JCAssert*, $JCTree$JCExpression*, $JCTree$JCExpression*)},
	{"Assign", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCAssign;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Assign, $JCTree$JCAssign*, $JCTree$JCExpression*, $JCTree$JCExpression*)},
	{"Assignop", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Assignop, $JCTree$JCAssignOp*, $JCTree$Tag*, $JCTree*, $JCTree*)},
	{"Binary", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCBinary;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Binary, $JCTree$JCBinary*, $JCTree$Tag*, $JCTree$JCExpression*, $JCTree$JCExpression*)},
	{"BindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, BindingPattern, $JCTree$JCBindingPattern*, $JCTree$JCVariableDecl*)},
	{"Block", "(JLcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", "(JLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Block, $JCTree$JCBlock*, int64_t, $List*)},
	{"Break", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCBreak;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Break, $JCTree$JCBreak*, $Name*)},
	{"Case", "(Lcom/sun/source/tree/CaseTree$CaseKind;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCCase;", "(Lcom/sun/source/tree/CaseTree$CaseKind;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCCase;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Case, $JCTree$JCCase*, $CaseTree$CaseKind*, $List*, $List*, $JCTree*)},
	{"Catch", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCCatch;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Catch, $JCTree$JCCatch*, $JCTree$JCVariableDecl*, $JCTree$JCBlock*)},
	{"ClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, ClassDef, $JCTree$JCClassDecl*, $JCTree$JCModifiers*, $Name*, $List*, $JCTree$JCExpression*, $List*, $List*)},
	{"Conditional", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCConditional;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Conditional, $JCTree$JCConditional*, $JCTree$JCExpression*, $JCTree$JCExpression*, $JCTree$JCExpression*)},
	{"Continue", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCContinue;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Continue, $JCTree$JCContinue*, $Name*)},
	{"DoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, DoLoop, $JCTree$JCDoWhileLoop*, $JCTree$JCStatement*, $JCTree$JCExpression*)},
	{"Erroneous", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Erroneous, $JCTree$JCErroneous*, $List*)},
	{"Exec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Exec, $JCTree$JCExpressionStatement*, $JCTree$JCExpression*)},
	{"Exports", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExports;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCExports;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Exports, $JCTree$JCExports*, $JCTree$JCExpression*, $List*)},
	{"ForLoop", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCForLoop;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCForLoop;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, ForLoop, $JCTree$JCForLoop*, $List*, $JCTree$JCExpression*, $List*, $JCTree$JCStatement*)},
	{"ForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, ForeachLoop, $JCTree$JCEnhancedForLoop*, $JCTree$JCVariableDecl*, $JCTree$JCExpression*, $JCTree$JCStatement*)},
	{"Ident", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCIdent;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Ident, $JCTree$JCIdent*, $Name*)},
	{"If", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCIf;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, If, $JCTree$JCIf*, $JCTree$JCExpression*, $JCTree$JCStatement*, $JCTree$JCStatement*)},
	{"Import", "(Lcom/sun/tools/javac/tree/JCTree;Z)Lcom/sun/tools/javac/tree/JCTree$JCImport;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Import, $JCTree$JCImport*, $JCTree*, bool)},
	{"Indexed", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Indexed, $JCTree$JCArrayAccess*, $JCTree$JCExpression*, $JCTree$JCExpression*)},
	{"Labelled", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Labelled, $JCTree$JCLabeledStatement*, $Name*, $JCTree$JCStatement*)},
	{"LetExpr", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$LetExpr;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$LetExpr;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, LetExpr, $JCTree$LetExpr*, $List*, $JCTree$JCExpression*)},
	{"Literal", "(Lcom/sun/tools/javac/code/TypeTag;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCLiteral;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Literal, $JCTree$JCLiteral*, $TypeTag*, Object$*)},
	{"MethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, MethodDef, $JCTree$JCMethodDecl*, $JCTree$JCModifiers*, $Name*, $JCTree$JCExpression*, $List*, $JCTree$JCVariableDecl*, $List*, $List*, $JCTree$JCBlock*, $JCTree$JCExpression*)},
	{"Modifiers", "(JLcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", "(JLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Modifiers, $JCTree$JCModifiers*, int64_t, $List*)},
	{"ModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/source/tree/ModuleTree$ModuleKind;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/source/tree/ModuleTree$ModuleKind;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCDirective;>;)Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, ModuleDef, $JCTree$JCModuleDecl*, $JCTree$JCModifiers*, $ModuleTree$ModuleKind*, $JCTree$JCExpression*, $List*)},
	{"NewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCNewArray;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCNewArray;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, NewArray, $JCTree$JCNewArray*, $JCTree$JCExpression*, $List*, $List*)},
	{"NewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, NewClass, $JCTree$JCNewClass*, $JCTree$JCExpression*, $List*, $JCTree$JCExpression*, $List*, $JCTree$JCClassDecl*)},
	{"Opens", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCOpens;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCOpens;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Opens, $JCTree$JCOpens*, $JCTree$JCExpression*, $List*)},
	{"PackageDecl", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, PackageDecl, $JCTree$JCPackageDecl*, $List*, $JCTree$JCExpression*)},
	{"Parens", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCParens;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Parens, $JCTree$JCParens*, $JCTree$JCExpression*)},
	{"Provides", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCProvides;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCProvides;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Provides, $JCTree$JCProvides*, $JCTree$JCExpression*, $List*)},
	{"Requires", "(ZZLcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCRequires;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Requires, $JCTree$JCRequires*, bool, bool, $JCTree$JCExpression*)},
	{"Return", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCReturn;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Return, $JCTree$JCReturn*, $JCTree$JCExpression*)},
	{"Select", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Select, $JCTree$JCFieldAccess*, $JCTree$JCExpression*, $Name*)},
	{"Skip", "()Lcom/sun/tools/javac/tree/JCTree$JCSkip;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Skip, $JCTree$JCSkip*)},
	{"Switch", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCSwitch;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/tree/JCTree$JCSwitch;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Switch, $JCTree$JCSwitch*, $JCTree$JCExpression*, $List*)},
	{"SwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, SwitchExpression, $JCTree$JCSwitchExpression*, $JCTree$JCExpression*, $List*)},
	{"Synchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Synchronized, $JCTree$JCSynchronized*, $JCTree$JCExpression*, $JCTree$JCBlock*)},
	{"Throw", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCThrow;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Throw, $JCTree$JCThrow*, $JCTree$JCExpression*)},
	{"TopLevel", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, TopLevel, $JCTree$JCCompilationUnit*, $List*)},
	{"Try", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCTry;", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCTry;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Try, $JCTree$JCTry*, $JCTree$JCBlock*, $List*, $JCTree$JCBlock*)},
	{"Try", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCTry;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCTry;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Try, $JCTree$JCTry*, $List*, $JCTree$JCBlock*, $List*, $JCTree$JCBlock*)},
	{"TypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, TypeApply, $JCTree$JCTypeApply*, $JCTree$JCExpression*, $List*)},
	{"TypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, TypeArray, $JCTree$JCArrayTypeTree*, $JCTree$JCExpression*)},
	{"TypeBoundKind", "(Lcom/sun/tools/javac/code/BoundKind;)Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, TypeBoundKind, $JCTree$TypeBoundKind*, $BoundKind*)},
	{"TypeCast", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, TypeCast, $JCTree$JCTypeCast*, $JCTree*, $JCTree$JCExpression*)},
	{"TypeIdent", "(Lcom/sun/tools/javac/code/TypeTag;)Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, TypeIdent, $JCTree$JCPrimitiveTypeTree*, $TypeTag*)},
	{"TypeParameter", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;", $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, TypeParameter, $JCTree$JCTypeParameter*, $Name*, $List*)},
	{"TypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, TypeTest, $JCTree$JCInstanceOf*, $JCTree$JCExpression*, $JCTree*)},
	{"Unary", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCUnary;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Unary, $JCTree$JCUnary*, $JCTree$Tag*, $JCTree$JCExpression*)},
	{"Uses", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCUses;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Uses, $JCTree$JCUses*, $JCTree$JCExpression*)},
	{"VarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, VarDef, $JCTree$JCVariableDecl*, $JCTree$JCModifiers*, $Name*, $JCTree$JCExpression*, $JCTree$JCExpression*)},
	{"WhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, WhileLoop, $JCTree$JCWhileLoop*, $JCTree$JCExpression*, $JCTree$JCStatement*)},
	{"Wildcard", "(Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCWildcard;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Wildcard, $JCTree$JCWildcard*, $JCTree$TypeBoundKind*, $JCTree*)},
	{"Yield", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCYield;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCTree$Factory, Yield, $JCTree$JCYield*, $JCTree$JCExpression*)},
	{}
};

$InnerClassInfo _JCTree$Factory_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Factory", "com.sun.tools.javac.tree.JCTree", "Factory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$Factory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$Factory",
	nullptr,
	nullptr,
	nullptr,
	_JCTree$Factory_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$Factory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$Factory($Class* clazz) {
	return $of($alloc(JCTree$Factory));
}

$Class* JCTree$Factory::load$($String* name, bool initialize) {
	$loadClass(JCTree$Factory, name, initialize, &_JCTree$Factory_ClassInfo_, allocate$JCTree$Factory);
	return class$;
}

$Class* JCTree$Factory::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com