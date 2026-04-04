#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/helper/AttrCompare.h>
#include <com/sun/org/apache/xml/internal/security/c14n/helper/C14nHelper.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerBase.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/OutputStream.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedSet.h>
#include <java/util/TreeSet.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef COMPARE
#undef XML
#undef XMLNS
#undef XMLNS_URI
#undef XML_LANG_URI

using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $C14nHelper = ::com::sun::org::apache::xml::internal::security::c14n::helper::C14nHelper;
using $CanonicalizerBase = ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase;
using $NameSpaceSymbTable = ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable;
using $XmlAttrStack = ::com::sun::org::apache::xml::internal::security::c14n::implementations::XmlAttrStack;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SortedSet = ::java::util::SortedSet;
using $TreeSet = ::java::util::TreeSet;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

void Canonicalizer20010315::init$(bool includeComments) {
	Canonicalizer20010315::init$(includeComments, false);
}

void Canonicalizer20010315::init$(bool includeComments, bool c14n11) {
	$CanonicalizerBase::init$(includeComments);
	this->firstCall = true;
	$set(this, xmlattrStack, $new($XmlAttrStack, c14n11));
	this->c14n11 = c14n11;
}

void Canonicalizer20010315::engineCanonicalizeXPathNodeSet($Set* xpathNodeSet, $String* inclusiveNamespaces, $OutputStream* writer) {
	$throwNew($CanonicalizationException, "c14n.Canonicalizer.UnsupportedOperation"_s);
}

void Canonicalizer20010315::engineCanonicalizeSubTree($Node* rootNode, $String* inclusiveNamespaces, $OutputStream* writer) {
	$throwNew($CanonicalizationException, "c14n.Canonicalizer.UnsupportedOperation"_s);
}

void Canonicalizer20010315::engineCanonicalizeSubTree($Node* rootNode, $String* inclusiveNamespaces, bool propagateDefaultNamespace, $OutputStream* writer) {
	$throwNew($CanonicalizationException, "c14n.Canonicalizer.UnsupportedOperation"_s);
}

void Canonicalizer20010315::outputAttributesSubtree($Element* element, $NameSpaceSymbTable* ns, $Map* cache, $OutputStream* writer) {
	$useLocalObjectStack();
	if (!$nc(element)->hasAttributes() && !this->firstCall) {
		return;
	}
	$init($CanonicalizerBase);
	$var($SortedSet, result, $new($TreeSet, $CanonicalizerBase::COMPARE));
	if (element->hasAttributes()) {
		$var($NamedNodeMap, attrs, element->getAttributes());
		int32_t attrsLength = $nc(attrs)->getLength();
		for (int32_t i = 0; i < attrsLength; ++i) {
			$var($Attr, attribute, $cast($Attr, attrs->item(i)));
			$var($String, NUri, $nc(attribute)->getNamespaceURI());
			$var($String, NName, attribute->getLocalName());
			$var($String, NValue, attribute->getValue());
			if (!$nc($CanonicalizerBase::XMLNS_URI)->equals(NUri)) {
				result->add(attribute);
			} else {
				bool var$0 = $nc($CanonicalizerBase::XML)->equals(NName);
				if (!(var$0 && $nc($CanonicalizerBase::XML_LANG_URI)->equals(NValue))) {
					$var($Node, n, $nc(ns)->addMappingAndRender(NName, NValue, attribute));
					if (n != nullptr) {
						result->add($cast($Attr, n));
						if ($C14nHelper::namespaceIsRelative(attribute)) {
							$var($ObjectArray, exArgs, $new($ObjectArray, {
								$(element->getTagName()),
								NName,
								$(attribute->getNodeValue())
							}));
							$throwNew($CanonicalizationException, "c14n.Canonicalizer.RelativeNamespace"_s, exArgs);
						}
					}
				}
			}
		}
	}
	if (this->firstCall) {
		$nc(ns)->getUnrenderedNodes(result);
		$nc(this->xmlattrStack)->getXmlnsAttr(result);
		this->firstCall = false;
	}
	{
		$var($Iterator, i$, result->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attr, attr, $cast($Attr, i$->next()));
			{
				$var($String, var$1, $nc(attr)->getNodeName());
				outputAttrToWriter(var$1, $(attr->getNodeValue()), writer, cache);
			}
		}
	}
}

