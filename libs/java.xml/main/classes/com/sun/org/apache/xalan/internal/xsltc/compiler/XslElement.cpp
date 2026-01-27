#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XslElement.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UseAttributeSets.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XslAttribute.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/lang/StringBuffer.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ACONST_NULL
#undef BASIS_LIBRARY_CLASS
#undef DOM_INTF_SIG
#undef DUP2
#undef EMPTYSTRING
#undef ERROR
#undef ILLEGAL_ELEM_NAME_ERR
#undef INVALID_QNAME_ERR
#undef NAMESPACE_UNDEF_ERR
#undef STRING_SIG
#undef TRANSLET_OUTPUT_SIG
#undef WARNING

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $AttributeValueTemplate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $UseAttributeSets = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UseAttributeSets;
using $XslAttribute = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XslAttribute;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _XslElement_FieldInfo_[] = {
	{"_prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XslElement, _prefix)},
	{"_ignore", "Z", nullptr, $PRIVATE, $field(XslElement, _ignore)},
	{"_isLiteralName", "Z", nullptr, $PRIVATE, $field(XslElement, _isLiteralName)},
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate;", nullptr, $PRIVATE, $field(XslElement, _name)},
	{"_namespace", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate;", nullptr, $PRIVATE, $field(XslElement, _namespace)},
	{}
};

$MethodInfo _XslElement_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(XslElement, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(XslElement, display, void, int32_t)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(XslElement, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(XslElement, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(XslElement, translateContents, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateLiteral", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(XslElement, translateLiteral, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(XslElement, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _XslElement_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.XslElement",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_XslElement_FieldInfo_,
	_XslElement_MethodInfo_
};

$Object* allocate$XslElement($Class* clazz) {
	return $of($alloc(XslElement));
}

void XslElement::init$() {
	$Instruction::init$();
	this->_ignore = false;
	this->_isLiteralName = true;
}

void XslElement::display(int32_t indent) {
	this->indent(indent);
	$Util::println($$str({"Element "_s, this->_name}));
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

void XslElement::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($SymbolTable, stable, $nc(parser)->getSymbolTable());
	$var($String, name, getAttribute("name"_s));
	$init($Constants);
	if (name == $Constants::EMPTYSTRING) {
		$init($ErrorMsg);
		$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::ILLEGAL_ELEM_NAME_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
		parser->reportError($Constants::WARNING, msg);
		parseChildren(parser);
		this->_ignore = true;
		return;
	}
	$var($String, namespace$, getAttribute("namespace"_s));
	this->_isLiteralName = $Util::isLiteral(name);
	if (this->_isLiteralName) {
		if (!$XML11Char::isXML11ValidQName(name)) {
			$init($ErrorMsg);
			$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::ILLEGAL_ELEM_NAME_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
			parser->reportError($Constants::WARNING, msg);
			parseChildren(parser);
			this->_ignore = true;
			return;
		}
		$var($QName, qname, parser->getQNameSafe(name));
		$var($String, prefix, $nc(qname)->getPrefix());
		$var($String, local, qname->getLocalPart());
		if (prefix == nullptr) {
			$assign(prefix, $Constants::EMPTYSTRING);
		}
		if (!hasAttribute("namespace"_s)) {
			$assign(namespace$, lookupNamespace(prefix));
			if (namespace$ == nullptr) {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::NAMESPACE_UNDEF_ERR, $of(prefix), static_cast<$SyntaxTreeNode*>(this)));
				parser->reportError($Constants::WARNING, err);
				parseChildren(parser);
				this->_ignore = true;
				return;
			}
			$set(this, _prefix, prefix);
			$set(this, _namespace, $new($AttributeValueTemplate, namespace$, parser, this));
		} else {
			if (prefix == $Constants::EMPTYSTRING) {
				if ($Util::isLiteral(namespace$)) {
					$assign(prefix, lookupPrefix(namespace$));
					if (prefix == nullptr) {
						$assign(prefix, $nc(stable)->generateNamespacePrefix());
					}
				}
				$var($StringBuffer, newName, $new($StringBuffer, prefix));
				if (prefix != $Constants::EMPTYSTRING) {
					newName->append(u':');
				}
				$assign(name, newName->append(local)->toString());
			}
			$set(this, _prefix, prefix);
			$set(this, _namespace, $new($AttributeValueTemplate, namespace$, parser, this));
		}
	} else {
		$set(this, _namespace, (namespace$ == $Constants::EMPTYSTRING) ? ($AttributeValueTemplate*)nullptr : $new($AttributeValueTemplate, namespace$, parser, this));
	}
	$set(this, _name, $new($AttributeValueTemplate, name, parser, this));
	$var($String, useSets, getAttribute("use-attribute-sets"_s));
	if ($nc(useSets)->length() > 0) {
		if (!$Util::isValidQNames(useSets)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(useSets), static_cast<$SyntaxTreeNode*>(this)));
			parser->reportError($Constants::ERROR, err);
		}
		setFirstElement($$new($UseAttributeSets, useSets, parser));
	}
	parseChildren(parser);
}

$Type* XslElement::typeCheck($SymbolTable* stable) {
	if (!this->_ignore) {
		$nc(this->_name)->typeCheck(stable);
		if (this->_namespace != nullptr) {
			$nc(this->_namespace)->typeCheck(stable);
		}
	}
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

void XslElement::translateLiteral($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (!this->_ignore) {
		$nc(il)->append($(methodGen->loadHandler()));
		$nc(this->_name)->translate(classGen, methodGen);
		$init($Constants);
		il->append(static_cast<$1Instruction*>($Constants::DUP2));
		il->append($(methodGen->startElement()));
		if (this->_namespace != nullptr) {
			il->append($(methodGen->loadHandler()));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_prefix)));
			$nc(this->_namespace)->translate(classGen, methodGen);
			il->append($(methodGen->namespace$()));
		}
	}
	translateContents(classGen, methodGen);
	if (!this->_ignore) {
		$nc(il)->append($(methodGen->endElement()));
	}
}

