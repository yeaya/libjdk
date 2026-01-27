#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMResultBuilder.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentTypeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NotationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIAttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/transform/dom/DOMResult.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Entity.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Notation.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef ATTRIBUTE_PSVI
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DOM_DOMAIN
#undef ELEMENT_NODE
#undef ELEMENT_PSVI
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DocumentTypeImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentTypeImpl;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $ElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl;
using $EntityImpl = ::com::sun::org::apache::xerces::internal::dom::EntityImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $NotationImpl = ::com::sun::org::apache::xerces::internal::dom::NotationImpl;
using $PSVIAttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIAttrNSImpl;
using $PSVIDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIDocumentImpl;
using $PSVIElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIElementNSImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $DOMResult = ::javax::xml::transform::dom::DOMResult;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Comment = ::org::w3c::dom::Comment;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Entity = ::org::w3c::dom::Entity;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $Notation = ::org::w3c::dom::Notation;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _DOMResultBuilder_FieldInfo_[] = {
	{"kidOK", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMResultBuilder, kidOK)},
	{"fDocument", "Lorg/w3c/dom/Document;", nullptr, $PRIVATE, $field(DOMResultBuilder, fDocument)},
	{"fDocumentImpl", "Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, $PRIVATE, $field(DOMResultBuilder, fDocumentImpl)},
	{"fStorePSVI", "Z", nullptr, $PRIVATE, $field(DOMResultBuilder, fStorePSVI)},
	{"fTarget", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMResultBuilder, fTarget)},
	{"fNextSibling", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMResultBuilder, fNextSibling)},
	{"fCurrentNode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMResultBuilder, fCurrentNode)},
	{"fFragmentRoot", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMResultBuilder, fFragmentRoot)},
	{"fTargetChildren", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Node;>;", $PRIVATE | $FINAL, $field(DOMResultBuilder, fTargetChildren)},
	{"fIgnoreChars", "Z", nullptr, $PRIVATE, $field(DOMResultBuilder, fIgnoreChars)},
	{"fAttributeQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(DOMResultBuilder, fAttributeQName)},
	{}
};

$MethodInfo _DOMResultBuilder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMResultBuilder, init$, void)},
	{"append", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(DOMResultBuilder, append, void, $Node*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"cdata", "(Lorg/w3c/dom/CDATASection;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, cdata, void, $CDATASection*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lorg/w3c/dom/Text;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, characters, void, $Text*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lorg/w3c/dom/Comment;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, comment, void, $Comment*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Lorg/w3c/dom/DocumentType;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, doctypeDecl, void, $DocumentType*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, getDocumentSource, $XMLDocumentSource*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Lorg/w3c/dom/ProcessingInstruction;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, processingInstruction, void, $ProcessingInstruction*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDOMResult", "(Ljavax/xml/transform/dom/DOMResult;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, setDOMResult, void, $DOMResult*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, setDocumentSource, void, $XMLDocumentSource*)},
	{"setIgnoringCharacters", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, setIgnoringCharacters, void, bool)},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultBuilder, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _DOMResultBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.DOMResultBuilder",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.jaxp.validation.DOMDocumentHandler",
	_DOMResultBuilder_FieldInfo_,
	_DOMResultBuilder_MethodInfo_
};

$Object* allocate$DOMResultBuilder($Class* clazz) {
	return $of($alloc(DOMResultBuilder));
}

$ints* DOMResultBuilder::kidOK = nullptr;

void DOMResultBuilder::init$() {
	$set(this, fTargetChildren, $new($ArrayList));
	$set(this, fAttributeQName, $new($QName));
}

