#include <com/sun/tools/javac/comp/TreeDiffer.h>
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOpens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCProvides.h>
#include <com/sun/tools/javac/tree/JCTree$JCRequires.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
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
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
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
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCProvides = ::com::sun::tools::javac::tree::JCTree$JCProvides;
using $JCTree$JCRequires = ::com::sun::tools::javac::tree::JCTree$JCRequires;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
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
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void TreeDiffer::init$($Collection* symbols, $Collection* otherSymbols) {
	$TreeScanner::init$();
	$set(this, equiv$, $new($HashMap));
	$set(this, equiv$, equiv(symbols, otherSymbols));
}

$Map* TreeDiffer::equiv($Collection* symbols, $Collection* otherSymbols) {
	$init(TreeDiffer);
	$useLocalObjectStack();
	$var($Map, result, $new($HashMap));
	$var($Iterator, it, $nc(otherSymbols)->iterator());
	{
		$var($Iterator, i$, $nc(symbols)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, symbol, $cast($Symbol, i$->next()));
			{
				if (!$nc(it)->hasNext()) {
					break;
				}
				result->put(symbol, $$cast($Symbol, it->next()));
			}
		}
	}
	return result;
}

bool TreeDiffer::scan($JCTree* tree$renamed, $JCTree* parameter$renamed) {
	$useLocalObjectStack();
	$var($JCTree, parameter, parameter$renamed);
	$var($JCTree, tree, tree$renamed);
	if (tree == nullptr || parameter == nullptr) {
		return tree == nullptr && parameter == nullptr;
	}
	$assign(tree, $TreeInfo::skipParens(tree));
	$assign(parameter, $TreeInfo::skipParens(parameter));
	bool var$0 = $nc(tree)->type != nullptr && tree->type->constValue() != nullptr && $nc(parameter)->type != nullptr;
	if (var$0 && parameter->type->constValue() != nullptr) {
		$var($Object, var$1, tree->type->constValue());
		return $Objects::equals(var$1, $(parameter->type->constValue()));
	}
	if (tree->getTag() != $nc(parameter)->getTag()) {
		return false;
	}
	$var($JCTree, prevParameter, this->parameter);
	bool prevResult = this->result;
	$var($Throwable, var$2, nullptr);
	bool var$4 = false;
	bool return$3 = false;
	try {
		$set(this, parameter, parameter);
		tree->accept(this);
		var$4 = this->result;
		return$3 = true;
		goto $finally;
	} catch ($Throwable& var$5) {
		$assign(var$2, var$5);
	} $finally: {
		$set(this, parameter, prevParameter);
		this->result = prevResult;
	}
	if (var$2 != nullptr) {
		$throw(var$2);
	}
	if (return$3) {
		return var$4;
	}
	$shouldNotReachHere();
}

bool TreeDiffer::scan($Iterable* xs, $Iterable* ys) {
	$useLocalObjectStack();
	if (xs == nullptr || ys == nullptr) {
		return xs == nullptr && ys == nullptr;
	}
	$var($Iterator, x, $nc(xs)->iterator());
	$var($Iterator, y, $nc(ys)->iterator());
	while (true) {
		bool var$0 = $nc(x)->hasNext();
		if (!(var$0 && $nc(y)->hasNext())) {
			break;
		}
		{
			$var($JCTree, var$1, $cast($JCTree, x->next()));
			if (!scan(var$1, $$cast($JCTree, $nc(y)->next()))) {
				return false;
			}
		}
	}
	bool var$2 = !$nc(x)->hasNext();
	return var$2 && !$nc(y)->hasNext();
}

bool TreeDiffer::scanDimAnnotations($List* xs, $List* ys) {
	$useLocalObjectStack();
	if (xs == nullptr || ys == nullptr) {
		return xs == nullptr && ys == nullptr;
	}
	$var($Iterator, x, $nc(xs)->iterator());
	$var($Iterator, y, $nc(ys)->iterator());
	while (true) {
		bool var$0 = $nc(x)->hasNext();
		if (!(var$0 && $nc(y)->hasNext())) {
			break;
		}
		{
			$var($Iterable, var$1, $cast($Iterable, x->next()));
			if (!scan(var$1, $$cast($Iterable, $nc(y)->next()))) {
				return false;
			}
		}
	}
	bool var$2 = !$nc(x)->hasNext();
	return var$2 && !$nc(y)->hasNext();
}

