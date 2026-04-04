#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315Excl.h>
#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/helper/AttrCompare.h>
#include <com/sun/org/apache/xml/internal/security/c14n/helper/C14nHelper.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerBase.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/params/InclusiveNamespaces.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/OutputStream.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
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
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $InclusiveNamespaces = ::com::sun::org::apache::xml::internal::security::transforms::params::InclusiveNamespaces;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
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

void Canonicalizer20010315Excl::init$(bool includeComments) {
	$CanonicalizerBase::init$(includeComments);
	$set(this, inclusiveNSSet, $Collections::emptySortedSet());
	this->propagateDefaultNamespace = false;
}

void Canonicalizer20010315Excl::engineCanonicalizeSubTree($Node* rootNode, $OutputStream* writer) {
	engineCanonicalizeSubTree(rootNode, ""_s, nullptr, writer);
}

void Canonicalizer20010315Excl::engineCanonicalizeSubTree($Node* rootNode, $String* inclusiveNamespaces, $OutputStream* writer) {
	engineCanonicalizeSubTree(rootNode, inclusiveNamespaces, nullptr, writer);
}

void Canonicalizer20010315Excl::engineCanonicalizeSubTree($Node* rootNode, $String* inclusiveNamespaces, bool propagateDefaultNamespace, $OutputStream* writer) {
	this->propagateDefaultNamespace = propagateDefaultNamespace;
	engineCanonicalizeSubTree(rootNode, inclusiveNamespaces, nullptr, writer);
}

void Canonicalizer20010315Excl::engineCanonicalizeSubTree($Node* rootNode, $String* inclusiveNamespaces, $Node* excl, $OutputStream* writer) {
	$set(this, inclusiveNSSet, $InclusiveNamespaces::prefixStr2Set(inclusiveNamespaces));
	$CanonicalizerBase::engineCanonicalizeSubTree(rootNode, excl, writer);
}

void Canonicalizer20010315Excl::engineCanonicalize($XMLSignatureInput* rootNode, $String* inclusiveNamespaces, $OutputStream* writer, bool secureValidation) {
	$set(this, inclusiveNSSet, $InclusiveNamespaces::prefixStr2Set(inclusiveNamespaces));
	$CanonicalizerBase::engineCanonicalize(rootNode, writer, secureValidation);
}

void Canonicalizer20010315Excl::engineCanonicalizeXPathNodeSet($Set* xpathNodeSet, $String* inclusiveNamespaces, $OutputStream* writer) {
	$set(this, inclusiveNSSet, $InclusiveNamespaces::prefixStr2Set(inclusiveNamespaces));
	$CanonicalizerBase::engineCanonicalizeXPathNodeSet(xpathNodeSet, writer);
}

