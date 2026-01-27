#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>

#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CACHED_NODE_LIST_ITERATOR_CLASS
#undef DOM_ADAPTER_CLASS
#undef DOM_ADAPTER_SIG
#undef DOM_IMPL_CLASS
#undef DUP_X1
#undef EMPTYSTRING
#undef ERROR
#undef INVALID_QNAME_ERR
#undef MULTI_DOM_CLASS
#undef NODE_ITERATOR_SIG
#undef REQUIRED_ATTR_ERR
#undef SWAP
#undef VARIABLE_REDEF_ERR

using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $ResultTreeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ResultTreeType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $PrintStream = ::java::io::PrintStream;
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

$FieldInfo _VariableBase_FieldInfo_[] = {
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PROTECTED, $field(VariableBase, _name)},
	{"_escapedName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(VariableBase, _escapedName)},
	{"_type", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PROTECTED, $field(VariableBase, _type)},
	{"_isLocal", "Z", nullptr, $PROTECTED, $field(VariableBase, _isLocal)},
	{"_local", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PROTECTED, $field(VariableBase, _local)},
	{"_loadInstruction", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PROTECTED, $field(VariableBase, _loadInstruction)},
	{"_storeInstruction", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PROTECTED, $field(VariableBase, _storeInstruction)},
	{"_select", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PROTECTED, $field(VariableBase, _select)},
	{"select", "Ljava/lang/String;", nullptr, $PROTECTED, $field(VariableBase, select)},
	{"_refs", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;>;", $PROTECTED, $field(VariableBase, _refs)},
	{"_ignore", "Z", nullptr, $PROTECTED, $field(VariableBase, _ignore)},
	{}
};

$MethodInfo _VariableBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(VariableBase, init$, void)},
	{"addReference", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;)V", nullptr, $PUBLIC, $virtualMethod(VariableBase, addReference, void, $VariableRefBase*)},
	{"copyReferences", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase;)V", nullptr, $PUBLIC, $virtualMethod(VariableBase, copyReferences, void, VariableBase*)},
	{"disable", "()V", nullptr, $PUBLIC, $virtualMethod(VariableBase, disable, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(VariableBase, display, void, int32_t)},
	{"getEscapedName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VariableBase, getEscapedName, $String*)},
	{"getExpression", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC, $virtualMethod(VariableBase, getExpression, $Expression*)},
	{"getName", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC, $virtualMethod(VariableBase, getName, $QName*)},
	{"getType", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(VariableBase, getType, $Type*)},
	{"isLocal", "()Z", nullptr, $PUBLIC, $virtualMethod(VariableBase, isLocal, bool)},
	{"loadInstruction", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(VariableBase, loadInstruction, $Instruction*)},
	{"mapRegister", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(VariableBase, mapRegister, void, $MethodGenerator*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(VariableBase, parseContents, void, $Parser*)},
	{"setName", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $virtualMethod(VariableBase, setName, void, $QName*)},
	{"storeInstruction", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(VariableBase, storeInstruction, $Instruction*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VariableBase, toString, $String*)},
	{"translateValue", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(VariableBase, translateValue, void, $ClassGenerator*, $MethodGenerator*)},
	{"unmapRegister", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(VariableBase, unmapRegister, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _VariableBase_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.VariableBase",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
	nullptr,
	_VariableBase_FieldInfo_,
	_VariableBase_MethodInfo_
};

$Object* allocate$VariableBase($Class* clazz) {
	return $of($alloc(VariableBase));
}

void VariableBase::init$() {
	$TopLevelElement::init$();
	$set(this, _refs, $new($ArrayList, 2));
	this->_ignore = false;
}

void VariableBase::disable() {
	this->_ignore = true;
}

void VariableBase::addReference($VariableRefBase* vref) {
	$nc(this->_refs)->add(vref);
}

void VariableBase::copyReferences(VariableBase* var) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->_refs)->size();
	for (int32_t i = 0; i < size; ++i) {
		$nc(var)->addReference($cast($VariableRefBase, $($nc(this->_refs)->get(i))));
	}
}

void VariableBase::mapRegister($MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	if (this->_local == nullptr) {
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		$var($String, name, getEscapedName());
		$var($1Type, varType, $nc(this->_type)->toJCType());
		$set(this, _local, methodGen->addLocalVariable2(name, varType, $($nc(il)->getEnd())));
	}
}

void VariableBase::unmapRegister($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	if (this->_local != nullptr) {
		if ($instanceOf($ResultTreeType, this->_type)) {
			$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
			$var($InstructionList, il, $nc(methodGen)->getInstructionList());
			bool var$0 = $nc($(classGen->getStylesheet()))->callsNodeset();
			$init($Constants);
			if (var$0 && $nc($(classGen->getDOMClass()))->equals($Constants::MULTI_DOM_CLASS)) {
				int32_t removeDA = $nc(cpg)->addMethodref($Constants::MULTI_DOM_CLASS, "removeDOMAdapter"_s, $$str({"("_s, $Constants::DOM_ADAPTER_SIG, ")V"_s}));
				$nc(il)->append($(methodGen->loadDOM()));
				il->append(static_cast<$Instruction*>($$new($CHECKCAST, cpg->addClass($Constants::MULTI_DOM_CLASS))));
				il->append($(loadInstruction()));
				il->append(static_cast<$Instruction*>($$new($CHECKCAST, cpg->addClass($Constants::DOM_ADAPTER_CLASS))));
				il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, removeDA)));
			}
			int32_t release = $nc(cpg)->addInterfaceMethodref($Constants::DOM_IMPL_CLASS, "release"_s, "()V"_s);
			$nc(il)->append($(loadInstruction()));
			il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, release, 1)));
		}
		$nc(this->_local)->setEnd($($nc($($nc(methodGen)->getInstructionList()))->getEnd()));
		$nc(methodGen)->removeLocalVariable(this->_local);
		$set(this, _refs, nullptr);
		$set(this, _local, nullptr);
	}
}

