#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FilterParentPath.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
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
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CurrentCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/DocumentCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/KeyCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef DOM_INTF
#undef DUP
#undef NODE_ITERATOR_BASE
#undef NODE_ITERATOR_SIG
#undef ORDER_ITERATOR
#undef ORDER_ITERATOR_SIG
#undef STEP_ITERATOR_CLASS
#undef SWAP

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
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
using $CurrentCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CurrentCall;
using $DocumentCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::DocumentCall;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $KeyCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::KeyCall;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $RelativeLocationPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _FilterParentPath_FieldInfo_[] = {
	{"_filterExpr", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(FilterParentPath, _filterExpr)},
	{"_path", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(FilterParentPath, _path)},
	{"_hasDescendantAxis", "Z", nullptr, $PRIVATE, $field(FilterParentPath, _hasDescendantAxis)},
	{}
};

$MethodInfo _FilterParentPath_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(FilterParentPath, init$, void, $Expression*, $Expression*)},
	{"setDescendantAxis", "()V", nullptr, $PUBLIC, $method(FilterParentPath, setDescendantAxis, void)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(FilterParentPath, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FilterParentPath, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(FilterParentPath, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(FilterParentPath, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _FilterParentPath_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FilterParentPath",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_FilterParentPath_FieldInfo_,
	_FilterParentPath_MethodInfo_
};

$Object* allocate$FilterParentPath($Class* clazz) {
	return $of($alloc(FilterParentPath));
}

void FilterParentPath::init$($Expression* filterExpr, $Expression* path) {
	$Expression::init$();
	this->_hasDescendantAxis = false;
	$nc(($set(this, _path, path)))->setParent(this);
	$nc(($set(this, _filterExpr, filterExpr)))->setParent(this);
}

void FilterParentPath::setParser($Parser* parser) {
	$Expression::setParser(parser);
	$nc(this->_filterExpr)->setParser(parser);
	$nc(this->_path)->setParser(parser);
}

$String* FilterParentPath::toString() {
	return $str({"FilterParentPath("_s, this->_filterExpr, ", "_s, this->_path, $$str(u')')});
}

void FilterParentPath::setDescendantAxis() {
	this->_hasDescendantAxis = true;
}

$Type* FilterParentPath::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Type, ftype, $nc(this->_filterExpr)->typeCheck(stable));
	if ($instanceOf($NodeSetType, ftype) == false) {
		if ($instanceOf($ReferenceType, ftype)) {
			$init($Type);
			$set(this, _filterExpr, $new($CastExpr, this->_filterExpr, $Type::NodeSet));
		} else if ($instanceOf($NodeType, ftype)) {
			$init($Type);
			$set(this, _filterExpr, $new($CastExpr, this->_filterExpr, $Type::NodeSet));
		} else {
			$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
		}
	}
	$var($Type, ptype, $nc(this->_path)->typeCheck(stable));
	if (!($instanceOf($NodeSetType, ptype))) {
		$init($Type);
		$set(this, _path, $new($CastExpr, this->_path, $Type::NodeSet));
	}
	$init($Type);
	return $set(this, _type, $Type::NodeSet);
}

void FilterParentPath::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t initSI = $nc(cpg)->addMethodref($Constants::STEP_ITERATOR_CLASS, "<init>"_s, $$str({"("_s, $Constants::NODE_ITERATOR_SIG, $Constants::NODE_ITERATOR_SIG, ")V"_s}));
	$nc(this->_filterExpr)->translate(classGen, methodGen);
	$var($LocalVariableGen, filterTemp, methodGen->addLocalVariable("filter_parent_path_tmp1"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	$nc(filterTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, filterTemp->getIndex())))));
	$nc(this->_path)->translate(classGen, methodGen);
	$var($LocalVariableGen, pathTemp, methodGen->addLocalVariable("filter_parent_path_tmp2"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	$nc(pathTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, pathTemp->getIndex())))));
	$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::STEP_ITERATOR_CLASS))));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	filterTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, filterTemp->getIndex())))));
	pathTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, pathTemp->getIndex())))));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, initSI)));
	if (this->_hasDescendantAxis) {
		int32_t incl = cpg->addMethodref($Constants::NODE_ITERATOR_BASE, "includeSelf"_s, $$str({"()"_s, $Constants::NODE_ITERATOR_SIG}));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, incl)));
	}
	$var($SyntaxTreeNode, parent, getParent());
	bool parentAlreadyOrdered = ($instanceOf($RelativeLocationPath, parent)) || ($instanceOf(FilterParentPath, parent)) || ($instanceOf($KeyCall, parent)) || ($instanceOf($CurrentCall, parent)) || ($instanceOf($DocumentCall, parent));
	if (!parentAlreadyOrdered) {
		int32_t order = cpg->addInterfaceMethodref($Constants::DOM_INTF, $Constants::ORDER_ITERATOR, $Constants::ORDER_ITERATOR_SIG);
		il->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($Constants::SWAP));
		il->append($(methodGen->loadContextNode()));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, order, 3)));
	}
}

FilterParentPath::FilterParentPath() {
}

$Class* FilterParentPath::load$($String* name, bool initialize) {
	$loadClass(FilterParentPath, name, initialize, &_FilterParentPath_ClassInfo_, allocate$FilterParentPath);
	return class$;
}

$Class* FilterParentPath::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com