void Canonicalizer20010315Excl::outputAttributesSubtree($Element* element, $NameSpaceSymbTable* ns, $Map* cache, $OutputStream* writer) {
	$useLocalObjectStack();
	$init($CanonicalizerBase);
	$var($SortedSet, result, $new($TreeSet, $CanonicalizerBase::COMPARE));
	$var($SortedSet, visiblyUtilized, $new($TreeSet));
	if (!$nc(this->inclusiveNSSet)->isEmpty()) {
		visiblyUtilized->addAll(this->inclusiveNSSet);
	}
	if ($nc(element)->hasAttributes()) {
		$var($NamedNodeMap, attrs, element->getAttributes());
		int32_t attrsLength = $nc(attrs)->getLength();
		for (int32_t i = 0; i < attrsLength; ++i) {
			$var($Attr, attribute, $cast($Attr, attrs->item(i)));
			$var($String, NName, $nc(attribute)->getLocalName());
			$var($String, NNodeValue, attribute->getNodeValue());
			if (!$nc($CanonicalizerBase::XMLNS_URI)->equals($(attribute->getNamespaceURI()))) {
				$var($String, prefix, attribute->getPrefix());
				bool var$0 = prefix != nullptr;
				if (var$0) {
					bool var$1 = prefix->equals($CanonicalizerBase::XML);
					var$0 = !(var$1 || prefix->equals($CanonicalizerBase::XMLNS));
				}
				if (var$0) {
					visiblyUtilized->add(prefix);
				}
				result->add(attribute);
			} else {
				bool var$4 = $nc($CanonicalizerBase::XML)->equals(NName);
				bool var$3 = !(var$4 && $nc($CanonicalizerBase::XML_LANG_URI)->equals(NNodeValue));
				bool var$2 = var$3 && $nc(ns)->addMapping(NName, NNodeValue, attribute);
				if (var$2 && $C14nHelper::namespaceIsRelative(NNodeValue)) {
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
	bool var$6 = this->propagateDefaultNamespace && $nc(ns)->getLevel() == 1;
	bool var$5 = var$6 && $nc(this->inclusiveNSSet)->contains($CanonicalizerBase::XMLNS);
	if (var$5 && ns->getMappingWithoutRendered($CanonicalizerBase::XMLNS) == nullptr) {
		ns->removeMapping($CanonicalizerBase::XMLNS);
		ns->addMapping($CanonicalizerBase::XMLNS, ""_s, $(getNullNode($(element->getOwnerDocument()))));
	}
	$var($String, prefix, nullptr);
	bool var$7 = element->getNamespaceURI() != nullptr;
	if (var$7) {
		bool var$8 = element->getPrefix() == nullptr;
		var$7 = !(var$8 || $$nc(element->getPrefix())->length() == 0);
	}
	if (var$7) {
		$assign(prefix, element->getPrefix());
	} else {
		$assign(prefix, $CanonicalizerBase::XMLNS);
	}
	visiblyUtilized->add(prefix);
	{
		$var($Iterator, i$, visiblyUtilized->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				$var($Attr, key, $nc(ns)->getMapping(s));
				if (key != nullptr) {
					result->add(key);
				}
			}
		}
	}
	{
		$var($Iterator, i$, result->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attr, attr, $cast($Attr, i$->next()));
			{
				$var($String, var$9, $nc(attr)->getNodeName());
				outputAttrToWriter(var$9, $(attr->getNodeValue()), writer, cache);
			}
		}
	}
}

void Canonicalizer20010315Excl::outputAttributes($Element* element, $NameSpaceSymbTable* ns, $Map* cache, $OutputStream* writer) {
	$useLocalObjectStack();
	$init($CanonicalizerBase);
	$var($SortedSet, result, $new($TreeSet, $CanonicalizerBase::COMPARE));
	$var($Set, visiblyUtilized, nullptr);
	bool isOutputElement = isVisibleDO(element, $nc(ns)->getLevel()) == 1;
	if (isOutputElement) {
		$assign(visiblyUtilized, $cast($AbstractSet, $new($TreeSet)));
		if (!$nc(this->inclusiveNSSet)->isEmpty()) {
			visiblyUtilized->addAll(this->inclusiveNSSet);
		}
	}
	if ($nc(element)->hasAttributes()) {
		$var($NamedNodeMap, attrs, element->getAttributes());
		int32_t attrsLength = $nc(attrs)->getLength();
		for (int32_t i = 0; i < attrsLength; ++i) {
			$var($Attr, attribute, $cast($Attr, attrs->item(i)));
			$var($String, NName, $nc(attribute)->getLocalName());
			$var($String, NNodeValue, attribute->getNodeValue());
			if (!$nc($CanonicalizerBase::XMLNS_URI)->equals($(attribute->getNamespaceURI()))) {
				if (isVisible(attribute) && isOutputElement) {
					$var($String, prefix, attribute->getPrefix());
					bool var$0 = prefix != nullptr;
					if (var$0) {
						bool var$1 = prefix->equals($CanonicalizerBase::XML);
						var$0 = !(var$1 || prefix->equals($CanonicalizerBase::XMLNS));
					}
					if (var$0) {
						$nc(visiblyUtilized)->add(prefix);
					}
					result->add(attribute);
				}
			} else {
				bool var$2 = isOutputElement && !isVisible(attribute);
				if (var$2 && !$nc($CanonicalizerBase::XMLNS)->equals(NName)) {
					ns->removeMappingIfNotRender(NName);
				} else {
					bool var$4 = !isOutputElement && isVisible(attribute);
					bool var$3 = var$4 && $nc(this->inclusiveNSSet)->contains(NName);
					if (var$3 && !ns->removeMappingIfRender(NName)) {
						$var($Node, n, ns->addMappingAndRender(NName, NNodeValue, attribute));
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
					bool var$5 = ns->addMapping(NName, NNodeValue, attribute);
					if (var$5 && $C14nHelper::namespaceIsRelative(NNodeValue)) {
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
	if (isOutputElement) {
		$var($Attr, xmlns, element->getAttributeNodeNS($CanonicalizerBase::XMLNS_URI, $CanonicalizerBase::XMLNS));
		if (xmlns != nullptr && !isVisible(xmlns)) {
			ns->addMapping($CanonicalizerBase::XMLNS, ""_s, $(getNullNode($(xmlns->getOwnerDocument()))));
		}
		$var($String, prefix, nullptr);
		bool var$6 = element->getNamespaceURI() != nullptr;
		if (var$6) {
			bool var$7 = element->getPrefix() == nullptr;
			var$6 = !(var$7 || $$nc(element->getPrefix())->length() == 0);
		}
		if (var$6) {
			$assign(prefix, element->getPrefix());
		} else {
			$assign(prefix, $CanonicalizerBase::XMLNS);
		}
		$nc(visiblyUtilized)->add(prefix);
		{
			$var($Iterator, i$, visiblyUtilized->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, s, $cast($String, i$->next()));
				{
					$var($Attr, key, ns->getMapping(s));
					if (key != nullptr) {
						result->add(key);
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, result->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attr, attr, $cast($Attr, i$->next()));
			{
				$var($String, var$8, $nc(attr)->getNodeName());
				outputAttrToWriter(var$8, $(attr->getNodeValue()), writer, cache);
			}
		}
	}
}

void Canonicalizer20010315Excl::circumventBugIfNeeded($XMLSignatureInput* input) {
	$useLocalObjectStack();
	bool var$0 = !$nc(input)->isNeedsToBeExpanded();
	if (var$0 || $nc(this->inclusiveNSSet)->isEmpty()) {
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

Canonicalizer20010315Excl::Canonicalizer20010315Excl() {
}

$Class* Canonicalizer20010315Excl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inclusiveNSSet", "Ljava/util/SortedSet;", "Ljava/util/SortedSet<Ljava/lang/String;>;", $PRIVATE, $field(Canonicalizer20010315Excl, inclusiveNSSet)},
		{"propagateDefaultNamespace", "Z", nullptr, $PRIVATE, $field(Canonicalizer20010315Excl, propagateDefaultNamespace)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(Canonicalizer20010315Excl, init$, void, bool)},
		{"circumventBugIfNeeded", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V", nullptr, $PROTECTED, $virtualMethod(Canonicalizer20010315Excl, circumventBugIfNeeded, void, $XMLSignatureInput*), "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException"},
		{"engineCanonicalize", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/lang/String;Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC, $virtualMethod(Canonicalizer20010315Excl, engineCanonicalize, void, $XMLSignatureInput*, $String*, $OutputStream*, bool), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Canonicalizer20010315Excl, engineCanonicalizeSubTree, void, $Node*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Canonicalizer20010315Excl, engineCanonicalizeSubTree, void, $Node*, $String*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZLjava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Canonicalizer20010315Excl, engineCanonicalizeSubTree, void, $Node*, $String*, bool, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Canonicalizer20010315Excl, engineCanonicalizeSubTree, void, $Node*, $String*, $Node*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/lang/String;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/lang/String;Ljava/io/OutputStream;)V", $PUBLIC, $virtualMethod(Canonicalizer20010315Excl, engineCanonicalizeXPathNodeSet, void, $Set*, $String*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"outputAttributes", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map;Ljava/io/OutputStream;)V", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map<Ljava/lang/String;[B>;Ljava/io/OutputStream;)V", $PROTECTED, $virtualMethod(Canonicalizer20010315Excl, outputAttributes, void, $Element*, $NameSpaceSymbTable*, $Map*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,org.w3c.dom.DOMException,java.io.IOException"},
		{"outputAttributesSubtree", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map;Ljava/io/OutputStream;)V", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map<Ljava/lang/String;[B>;Ljava/io/OutputStream;)V", $PROTECTED, $virtualMethod(Canonicalizer20010315Excl, outputAttributesSubtree, void, $Element*, $NameSpaceSymbTable*, $Map*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,org.w3c.dom.DOMException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315Excl",
		"com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Canonicalizer20010315Excl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Canonicalizer20010315Excl);
	});
	return class$;
}

$Class* Canonicalizer20010315Excl::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com