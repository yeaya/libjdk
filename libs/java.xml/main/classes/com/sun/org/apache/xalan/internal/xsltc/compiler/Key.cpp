#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Key.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGT.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <jcpp.h>

#undef DESCENDANT
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DUP
#undef DUP_X1
#undef ERROR
#undef GET_NODE_VALUE
#undef INVALID_QNAME_ERR
#undef NODE_ITERATOR_SIG
#undef NODE_SIG
#undef NOP
#undef REQUIRED_ATTR_ERR
#undef STRING_SIG
#undef TRANSLET_CLASS

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IFGE = ::com::sun::org::apache::bcel::internal::generic::IFGE;
using $IFGT = ::com::sun::org::apache::bcel::internal::generic::IFGT;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
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

$FieldInfo _Key_FieldInfo_[] = {
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(Key, _name)},
	{"_match", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PRIVATE, $field(Key, _match)},
	{"_use", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(Key, _use)},
	{"_useType", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PRIVATE, $field(Key, _useType)},
	{}
};

$MethodInfo _Key_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Key, init$, void)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Key, getName, $String*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Key, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Key, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"traverseNodeSet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;I)V", nullptr, $PUBLIC, $method(Key, traverseNodeSet, void, $ClassGenerator*, $MethodGenerator*, int32_t)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Key, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Key_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Key",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
	nullptr,
	_Key_FieldInfo_,
	_Key_MethodInfo_
};

$Object* allocate$Key($Class* clazz) {
	return $of($alloc(Key));
}

void Key::init$() {
	$TopLevelElement::init$();
}

void Key::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getAttribute("name"_s));
	if (!$XML11Char::isXML11ValidQName(name)) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
		$nc(parser)->reportError($Constants::ERROR, err);
	}
	$set(this, _name, $nc(parser)->getQNameIgnoreDefaultNs(name));
	$nc($(getSymbolTable()))->addKey(this->_name, this);
	$set(this, _match, parser->parsePattern(this, "match"_s, nullptr));
	$set(this, _use, parser->parseExpression(this, "use"_s, nullptr));
	if (this->_name == nullptr) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "name"_s);
		return;
	}
	if ($nc(this->_match)->isDummy()) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "match"_s);
		return;
	}
	if ($nc(this->_use)->isDummy()) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "use"_s);
		return;
	}
}

$String* Key::getName() {
	return $nc(this->_name)->toString();
}

$Type* Key::typeCheck($SymbolTable* stable) {
	$nc(this->_match)->typeCheck(stable);
	$set(this, _useType, $nc(this->_use)->typeCheck(stable));
	if ($instanceOf($StringType, this->_useType) == false && $instanceOf($NodeSetType, this->_useType) == false) {
		$init($Type);
		$set(this, _use, $new($CastExpr, this->_use, $Type::String));
	}
	$init($Type);
	return $Type::Void;
}

void Key::traverseNodeSet($ClassGenerator* classGen, $MethodGenerator* methodGen, int32_t buildKeyIndex) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t getNodeValue = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_NODE_VALUE, $$str({"(I)"_s, $Constants::STRING_SIG}));
	int32_t getNodeIdent = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getNodeIdent"_s, $$str({"(I)"_s, $Constants::NODE_SIG}));
	int32_t keyDom = cpg->addMethodref($Constants::TRANSLET_CLASS, "setKeyIndexDom"_s, $$str({"("_s, $Constants::STRING_SIG, $Constants::DOM_INTF_SIG, ")V"_s}));
	$var($LocalVariableGen, parentNode, methodGen->addLocalVariable("parentNode"_s, $($Util::getJCRefType("I"_s)), nullptr, nullptr));
	$nc(parentNode)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ISTORE, parentNode->getIndex())))));
	$nc(il)->append($(methodGen->loadCurrentNode()));
	il->append($(methodGen->loadIterator()));
	$nc(this->_use)->translate(classGen, methodGen);
	$nc(this->_use)->startIterator(classGen, methodGen);
	il->append($(methodGen->storeIterator()));
	$var($BranchHandle, nextNode, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$var($InstructionHandle, loop, il->append($Constants::NOP));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc(this->_name)->toString()))));
	parentNode->setEnd($(il->append(static_cast<$Instruction*>($$new($ILOAD, parentNode->getIndex())))));
	il->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadCurrentNode()));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getNodeValue, 2)));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, buildKeyIndex)));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $(getName()))));
	il->append($(methodGen->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, keyDom)));
	$nc(nextNode)->setTarget($(il->append($(methodGen->loadIterator()))));
	il->append($(methodGen->nextNode()));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append($(methodGen->storeCurrentNode()));
	il->append(static_cast<$BranchInstruction*>($$new($IFGE, loop)));
	il->append($(methodGen->storeIterator()));
	il->append($(methodGen->storeCurrentNode()));
}

void Key::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	int32_t current = methodGen->getLocalIndex("current"_s);
	$init($Constants);
	int32_t key = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, "buildKeyIndex"_s, $$str({"("_s, $Constants::STRING_SIG, "I"_s, $Constants::STRING_SIG, ")V"_s}));
	int32_t keyDom = cpg->addMethodref($Constants::TRANSLET_CLASS, "setKeyIndexDom"_s, $$str({"("_s, $Constants::STRING_SIG, $Constants::DOM_INTF_SIG, ")V"_s}));
	int32_t getNodeIdent = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getNodeIdent"_s, $$str({"(I)"_s, $Constants::NODE_SIG}));
	int32_t git = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getAxisIterator"_s, $$str({"(I)"_s, $Constants::NODE_ITERATOR_SIG}));
	$nc(il)->append($(methodGen->loadCurrentNode()));
	il->append($(methodGen->loadIterator()));
	il->append($(methodGen->loadDOM()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Axis::DESCENDANT)));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, git, 2)));
	il->append($(methodGen->loadCurrentNode()));
	il->append($(methodGen->setStartNode()));
	il->append($(methodGen->storeIterator()));
	$var($BranchHandle, nextNode, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$var($InstructionHandle, loop, il->append($Constants::NOP));
	il->append($(methodGen->loadCurrentNode()));
	$nc(this->_match)->translate(classGen, methodGen);
	$nc(this->_match)->synthesize(classGen, methodGen);
	$var($BranchHandle, skipNode, il->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr))));
	if ($instanceOf($NodeSetType, this->_useType)) {
		il->append($(methodGen->loadCurrentNode()));
		traverseNodeSet(classGen, methodGen, key);
	} else {
		il->append($(classGen->loadTranslet()));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc(this->_name)->toString()))));
		il->append(static_cast<$Instruction*>($Constants::DUP_X1));
		il->append($(methodGen->loadCurrentNode()));
		$nc(this->_use)->translate(classGen, methodGen);
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, key)));
		il->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, keyDom)));
	}
	$var($InstructionHandle, skip, il->append($Constants::NOP));
	il->append($(methodGen->loadIterator()));
	il->append($(methodGen->nextNode()));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append($(methodGen->storeCurrentNode()));
	il->append(static_cast<$BranchInstruction*>($$new($IFGT, loop)));
	il->append($(methodGen->storeIterator()));
	il->append($(methodGen->storeCurrentNode()));
	$nc(nextNode)->setTarget(skip);
	$nc(skipNode)->setTarget(skip);
}

Key::Key() {
}

$Class* Key::load$($String* name, bool initialize) {
	$loadClass(Key, name, initialize, &_Key_ClassInfo_, allocate$Key);
	return class$;
}

$Class* Key::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com