void DOMResultBuilder::setDOMResult($DOMResult* result) {
	$set(this, fCurrentNode, nullptr);
	$set(this, fFragmentRoot, nullptr);
	this->fIgnoreChars = false;
	$nc(this->fTargetChildren)->clear();
	if (result != nullptr) {
		$set(this, fTarget, result->getNode());
		$set(this, fNextSibling, result->getNextSibling());
		$set(this, fDocument, ($nc(this->fTarget)->getNodeType() == $Node::DOCUMENT_NODE) ? $cast($Document, this->fTarget) : $nc(this->fTarget)->getOwnerDocument());
		$set(this, fDocumentImpl, ($instanceOf($CoreDocumentImpl, this->fDocument)) ? $cast($CoreDocumentImpl, this->fDocument) : ($CoreDocumentImpl*)nullptr);
		this->fStorePSVI = ($instanceOf($PSVIDocumentImpl, this->fDocument));
		return;
	}
	$set(this, fTarget, nullptr);
	$set(this, fNextSibling, nullptr);
	$set(this, fDocument, nullptr);
	$set(this, fDocumentImpl, nullptr);
	this->fStorePSVI = false;
}

void DOMResultBuilder::doctypeDecl($DocumentType* node) {
	$useLocalCurrentObjectStackCache();
	if (this->fDocumentImpl != nullptr) {
		$var($String, var$0, $nc(node)->getName());
		$var($String, var$1, node->getPublicId());
		$var($DocumentType, docType, $nc(this->fDocumentImpl)->createDocumentType(var$0, var$1, $(node->getSystemId())));
		$var($String, internalSubset, $nc(node)->getInternalSubset());
		if (internalSubset != nullptr) {
			$nc(($cast($DocumentTypeImpl, docType)))->setInternalSubset(internalSubset);
		}
		$var($NamedNodeMap, oldMap, node->getEntities());
		$var($NamedNodeMap, newMap, $nc(docType)->getEntities());
		int32_t length = $nc(oldMap)->getLength();
		for (int32_t i = 0; i < length; ++i) {
			$var($Entity, oldEntity, $cast($Entity, oldMap->item(i)));
			$var($EntityImpl, newEntity, $cast($EntityImpl, $nc(this->fDocumentImpl)->createEntity($($nc(oldEntity)->getNodeName()))));
			$nc(newEntity)->setPublicId($($nc(oldEntity)->getPublicId()));
			newEntity->setSystemId($($nc(oldEntity)->getSystemId()));
			newEntity->setNotationName($($nc(oldEntity)->getNotationName()));
			$nc(newMap)->setNamedItem(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(newEntity)))));
		}
		$assign(oldMap, node->getNotations());
		$assign(newMap, docType->getNotations());
		length = oldMap->getLength();
		for (int32_t i = 0; i < length; ++i) {
			$var($Notation, oldNotation, $cast($Notation, oldMap->item(i)));
			$var($NotationImpl, newNotation, $cast($NotationImpl, $nc(this->fDocumentImpl)->createNotation($($nc(oldNotation)->getNodeName()))));
			$nc(newNotation)->setPublicId($($nc(oldNotation)->getPublicId()));
			newNotation->setSystemId($($nc(oldNotation)->getSystemId()));
			$nc(newMap)->setNamedItem(static_cast<$Node*>(static_cast<$NodeImpl*>(newNotation)));
		}
		append(docType);
	}
}

void DOMResultBuilder::characters($Text* node) {
	$useLocalCurrentObjectStackCache();
	append($($nc(this->fDocument)->createTextNode($($nc(node)->getNodeValue()))));
}

void DOMResultBuilder::cdata($CDATASection* node) {
	$useLocalCurrentObjectStackCache();
	append($($nc(this->fDocument)->createCDATASection($($nc(node)->getNodeValue()))));
}

void DOMResultBuilder::comment($Comment* node) {
	$useLocalCurrentObjectStackCache();
	append($($nc(this->fDocument)->createComment($($nc(node)->getNodeValue()))));
}

void DOMResultBuilder::processingInstruction($ProcessingInstruction* node) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(node)->getTarget());
	append($($nc(this->fDocument)->createProcessingInstruction(var$0, $(node->getData()))));
}

void DOMResultBuilder::setIgnoringCharacters(bool ignore) {
	this->fIgnoreChars = ignore;
}

void DOMResultBuilder::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
}

void DOMResultBuilder::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
}

void DOMResultBuilder::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
}

void DOMResultBuilder::comment($XMLString* text, $Augmentations* augs) {
}