void TreeDiffer::visitIdent($JCTree$JCIdent* tree) {
	$useLocalObjectStack();
	$var($JCTree$JCIdent, that, $cast($JCTree$JCIdent, this->parameter));
	$var($Symbol, symbol, $nc(tree)->sym);
	$var($Symbol, otherSymbol, $nc(that)->sym);
	if (symbol != nullptr && otherSymbol != nullptr) {
		if ($Objects::equals($($nc(this->equiv$)->get(symbol)), otherSymbol)) {
			this->result = true;
			return;
		}
	}
	this->result = tree->sym == that->sym;
}

void TreeDiffer::visitSelect($JCTree$JCFieldAccess* tree) {
	$var($JCTree$JCFieldAccess, that, $cast($JCTree$JCFieldAccess, this->parameter));
	this->result = scan($nc(tree)->selected, $nc(that)->selected) && tree->sym == that->sym;
}

void TreeDiffer::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	$var($JCTree$JCAnnotatedType, that, $cast($JCTree$JCAnnotatedType, this->parameter));
	bool var$0 = scan($cast($AbstractCollection, $nc(tree)->annotations), $cast($AbstractCollection, $nc(that)->annotations));
	this->result = var$0 && scan(tree->underlyingType, that->underlyingType);
}

void TreeDiffer::visitAnnotation($JCTree$JCAnnotation* tree) {
	$var($JCTree$JCAnnotation, that, $cast($JCTree$JCAnnotation, this->parameter));
	bool var$0 = scan($nc(tree)->annotationType, $nc(that)->annotationType);
	this->result = var$0 && scan($cast($AbstractCollection, tree->args), $cast($AbstractCollection, that->args));
}

void TreeDiffer::visitApply($JCTree$JCMethodInvocation* tree) {
	$var($JCTree$JCMethodInvocation, that, $cast($JCTree$JCMethodInvocation, this->parameter));
	bool var$1 = scan($cast($AbstractCollection, $nc(tree)->typeargs), $cast($AbstractCollection, $nc(that)->typeargs));
	bool var$0 = var$1 && scan(tree->meth, that->meth);
	this->result = var$0 && scan($cast($AbstractCollection, tree->args), $cast($AbstractCollection, that->args)) && tree->polyKind == that->polyKind;
}

void TreeDiffer::visitAssert($JCTree$JCAssert* tree) {
	$var($JCTree$JCAssert, that, $cast($JCTree$JCAssert, this->parameter));
	bool var$0 = scan($nc(tree)->cond, $nc(that)->cond);
	this->result = var$0 && scan(tree->detail, that->detail);
}

void TreeDiffer::visitAssign($JCTree$JCAssign* tree) {
	$var($JCTree$JCAssign, that, $cast($JCTree$JCAssign, this->parameter));
	bool var$0 = scan($nc(tree)->lhs, $nc(that)->lhs);
	this->result = var$0 && scan(tree->rhs, that->rhs);
}

void TreeDiffer::visitAssignop($JCTree$JCAssignOp* tree) {
	$var($JCTree$JCAssignOp, that, $cast($JCTree$JCAssignOp, this->parameter));
	bool var$0 = scan($nc(tree)->lhs, $nc(that)->lhs);
	this->result = var$0 && scan(tree->rhs, that->rhs) && tree->operator$ == that->operator$;
}

void TreeDiffer::visitBinary($JCTree$JCBinary* tree) {
	$var($JCTree$JCBinary, that, $cast($JCTree$JCBinary, this->parameter));
	bool var$0 = scan($nc(tree)->lhs, $nc(that)->lhs);
	this->result = var$0 && scan(tree->rhs, that->rhs) && tree->operator$ == that->operator$;
}

void TreeDiffer::visitBindingPattern($JCTree$JCBindingPattern* tree) {
	$var($JCTree$JCBindingPattern, that, $cast($JCTree$JCBindingPattern, this->parameter));
	this->result = scan($nc(tree)->var, $nc(that)->var);
	if (!this->result) {
		return;
	}
}

void TreeDiffer::visitBlock($JCTree$JCBlock* tree) {
	$var($JCTree$JCBlock, that, $cast($JCTree$JCBlock, this->parameter));
	this->result = $nc(tree)->flags == $nc(that)->flags && scan($cast($AbstractCollection, tree->stats), $cast($AbstractCollection, that->stats));
}

void TreeDiffer::visitBreak($JCTree$JCBreak* tree) {
	$var($JCTree$JCBreak, that, $cast($JCTree$JCBreak, this->parameter));
	this->result = $nc(tree)->label == $nc(that)->label;
}

