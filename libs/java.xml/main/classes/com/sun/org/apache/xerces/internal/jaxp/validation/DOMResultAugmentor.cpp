#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMResultAugmentor.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIAttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <javax/xml/transform/dom/DOMResult.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ATTRIBUTE_PSVI
#undef DOCUMENT_NODE
#undef ELEMENT_PSVI

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $ElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl;
using $PSVIAttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIAttrNSImpl;
using $PSVIDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIDocumentImpl;
using $PSVIElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIElementNSImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $DOMValidatorHelper = ::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMResult = ::javax::xml::transform::dom::DOMResult;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Comment = ::org::w3c::dom::Comment;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
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

$FieldInfo _DOMResultAugmentor_FieldInfo_[] = {
	{"fDOMValidatorHelper", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper;", nullptr, $PRIVATE, $field(DOMResultAugmentor, fDOMValidatorHelper)},
	{"fDocument", "Lorg/w3c/dom/Document;", nullptr, $PRIVATE, $field(DOMResultAugmentor, fDocument)},
	{"fDocumentImpl", "Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, $PRIVATE, $field(DOMResultAugmentor, fDocumentImpl)},
	{"fStorePSVI", "Z", nullptr, $PRIVATE, $field(DOMResultAugmentor, fStorePSVI)},
	{"fIgnoreChars", "Z", nullptr, $PRIVATE, $field(DOMResultAugmentor, fIgnoreChars)},
	{"fAttributeQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(DOMResultAugmentor, fAttributeQName)},
	{}
};

$MethodInfo _DOMResultAugmentor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper;)V", nullptr, $PUBLIC, $method(DOMResultAugmentor, init$, void, $DOMValidatorHelper*)},
	{"cdata", "(Lorg/w3c/dom/CDATASection;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, cdata, void, $CDATASection*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lorg/w3c/dom/Text;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, characters, void, $Text*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lorg/w3c/dom/Comment;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, comment, void, $Comment*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Lorg/w3c/dom/DocumentType;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, doctypeDecl, void, $DocumentType*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, getDocumentSource, $XMLDocumentSource*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processAttributePSVI", "(Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;)Z", nullptr, $PRIVATE, $method(DOMResultAugmentor, processAttributePSVI, bool, $AttrImpl*, $AttributePSVI*)},
	{"processingInstruction", "(Lorg/w3c/dom/ProcessingInstruction;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, processingInstruction, void, $ProcessingInstruction*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDOMResult", "(Ljavax/xml/transform/dom/DOMResult;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, setDOMResult, void, $DOMResult*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, setDocumentSource, void, $XMLDocumentSource*)},
	{"setIgnoringCharacters", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, setIgnoringCharacters, void, bool)},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMResultAugmentor, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _DOMResultAugmentor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.DOMResultAugmentor",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.jaxp.validation.DOMDocumentHandler",
	_DOMResultAugmentor_FieldInfo_,
	_DOMResultAugmentor_MethodInfo_
};

$Object* allocate$DOMResultAugmentor($Class* clazz) {
	return $of($alloc(DOMResultAugmentor));
}

void DOMResultAugmentor::init$($DOMValidatorHelper* helper) {
	$set(this, fAttributeQName, $new($QName));
	$set(this, fDOMValidatorHelper, helper);
}

void DOMResultAugmentor::setDOMResult($DOMResult* result) {
	this->fIgnoreChars = false;
	if (result != nullptr) {
		$var($Node, target, result->getNode());
		$set(this, fDocument, ($nc(target)->getNodeType() == $Node::DOCUMENT_NODE) ? $cast($Document, target) : $nc(target)->getOwnerDocument());
		$set(this, fDocumentImpl, ($instanceOf($CoreDocumentImpl, this->fDocument)) ? $cast($CoreDocumentImpl, this->fDocument) : ($CoreDocumentImpl*)nullptr);
		this->fStorePSVI = ($instanceOf($PSVIDocumentImpl, this->fDocument));
		return;
	}
	$set(this, fDocument, nullptr);
	$set(this, fDocumentImpl, nullptr);
	this->fStorePSVI = false;
}

void DOMResultAugmentor::doctypeDecl($DocumentType* node) {
}

void DOMResultAugmentor::characters($Text* node) {
}

void DOMResultAugmentor::cdata($CDATASection* node) {
}

void DOMResultAugmentor::comment($Comment* node) {
}

void DOMResultAugmentor::processingInstruction($ProcessingInstruction* node) {
}

void DOMResultAugmentor::setIgnoringCharacters(bool ignore) {
	this->fIgnoreChars = ignore;
}

void DOMResultAugmentor::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
}

void DOMResultAugmentor::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
}

void DOMResultAugmentor::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
}

void DOMResultAugmentor::comment($XMLString* text, $Augmentations* augs) {
}

void DOMResultAugmentor::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
}

