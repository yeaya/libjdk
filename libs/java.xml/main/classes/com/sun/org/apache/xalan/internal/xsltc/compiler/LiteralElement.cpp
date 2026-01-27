#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement.h>

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ApplyTemplates.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CallTemplate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Choose.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Comment.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Copy.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CopyOf.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ForEach.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/If.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralAttribute.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Number.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Otherwise.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ProcessingInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SimpleAttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Text.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UseAttributeSets.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ValueOf.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/When.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XslAttribute.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XslElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemDesc.h>
#include <com/sun/org/apache/xml/internal/serializer/ToHTMLStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef DUP2
#undef EMPTYSTRING
#undef ERROR
#undef HTML_OUTPUT
#undef INVALID_QNAME_ERR
#undef XMLNS_PREFIX
#undef XSLT_URI

using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $ApplyTemplates = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ApplyTemplates;
using $AttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue;
using $AttributeValueTemplate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate;
using $CallTemplate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CallTemplate;
using $Choose = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Choose;
using $Comment = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Comment;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Copy = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Copy;
using $CopyOf = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CopyOf;
using $ForEach = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ForEach;
using $If = ::com::sun::org::apache::xalan::internal::xsltc::compiler::If;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $LiteralAttribute = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralAttribute;
using $Number = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Number;
using $Otherwise = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Otherwise;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $ProcessingInstruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ProcessingInstruction;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SimpleAttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SimpleAttributeValue;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Text = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Text;
using $UseAttributeSets = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UseAttributeSets;
using $ValueOf = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ValueOf;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $When = ::com::sun::org::apache::xalan::internal::xsltc::compiler::When;
using $XslAttribute = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XslAttribute;
using $XslElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XslElement;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ElemDesc = ::com::sun::org::apache::xml::internal::serializer::ElemDesc;
using $ToHTMLStream = ::com::sun::org::apache::xml::internal::serializer::ToHTMLStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class LiteralElement$$Lambda$lambda$getNamespaceScope$0 : public $Consumer {
	$class(LiteralElement$$Lambda$lambda$getNamespaceScope$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* all) {
		$set(this, all, all);
	}
	virtual void accept(Object$* entry) override {
		LiteralElement::lambda$getNamespaceScope$0(all, $cast($Map$Entry, entry));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LiteralElement$$Lambda$lambda$getNamespaceScope$0>());
	}
	$Map* all = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LiteralElement$$Lambda$lambda$getNamespaceScope$0::fieldInfos[2] = {
	{"all", "Ljava/util/Map;", nullptr, $PUBLIC, $field(LiteralElement$$Lambda$lambda$getNamespaceScope$0, all)},
	{}
};
$MethodInfo LiteralElement$$Lambda$lambda$getNamespaceScope$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(LiteralElement$$Lambda$lambda$getNamespaceScope$0, init$, void, $Map*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(LiteralElement$$Lambda$lambda$getNamespaceScope$0, accept, void, Object$*)},
	{}
};
$ClassInfo LiteralElement$$Lambda$lambda$getNamespaceScope$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LiteralElement$$Lambda$lambda$getNamespaceScope$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* LiteralElement$$Lambda$lambda$getNamespaceScope$0::load$($String* name, bool initialize) {
	$loadClass(LiteralElement$$Lambda$lambda$getNamespaceScope$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LiteralElement$$Lambda$lambda$getNamespaceScope$0::class$ = nullptr;

$FieldInfo _LiteralElement_FieldInfo_[] = {
	{"_name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LiteralElement, _name)},
	{"_literalElemParent", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement;", nullptr, $PRIVATE, $field(LiteralElement, _literalElemParent)},
	{"_attributeElements", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;", $PRIVATE, $field(LiteralElement, _attributeElements)},
	{"_accessedPrefixes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(LiteralElement, _accessedPrefixes)},
	{"_allAttributesUnique", "Z", nullptr, $PRIVATE, $field(LiteralElement, _allAttributesUnique)},
	{}
};

$MethodInfo _LiteralElement_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(LiteralElement, init$, void)},
	{"accessedNamespace", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(LiteralElement, accessedNamespace, $String*, $String*)},
	{"addAttribute", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(LiteralElement, addAttribute, void, $SyntaxTreeNode*)},
	{"allAttributesUnique", "()Z", nullptr, $PUBLIC, $method(LiteralElement, allAttributesUnique, bool)},
	{"canProduceAttributeNodes", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Z)Z", nullptr, $PRIVATE, $method(LiteralElement, canProduceAttributeNodes, bool, $SyntaxTreeNode*, bool)},
	{"checkAttributesUnique", "()Z", nullptr, $PRIVATE, $method(LiteralElement, checkAttributesUnique, bool)},
	{"contextDependent", "()Z", nullptr, $PROTECTED, $virtualMethod(LiteralElement, contextDependent, bool)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(LiteralElement, display, void, int32_t)},
	{"getElemDesc", "()Lcom/sun/org/apache/xml/internal/serializer/ElemDesc;", nullptr, $PUBLIC, $method(LiteralElement, getElemDesc, $ElemDesc*)},
	{"getName", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC, $method(LiteralElement, getName, $QName*)},
	{"getNamespaceScope", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)Ljava/util/Set;", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", $PUBLIC, $method(LiteralElement, getNamespaceScope, $Set*, $SyntaxTreeNode*)},
	{"isHTMLOutput", "()Z", nullptr, $PRIVATE, $method(LiteralElement, isHTMLOutput, bool)},
	{"lambda$getNamespaceScope$0", "(Ljava/util/Map;Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LiteralElement, lambda$getNamespaceScope$0, void, $Map*, $Map$Entry*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(LiteralElement, parseContents, void, $Parser*)},
	{"registerNamespace", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;Z)V", nullptr, $PUBLIC, $method(LiteralElement, registerNamespace, void, $String*, $String*, $SymbolTable*, bool)},
	{"setFirstAttribute", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(LiteralElement, setFirstAttribute, void, $SyntaxTreeNode*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(LiteralElement, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateQName", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Ljava/lang/String;", nullptr, $PRIVATE, $method(LiteralElement, translateQName, $String*, $QName*, $SymbolTable*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(LiteralElement, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _LiteralElement_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LiteralElement",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_LiteralElement_FieldInfo_,
	_LiteralElement_MethodInfo_
};

$Object* allocate$LiteralElement($Class* clazz) {
	return $of($alloc(LiteralElement));
}

void LiteralElement::init$() {
	$Instruction::init$();
	$set(this, _literalElemParent, nullptr);
	$set(this, _attributeElements, nullptr);
	$set(this, _accessedPrefixes, nullptr);
	this->_allAttributesUnique = false;
}

$QName* LiteralElement::getName() {
	return this->_qname;
}

void LiteralElement::display(int32_t indent) {
	this->indent(indent);
	$Util::println($$str({"LiteralElement name = "_s, this->_name}));
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

$String* LiteralElement::accessedNamespace($String* prefix) {
	if (this->_literalElemParent != nullptr) {
		$var($String, result, $nc(this->_literalElemParent)->accessedNamespace(prefix));
		if (result != nullptr) {
			return result;
		}
	}
	return this->_accessedPrefixes != nullptr ? $cast($String, $nc(this->_accessedPrefixes)->get(prefix)) : ($String*)nullptr;
}

void LiteralElement::registerNamespace($String* prefix$renamed, $String* uri, $SymbolTable* stable, bool declared) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	if (this->_literalElemParent != nullptr) {
		$var($String, parentUri, $nc(this->_literalElemParent)->accessedNamespace(prefix));
		if (parentUri != nullptr && parentUri->equals(uri)) {
			return;
		}
	}
	if (this->_accessedPrefixes == nullptr) {
		$set(this, _accessedPrefixes, $new($Hashtable));
	} else if (!declared) {
		$var($String, old, $cast($String, $nc(this->_accessedPrefixes)->get(prefix)));
		if (old != nullptr) {
			if (old->equals(uri)) {
				return;
			} else {
				$assign(prefix, $nc(stable)->generateNamespacePrefix());
			}
		}
	}
	if (!$nc(prefix)->equals("xml"_s)) {
		$nc(this->_accessedPrefixes)->put(prefix, uri);
	}
}

$String* LiteralElement::translateQName($QName* qname, $SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($String, localname, $nc(qname)->getLocalPart());
	$var($String, prefix, qname->getPrefix());
	if (prefix == nullptr) {
		$init($Constants);
		$assign(prefix, $Constants::EMPTYSTRING);
	} else {
		$init($Constants);
		if ($nc(prefix)->equals($Constants::XMLNS_PREFIX)) {
			return ($Constants::XMLNS_PREFIX);
		}
	}
	$var($String, alternative, $nc(stable)->lookupPrefixAlias(prefix));
	if (alternative != nullptr) {
		stable->excludeNamespaces(prefix);
		$assign(prefix, alternative);
	}
	$var($String, uri, lookupNamespace(prefix));
	if (uri == nullptr) {
		return (localname);
	}
	registerNamespace(prefix, uri, stable, false);
	$init($Constants);
	if (prefix != $Constants::EMPTYSTRING) {
		return ($str({prefix, ":"_s, localname}));
	} else {
		return (localname);
	}
}

void LiteralElement::addAttribute($SyntaxTreeNode* attribute) {
	if (this->_attributeElements == nullptr) {
		$set(this, _attributeElements, $new($ArrayList, 2));
	}
	$nc(this->_attributeElements)->add(attribute);
}

void LiteralElement::setFirstAttribute($SyntaxTreeNode* attribute) {
	if (this->_attributeElements == nullptr) {
		$set(this, _attributeElements, $new($ArrayList, 2));
	}
	$nc(this->_attributeElements)->add(0, attribute);
}

$Type* LiteralElement::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	if (this->_attributeElements != nullptr) {
		{
			$var($Iterator, i$, $nc(this->_attributeElements)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SyntaxTreeNode, node, $cast($SyntaxTreeNode, i$->next()));
				{
					$nc(node)->typeCheck(stable);
				}
			}
		}
	}
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

$Set* LiteralElement::getNamespaceScope($SyntaxTreeNode* node$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SyntaxTreeNode, node, node$renamed);
	$var($Map, all, $new($HashMap));
	while (node != nullptr) {
		$var($Map, mapping, node->getPrefixMapping());
		if (mapping != nullptr) {
			$nc($($nc($(mapping->entrySet()))->stream()))->forEach(static_cast<$Consumer*>($$new(LiteralElement$$Lambda$lambda$getNamespaceScope$0, all)));
		}
		$assign(node, node->getParent());
	}
	return all->entrySet();
}

void LiteralElement::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($SymbolTable, stable, $nc(parser)->getSymbolTable());
	$nc(stable)->setCurrentNode(this);
	$var($SyntaxTreeNode, parent, getParent());
	if (parent != nullptr && $instanceOf(LiteralElement, parent)) {
		$set(this, _literalElemParent, $cast(LiteralElement, parent));
	}
	$set(this, _name, translateQName(this->_qname, stable));
	int32_t count = $nc(this->_attributes)->getLength();
	for (int32_t i = 0; i < count; ++i) {
		$var($QName, qname, parser->getQName($($nc(this->_attributes)->getQName(i))));
		$var($String, uri, $nc(qname)->getNamespace());
		$var($String, val, $nc(this->_attributes)->getValue(i));
		if (qname->equals($(parser->getUseAttributeSets()))) {
			if (!$Util::isValidQNames(val)) {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(val), static_cast<$SyntaxTreeNode*>(this)));
				parser->reportError($Constants::ERROR, err);
			}
			setFirstAttribute($$new($UseAttributeSets, val, parser));
		} else if (qname->equals($(parser->getExtensionElementPrefixes()))) {
			stable->excludeNamespaces(val);
		} else if (qname->equals($(parser->getExcludeResultPrefixes()))) {
			stable->excludeNamespaces(val);
		} else {
			$var($String, prefix, qname->getPrefix());
			$init($Constants);
			bool var$1 = prefix != nullptr && prefix->equals($Constants::XMLNS_PREFIX);
			bool var$0 = var$1 || prefix == nullptr && $nc($(qname->getLocalPart()))->equals($Constants::XMLNS_PREFIX);
			if (var$0 || uri != nullptr && uri->equals($Constants::XSLT_URI)) {
				continue;
			}
			$var($String, name, translateQName(qname, stable));
			$var($LiteralAttribute, attr, $new($LiteralAttribute, name, val, parser, this));
			addAttribute(attr);
			attr->setParent(this);
			attr->parseContents(parser);
		}
	}
	$var($Set, include, getNamespaceScope(this));
	{
		$var($Iterator, i$, $nc(include)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, prefix, $cast($String, $nc(entry)->getKey()));
				if (!$nc(prefix)->equals("xml"_s)) {
					$var($String, uri, lookupNamespace(prefix));
					if (uri != nullptr && !stable->isExcludedNamespace(uri)) {
						registerNamespace(prefix, uri, stable, true);
					}
				}
			}
		}
	}
	parseChildren(parser);
	for (int32_t i = 0; i < count; ++i) {
		$var($QName, qname, parser->getQName($($nc(this->_attributes)->getQName(i))));
		$var($String, val, $nc(this->_attributes)->getValue(i));
		if ($nc(qname)->equals($(parser->getExtensionElementPrefixes()))) {
			stable->unExcludeNamespaces(val);
		} else if (qname->equals($(parser->getExcludeResultPrefixes()))) {
			stable->unExcludeNamespaces(val);
		}
	}
}

bool LiteralElement::contextDependent() {
	return dependentContents();
}

void LiteralElement::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	this->_allAttributesUnique = checkAttributesUnique();
	$nc(il)->append($(methodGen->loadHandler()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_name)));
	$init($Constants);
	il->append(static_cast<$1Instruction*>($Constants::DUP2));
	il->append($(methodGen->startElement()));
	int32_t j = 0;
	while (j < elementCount()) {
		$var($SyntaxTreeNode, item, elementAt(j));
		if ($instanceOf($Variable, item)) {
			$nc(item)->translate(classGen, methodGen);
		}
		++j;
	}
	if (this->_accessedPrefixes != nullptr) {
		{
			$var($Iterator, i$, $nc($($nc(this->_accessedPrefixes)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, prefix, $cast($String, $nc(entry)->getKey()));
					$var($String, uri, $cast($String, entry->getValue()));
					il->append($(methodGen->loadHandler()));
					il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, prefix)));
					il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, uri)));
					il->append($(methodGen->namespace$()));
				}
			}
		}
	}
	if (this->_attributeElements != nullptr) {
		{
			$var($Iterator, i$, $nc(this->_attributeElements)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SyntaxTreeNode, node, $cast($SyntaxTreeNode, i$->next()));
				{
					if (!($instanceOf($XslAttribute, node))) {
						$nc(node)->translate(classGen, methodGen);
					}
				}
			}
		}
	}
	translateContents(classGen, methodGen);
	il->append($(methodGen->endElement()));
}