void TreeDiffer::visitYield($JCTree$JCYield* tree) {
	$var($JCTree$JCYield, that, $cast($JCTree$JCYield, this->parameter));
	this->result = scan($nc(tree)->value, $nc(that)->value);
}

void TreeDiffer::visitCase($JCTree$JCCase* tree) {
	$var($JCTree$JCCase, that, $cast($JCTree$JCCase, this->parameter));
	bool var$0 = scan($cast($AbstractCollection, $nc(tree)->labels), $cast($AbstractCollection, $nc(that)->labels));
	this->result = var$0 && scan($cast($AbstractCollection, tree->stats), $cast($AbstractCollection, that->stats));
}

void TreeDiffer::visitDefaultCaseLabel($JCTree$JCDefaultCaseLabel* tree) {
	this->result = true;
}

void TreeDiffer::visitCatch($JCTree$JCCatch* tree) {
	$var($JCTree$JCCatch, that, $cast($JCTree$JCCatch, this->parameter));
	bool var$0 = scan($nc(tree)->param, $nc(that)->param);
	this->result = var$0 && scan(tree->body, that->body);
}

void TreeDiffer::visitClassDef($JCTree$JCClassDecl* tree) {
	$var($JCTree$JCClassDecl, that, $cast($JCTree$JCClassDecl, this->parameter));
	bool var$3 = scan($nc(tree)->mods, $nc(that)->mods) && tree->name == that->name;
	bool var$2 = var$3 && scan($cast($AbstractCollection, tree->typarams), $cast($AbstractCollection, that->typarams));
	bool var$1 = var$2 && scan(tree->extending, that->extending);
	bool var$0 = var$1 && scan($cast($AbstractCollection, tree->implementing), $cast($AbstractCollection, that->implementing));
	this->result = var$0 && scan($cast($AbstractCollection, tree->defs), $cast($AbstractCollection, that->defs));
}

void TreeDiffer::visitConditional($JCTree$JCConditional* tree) {
	$var($JCTree$JCConditional, that, $cast($JCTree$JCConditional, this->parameter));
	bool var$1 = scan($nc(tree)->cond, $nc(that)->cond);
	bool var$0 = var$1 && scan(tree->truepart, that->truepart);
	this->result = var$0 && scan(tree->falsepart, that->falsepart);
}

void TreeDiffer::visitContinue($JCTree$JCContinue* tree) {
	$var($JCTree$JCContinue, that, $cast($JCTree$JCContinue, this->parameter));
	this->result = $nc(tree)->label == $nc(that)->label;
}

void TreeDiffer::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$var($JCTree$JCDoWhileLoop, that, $cast($JCTree$JCDoWhileLoop, this->parameter));
	bool var$0 = scan($nc(tree)->body, $nc(that)->body);
	this->result = var$0 && scan(tree->cond, that->cond);
}

void TreeDiffer::visitErroneous($JCTree$JCErroneous* tree) {
	$var($JCTree$JCErroneous, that, $cast($JCTree$JCErroneous, this->parameter));
	this->result = scan($cast($AbstractCollection, $nc(tree)->errs), $cast($AbstractCollection, $nc(that)->errs));
}

void TreeDiffer::visitExec($JCTree$JCExpressionStatement* tree) {
	$var($JCTree$JCExpressionStatement, that, $cast($JCTree$JCExpressionStatement, this->parameter));
	this->result = scan($nc(tree)->expr, $nc(that)->expr);
}

void TreeDiffer::visitExports($JCTree$JCExports* tree) {
	$var($JCTree$JCExports, that, $cast($JCTree$JCExports, this->parameter));
	bool var$0 = scan($nc(tree)->qualid, $nc(that)->qualid);
	this->result = var$0 && scan($cast($AbstractCollection, tree->moduleNames), $cast($AbstractCollection, that->moduleNames));
}

void TreeDiffer::visitForLoop($JCTree$JCForLoop* tree) {
	$var($JCTree$JCForLoop, that, $cast($JCTree$JCForLoop, this->parameter));
	bool var$2 = scan($cast($AbstractCollection, $nc(tree)->init), $cast($AbstractCollection, $nc(that)->init));
	bool var$1 = var$2 && scan(tree->cond, that->cond);
	bool var$0 = var$1 && scan($cast($AbstractCollection, tree->step), $cast($AbstractCollection, that->step));
	this->result = var$0 && scan(tree->body, that->body);
}

