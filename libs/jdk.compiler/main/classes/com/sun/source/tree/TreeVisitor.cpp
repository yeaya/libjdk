#include <com/sun/source/tree/TreeVisitor.h>

#include <com/sun/source/tree/AnnotatedTypeTree.h>
#include <com/sun/source/tree/AnnotationTree.h>
#include <com/sun/source/tree/ArrayAccessTree.h>
#include <com/sun/source/tree/ArrayTypeTree.h>
#include <com/sun/source/tree/AssertTree.h>
#include <com/sun/source/tree/AssignmentTree.h>
#include <com/sun/source/tree/BinaryTree.h>
#include <com/sun/source/tree/BindingPatternTree.h>
#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/BreakTree.h>
#include <com/sun/source/tree/CaseTree.h>
#include <com/sun/source/tree/CatchTree.h>
#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/CompoundAssignmentTree.h>
#include <com/sun/source/tree/ConditionalExpressionTree.h>
#include <com/sun/source/tree/ContinueTree.h>
#include <com/sun/source/tree/DefaultCaseLabelTree.h>
#include <com/sun/source/tree/DoWhileLoopTree.h>
#include <com/sun/source/tree/EmptyStatementTree.h>
#include <com/sun/source/tree/EnhancedForLoopTree.h>
#include <com/sun/source/tree/ErroneousTree.h>
#include <com/sun/source/tree/ExportsTree.h>
#include <com/sun/source/tree/ExpressionStatementTree.h>
#include <com/sun/source/tree/ForLoopTree.h>
#include <com/sun/source/tree/GuardedPatternTree.h>
#include <com/sun/source/tree/IdentifierTree.h>
#include <com/sun/source/tree/IfTree.h>
#include <com/sun/source/tree/ImportTree.h>
#include <com/sun/source/tree/InstanceOfTree.h>
#include <com/sun/source/tree/IntersectionTypeTree.h>
#include <com/sun/source/tree/LabeledStatementTree.h>
#include <com/sun/source/tree/LambdaExpressionTree.h>
#include <com/sun/source/tree/LiteralTree.h>
#include <com/sun/source/tree/MemberReferenceTree.h>
#include <com/sun/source/tree/MemberSelectTree.h>
#include <com/sun/source/tree/MethodInvocationTree.h>
#include <com/sun/source/tree/MethodTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/ModuleTree.h>
#include <com/sun/source/tree/NewArrayTree.h>
#include <com/sun/source/tree/NewClassTree.h>
#include <com/sun/source/tree/OpensTree.h>
#include <com/sun/source/tree/PackageTree.h>
#include <com/sun/source/tree/ParameterizedTypeTree.h>
#include <com/sun/source/tree/ParenthesizedPatternTree.h>
#include <com/sun/source/tree/ParenthesizedTree.h>
#include <com/sun/source/tree/PrimitiveTypeTree.h>
#include <com/sun/source/tree/ProvidesTree.h>
#include <com/sun/source/tree/RequiresTree.h>
#include <com/sun/source/tree/ReturnTree.h>
#include <com/sun/source/tree/SwitchExpressionTree.h>
#include <com/sun/source/tree/SwitchTree.h>
#include <com/sun/source/tree/SynchronizedTree.h>
#include <com/sun/source/tree/ThrowTree.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/tree/TryTree.h>
#include <com/sun/source/tree/TypeCastTree.h>
#include <com/sun/source/tree/TypeParameterTree.h>
#include <com/sun/source/tree/UnaryTree.h>
#include <com/sun/source/tree/UnionTypeTree.h>
#include <com/sun/source/tree/UsesTree.h>
#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/source/tree/WhileLoopTree.h>
#include <com/sun/source/tree/WildcardTree.h>
#include <com/sun/source/tree/YieldTree.h>
#include <jcpp.h>