void DOMResultBuilder::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
}

void DOMResultBuilder::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, nullptr);
	int32_t attrCount = $nc(attributes)->getLength();
	if (this->fDocumentImpl == nullptr) {
		$assign(elem, $nc(this->fDocument)->createElementNS($nc(element)->uri, element->rawname));
		for (int32_t i = 0; i < attrCount; ++i) {
			attributes->getName(i, this->fAttributeQName);
			$nc(elem)->setAttributeNS($nc(this->fAttributeQName)->uri, $nc(this->fAttributeQName)->rawname, $(attributes->getValue(i)));
		}
	} else {
		$assign(elem, $nc(this->fDocumentImpl)->createElementNS($nc(element)->uri, element->rawname, element->localpart));
		for (int32_t i = 0; i < attrCount; ++i) {
			attributes->getName(i, this->fAttributeQName);
			$var($AttrImpl, attr, $cast($AttrImpl, $nc(this->fDocumentImpl)->createAttributeNS($nc(this->fAttributeQName)->uri, $nc(this->fAttributeQName)->rawname, $nc(this->fAttributeQName)->localpart)));
			$nc(attr)->setValue($(attributes->getValue(i)));
			$init($Constants);
			$var($AttributePSVI, attrPSVI, $cast($AttributePSVI, $nc($(attributes->getAugmentations(i)))->getItem($Constants::ATTRIBUTE_PSVI)));
			if (attrPSVI != nullptr) {
				if (this->fStorePSVI) {
					$nc(($cast($PSVIAttrNSImpl, attr)))->setPSVI(attrPSVI);
				}
				$var($Object, type, attrPSVI->getMemberTypeDefinition());
				if (type == nullptr) {
					$assign(type, attrPSVI->getTypeDefinition());
					if (type != nullptr) {
						attr->setType(type);
						if ($nc(($cast($XSSimpleType, type)))->isIDType()) {
							$nc(($cast($ElementImpl, elem)))->setIdAttributeNode(attr, true);
						}
					}
				} else {
					attr->setType(type);
					if ($nc(($cast($XSSimpleType, type)))->isIDType()) {
						$nc(($cast($ElementImpl, elem)))->setIdAttributeNode(attr, true);
					}
				}
			}
			attr->setSpecified(attributes->isSpecified(i));
			$nc(elem)->setAttributeNode(attr);
		}
	}
	append(elem);
	$set(this, fCurrentNode, elem);
	if (this->fFragmentRoot == nullptr) {
		$set(this, fFragmentRoot, elem);
	}
}

void DOMResultBuilder::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	startElement(element, attributes, augs);
	endElement(element, augs);
}

void DOMResultBuilder::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
}

void DOMResultBuilder::textDecl($String* version, $String* encoding, $Augmentations* augs) {
}

void DOMResultBuilder::endGeneralEntity($String* name, $Augmentations* augs) {
}

void DOMResultBuilder::characters($XMLString* text, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fIgnoreChars) {
		append($($nc(this->fDocument)->createTextNode($($nc(text)->toString()))));
	}
}

void DOMResultBuilder::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	characters(text, augs);
}

void DOMResultBuilder::endElement($QName* element, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (augs != nullptr && this->fDocumentImpl != nullptr) {
		$init($Constants);
		$var($ElementPSVI, elementPSVI, $cast($ElementPSVI, augs->getItem($Constants::ELEMENT_PSVI)));
		if (elementPSVI != nullptr) {
			if (this->fStorePSVI) {
				$nc(($cast($PSVIElementNSImpl, this->fCurrentNode)))->setPSVI(elementPSVI);
			}
			$var($XSTypeDefinition, type, elementPSVI->getMemberTypeDefinition());
			if (type == nullptr) {
				$assign(type, elementPSVI->getTypeDefinition());
			}
			$nc(($cast($ElementNSImpl, this->fCurrentNode)))->setType(type);
		}
	}
	if (this->fCurrentNode == this->fFragmentRoot) {
		$set(this, fCurrentNode, nullptr);
		$set(this, fFragmentRoot, nullptr);
		return;
	}
	$set(this, fCurrentNode, $nc(this->fCurrentNode)->getParentNode());
}

