#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnionPathExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Step.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ADD_ITERATOR
#undef ADD_ITERATOR_SIG
#undef ATTRIBUTE
#undef ATTRIBUTE_NODE
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DUP
#undef ORDER_ITERATOR
#undef ORDER_ITERATOR_SIG
#undef SWAP
#undef UNION_ITERATOR_CLASS

using $ExpressionArray = $Array<::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression>;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $RelativeLocationPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath;
using $Step = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Step;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _UnionPathExpr_FieldInfo_[] = {
	{"_pathExpr", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE | $FINAL, $field(UnionPathExpr, _pathExpr)},
	{"_rest", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE | $FINAL, $field(UnionPathExpr, _rest)},
	{"_reverse", "Z", nullptr, $PRIVATE, $field(UnionPathExpr, _reverse)},
	{"_components", "[Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(UnionPathExpr, _components)},
	{}
};

$MethodInfo _UnionPathExpr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(UnionPathExpr, init$, void, $Expression*, $Expression*)},
	{"flatten", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PRIVATE, $method(UnionPathExpr, flatten, void, $List*)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(UnionPathExpr, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnionPathExpr, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(UnionPathExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(UnionPathExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _UnionPathExpr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.UnionPathExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_UnionPathExpr_FieldInfo_,
	_UnionPathExpr_MethodInfo_
};

$Object* allocate$UnionPathExpr($Class* clazz) {
	return $of($alloc(UnionPathExpr));
}

void UnionPathExpr::init$($Expression* pathExpr, $Expression* rest) {
	$Expression::init$();
	this->_reverse = false;
	$set(this, _pathExpr, pathExpr);
	$set(this, _rest, rest);
}

void UnionPathExpr::setParser($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$Expression::setParser(parser);
	$var($List, components, $new($ArrayList));
	flatten(components);
	int32_t size = components->size();
	$set(this, _components, $fcast($ExpressionArray, components->toArray($$new($ExpressionArray, size))));
	for (int32_t i = 0; i < size; ++i) {
		$nc($nc(this->_components)->get(i))->setParser(parser);
		$nc($nc(this->_components)->get(i))->setParent(this);
		if ($instanceOf($Step, $nc(this->_components)->get(i))) {
			$var($Step, step, $cast($Step, $nc(this->_components)->get(i)));
			int32_t axis = $nc(step)->getAxis();
			int32_t type = step->getNodeType();
			if ((axis == $Axis::ATTRIBUTE) || (type == $DTM::ATTRIBUTE_NODE)) {
				$nc(this->_components)->set(i, $nc(this->_components)->get(0));
				$nc(this->_components)->set(0, step);
			}
			if ($Axis::isReverse(axis)) {
				this->_reverse = true;
			}
		}
	}
	if ($instanceOf($Expression, $(getParent()))) {
		this->_reverse = false;
	}
}

$Type* UnionPathExpr::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(this->_components)->length;
	for (int32_t i = 0; i < length; ++i) {
		$init($Type);
		if ($nc($nc(this->_components)->get(i))->typeCheck(stable) != $Type::NodeSet) {
			$nc(this->_components)->set(i, $$new($CastExpr, $nc(this->_components)->get(i), $Type::NodeSet));
		}
	}
	$init($Type);
	return $set(this, _type, $Type::NodeSet);
}

$String* UnionPathExpr::toString() {
	return $str({"union("_s, this->_pathExpr, ", "_s, this->_rest, $$str(u')')});
}

void UnionPathExpr::flatten($List* components) {
	$nc(components)->add(this->_pathExpr);
	if (this->_rest != nullptr) {
		if ($instanceOf(UnionPathExpr, this->_rest)) {
			$nc(($cast(UnionPathExpr, this->_rest)))->flatten(components);
		} else {
			components->add(this->_rest);
		}
	}
}

void UnionPathExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t init = $nc(cpg)->addMethodref($Constants::UNION_ITERATOR_CLASS, "<init>"_s, $$str({"("_s, $Constants::DOM_INTF_SIG, ")V"_s}));
	int32_t iter = cpg->addMethodref($Constants::UNION_ITERATOR_CLASS, $Constants::ADD_ITERATOR, $Constants::ADD_ITERATOR_SIG);
	$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::UNION_ITERATOR_CLASS))));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append($(methodGen->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, init)));
	int32_t length = $nc(this->_components)->length;
	for (int32_t i = 0; i < length; ++i) {
		$nc($nc(this->_components)->get(i))->translate(classGen, methodGen);
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, iter)));
	}
	if (this->_reverse) {
		int32_t order = cpg->addInterfaceMethodref($Constants::DOM_INTF, $Constants::ORDER_ITERATOR, $Constants::ORDER_ITERATOR_SIG);
		il->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($Constants::SWAP));
		il->append($(methodGen->loadContextNode()));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, order, 3)));
	}
}

UnionPathExpr::UnionPathExpr() {
}

$Class* UnionPathExpr::load$($String* name, bool initialize) {
	$loadClass(UnionPathExpr, name, initialize, &_UnionPathExpr_ClassInfo_, allocate$UnionPathExpr);
	return class$;
}

$Class* UnionPathExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com