void Canonicalizer20010315::outputAttributes($Element* element, $NameSpaceSymbTable* ns, $Map* cache, $OutputStream* writer) {
	$useLocalObjectStack();
	$nc(this->xmlattrStack)->push($nc(ns)->getLevel());
	bool isRealVisible = isVisibleDO(element, ns->getLevel()) == 1;
	$init($CanonicalizerBase);
	$var($SortedSet, result, $new($TreeSet, $CanonicalizerBase::COMPARE));
	if ($nc(element)->hasAttributes()) {
		$var($NamedNodeMap, attrs, element->getAttributes());
		int32_t attrsLength = $nc(attrs)->getLength();
		for (int32_t i = 0; i < attrsLength; ++i) {
			$var($Attr, attribute, $cast($Attr, attrs->item(i)));
			$var($String, NUri, $nc(attribute)->getNamespaceURI());
			$var($String, NName, attribute->getLocalName());
			$var($String, NValue, attribute->getValue());
			if (!$nc($CanonicalizerBase::XMLNS_URI)->equals(NUri)) {
				if ($nc($CanonicalizerBase::XML_LANG_URI)->equals(NUri)) {
					if (this->c14n11 && "id"_s->equals(NName)) {
						if (isRealVisible) {
							result->add(attribute);
						}
					} else {
						this->xmlattrStack->addXmlnsAttr(attribute);
					}
				} else if (isRealVisible) {
					result->add(attribute);
				}
			} else {
				bool var$0 = !$nc($CanonicalizerBase::XML)->equals(NName);
				if (var$0 || !$nc($CanonicalizerBase::XML_LANG_URI)->equals(NValue)) {
					if (isVisible(attribute)) {
						if (isRealVisible || !ns->removeMappingIfRender(NName)) {
							$var($Node, n, ns->addMappingAndRender(NName, NValue, attribute));
							if (n != nullptr) {
								result->add($cast($Attr, n));
								if ($C14nHelper::namespaceIsRelative(attribute)) {
									$var($ObjectArray, exArgs, $new($ObjectArray, {
										$(element->getTagName()),
										NName,
										$(attribute->getNodeValue())
									}));
									$throwNew($CanonicalizationException, "c14n.Canonicalizer.RelativeNamespace"_s, exArgs);
								}
							}
						}
					} else if (isRealVisible && !$nc($CanonicalizerBase::XMLNS)->equals(NName)) {
						ns->removeMapping(NName);
					} else {
						ns->addMapping(NName, NValue, attribute);
					}
				}
			}
		}
	}
	if (isRealVisible) {
		$var($Attr, xmlns, element->getAttributeNodeNS($CanonicalizerBase::XMLNS_URI, $CanonicalizerBase::XMLNS));
		$var($Node, n, nullptr);
		if (xmlns == nullptr) {
			$assign(n, ns->getMapping($CanonicalizerBase::XMLNS));
		} else if (!isVisible(xmlns)) {
			$assign(n, ns->addMappingAndRender($CanonicalizerBase::XMLNS, ""_s, $(getNullNode($(xmlns->getOwnerDocument())))));
		}
		if (n != nullptr) {
			result->add($cast($Attr, n));
		}
		this->xmlattrStack->getXmlnsAttr(result);
		ns->getUnrenderedNodes(result);
	}
	{
		$var($Iterator, i$, result->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attr, attr, $cast($Attr, i$->next()));
			{
				$var($String, var$1, $nc(attr)->getNodeName());
				outputAttrToWriter(var$1, $(attr->getNodeValue()), writer, cache);
			}
		}
	}
}

void Canonicalizer20010315::circumventBugIfNeeded($XMLSignatureInput* input) {
	$useLocalObjectStack();
	if (!$nc(input)->isNeedsToBeExpanded()) {
		return;
	}
	$var($Document, doc, nullptr);
	if (input->getSubNode() != nullptr) {
		$assign(doc, $XMLUtils::getOwnerDocument($(input->getSubNode())));
	} else {
		$assign(doc, $XMLUtils::getOwnerDocument($(input->getNodeSet())));
	}
	$XMLUtils::circumventBug2650(doc);
}