void TreeDiffer::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$var($JCTree$JCEnhancedForLoop, that, $cast($JCTree$JCEnhancedForLoop, this->parameter));
	bool var$1 = scan($nc(tree)->var, $nc(that)->var);
	bool var$0 = var$1 && scan(tree->expr, that->expr);
	this->result = var$0 && scan(tree->body, that->body);
}

void TreeDiffer::visitIf($JCTree$JCIf* tree) {
	$var($JCTree$JCIf, that, $cast($JCTree$JCIf, this->parameter));
	bool var$1 = scan($nc(tree)->cond, $nc(that)->cond);
	bool var$0 = var$1 && scan(tree->thenpart, that->thenpart);
	this->result = var$0 && scan(tree->elsepart, that->elsepart);
}

void TreeDiffer::visitImport($JCTree$JCImport* tree) {
	$var($JCTree$JCImport, that, $cast($JCTree$JCImport, this->parameter));
	this->result = $nc(tree)->staticImport == $nc(that)->staticImport && scan(tree->qualid, that->qualid);
}

void TreeDiffer::visitIndexed($JCTree$JCArrayAccess* tree) {
	$var($JCTree$JCArrayAccess, that, $cast($JCTree$JCArrayAccess, this->parameter));
	bool var$0 = scan($nc(tree)->indexed, $nc(that)->indexed);
	this->result = var$0 && scan(tree->index, that->index);
}

void TreeDiffer::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$var($JCTree$JCLabeledStatement, that, $cast($JCTree$JCLabeledStatement, this->parameter));
	this->result = $nc(tree)->label == $nc(that)->label && scan(tree->body, that->body);
}

void TreeDiffer::visitLambda($JCTree$JCLambda* tree) {
	$var($JCTree$JCLambda, that, $cast($JCTree$JCLambda, this->parameter));
	bool var$0 = scan($cast($AbstractCollection, $nc(tree)->params), $cast($AbstractCollection, $nc(that)->params));
	this->result = var$0 && scan(tree->body, that->body) && tree->paramKind == that->paramKind;
}

void TreeDiffer::visitLetExpr($JCTree$LetExpr* tree) {
	$var($JCTree$LetExpr, that, $cast($JCTree$LetExpr, this->parameter));
	bool var$0 = scan($cast($AbstractCollection, $nc(tree)->defs), $cast($AbstractCollection, $nc(that)->defs));
	this->result = var$0 && scan(tree->expr, that->expr);
}

void TreeDiffer::visitLiteral($JCTree$JCLiteral* tree) {
	$var($JCTree$JCLiteral, that, $cast($JCTree$JCLiteral, this->parameter));
	this->result = $nc(tree)->typetag == $nc(that)->typetag && $Objects::equals(tree->value, that->value);
}

void TreeDiffer::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$var($JCTree$JCMethodDecl, that, $cast($JCTree$JCMethodDecl, this->parameter));
	bool var$6 = scan($nc(tree)->mods, $nc(that)->mods) && tree->name == that->name;
	bool var$5 = var$6 && scan(tree->restype, that->restype);
	bool var$4 = var$5 && scan($cast($AbstractCollection, tree->typarams), $cast($AbstractCollection, that->typarams));
	bool var$3 = var$4 && scan(tree->recvparam, that->recvparam);
	bool var$2 = var$3 && scan($cast($AbstractCollection, tree->params), $cast($AbstractCollection, that->params));
	bool var$1 = var$2 && scan($cast($AbstractCollection, tree->thrown), $cast($AbstractCollection, that->thrown));
	bool var$0 = var$1 && scan(tree->body, that->body);
	this->result = var$0 && scan(tree->defaultValue, that->defaultValue);
}

void TreeDiffer::visitModifiers($JCTree$JCModifiers* tree) {
	$var($JCTree$JCModifiers, that, $cast($JCTree$JCModifiers, this->parameter));
	this->result = $nc(tree)->flags == $nc(that)->flags && scan($cast($AbstractCollection, tree->annotations), $cast($AbstractCollection, that->annotations));
}

void TreeDiffer::visitModuleDef($JCTree$JCModuleDecl* tree) {
	$var($JCTree$JCModuleDecl, that, $cast($JCTree$JCModuleDecl, this->parameter));
	bool var$1 = scan($nc(tree)->mods, $nc(that)->mods);
	bool var$0 = var$1 && scan(tree->qualId, that->qualId);
	this->result = var$0 && scan($cast($AbstractCollection, tree->directives), $cast($AbstractCollection, that->directives));
}