void DOMResultAugmentor::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($Element, currentElement, $cast($Element, $nc(this->fDOMValidatorHelper)->getCurrentElement()));
	$var($NamedNodeMap, attrMap, $nc(currentElement)->getAttributes());
	int32_t oldLength = $nc(attrMap)->getLength();
	if (this->fDocumentImpl != nullptr) {
		$var($AttrImpl, attr, nullptr);
		for (int32_t i = 0; i < oldLength; ++i) {
			$assign(attr, $cast($AttrImpl, attrMap->item(i)));
			$init($Constants);
			$var($AttributePSVI, attrPSVI, $cast($AttributePSVI, $nc($($nc(attributes)->getAugmentations(i)))->getItem($Constants::ATTRIBUTE_PSVI)));
			if (attrPSVI != nullptr) {
				if (processAttributePSVI(attr, attrPSVI)) {
					$nc(($cast($ElementImpl, currentElement)))->setIdAttributeNode(attr, true);
				}
			}
		}
	}
	int32_t newLength = $nc(attributes)->getLength();
	if (newLength > oldLength) {
		if (this->fDocumentImpl == nullptr) {
			for (int32_t i = oldLength; i < newLength; ++i) {
				attributes->getName(i, this->fAttributeQName);
				currentElement->setAttributeNS($nc(this->fAttributeQName)->uri, $nc(this->fAttributeQName)->rawname, $(attributes->getValue(i)));
			}
		} else {
			for (int32_t i = oldLength; i < newLength; ++i) {
				attributes->getName(i, this->fAttributeQName);
				$var($AttrImpl, attr, $cast($AttrImpl, $nc(this->fDocumentImpl)->createAttributeNS($nc(this->fAttributeQName)->uri, $nc(this->fAttributeQName)->rawname, $nc(this->fAttributeQName)->localpart)));
				$nc(attr)->setValue($(attributes->getValue(i)));
				$init($Constants);
				$var($AttributePSVI, attrPSVI, $cast($AttributePSVI, $nc($(attributes->getAugmentations(i)))->getItem($Constants::ATTRIBUTE_PSVI)));
				if (attrPSVI != nullptr) {
					if (processAttributePSVI(attr, attrPSVI)) {
						$nc(($cast($ElementImpl, currentElement)))->setIdAttributeNode(attr, true);
					}
				}
				attr->setSpecified(false);
				currentElement->setAttributeNode(attr);
			}
		}
	}
}

void DOMResultAugmentor::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	startElement(element, attributes, augs);
	endElement(element, augs);
}

void DOMResultAugmentor::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
}

void DOMResultAugmentor::textDecl($String* version, $String* encoding, $Augmentations* augs) {
}

void DOMResultAugmentor::endGeneralEntity($String* name, $Augmentations* augs) {
}

void DOMResultAugmentor::characters($XMLString* text, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fIgnoreChars) {
		$var($Element, currentElement, $cast($Element, $nc(this->fDOMValidatorHelper)->getCurrentElement()));
		$nc(currentElement)->appendChild($($nc(this->fDocument)->createTextNode($($nc(text)->toString()))));
	}
}

void DOMResultAugmentor::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	characters(text, augs);
}

void DOMResultAugmentor::endElement($QName* element, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($Node, currentElement, $nc(this->fDOMValidatorHelper)->getCurrentElement());
	if (augs != nullptr && this->fDocumentImpl != nullptr) {
		$init($Constants);
		$var($ElementPSVI, elementPSVI, $cast($ElementPSVI, augs->getItem($Constants::ELEMENT_PSVI)));
		if (elementPSVI != nullptr) {
			if (this->fStorePSVI) {
				$nc(($cast($PSVIElementNSImpl, currentElement)))->setPSVI(elementPSVI);
			}
			$var($XSTypeDefinition, type, elementPSVI->getMemberTypeDefinition());
			if (type == nullptr) {
				$assign(type, elementPSVI->getTypeDefinition());
			}
			$nc(($cast($ElementNSImpl, currentElement)))->setType(type);
		}
	}
}

void DOMResultAugmentor::startCDATA($Augmentations* augs) {
}

void DOMResultAugmentor::endCDATA($Augmentations* augs) {
}

void DOMResultAugmentor::endDocument($Augmentations* augs) {
}

void DOMResultAugmentor::setDocumentSource($XMLDocumentSource* source) {
}

$XMLDocumentSource* DOMResultAugmentor::getDocumentSource() {
	return nullptr;
}

bool DOMResultAugmentor::processAttributePSVI($AttrImpl* attr, $AttributePSVI* attrPSVI) {
	if (this->fStorePSVI) {
		$nc(($cast($PSVIAttrNSImpl, attr)))->setPSVI(attrPSVI);
	}
	$var($Object, type, $nc(attrPSVI)->getMemberTypeDefinition());
	if (type == nullptr) {
		$assign(type, attrPSVI->getTypeDefinition());
		if (type != nullptr) {
			$nc(attr)->setType(type);
			return $nc(($cast($XSSimpleType, type)))->isIDType();
		}
	} else {
		$nc(attr)->setType(type);
		return $nc(($cast($XSSimpleType, type)))->isIDType();
	}
	return false;
}

DOMResultAugmentor::DOMResultAugmentor() {
}

$Class* DOMResultAugmentor::load$($String* name, bool initialize) {
	$loadClass(DOMResultAugmentor, name, initialize, &_DOMResultAugmentor_ClassInfo_, allocate$DOMResultAugmentor);
	return class$;
}

$Class* DOMResultAugmentor::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com