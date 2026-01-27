#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Text.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UseAttributeSets.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XslAttribute.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/AttributeSetMethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ATTR_SET_SIG
#undef EMPTYSTRING
#undef ERROR
#undef ILLEGAL_CHILD_ERR
#undef INVALID_QNAME_ERR
#undef RETURN
#undef UNNAMED_ATTRIBSET_ERR

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Text = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Text;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $UseAttributeSets = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UseAttributeSets;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $XslAttribute = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XslAttribute;
using $AttributeSetMethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::AttributeSetMethodGenerator;
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
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _AttributeSet_FieldInfo_[] = {
	{"AttributeSetPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AttributeSet, AttributeSetPrefix)},
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(AttributeSet, _name)},
	{"_useSets", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/UseAttributeSets;", nullptr, $PRIVATE, $field(AttributeSet, _useSets)},
	{"_mergeSet", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet;", nullptr, $PRIVATE, $field(AttributeSet, _mergeSet)},
	{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeSet, _method)},
	{"_ignore", "Z", nullptr, $PRIVATE, $field(AttributeSet, _ignore)},
	{}
};

$MethodInfo _AttributeSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AttributeSet, init$, void)},
	{"getMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(AttributeSet, getMethodName, $String*)},
	{"getName", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC, $method(AttributeSet, getName, $QName*)},
	{"ignore", "()V", nullptr, $PUBLIC, $method(AttributeSet, ignore, void)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(AttributeSet, parseContents, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeSet, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(AttributeSet, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(AttributeSet, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _AttributeSet_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeSet",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
	nullptr,
	_AttributeSet_FieldInfo_,
	_AttributeSet_MethodInfo_
};

$Object* allocate$AttributeSet($Class* clazz) {
	return $of($alloc(AttributeSet));
}

$String* AttributeSet::AttributeSetPrefix = nullptr;

void AttributeSet::init$() {
	$TopLevelElement::init$();
	this->_ignore = false;
}

$QName* AttributeSet::getName() {
	return this->_name;
}

$String* AttributeSet::getMethodName() {
	return this->_method;
}

void AttributeSet::ignore() {
	this->_ignore = true;
}

void AttributeSet::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getAttribute("name"_s));
	if (!$XML11Char::isXML11ValidQName(name)) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
		$nc(parser)->reportError($Constants::ERROR, err);
	}
	$set(this, _name, $nc(parser)->getQNameIgnoreDefaultNs(name));
	$init($Constants);
	if ((this->_name == nullptr) || ($nc($($nc(this->_name)->getStringRep()))->equals($Constants::EMPTYSTRING))) {
		$init($ErrorMsg);
		$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::UNNAMED_ATTRIBSET_ERR, static_cast<$SyntaxTreeNode*>(this)));
		parser->reportError($Constants::ERROR, msg);
	}
	$var($String, useSets, getAttribute("use-attribute-sets"_s));
	if ($nc(useSets)->length() > 0) {
		if (!$Util::isValidQNames(useSets)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(useSets), static_cast<$SyntaxTreeNode*>(this)));
			parser->reportError($Constants::ERROR, err);
		}
		$set(this, _useSets, $new($UseAttributeSets, useSets, parser));
	}
	$var($List, contents, getContents());
	int32_t count = $nc(contents)->size();
	for (int32_t i = 0; i < count; ++i) {
		$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, contents->get(i)));
		if ($instanceOf($XslAttribute, child)) {
			$nc($(parser->getSymbolTable()))->setCurrentNode(child);
			$nc(child)->parseContents(parser);
		} else if ($instanceOf($Text, child)) {
		} else {
			$init($ErrorMsg);
			$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::ILLEGAL_CHILD_ERR, static_cast<$SyntaxTreeNode*>(this)));
			parser->reportError($Constants::ERROR, msg);
		}
	}
	$nc($(parser->getSymbolTable()))->setCurrentNode(this);
}

$Type* AttributeSet::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	if (this->_ignore) {
		$init($Type);
		return ($Type::Void);
	}
	$set(this, _mergeSet, $nc(stable)->addAttributeSet(this));
	$set(this, _method, $str({AttributeSet::AttributeSetPrefix, $$str($nc($(getXSLTC()))->nextAttributeSetSerial())}));
	if (this->_useSets != nullptr) {
		$nc(this->_useSets)->typeCheck(stable);
	}
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

void AttributeSet::translate($ClassGenerator* classGen, $MethodGenerator* methodGen$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($MethodGenerator, methodGen, methodGen$renamed);
	if (this->_ignore) {
		return;
	}
	$assign(methodGen, $new($AttributeSetMethodGenerator, this->_method, classGen));
	if (this->_mergeSet != nullptr) {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$var($InstructionList, il, methodGen->getInstructionList());
		$var($String, methodName, $nc(this->_mergeSet)->getMethodName());
		$nc(il)->append($(classGen->loadTranslet()));
		il->append($(methodGen->loadDOM()));
		il->append($(methodGen->loadIterator()));
		il->append($(methodGen->loadHandler()));
		il->append($(methodGen->loadCurrentNode()));
		$init($Constants);
		int32_t method = $nc(cpg)->addMethodref($(classGen->getClassName()), methodName, $Constants::ATTR_SET_SIG);
		il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, method)));
	}
	if (this->_useSets != nullptr) {
		$nc(this->_useSets)->translate(classGen, methodGen);
	}
	$var($Iterator, attributes, elements());
	while ($nc(attributes)->hasNext()) {
		$var($SyntaxTreeNode, element, $cast($SyntaxTreeNode, attributes->next()));
		if ($instanceOf($XslAttribute, element)) {
			$var($XslAttribute, attribute, $cast($XslAttribute, element));
			$nc(attribute)->translate(classGen, methodGen);
		}
	}
	$var($InstructionList, il, methodGen->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($Constants::RETURN));
	$nc(classGen)->addMethod(methodGen);
}

$String* AttributeSet::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buf, $new($StringBuffer, "attribute-set: "_s));
	$var($Iterator, attributes, elements());
	while ($nc(attributes)->hasNext()) {
		$var($XslAttribute, attribute, $cast($XslAttribute, attributes->next()));
		buf->append($of(attribute));
	}
	return (buf->toString());
}

AttributeSet::AttributeSet() {
}

void clinit$AttributeSet($Class* class$) {
	$assignStatic(AttributeSet::AttributeSetPrefix, "$as$"_s);
}

$Class* AttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSet, name, initialize, &_AttributeSet_ClassInfo_, clinit$AttributeSet, allocate$AttributeSet);
	return class$;
}

$Class* AttributeSet::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com