void TreeDiffer::visitNewArray($JCTree$JCNewArray* tree) {
	$var($JCTree$JCNewArray, that, $cast($JCTree$JCNewArray, this->parameter));
	bool var$3 = scan($nc(tree)->elemtype, $nc(that)->elemtype);
	bool var$2 = var$3 && scan($cast($AbstractCollection, tree->dims), $cast($AbstractCollection, that->dims));
	bool var$1 = var$2 && scan($cast($AbstractCollection, tree->annotations), $cast($AbstractCollection, that->annotations));
	bool var$0 = var$1 && scanDimAnnotations(tree->dimAnnotations, that->dimAnnotations);
	this->result = var$0 && scan($cast($AbstractCollection, tree->elems), $cast($AbstractCollection, that->elems));
}

void TreeDiffer::visitNewClass($JCTree$JCNewClass* tree) {
	$var($JCTree$JCNewClass, that, $cast($JCTree$JCNewClass, this->parameter));
	bool var$3 = scan($nc(tree)->encl, $nc(that)->encl);
	bool var$2 = var$3 && scan($cast($AbstractCollection, tree->typeargs), $cast($AbstractCollection, that->typeargs));
	bool var$1 = var$2 && scan(tree->clazz, that->clazz);
	bool var$0 = var$1 && scan($cast($AbstractCollection, tree->args), $cast($AbstractCollection, that->args));
	this->result = var$0 && scan(tree->def, that->def) && tree->constructor == that->constructor;
}

void TreeDiffer::visitOpens($JCTree$JCOpens* tree) {
	$var($JCTree$JCOpens, that, $cast($JCTree$JCOpens, this->parameter));
	bool var$0 = scan($nc(tree)->qualid, $nc(that)->qualid);
	this->result = var$0 && scan($cast($AbstractCollection, tree->moduleNames), $cast($AbstractCollection, that->moduleNames));
}

void TreeDiffer::visitPackageDef($JCTree$JCPackageDecl* tree) {
	$var($JCTree$JCPackageDecl, that, $cast($JCTree$JCPackageDecl, this->parameter));
	bool var$0 = scan($cast($AbstractCollection, $nc(tree)->annotations), $cast($AbstractCollection, $nc(that)->annotations));
	this->result = var$0 && scan(tree->pid, that->pid) && tree->packge == that->packge;
}

void TreeDiffer::visitProvides($JCTree$JCProvides* tree) {
	$var($JCTree$JCProvides, that, $cast($JCTree$JCProvides, this->parameter));
	bool var$0 = scan($nc(tree)->serviceName, $nc(that)->serviceName);
	this->result = var$0 && scan($cast($AbstractCollection, tree->implNames), $cast($AbstractCollection, that->implNames));
}

void TreeDiffer::visitReference($JCTree$JCMemberReference* tree) {
	$var($JCTree$JCMemberReference, that, $cast($JCTree$JCMemberReference, this->parameter));
	bool var$0 = $nc(tree)->mode == $nc(that)->mode && tree->kind == that->kind && tree->name == that->name && scan(tree->expr, that->expr);
	this->result = var$0 && scan($cast($AbstractCollection, tree->typeargs), $cast($AbstractCollection, that->typeargs));
}

void TreeDiffer::visitRequires($JCTree$JCRequires* tree) {
	$var($JCTree$JCRequires, that, $cast($JCTree$JCRequires, this->parameter));
	this->result = $nc(tree)->isTransitive$ == $nc(that)->isTransitive$ && tree->isStaticPhase == that->isStaticPhase && scan(tree->moduleName, that->moduleName);
}

void TreeDiffer::visitReturn($JCTree$JCReturn* tree) {
	$var($JCTree$JCReturn, that, $cast($JCTree$JCReturn, this->parameter));
	this->result = scan($nc(tree)->expr, $nc(that)->expr);
}

void TreeDiffer::visitSwitch($JCTree$JCSwitch* tree) {
	$var($JCTree$JCSwitch, that, $cast($JCTree$JCSwitch, this->parameter));
	bool var$0 = scan($nc(tree)->selector, $nc(that)->selector);
	this->result = var$0 && scan($cast($AbstractCollection, tree->cases), $cast($AbstractCollection, that->cases));
}

void TreeDiffer::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$var($JCTree$JCSwitchExpression, that, $cast($JCTree$JCSwitchExpression, this->parameter));
	bool var$0 = scan($nc(tree)->selector, $nc(that)->selector);
	this->result = var$0 && scan($cast($AbstractCollection, tree->cases), $cast($AbstractCollection, that->cases));
}