void Canonicalizer20010315::handleParent($Element* e, $NameSpaceSymbTable* ns) {
	$useLocalObjectStack();
	bool var$0 = !$nc(e)->hasAttributes();
	if (var$0 && e->getNamespaceURI() == nullptr) {
		return;
	}
	$nc(this->xmlattrStack)->push(-1);
	$var($NamedNodeMap, attrs, e->getAttributes());
	int32_t attrsLength = $nc(attrs)->getLength();
	for (int32_t i = 0; i < attrsLength; ++i) {
		$var($Attr, attribute, $cast($Attr, attrs->item(i)));
		$var($String, NName, $nc(attribute)->getLocalName());
		$var($String, NValue, attribute->getNodeValue());
		$init($CanonicalizerBase);
		if ($nc($CanonicalizerBase::XMLNS_URI)->equals($(attribute->getNamespaceURI()))) {
			bool var$1 = !$nc($CanonicalizerBase::XML)->equals(NName);
			if (var$1 || !$nc($CanonicalizerBase::XML_LANG_URI)->equals(NValue)) {
				$nc(ns)->addMapping(NName, NValue, attribute);
			}
		} else {
			bool var$2 = $nc($CanonicalizerBase::XML_LANG_URI)->equals($(attribute->getNamespaceURI()));
			if (var$2 && (!this->c14n11 || !"id"_s->equals(NName))) {
				this->xmlattrStack->addXmlnsAttr(attribute);
			}
		}
	}
	if (e->getNamespaceURI() != nullptr) {
		$var($String, NName, e->getPrefix());
		$var($String, NValue, e->getNamespaceURI());
		$var($String, Name, nullptr);
		if (NName == nullptr || NName->isEmpty()) {
			$assign(NName, "xmlns"_s);
			$assign(Name, "xmlns"_s);
		} else {
			$assign(Name, $str({"xmlns:"_s, NName}));
		}
		$var($Attr, n, $$nc(e->getOwnerDocument())->createAttributeNS("http://www.w3.org/2000/xmlns/"_s, Name));
		$nc(n)->setValue(NValue);
		$nc(ns)->addMapping(NName, NValue, n);
	}
}

Canonicalizer20010315::Canonicalizer20010315() {
}

$Class* Canonicalizer20010315::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"firstCall", "Z", nullptr, $PRIVATE, $field(Canonicalizer20010315, firstCall)},
		{"xmlattrStack", "Lcom/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack;", nullptr, $PRIVATE | $FINAL, $field(Canonicalizer20010315, xmlattrStack)},
		{"c14n11", "Z", nullptr, $PRIVATE | $FINAL, $field(Canonicalizer20010315, c14n11)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(Canonicalizer20010315, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PUBLIC, $method(Canonicalizer20010315, init$, void, bool, bool)},
		{"circumventBugIfNeeded", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V", nullptr, $PROTECTED, $virtualMethod(Canonicalizer20010315, circumventBugIfNeeded, void, $XMLSignatureInput*), "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException"},
		{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Canonicalizer20010315, engineCanonicalizeSubTree, void, $Node*, $String*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZLjava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Canonicalizer20010315, engineCanonicalizeSubTree, void, $Node*, $String*, bool, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/lang/String;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/lang/String;Ljava/io/OutputStream;)V", $PUBLIC, $virtualMethod(Canonicalizer20010315, engineCanonicalizeXPathNodeSet, void, $Set*, $String*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"handleParent", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;)V", nullptr, $PROTECTED, $virtualMethod(Canonicalizer20010315, handleParent, void, $Element*, $NameSpaceSymbTable*)},
		{"outputAttributes", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map;Ljava/io/OutputStream;)V", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map<Ljava/lang/String;[B>;Ljava/io/OutputStream;)V", $PROTECTED, $virtualMethod(Canonicalizer20010315, outputAttributes, void, $Element*, $NameSpaceSymbTable*, $Map*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,org.w3c.dom.DOMException,java.io.IOException"},
		{"outputAttributesSubtree", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map;Ljava/io/OutputStream;)V", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map<Ljava/lang/String;[B>;Ljava/io/OutputStream;)V", $PROTECTED, $virtualMethod(Canonicalizer20010315, outputAttributesSubtree, void, $Element*, $NameSpaceSymbTable*, $Map*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,org.w3c.dom.DOMException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315",
		"com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Canonicalizer20010315, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Canonicalizer20010315);
	});
	return class$;
}

$Class* Canonicalizer20010315::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com