void XslElement::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_isLiteralName) {
		translateLiteral(classGen, methodGen);
		return;
	}
	if (!this->_ignore) {
		$init($Constants);
		$var($LocalVariableGen, nameValue, methodGen->addLocalVariable2("nameValue"_s, $($Util::getJCRefType($Constants::STRING_SIG)), nullptr));
		$nc(this->_name)->translate(classGen, methodGen);
		$nc(nameValue)->setStart($($nc(il)->append(static_cast<$1Instruction*>($$new($ASTORE, nameValue->getIndex())))));
		$nc(il)->append(static_cast<$1Instruction*>($$new($ALOAD, nameValue->getIndex())));
		int32_t check = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "checkQName"_s, $$str({"("_s, $Constants::STRING_SIG, ")V"_s}));
		il->append(static_cast<$1Instruction*>($$new($INVOKESTATIC, check)));
		il->append($(methodGen->loadHandler()));
		nameValue->setEnd($(il->append(static_cast<$1Instruction*>($$new($ALOAD, nameValue->getIndex())))));
		if (this->_namespace != nullptr) {
			$nc(this->_namespace)->translate(classGen, methodGen);
		} else {
			il->append($Constants::ACONST_NULL);
		}
		il->append($(methodGen->loadHandler()));
		il->append($(methodGen->loadDOM()));
		il->append($(methodGen->loadCurrentNode()));
		il->append(static_cast<$1Instruction*>($$new($INVOKESTATIC, cpg->addMethodref($Constants::BASIS_LIBRARY_CLASS, "startXslElement"_s, $$str({"("_s, $Constants::STRING_SIG, $Constants::STRING_SIG, $Constants::TRANSLET_OUTPUT_SIG, $Constants::DOM_INTF_SIG, "I)"_s, $Constants::STRING_SIG})))));
	}
	translateContents(classGen, methodGen);
	if (!this->_ignore) {
		$nc(il)->append($(methodGen->endElement()));
	}
}

void XslElement::translateContents($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	int32_t n = elementCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($SyntaxTreeNode, item, $cast($SyntaxTreeNode, $nc($(getContents()))->get(i)));
		if (this->_ignore && $instanceOf($XslAttribute, item)) {
			continue;
		}
		$nc(item)->translate(classGen, methodGen);
	}
}

XslElement::XslElement() {
}

$Class* XslElement::load$($String* name, bool initialize) {
	$loadClass(XslElement, name, initialize, &_XslElement_ClassInfo_, allocate$XslElement);
	return class$;
}

$Class* XslElement::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com