bool LiteralElement::isHTMLOutput() {
	return $nc($(getStylesheet()))->getOutputMethod() == $Stylesheet::HTML_OUTPUT;
}

$ElemDesc* LiteralElement::getElemDesc() {
	if (isHTMLOutput()) {
		return $ToHTMLStream::getElemDesc(this->_name);
	} else {
		return nullptr;
	}
}

bool LiteralElement::allAttributesUnique() {
	return this->_allAttributesUnique;
}

bool LiteralElement::checkAttributesUnique() {
	$useLocalCurrentObjectStackCache();
	bool hasHiddenXslAttribute = canProduceAttributeNodes(this, true);
	if (hasHiddenXslAttribute) {
		return false;
	}
	if (this->_attributeElements != nullptr) {
		int32_t numAttrs = $nc(this->_attributeElements)->size();
		$var($Map, attrsTable, nullptr);
		for (int32_t i = 0; i < numAttrs; ++i) {
			$var($SyntaxTreeNode, node, $cast($SyntaxTreeNode, $nc(this->_attributeElements)->get(i)));
			if ($instanceOf($UseAttributeSets, node)) {
				return false;
			} else if ($instanceOf($XslAttribute, node)) {
				if (attrsTable == nullptr) {
					$assign(attrsTable, $new($HashMap));
					for (int32_t k = 0; k < i; ++k) {
						$var($SyntaxTreeNode, n, $cast($SyntaxTreeNode, $nc(this->_attributeElements)->get(k)));
						if ($instanceOf($LiteralAttribute, n)) {
							$var($LiteralAttribute, literalAttr, $cast($LiteralAttribute, n));
							attrsTable->put($($nc(literalAttr)->getName()), literalAttr);
						}
					}
				}
				$var($XslAttribute, xslAttr, $cast($XslAttribute, node));
				$var($AttributeValue, attrName, $nc(xslAttr)->getName());
				if ($instanceOf($AttributeValueTemplate, attrName)) {
					return false;
				} else if ($instanceOf($SimpleAttributeValue, attrName)) {
					$var($SimpleAttributeValue, simpleAttr, $cast($SimpleAttributeValue, attrName));
					$var($String, name, $nc(simpleAttr)->toString());
					if (name != nullptr && $nc(attrsTable)->get(name) != nullptr) {
						return false;
					} else if (name != nullptr) {
						attrsTable->put(name, xslAttr);
					}
				}
			}
		}
	}
	return true;
}