void TreeDiffer::visitSynchronized($JCTree$JCSynchronized* tree) {
	$var($JCTree$JCSynchronized, that, $cast($JCTree$JCSynchronized, this->parameter));
	bool var$0 = scan($nc(tree)->lock, $nc(that)->lock);
	this->result = var$0 && scan(tree->body, that->body);
}

void TreeDiffer::visitThrow($JCTree$JCThrow* tree) {
	$var($JCTree$JCThrow, that, $cast($JCTree$JCThrow, this->parameter));
	this->result = scan($nc(tree)->expr, $nc(that)->expr);
}

void TreeDiffer::visitTopLevel($JCTree$JCCompilationUnit* tree) {
	$var($JCTree$JCCompilationUnit, that, $cast($JCTree$JCCompilationUnit, this->parameter));
	this->result = scan($cast($AbstractCollection, $nc(tree)->defs), $cast($AbstractCollection, $nc(that)->defs)) && tree->modle == that->modle && tree->packge == that->packge;
}

void TreeDiffer::visitTry($JCTree$JCTry* tree) {
	$var($JCTree$JCTry, that, $cast($JCTree$JCTry, this->parameter));
	bool var$2 = scan($nc(tree)->body, $nc(that)->body);
	bool var$1 = var$2 && scan($cast($AbstractCollection, tree->catchers), $cast($AbstractCollection, that->catchers));
	bool var$0 = var$1 && scan(tree->finalizer, that->finalizer);
	this->result = var$0 && scan($cast($AbstractCollection, tree->resources), $cast($AbstractCollection, that->resources));
}

void TreeDiffer::visitTypeApply($JCTree$JCTypeApply* tree) {
	$var($JCTree$JCTypeApply, that, $cast($JCTree$JCTypeApply, this->parameter));
	bool var$0 = scan($nc(tree)->clazz, $nc(that)->clazz);
	this->result = var$0 && scan($cast($AbstractCollection, tree->arguments), $cast($AbstractCollection, that->arguments));
}

void TreeDiffer::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	$var($JCTree$JCArrayTypeTree, that, $cast($JCTree$JCArrayTypeTree, this->parameter));
	this->result = scan($nc(tree)->elemtype, $nc(that)->elemtype);
}

void TreeDiffer::visitTypeBoundKind($JCTree$TypeBoundKind* tree) {
	$var($JCTree$TypeBoundKind, that, $cast($JCTree$TypeBoundKind, this->parameter));
	this->result = $nc(tree)->kind == $nc(that)->kind;
}

void TreeDiffer::visitTypeCast($JCTree$JCTypeCast* tree) {
	$var($JCTree$JCTypeCast, that, $cast($JCTree$JCTypeCast, this->parameter));
	bool var$0 = scan($nc(tree)->clazz, $nc(that)->clazz);
	this->result = var$0 && scan(tree->expr, that->expr);
}

void TreeDiffer::visitTypeIdent($JCTree$JCPrimitiveTypeTree* tree) {
	$var($JCTree$JCPrimitiveTypeTree, that, $cast($JCTree$JCPrimitiveTypeTree, this->parameter));
	this->result = $nc(tree)->typetag == $nc(that)->typetag;
}

void TreeDiffer::visitTypeIntersection($JCTree$JCTypeIntersection* tree) {
	$var($JCTree$JCTypeIntersection, that, $cast($JCTree$JCTypeIntersection, this->parameter));
	this->result = scan($cast($AbstractCollection, $nc(tree)->bounds), $cast($AbstractCollection, $nc(that)->bounds));
}

void TreeDiffer::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	$var($JCTree$JCTypeParameter, that, $cast($JCTree$JCTypeParameter, this->parameter));
	bool var$0 = $nc(tree)->name == $nc(that)->name && scan($cast($AbstractCollection, tree->bounds), $cast($AbstractCollection, that->bounds));
	this->result = var$0 && scan($cast($AbstractCollection, tree->annotations), $cast($AbstractCollection, that->annotations));
}

void TreeDiffer::visitTypeTest($JCTree$JCInstanceOf* tree) {
	$var($JCTree$JCInstanceOf, that, $cast($JCTree$JCInstanceOf, this->parameter));
	bool var$0 = scan($nc(tree)->expr, $nc(that)->expr);
	this->result = var$0 && scan(tree->pattern, that->pattern);
}