$Instruction* VariableBase::loadInstruction() {
	if (this->_loadInstruction == nullptr) {
		$set(this, _loadInstruction, $nc(this->_type)->LOAD($nc(this->_local)->getIndex()));
	}
	return this->_loadInstruction;
}

$Instruction* VariableBase::storeInstruction() {
	if (this->_storeInstruction == nullptr) {
		$set(this, _storeInstruction, $nc(this->_type)->STORE($nc(this->_local)->getIndex()));
	}
	return this->_storeInstruction;
}

$Expression* VariableBase::getExpression() {
	return (this->_select);
}

$String* VariableBase::toString() {
	return ($str({"variable("_s, this->_name, ")"_s}));
}

void VariableBase::display(int32_t indent) {
	$useLocalCurrentObjectStackCache();
	this->indent(indent);
	$nc($System::out)->println($$str({"Variable "_s, this->_name}));
	if (this->_select != nullptr) {
		this->indent(indent + $SyntaxTreeNode::IndentIncrement);
		$nc($System::out)->println($$str({"select "_s, $($nc(this->_select)->toString())}));
	}
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

$Type* VariableBase::getType() {
	return this->_type;
}

$QName* VariableBase::getName() {
	return this->_name;
}

$String* VariableBase::getEscapedName() {
	return this->_escapedName;
}

void VariableBase::setName($QName* name) {
	$set(this, _name, name);
	$set(this, _escapedName, $Util::escape($($nc(name)->getStringRep())));
}

bool VariableBase::isLocal() {
	return this->_isLocal;
}

void VariableBase::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getAttribute("name"_s));
	if ($nc(name)->length() > 0) {
		if (!$XML11Char::isXML11ValidQName(name)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
			$nc(parser)->reportError($Constants::ERROR, err);
		}
		setName($($nc(parser)->getQNameIgnoreDefaultNs(name)));
	} else {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "name"_s);
	}
	$var(VariableBase, other, $nc(parser)->lookupVariable(this->_name));
	bool var$0 = (other != nullptr);
	if (var$0) {
		var$0 = (other->getParent() == getParent());
	}
	if (var$0) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::VARIABLE_REDEF_ERR, name);
	}
	$set(this, select, getAttribute("select"_s));
	if ($nc(this->select)->length() > 0) {
		$set(this, _select, $nc($(getParser()))->parseExpression(this, "select"_s, nullptr));
		if ($nc(this->_select)->isDummy()) {
			$init($ErrorMsg);
			reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "select"_s);
			return;
		}
	}
	parseChildren(parser);
}

void VariableBase::translateValue($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	if (this->_select != nullptr) {
		$nc(this->_select)->translate(classGen, methodGen);
		if ($instanceOf($NodeSetType, $($nc(this->_select)->getType()))) {
			$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
			$var($InstructionList, il, $nc(methodGen)->getInstructionList());
			$init($Constants);
			int32_t initCNI = $nc(cpg)->addMethodref($Constants::CACHED_NODE_LIST_ITERATOR_CLASS, "<init>"_s, $$str({"("_s, $Constants::NODE_ITERATOR_SIG, ")V"_s}));
			$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::CACHED_NODE_LIST_ITERATOR_CLASS))));
			il->append(static_cast<$Instruction*>($Constants::DUP_X1));
			il->append(static_cast<$Instruction*>($Constants::SWAP));
			il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, initCNI)));
		}
		$nc(this->_select)->startIterator(classGen, methodGen);
	} else if (hasContents()) {
		compileResultTree(classGen, methodGen);
	} else {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		$init($Constants);
		$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Constants::EMPTYSTRING)));
	}
}

VariableBase::VariableBase() {
}

$Class* VariableBase::load$($String* name, bool initialize) {
	$loadClass(VariableBase, name, initialize, &_VariableBase_ClassInfo_, allocate$VariableBase);
	return class$;
}

$Class* VariableBase::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com