void DOMResultBuilder::startCDATA($Augmentations* augs) {
}

void DOMResultBuilder::endCDATA($Augmentations* augs) {
}

void DOMResultBuilder::endDocument($Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fNextSibling == nullptr) {
		{
			$var($Iterator, i$, $nc(this->fTargetChildren)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Node, node, $cast($Node, i$->next()));
				{
					$nc(this->fTarget)->appendChild(node);
				}
			}
		}
	} else {
		{
			$var($Iterator, i$, $nc(this->fTargetChildren)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Node, node, $cast($Node, i$->next()));
				{
					$nc(this->fTarget)->insertBefore(node, this->fNextSibling);
				}
			}
		}
	}
}

void DOMResultBuilder::setDocumentSource($XMLDocumentSource* source) {
}

$XMLDocumentSource* DOMResultBuilder::getDocumentSource() {
	return nullptr;
}

void DOMResultBuilder::append($Node* node) {
	if (this->fCurrentNode != nullptr) {
		$nc(this->fCurrentNode)->appendChild(node);
	} else {
		int32_t var$0 = $nc(DOMResultBuilder::kidOK)->get($nc(this->fTarget)->getNodeType());
		if (((int32_t)(var$0 & (uint32_t)($sl(1, $nc(node)->getNodeType())))) == 0) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr));
			$throwNew($XNIException, msg);
		}
		$nc(this->fTargetChildren)->add(node);
	}
}

void clinit$DOMResultBuilder($Class* class$) {
	{
		$assignStatic(DOMResultBuilder::kidOK, $new($ints, 13));
		$nc(DOMResultBuilder::kidOK)->set($Node::DOCUMENT_NODE, (($sl(1, $Node::ELEMENT_NODE) | $sl(1, $Node::PROCESSING_INSTRUCTION_NODE)) | $sl(1, $Node::COMMENT_NODE)) | $sl(1, $Node::DOCUMENT_TYPE_NODE));
		$nc(DOMResultBuilder::kidOK)->set($Node::DOCUMENT_FRAGMENT_NODE, $nc(DOMResultBuilder::kidOK)->set($Node::ENTITY_NODE, $nc(DOMResultBuilder::kidOK)->set($Node::ENTITY_REFERENCE_NODE, $nc(DOMResultBuilder::kidOK)->set($Node::ELEMENT_NODE, (((($sl(1, $Node::ELEMENT_NODE) | $sl(1, $Node::PROCESSING_INSTRUCTION_NODE)) | $sl(1, $Node::COMMENT_NODE)) | $sl(1, $Node::TEXT_NODE)) | $sl(1, $Node::CDATA_SECTION_NODE)) | $sl(1, $Node::ENTITY_REFERENCE_NODE)))));
		$nc(DOMResultBuilder::kidOK)->set($Node::ATTRIBUTE_NODE, $sl(1, $Node::TEXT_NODE) | $sl(1, $Node::ENTITY_REFERENCE_NODE));
		$nc(DOMResultBuilder::kidOK)->set($Node::DOCUMENT_TYPE_NODE, 0);
		$nc(DOMResultBuilder::kidOK)->set($Node::PROCESSING_INSTRUCTION_NODE, 0);
		$nc(DOMResultBuilder::kidOK)->set($Node::COMMENT_NODE, 0);
		$nc(DOMResultBuilder::kidOK)->set($Node::TEXT_NODE, 0);
		$nc(DOMResultBuilder::kidOK)->set($Node::CDATA_SECTION_NODE, 0);
		$nc(DOMResultBuilder::kidOK)->set($Node::NOTATION_NODE, 0);
	}
}

DOMResultBuilder::DOMResultBuilder() {
}

$Class* DOMResultBuilder::load$($String* name, bool initialize) {
	$loadClass(DOMResultBuilder, name, initialize, &_DOMResultBuilder_ClassInfo_, clinit$DOMResultBuilder, allocate$DOMResultBuilder);
	return class$;
}

$Class* DOMResultBuilder::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com