void TreeDiffer::visitTypeUnion($JCTree$JCTypeUnion* tree) {
	$var($JCTree$JCTypeUnion, that, $cast($JCTree$JCTypeUnion, this->parameter));
	this->result = scan($cast($AbstractCollection, $nc(tree)->alternatives), $cast($AbstractCollection, $nc(that)->alternatives));
}

void TreeDiffer::visitUnary($JCTree$JCUnary* tree) {
	$var($JCTree$JCUnary, that, $cast($JCTree$JCUnary, this->parameter));
	this->result = scan($nc(tree)->arg, $nc(that)->arg) && tree->operator$ == that->operator$;
}

void TreeDiffer::visitUses($JCTree$JCUses* tree) {
	$var($JCTree$JCUses, that, $cast($JCTree$JCUses, this->parameter));
	this->result = scan($nc(tree)->qualid, $nc(that)->qualid);
}

void TreeDiffer::visitVarDef($JCTree$JCVariableDecl* tree) {
	$var($JCTree$JCVariableDecl, that, $cast($JCTree$JCVariableDecl, this->parameter));
	bool var$2 = scan($nc(tree)->mods, $nc(that)->mods) && tree->name == that->name;
	bool var$1 = var$2 && scan(tree->nameexpr, that->nameexpr);
	bool var$0 = var$1 && scan(tree->vartype, that->vartype);
	this->result = var$0 && scan(tree->init, that->init);
	if (!this->result) {
		return;
	}
	$nc(this->equiv$)->put(tree->sym, that->sym);
}

void TreeDiffer::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$var($JCTree$JCWhileLoop, that, $cast($JCTree$JCWhileLoop, this->parameter));
	bool var$0 = scan($nc(tree)->cond, $nc(that)->cond);
	this->result = var$0 && scan(tree->body, that->body);
}

void TreeDiffer::visitWildcard($JCTree$JCWildcard* tree) {
	$var($JCTree$JCWildcard, that, $cast($JCTree$JCWildcard, this->parameter));
	bool var$0 = scan($nc(tree)->kind, $nc(that)->kind);
	this->result = var$0 && scan(tree->inner, that->inner);
}

TreeDiffer::TreeDiffer() {
}

