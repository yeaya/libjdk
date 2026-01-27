#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XslAttribute.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Choose.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CopyOf.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/If.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralAttribute.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SimpleAttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Text.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UseAttributeSets.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemDesc.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ATTREMPTY
#undef ATTRURL
#undef BASIS_LIBRARY_CLASS
#undef DUP
#undef EMPTYSTRING
#undef HTML_ATTREMPTY
#undef HTML_ATTRURL
#undef ILLEGAL_ATTR_NAME_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRING_SIG
#undef STRING_VALUE_HANDLER
#undef STRING_VALUE_HANDLER_SIG
#undef TRANSLET_CLASS
#undef XMLNS_PREFIX

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $AttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue;
using $AttributeValueTemplate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate;
using $Choose = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Choose;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $CopyOf = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CopyOf;
using $If = ::com::sun::org::apache::xalan::internal::xsltc::compiler::If;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $LiteralAttribute = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralAttribute;
using $LiteralElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralElement;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SimpleAttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SimpleAttributeValue;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Text = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Text;
using $UseAttributeSets = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UseAttributeSets;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ElemDesc = ::com::sun::org::apache::xml::internal::serializer::ElemDesc;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
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

$FieldInfo _XslAttribute_FieldInfo_[] = {
	{"_prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XslAttribute, _prefix)},
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PRIVATE, $field(XslAttribute, _name)},
	{"_namespace", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate;", nullptr, $PRIVATE, $field(XslAttribute, _namespace)},
	{"_ignore", "Z", nullptr, $PRIVATE, $field(XslAttribute, _ignore)},
	{"_isLiteral", "Z", nullptr, $PRIVATE, $field(XslAttribute, _isLiteral)},
	{}
};

$MethodInfo _XslAttribute_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(XslAttribute, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(XslAttribute, display, void, int32_t)},
	{"getName", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PUBLIC, $method(XslAttribute, getName, $AttributeValue*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(XslAttribute, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(XslAttribute, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(XslAttribute, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _XslAttribute_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.XslAttribute",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_XslAttribute_FieldInfo_,
	_XslAttribute_MethodInfo_
};

$Object* allocate$XslAttribute($Class* clazz) {
	return $of($alloc(XslAttribute));
}

void XslAttribute::init$() {
	$Instruction::init$();
	$set(this, _namespace, nullptr);
	this->_ignore = false;
	this->_isLiteral = false;
}

$AttributeValue* XslAttribute::getName() {
	return this->_name;
}

void XslAttribute::display(int32_t indent) {
	this->indent(indent);
	$Util::println($$str({"Attribute "_s, this->_name}));
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

void XslAttribute::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	bool generated = false;
	$var($SymbolTable, stable, $nc(parser)->getSymbolTable());
	$var($String, name, getAttribute("name"_s));
	$var($String, namespace$, getAttribute("namespace"_s));
	$var($QName, qname, parser->getQName(name, false));
	$var($String, prefix, $nc(qname)->getPrefix());
	$init($Constants);
	bool var$0 = ((prefix != nullptr) && (prefix->equals($Constants::XMLNS_PREFIX)));
	if (var$0 || ($nc(name)->equals($Constants::XMLNS_PREFIX))) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::ILLEGAL_ATTR_NAME_ERR, name);
		return;
	}
	this->_isLiteral = $Util::isLiteral(name);
	if (this->_isLiteral) {
		if (!$XML11Char::isXML11ValidQName(name)) {
			$init($ErrorMsg);
			reportError(this, parser, $ErrorMsg::ILLEGAL_ATTR_NAME_ERR, name);
			return;
		}
	}
	$var($SyntaxTreeNode, parent, getParent());
	$var($List, siblings, $nc(parent)->getContents());
	for (int32_t i = 0; i < parent->elementCount(); ++i) {
		$var($SyntaxTreeNode, item, $cast($SyntaxTreeNode, $nc(siblings)->get(i)));
		if ($equals(item, this)) {
			break;
		}
		if ($instanceOf(XslAttribute, item)) {
			continue;
		}
		if ($instanceOf($UseAttributeSets, item)) {
			continue;
		}
		if ($instanceOf($LiteralAttribute, item)) {
			continue;
		}
		if ($instanceOf($Text, item)) {
			continue;
		}
		if ($instanceOf($If, item)) {
			continue;
		}
		if ($instanceOf($Choose, item)) {
			continue;
		}
		if ($instanceOf($CopyOf, item)) {
			continue;
		}
		if ($instanceOf($VariableBase, item)) {
			continue;
		}
		$init($ErrorMsg);
		reportWarning(this, parser, $ErrorMsg::STRAY_ATTRIBUTE_ERR, name);
	}
	if (namespace$ != nullptr && namespace$ != $Constants::EMPTYSTRING) {
		$set(this, _prefix, lookupPrefix(namespace$));
		$set(this, _namespace, $new($AttributeValueTemplate, namespace$, parser, this));
	} else {
		if (prefix != nullptr && prefix != $Constants::EMPTYSTRING) {
			$set(this, _prefix, prefix);
			$assign(namespace$, lookupNamespace(prefix));
			if (namespace$ != nullptr) {
				$set(this, _namespace, $new($AttributeValueTemplate, namespace$, parser, this));
			}
		}
	}
	if (this->_namespace != nullptr) {
		if (this->_prefix == nullptr || this->_prefix == $Constants::EMPTYSTRING) {
			if (prefix != nullptr) {
				$set(this, _prefix, prefix);
			} else {
				$set(this, _prefix, $nc(stable)->generateNamespacePrefix());
				generated = true;
			}
		} else if (prefix != nullptr && !prefix->equals(this->_prefix)) {
			$set(this, _prefix, prefix);
		}
		$assign(name, $str({this->_prefix, ":"_s, $(qname->getLocalPart())}));
		if (($instanceOf($LiteralElement, parent)) && (!generated)) {
			$nc(($cast($LiteralElement, parent)))->registerNamespace(this->_prefix, namespace$, stable, false);
		}
	}
	if ($instanceOf($LiteralElement, parent)) {
		$nc(($cast($LiteralElement, parent)))->addAttribute(this);
	}
	$set(this, _name, $AttributeValue::create(this, name, parser));
	parseChildren(parser);
}

$Type* XslAttribute::typeCheck($SymbolTable* stable) {
	if (!this->_ignore) {
		$nc(this->_name)->typeCheck(stable);
		if (this->_namespace != nullptr) {
			$nc(this->_namespace)->typeCheck(stable);
		}
		typeCheckContents(stable);
	}
	$init($Type);
	return $Type::Void;
}

void XslAttribute::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_ignore) {
		return;
	}
	this->_ignore = true;
	if (this->_namespace != nullptr) {
		$nc(il)->append($(methodGen->loadHandler()));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_prefix)));
		$nc(this->_namespace)->translate(classGen, methodGen);
		il->append($(methodGen->namespace$()));
	}
	if (!this->_isLiteral) {
		$init($Constants);
		$var($LocalVariableGen, nameValue, methodGen->addLocalVariable2("nameValue"_s, $($Util::getJCRefType($Constants::STRING_SIG)), nullptr));
		$nc(this->_name)->translate(classGen, methodGen);
		$nc(nameValue)->setStart($($nc(il)->append(static_cast<$1Instruction*>($$new($ASTORE, nameValue->getIndex())))));
		$nc(il)->append(static_cast<$1Instruction*>($$new($ALOAD, nameValue->getIndex())));
		int32_t check = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "checkAttribQName"_s, $$str({"("_s, $Constants::STRING_SIG, ")V"_s}));
		il->append(static_cast<$1Instruction*>($$new($INVOKESTATIC, check)));
		il->append($(methodGen->loadHandler()));
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		nameValue->setEnd($(il->append(static_cast<$1Instruction*>($$new($ALOAD, nameValue->getIndex())))));
	} else {
		$nc(il)->append($(methodGen->loadHandler()));
		$init($Constants);
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		$nc(this->_name)->translate(classGen, methodGen);
	}
	bool var$0 = (elementCount() == 1);
	if (var$0 && ($instanceOf($Text, $(elementAt(0))))) {
		$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc(($cast($Text, $(elementAt(0)))))->getText()))));
	} else {
		$nc(il)->append($(classGen->loadTranslet()));
		$init($Constants);
		il->append(static_cast<$1Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, "stringValueHandler"_s, $Constants::STRING_VALUE_HANDLER_SIG))));
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append($(methodGen->storeHandler()));
		translateContents(classGen, methodGen);
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::STRING_VALUE_HANDLER, "getValue"_s, $$str({"()"_s, $Constants::STRING_SIG})))));
	}
	$var($SyntaxTreeNode, parent, getParent());
	if ($instanceOf($LiteralElement, parent) && $nc(($cast($LiteralElement, parent)))->allAttributesUnique()) {
		int32_t flags = 0;
		$var($ElemDesc, elemDesc, $nc(($cast($LiteralElement, parent)))->getElemDesc());
		if (elemDesc != nullptr && $instanceOf($SimpleAttributeValue, this->_name)) {
			$var($String, attrName, $nc(($cast($SimpleAttributeValue, this->_name)))->toString());
			if (elemDesc->isAttrFlagSet(attrName, $ElemDesc::ATTREMPTY)) {
				flags = flags | $SerializationHandler::HTML_ATTREMPTY;
			} else if (elemDesc->isAttrFlagSet(attrName, $ElemDesc::ATTRURL)) {
				flags = flags | $SerializationHandler::HTML_ATTRURL;
			}
		}
		$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, flags)));
		il->append($(methodGen->uniqueAttribute()));
	} else {
		$nc(il)->append($(methodGen->attribute()));
	}
	$nc(il)->append($(methodGen->storeHandler()));
}

XslAttribute::XslAttribute() {
}

$Class* XslAttribute::load$($String* name, bool initialize) {
	$loadClass(XslAttribute, name, initialize, &_XslAttribute_ClassInfo_, allocate$XslAttribute);
	return class$;
}

$Class* XslAttribute::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com