using $AnnotatedTypeTree = ::com::sun::source::tree::AnnotatedTypeTree;
using $AnnotationTree = ::com::sun::source::tree::AnnotationTree;
using $ArrayAccessTree = ::com::sun::source::tree::ArrayAccessTree;
using $ArrayTypeTree = ::com::sun::source::tree::ArrayTypeTree;
using $AssertTree = ::com::sun::source::tree::AssertTree;
using $AssignmentTree = ::com::sun::source::tree::AssignmentTree;
using $BinaryTree = ::com::sun::source::tree::BinaryTree;
using $BindingPatternTree = ::com::sun::source::tree::BindingPatternTree;
using $BlockTree = ::com::sun::source::tree::BlockTree;
using $BreakTree = ::com::sun::source::tree::BreakTree;
using $CaseTree = ::com::sun::source::tree::CaseTree;
using $CatchTree = ::com::sun::source::tree::CatchTree;
using $ClassTree = ::com::sun::source::tree::ClassTree;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $CompoundAssignmentTree = ::com::sun::source::tree::CompoundAssignmentTree;
using $ConditionalExpressionTree = ::com::sun::source::tree::ConditionalExpressionTree;
using $ContinueTree = ::com::sun::source::tree::ContinueTree;
using $DefaultCaseLabelTree = ::com::sun::source::tree::DefaultCaseLabelTree;
using $DoWhileLoopTree = ::com::sun::source::tree::DoWhileLoopTree;
using $EmptyStatementTree = ::com::sun::source::tree::EmptyStatementTree;
using $EnhancedForLoopTree = ::com::sun::source::tree::EnhancedForLoopTree;
using $ErroneousTree = ::com::sun::source::tree::ErroneousTree;
using $ExportsTree = ::com::sun::source::tree::ExportsTree;
using $ExpressionStatementTree = ::com::sun::source::tree::ExpressionStatementTree;
using $ForLoopTree = ::com::sun::source::tree::ForLoopTree;
using $GuardedPatternTree = ::com::sun::source::tree::GuardedPatternTree;
using $IdentifierTree = ::com::sun::source::tree::IdentifierTree;
using $IfTree = ::com::sun::source::tree::IfTree;
using $ImportTree = ::com::sun::source::tree::ImportTree;
using $InstanceOfTree = ::com::sun::source::tree::InstanceOfTree;
using $IntersectionTypeTree = ::com::sun::source::tree::IntersectionTypeTree;
using $LabeledStatementTree = ::com::sun::source::tree::LabeledStatementTree;
using $LambdaExpressionTree = ::com::sun::source::tree::LambdaExpressionTree;
using $LiteralTree = ::com::sun::source::tree::LiteralTree;
using $MemberReferenceTree = ::com::sun::source::tree::MemberReferenceTree;
using $MemberSelectTree = ::com::sun::source::tree::MemberSelectTree;
using $MethodInvocationTree = ::com::sun::source::tree::MethodInvocationTree;
using $MethodTree = ::com::sun::source::tree::MethodTree;
using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $ModuleTree = ::com::sun::source::tree::ModuleTree;
using $NewArrayTree = ::com::sun::source::tree::NewArrayTree;
using $NewClassTree = ::com::sun::source::tree::NewClassTree;
using $OpensTree = ::com::sun::source::tree::OpensTree;
using $PackageTree = ::com::sun::source::tree::PackageTree;
using $ParameterizedTypeTree = ::com::sun::source::tree::ParameterizedTypeTree;
using $ParenthesizedPatternTree = ::com::sun::source::tree::ParenthesizedPatternTree;
using $ParenthesizedTree = ::com::sun::source::tree::ParenthesizedTree;
using $PrimitiveTypeTree = ::com::sun::source::tree::PrimitiveTypeTree;
using $ProvidesTree = ::com::sun::source::tree::ProvidesTree;
using $RequiresTree = ::com::sun::source::tree::RequiresTree;
using $ReturnTree = ::com::sun::source::tree::ReturnTree;
using $SwitchExpressionTree = ::com::sun::source::tree::SwitchExpressionTree;
using $SwitchTree = ::com::sun::source::tree::SwitchTree;
using $SynchronizedTree = ::com::sun::source::tree::SynchronizedTree;
using $ThrowTree = ::com::sun::source::tree::ThrowTree;
using $Tree = ::com::sun::source::tree::Tree;
using $TryTree = ::com::sun::source::tree::TryTree;
using $TypeCastTree = ::com::sun::source::tree::TypeCastTree;
using $TypeParameterTree = ::com::sun::source::tree::TypeParameterTree;
using $UnaryTree = ::com::sun::source::tree::UnaryTree;
using $UnionTypeTree = ::com::sun::source::tree::UnionTypeTree;
using $UsesTree = ::com::sun::source::tree::UsesTree;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $WhileLoopTree = ::com::sun::source::tree::WhileLoopTree;
using $WildcardTree = ::com::sun::source::tree::WildcardTree;
using $YieldTree = ::com::sun::source::tree::YieldTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$CompoundAttribute _TreeVisitor_MethodAnnotations_visitDefaultCaseLabel17[] = {
	{}
};