bool LiteralElement::canProduceAttributeNodes($SyntaxTreeNode* node, bool ignoreXslAttribute) {
	$useLocalCurrentObjectStackCache();
	$var($List, contents, $nc(node)->getContents());
	{
		$var($Iterator, i$, $nc(contents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, i$->next()));
			{
				if ($instanceOf($Text, child)) {
					$var($Text, text, $cast($Text, child));
					if ($nc(text)->isIgnore()) {
						continue;
					} else {
						return false;
					}
				} else if ($instanceOf(LiteralElement, child) || $instanceOf($ValueOf, child) || $instanceOf($XslElement, child) || $instanceOf($Comment, child) || $instanceOf($Number, child) || $instanceOf($ProcessingInstruction, child)) {
					return false;
				} else if ($instanceOf($XslAttribute, child)) {
					if (ignoreXslAttribute) {
						continue;
					} else {
						return true;
					}
				} else if ($instanceOf($CallTemplate, child) || $instanceOf($ApplyTemplates, child) || $instanceOf($Copy, child) || $instanceOf($CopyOf, child)) {
					return true;
				} else if (($instanceOf($If, child) || $instanceOf($ForEach, child)) && canProduceAttributeNodes(child, false)) {
					return true;
				} else if ($instanceOf($Choose, child)) {
					$var($List, chooseContents, $nc(child)->getContents());
					{
						$var($Iterator, i$, $nc(chooseContents)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($SyntaxTreeNode, chooseChild, $cast($SyntaxTreeNode, i$->next()));
							{
								if ($instanceOf($When, chooseChild) || $instanceOf($Otherwise, chooseChild)) {
									if (canProduceAttributeNodes(chooseChild, false)) {
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void LiteralElement::lambda$getNamespaceScope$0($Map* all, $Map$Entry* entry) {
	$init(LiteralElement);
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $cast($String, $nc(entry)->getKey()));
	$nc(all)->putIfAbsent(var$0, $cast($String, $(entry->getValue())));
}

LiteralElement::LiteralElement() {
}

$Class* LiteralElement::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LiteralElement$$Lambda$lambda$getNamespaceScope$0::classInfo$.name)) {
			return LiteralElement$$Lambda$lambda$getNamespaceScope$0::load$(name, initialize);
		}
	}
	$loadClass(LiteralElement, name, initialize, &_LiteralElement_ClassInfo_, allocate$LiteralElement);
	return class$;
}

$Class* LiteralElement::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com