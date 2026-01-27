#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FilterExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/KeyCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Predicate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CURRENT_NODE_LIST_FILTER_SIG
#undef CURRENT_NODE_LIST_ITERATOR
#undef DUP
#undef ICONST_1
#undef NODE_ITERATOR_SIG
#undef NODE_SIG
#undef NTH_ITERATOR_CLASS
#undef TRANSLET_SIG

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $KeyCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::KeyCall;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Predicate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Predicate;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _FilterExpr_FieldInfo_[] = {
	{"_primary", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(FilterExpr, _primary)},
	{"_predicates", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;", $PRIVATE | $FINAL, $field(FilterExpr, _predicates)},
	{}
};

$MethodInfo _FilterExpr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(FilterExpr, init$, void, $Expression*, $List*)},
	{"getExpr", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PROTECTED, $virtualMethod(FilterExpr, getExpr, $Expression*)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(FilterExpr, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FilterExpr, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(FilterExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateFilterExpr", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;I)V", nullptr, $PRIVATE, $method(FilterExpr, translateFilterExpr, void, $ClassGenerator*, $MethodGenerator*, int32_t)},
	{"translatePredicates", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;I)V", nullptr, $PUBLIC, $virtualMethod(FilterExpr, translatePredicates, void, $ClassGenerator*, $MethodGenerator*, int32_t)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(FilterExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _FilterExpr_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FilterExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_FilterExpr_FieldInfo_,
	_FilterExpr_MethodInfo_
};

$Object* allocate$FilterExpr($Class* clazz) {
	return $of($alloc(FilterExpr));
}

void FilterExpr::init$($Expression* primary, $List* predicates) {
	$Expression::init$();
	$set(this, _primary, primary);
	$set(this, _predicates, predicates);
	$nc(primary)->setParent(this);
}

$Expression* FilterExpr::getExpr() {
	if ($instanceOf($CastExpr, this->_primary)) {
		return $nc(($cast($CastExpr, this->_primary)))->getExpr();
	} else {
		return this->_primary;
	}
}

void FilterExpr::setParser($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$Expression::setParser(parser);
	$nc(this->_primary)->setParser(parser);
	if (this->_predicates != nullptr) {
		int32_t n = $nc(this->_predicates)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($Expression, exp, $cast($Expression, $nc(this->_predicates)->get(i)));
			$nc(exp)->setParser(parser);
			exp->setParent(this);
		}
	}
}

$String* FilterExpr::toString() {
	return $str({"filter-expr("_s, this->_primary, ", "_s, this->_predicates, ")"_s});
}

$Type* FilterExpr::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Type, ptype, $nc(this->_primary)->typeCheck(stable));
	bool canOptimize = $instanceOf($KeyCall, this->_primary);
	if ($instanceOf($NodeSetType, ptype) == false) {
		if ($instanceOf($ReferenceType, ptype)) {
			$init($Type);
			$set(this, _primary, $new($CastExpr, this->_primary, $Type::NodeSet));
		} else {
			$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
		}
	}
	int32_t n = $nc(this->_predicates)->size();
	for (int32_t i = 0; i < n; ++i) {
		$var($Predicate, pred, $cast($Predicate, $nc(this->_predicates)->get(i)));
		if (!canOptimize) {
			$nc(pred)->dontOptimize();
		}
		$nc(pred)->typeCheck(stable);
	}
	$init($Type);
	return $set(this, _type, $Type::NodeSet);
}

void FilterExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	translateFilterExpr(classGen, methodGen, this->_predicates == nullptr ? -1 : $nc(this->_predicates)->size() - 1);
}

void FilterExpr::translateFilterExpr($ClassGenerator* classGen, $MethodGenerator* methodGen, int32_t predicateIndex) {
	if (predicateIndex >= 0) {
		translatePredicates(classGen, methodGen, predicateIndex);
	} else {
		$nc(this->_primary)->translate(classGen, methodGen);
	}
}

void FilterExpr::translatePredicates($ClassGenerator* classGen, $MethodGenerator* methodGen, int32_t predicateIndex) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (predicateIndex < 0) {
		translateFilterExpr(classGen, methodGen, predicateIndex);
	} else {
		$var($Predicate, predicate, $cast($Predicate, $nc(this->_predicates)->get(predicateIndex--)));
		translatePredicates(classGen, methodGen, predicateIndex);
		if ($nc(predicate)->isNthPositionFilter()) {
			$init($Constants);
			int32_t nthIteratorIdx = $nc(cpg)->addMethodref($Constants::NTH_ITERATOR_CLASS, "<init>"_s, $$str({"("_s, $Constants::NODE_ITERATOR_SIG, "I)V"_s}));
			$var($LocalVariableGen, iteratorTemp, methodGen->addLocalVariable("filter_expr_tmp1"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
			$nc(iteratorTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, iteratorTemp->getIndex())))));
			predicate->translate(classGen, methodGen);
			$var($LocalVariableGen, predicateValueTemp, methodGen->addLocalVariable("filter_expr_tmp2"_s, $($Util::getJCRefType("I"_s)), nullptr, nullptr));
			$nc(predicateValueTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ISTORE, predicateValueTemp->getIndex())))));
			$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::NTH_ITERATOR_CLASS))));
			il->append(static_cast<$Instruction*>($Constants::DUP));
			iteratorTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, iteratorTemp->getIndex())))));
			predicateValueTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ILOAD, predicateValueTemp->getIndex())))));
			il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, nthIteratorIdx)));
		} else {
			$init($Constants);
			int32_t initCNLI = $nc(cpg)->addMethodref($Constants::CURRENT_NODE_LIST_ITERATOR, "<init>"_s, $$str({"("_s, $Constants::NODE_ITERATOR_SIG, "Z"_s, $Constants::CURRENT_NODE_LIST_FILTER_SIG, $Constants::NODE_SIG, $Constants::TRANSLET_SIG, ")V"_s}));
			$var($LocalVariableGen, nodeIteratorTemp, methodGen->addLocalVariable("filter_expr_tmp1"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
			$nc(nodeIteratorTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, nodeIteratorTemp->getIndex())))));
			predicate->translate(classGen, methodGen);
			$var($LocalVariableGen, filterTemp, methodGen->addLocalVariable("filter_expr_tmp2"_s, $($Util::getJCRefType($Constants::CURRENT_NODE_LIST_FILTER_SIG)), nullptr, nullptr));
			$nc(filterTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, filterTemp->getIndex())))));
			$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::CURRENT_NODE_LIST_ITERATOR))));
			il->append(static_cast<$Instruction*>($Constants::DUP));
			nodeIteratorTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, nodeIteratorTemp->getIndex())))));
			il->append($Constants::ICONST_1);
			filterTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, filterTemp->getIndex())))));
			il->append($(methodGen->loadCurrentNode()));
			il->append($(classGen->loadTranslet()));
			il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, initCNLI)));
		}
	}
}

FilterExpr::FilterExpr() {
}

$Class* FilterExpr::load$($String* name, bool initialize) {
	$loadClass(FilterExpr, name, initialize, &_FilterExpr_ClassInfo_, allocate$FilterExpr);
	return class$;
}

$Class* FilterExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com