$CompoundAttribute _TreeVisitor_MethodAnnotations_visitGuardedPattern25[] = {
	{}
};

$CompoundAttribute _TreeVisitor_MethodAnnotations_visitParenthesizedPattern47[] = {
	{}
};

$MethodInfo _TreeVisitor_MethodInfo_[] = {
	{"visitAnnotatedType", "(Lcom/sun/source/tree/AnnotatedTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/AnnotatedTypeTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitAnnotatedType, $Object*, $AnnotatedTypeTree*, Object$*)},
	{"visitAnnotation", "(Lcom/sun/source/tree/AnnotationTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/AnnotationTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitAnnotation, $Object*, $AnnotationTree*, Object$*)},
	{"visitArrayAccess", "(Lcom/sun/source/tree/ArrayAccessTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ArrayAccessTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitArrayAccess, $Object*, $ArrayAccessTree*, Object$*)},
	{"visitArrayType", "(Lcom/sun/source/tree/ArrayTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ArrayTypeTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitArrayType, $Object*, $ArrayTypeTree*, Object$*)},
	{"visitAssert", "(Lcom/sun/source/tree/AssertTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/AssertTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitAssert, $Object*, $AssertTree*, Object$*)},
	{"visitAssignment", "(Lcom/sun/source/tree/AssignmentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/AssignmentTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitAssignment, $Object*, $AssignmentTree*, Object$*)},
	{"visitBinary", "(Lcom/sun/source/tree/BinaryTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/BinaryTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitBinary, $Object*, $BinaryTree*, Object$*)},
	{"visitBindingPattern", "(Lcom/sun/source/tree/BindingPatternTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/BindingPatternTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitBindingPattern, $Object*, $BindingPatternTree*, Object$*)},
	{"visitBlock", "(Lcom/sun/source/tree/BlockTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/BlockTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitBlock, $Object*, $BlockTree*, Object$*)},
	{"visitBreak", "(Lcom/sun/source/tree/BreakTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/BreakTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitBreak, $Object*, $BreakTree*, Object$*)},
	{"visitCase", "(Lcom/sun/source/tree/CaseTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/CaseTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitCase, $Object*, $CaseTree*, Object$*)},
	{"visitCatch", "(Lcom/sun/source/tree/CatchTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/CatchTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitCatch, $Object*, $CatchTree*, Object$*)},
	{"visitClass", "(Lcom/sun/source/tree/ClassTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ClassTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitClass, $Object*, $ClassTree*, Object$*)},
	{"visitCompilationUnit", "(Lcom/sun/source/tree/CompilationUnitTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/CompilationUnitTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitCompilationUnit, $Object*, $CompilationUnitTree*, Object$*)},
	{"visitCompoundAssignment", "(Lcom/sun/source/tree/CompoundAssignmentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/CompoundAssignmentTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitCompoundAssignment, $Object*, $CompoundAssignmentTree*, Object$*)},
	{"visitConditionalExpression", "(Lcom/sun/source/tree/ConditionalExpressionTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ConditionalExpressionTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitConditionalExpression, $Object*, $ConditionalExpressionTree*, Object$*)},
	{"visitContinue", "(Lcom/sun/source/tree/ContinueTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ContinueTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitContinue, $Object*, $ContinueTree*, Object$*)},
	{"visitDefaultCaseLabel", "(Lcom/sun/source/tree/DefaultCaseLabelTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/DefaultCaseLabelTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitDefaultCaseLabel, $Object*, $DefaultCaseLabelTree*, Object$*), nullptr, nullptr, _TreeVisitor_MethodAnnotations_visitDefaultCaseLabel17},
	{"visitDoWhileLoop", "(Lcom/sun/source/tree/DoWhileLoopTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/DoWhileLoopTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitDoWhileLoop, $Object*, $DoWhileLoopTree*, Object$*)},
	{"visitEmptyStatement", "(Lcom/sun/source/tree/EmptyStatementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/EmptyStatementTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitEmptyStatement, $Object*, $EmptyStatementTree*, Object$*)},
	{"visitEnhancedForLoop", "(Lcom/sun/source/tree/EnhancedForLoopTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/EnhancedForLoopTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitEnhancedForLoop, $Object*, $EnhancedForLoopTree*, Object$*)},
	{"visitErroneous", "(Lcom/sun/source/tree/ErroneousTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ErroneousTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitErroneous, $Object*, $ErroneousTree*, Object$*)},
	{"visitExports", "(Lcom/sun/source/tree/ExportsTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ExportsTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitExports, $Object*, $ExportsTree*, Object$*)},
	{"visitExpressionStatement", "(Lcom/sun/source/tree/ExpressionStatementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ExpressionStatementTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitExpressionStatement, $Object*, $ExpressionStatementTree*, Object$*)},
	{"visitForLoop", "(Lcom/sun/source/tree/ForLoopTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ForLoopTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitForLoop, $Object*, $ForLoopTree*, Object$*)},
	{"visitGuardedPattern", "(Lcom/sun/source/tree/GuardedPatternTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/GuardedPatternTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitGuardedPattern, $Object*, $GuardedPatternTree*, Object$*), nullptr, nullptr, _TreeVisitor_MethodAnnotations_visitGuardedPattern25},
	{"visitIdentifier", "(Lcom/sun/source/tree/IdentifierTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/IdentifierTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitIdentifier, $Object*, $IdentifierTree*, Object$*)},
	{"visitIf", "(Lcom/sun/source/tree/IfTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/IfTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitIf, $Object*, $IfTree*, Object$*)},
	{"visitImport", "(Lcom/sun/source/tree/ImportTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ImportTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitImport, $Object*, $ImportTree*, Object$*)},
	{"visitInstanceOf", "(Lcom/sun/source/tree/InstanceOfTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/InstanceOfTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitInstanceOf, $Object*, $InstanceOfTree*, Object$*)},
	{"visitIntersectionType", "(Lcom/sun/source/tree/IntersectionTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/IntersectionTypeTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitIntersectionType, $Object*, $IntersectionTypeTree*, Object$*)},
	{"visitLabeledStatement", "(Lcom/sun/source/tree/LabeledStatementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/LabeledStatementTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitLabeledStatement, $Object*, $LabeledStatementTree*, Object$*)},
	{"visitLambdaExpression", "(Lcom/sun/source/tree/LambdaExpressionTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/LambdaExpressionTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitLambdaExpression, $Object*, $LambdaExpressionTree*, Object$*)},
	{"visitLiteral", "(Lcom/sun/source/tree/LiteralTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/LiteralTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitLiteral, $Object*, $LiteralTree*, Object$*)},
	{"visitMemberReference", "(Lcom/sun/source/tree/MemberReferenceTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/MemberReferenceTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitMemberReference, $Object*, $MemberReferenceTree*, Object$*)},
	{"visitMemberSelect", "(Lcom/sun/source/tree/MemberSelectTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/MemberSelectTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitMemberSelect, $Object*, $MemberSelectTree*, Object$*)},
	{"visitMethod", "(Lcom/sun/source/tree/MethodTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/MethodTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitMethod, $Object*, $MethodTree*, Object$*)},
	{"visitMethodInvocation", "(Lcom/sun/source/tree/MethodInvocationTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/MethodInvocationTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitMethodInvocation, $Object*, $MethodInvocationTree*, Object$*)},
	{"visitModifiers", "(Lcom/sun/source/tree/ModifiersTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ModifiersTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitModifiers, $Object*, $ModifiersTree*, Object$*)},
	{"visitModule", "(Lcom/sun/source/tree/ModuleTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ModuleTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitModule, $Object*, $ModuleTree*, Object$*)},
	{"visitNewArray", "(Lcom/sun/source/tree/NewArrayTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/NewArrayTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitNewArray, $Object*, $NewArrayTree*, Object$*)},
	{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/NewClassTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitNewClass, $Object*, $NewClassTree*, Object$*)},
	{"visitOpens", "(Lcom/sun/source/tree/OpensTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/OpensTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitOpens, $Object*, $OpensTree*, Object$*)},
	{"visitOther", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/Tree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitOther, $Object*, $Tree*, Object$*)},
	{"visitPackage", "(Lcom/sun/source/tree/PackageTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/PackageTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitPackage, $Object*, $PackageTree*, Object$*)},
	{"visitParameterizedType", "(Lcom/sun/source/tree/ParameterizedTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ParameterizedTypeTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitParameterizedType, $Object*, $ParameterizedTypeTree*, Object$*)},
	{"visitParenthesized", "(Lcom/sun/source/tree/ParenthesizedTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ParenthesizedTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitParenthesized, $Object*, $ParenthesizedTree*, Object$*)},
	{"visitParenthesizedPattern", "(Lcom/sun/source/tree/ParenthesizedPatternTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ParenthesizedPatternTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitParenthesizedPattern, $Object*, $ParenthesizedPatternTree*, Object$*), nullptr, nullptr, _TreeVisitor_MethodAnnotations_visitParenthesizedPattern47},
	{"visitPrimitiveType", "(Lcom/sun/source/tree/PrimitiveTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/PrimitiveTypeTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitPrimitiveType, $Object*, $PrimitiveTypeTree*, Object$*)},
	{"visitProvides", "(Lcom/sun/source/tree/ProvidesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ProvidesTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitProvides, $Object*, $ProvidesTree*, Object$*)},
	{"visitRequires", "(Lcom/sun/source/tree/RequiresTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/RequiresTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitRequires, $Object*, $RequiresTree*, Object$*)},
	{"visitReturn", "(Lcom/sun/source/tree/ReturnTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ReturnTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitReturn, $Object*, $ReturnTree*, Object$*)},
	{"visitSwitch", "(Lcom/sun/source/tree/SwitchTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/SwitchTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitSwitch, $Object*, $SwitchTree*, Object$*)},
	{"visitSwitchExpression", "(Lcom/sun/source/tree/SwitchExpressionTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/SwitchExpressionTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitSwitchExpression, $Object*, $SwitchExpressionTree*, Object$*)},
	{"visitSynchronized", "(Lcom/sun/source/tree/SynchronizedTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/SynchronizedTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitSynchronized, $Object*, $SynchronizedTree*, Object$*)},
	{"visitThrow", "(Lcom/sun/source/tree/ThrowTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ThrowTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitThrow, $Object*, $ThrowTree*, Object$*)},
	{"visitTry", "(Lcom/sun/source/tree/TryTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/TryTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitTry, $Object*, $TryTree*, Object$*)},
	{"visitTypeCast", "(Lcom/sun/source/tree/TypeCastTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/TypeCastTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitTypeCast, $Object*, $TypeCastTree*, Object$*)},
	{"visitTypeParameter", "(Lcom/sun/source/tree/TypeParameterTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/TypeParameterTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitTypeParameter, $Object*, $TypeParameterTree*, Object$*)},
	{"visitUnary", "(Lcom/sun/source/tree/UnaryTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/UnaryTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitUnary, $Object*, $UnaryTree*, Object$*)},
	{"visitUnionType", "(Lcom/sun/source/tree/UnionTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/UnionTypeTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitUnionType, $Object*, $UnionTypeTree*, Object$*)},
	{"visitUses", "(Lcom/sun/source/tree/UsesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/UsesTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitUses, $Object*, $UsesTree*, Object$*)},
	{"visitVariable", "(Lcom/sun/source/tree/VariableTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/VariableTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitVariable, $Object*, $VariableTree*, Object$*)},
	{"visitWhileLoop", "(Lcom/sun/source/tree/WhileLoopTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/WhileLoopTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitWhileLoop, $Object*, $WhileLoopTree*, Object$*)},
	{"visitWildcard", "(Lcom/sun/source/tree/WildcardTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/WildcardTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitWildcard, $Object*, $WildcardTree*, Object$*)},
	{"visitYield", "(Lcom/sun/source/tree/YieldTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/YieldTree;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeVisitor, visitYield, $Object*, $YieldTree*, Object$*)},
	{}
};

$ClassInfo _TreeVisitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.TreeVisitor",
	nullptr,
	nullptr,
	nullptr,
	_TreeVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$TreeVisitor($Class* clazz) {
	return $of($alloc(TreeVisitor));
}

$Class* TreeVisitor::load$($String* name, bool initialize) {
	$loadClass(TreeVisitor, name, initialize, &_TreeVisitor_ClassInfo_, allocate$TreeVisitor);
	return class$;
}

$Class* TreeVisitor::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com