$Class* TreeDiffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"parameter", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE, $field(TreeDiffer, parameter)},
		{"result", "Z", nullptr, $PRIVATE, $field(TreeDiffer, result)},
		{"equiv", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(TreeDiffer, equiv$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;Ljava/util/Collection;)V", "(Ljava/util/Collection<+Lcom/sun/tools/javac/code/Symbol;>;Ljava/util/Collection<+Lcom/sun/tools/javac/code/Symbol;>;)V", $PUBLIC, $method(TreeDiffer, init$, void, $Collection*, $Collection*)},
		{"equiv", "(Ljava/util/Collection;Ljava/util/Collection;)Ljava/util/Map;", "(Ljava/util/Collection<+Lcom/sun/tools/javac/code/Symbol;>;Ljava/util/Collection<+Lcom/sun/tools/javac/code/Symbol;>;)Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE | $STATIC, $staticMethod(TreeDiffer, equiv, $Map*, $Collection*, $Collection*)},
		{"scan", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, scan, bool, $JCTree*, $JCTree*)},
		{"scan", "(Ljava/lang/Iterable;Ljava/lang/Iterable;)Z", "(Ljava/lang/Iterable<+Lcom/sun/tools/javac/tree/JCTree;>;Ljava/lang/Iterable<+Lcom/sun/tools/javac/tree/JCTree;>;)Z", $PRIVATE, $method(TreeDiffer, scan, bool, $Iterable*, $Iterable*)},
		{"scanDimAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;>;)Z", $PRIVATE, $method(TreeDiffer, scanDimAnnotations, bool, $List*, $List*)},
		{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitAnnotatedType, void, $JCTree$JCAnnotatedType*)},
		{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitAnnotation, void, $JCTree$JCAnnotation*)},
		{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitApply, void, $JCTree$JCMethodInvocation*)},
		{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitAssert, void, $JCTree$JCAssert*)},
		{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitAssign, void, $JCTree$JCAssign*)},
		{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitAssignop, void, $JCTree$JCAssignOp*)},
		{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitBinary, void, $JCTree$JCBinary*)},
		{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitBindingPattern, void, $JCTree$JCBindingPattern*)},
		{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitBlock, void, $JCTree$JCBlock*)},
		{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitBreak, void, $JCTree$JCBreak*)},
		{"visitCase", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitCase, void, $JCTree$JCCase*)},
		{"visitCatch", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitCatch, void, $JCTree$JCCatch*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitConditional, void, $JCTree$JCConditional*)},
		{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitContinue, void, $JCTree$JCContinue*)},
		{"visitDefaultCaseLabel", "(Lcom/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitDefaultCaseLabel, void, $JCTree$JCDefaultCaseLabel*)},
		{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitDoLoop, void, $JCTree$JCDoWhileLoop*)},
		{"visitErroneous", "(Lcom/sun/tools/javac/tree/JCTree$JCErroneous;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitErroneous, void, $JCTree$JCErroneous*)},
		{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitExec, void, $JCTree$JCExpressionStatement*)},
		{"visitExports", "(Lcom/sun/tools/javac/tree/JCTree$JCExports;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitExports, void, $JCTree$JCExports*)},
		{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitForLoop, void, $JCTree$JCForLoop*)},
		{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitForeachLoop, void, $JCTree$JCEnhancedForLoop*)},
		{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitIdent, void, $JCTree$JCIdent*)},
		{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitIf, void, $JCTree$JCIf*)},
		{"visitImport", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitImport, void, $JCTree$JCImport*)},
		{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitIndexed, void, $JCTree$JCArrayAccess*)},
		{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitLabelled, void, $JCTree$JCLabeledStatement*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitLambda, void, $JCTree$JCLambda*)},
		{"visitLetExpr", "(Lcom/sun/tools/javac/tree/JCTree$LetExpr;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitLetExpr, void, $JCTree$LetExpr*)},
		{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitLiteral, void, $JCTree$JCLiteral*)},
		{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitMethodDef, void, $JCTree$JCMethodDecl*)},
		{"visitModifiers", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitModifiers, void, $JCTree$JCModifiers*)},
		{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitModuleDef, void, $JCTree$JCModuleDecl*)},
		{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitNewArray, void, $JCTree$JCNewArray*)},
		{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitNewClass, void, $JCTree$JCNewClass*)},
		{"visitOpens", "(Lcom/sun/tools/javac/tree/JCTree$JCOpens;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitOpens, void, $JCTree$JCOpens*)},
		{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitPackageDef, void, $JCTree$JCPackageDecl*)},
		{"visitProvides", "(Lcom/sun/tools/javac/tree/JCTree$JCProvides;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitProvides, void, $JCTree$JCProvides*)},
		{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitReference, void, $JCTree$JCMemberReference*)},
		{"visitRequires", "(Lcom/sun/tools/javac/tree/JCTree$JCRequires;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitRequires, void, $JCTree$JCRequires*)},
		{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitReturn, void, $JCTree$JCReturn*)},
		{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitSelect, void, $JCTree$JCFieldAccess*)},
		{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitSwitch, void, $JCTree$JCSwitch*)},
		{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitSwitchExpression, void, $JCTree$JCSwitchExpression*)},
		{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitSynchronized, void, $JCTree$JCSynchronized*)},
		{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitThrow, void, $JCTree$JCThrow*)},
		{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTopLevel, void, $JCTree$JCCompilationUnit*)},
		{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTry, void, $JCTree$JCTry*)},
		{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTypeApply, void, $JCTree$JCTypeApply*)},
		{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTypeArray, void, $JCTree$JCArrayTypeTree*)},
		{"visitTypeBoundKind", "(Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTypeBoundKind, void, $JCTree$TypeBoundKind*)},
		{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTypeCast, void, $JCTree$JCTypeCast*)},
		{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTypeIdent, void, $JCTree$JCPrimitiveTypeTree*)},
		{"visitTypeIntersection", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTypeIntersection, void, $JCTree$JCTypeIntersection*)},
		{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTypeParameter, void, $JCTree$JCTypeParameter*)},
		{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTypeTest, void, $JCTree$JCInstanceOf*)},
		{"visitTypeUnion", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitTypeUnion, void, $JCTree$JCTypeUnion*)},
		{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitUnary, void, $JCTree$JCUnary*)},
		{"visitUses", "(Lcom/sun/tools/javac/tree/JCTree$JCUses;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitUses, void, $JCTree$JCUses*)},
		{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitVarDef, void, $JCTree$JCVariableDecl*)},
		{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitWhileLoop, void, $JCTree$JCWhileLoop*)},
		{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitWildcard, void, $JCTree$JCWildcard*)},
		{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC, $virtualMethod(TreeDiffer, visitYield, void, $JCTree$JCYield*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.TreeDiffer",
		"com.sun.tools.javac.tree.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TreeDiffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeDiffer);
	});
	return class$;
}

$Class* TreeDiffer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com