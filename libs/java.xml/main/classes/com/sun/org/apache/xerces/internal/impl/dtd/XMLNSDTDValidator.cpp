#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLNSDTDValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <jcpp.h>

#undef EMPTY_STRING
#undef PREFIX_XML
#undef PREFIX_XMLNS
#undef SEVERITY_FATAL_ERROR
#undef XMLNS_DOMAIN
#undef XMLNS_URI
#undef XML_URI

using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _XMLNSDTDValidator_FieldInfo_[] = {
	{"fAttributeQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(XMLNSDTDValidator, fAttributeQName)},
	{}
};

$MethodInfo _XMLNSDTDValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLNSDTDValidator, init$, void)},
	{"endNamespaceScope", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;Z)V", nullptr, $PROTECTED, $virtualMethod(XMLNSDTDValidator, endNamespaceScope, void, $QName*, $Augmentations*, bool), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startNamespaceScope", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PROTECTED | $FINAL, $virtualMethod(XMLNSDTDValidator, startNamespaceScope, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLNSDTDValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLNSDTDValidator",
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidator",
	nullptr,
	_XMLNSDTDValidator_FieldInfo_,
	_XMLNSDTDValidator_MethodInfo_
};

$Object* allocate$XMLNSDTDValidator($Class* clazz) {
	return $of($alloc(XMLNSDTDValidator));
}

void XMLNSDTDValidator::init$() {
	$XMLDTDValidator::init$();
	$set(this, fAttributeQName, $new($QName));
}

void XMLNSDTDValidator::startNamespaceScope($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fNamespaceContext)->pushContext();
	$init($XMLSymbols);
	if ($nc(element)->prefix == $XMLSymbols::PREFIX_XMLNS) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "ElementXMLNSPrefix"_s, $$new($ObjectArray, {$of(element->rawname)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
	}
	int32_t length = $nc(attributes)->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($String, localpart, attributes->getLocalName(i));
		$var($String, prefix, attributes->getPrefix(i));
		if (prefix == $XMLSymbols::PREFIX_XMLNS || prefix == $XMLSymbols::EMPTY_STRING && localpart == $XMLSymbols::PREFIX_XMLNS) {
			$var($String, uri, $nc(this->fSymbolTable)->addSymbol($(attributes->getValue(i))));
			if (prefix == $XMLSymbols::PREFIX_XMLNS && localpart == $XMLSymbols::PREFIX_XMLNS) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXMLNS"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			if (uri == $NamespaceContext::XMLNS_URI) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXMLNS"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			if (localpart == $XMLSymbols::PREFIX_XML) {
				if (uri != $NamespaceContext::XML_URI) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXML"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
			} else {
				if (uri == $NamespaceContext::XML_URI) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXML"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
			}
			$assign(prefix, localpart != $XMLSymbols::PREFIX_XMLNS ? localpart : $XMLSymbols::EMPTY_STRING);
			if (uri == $XMLSymbols::EMPTY_STRING && localpart != $XMLSymbols::PREFIX_XMLNS) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "EmptyPrefixedAttName"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				continue;
			}
			$nc(this->fNamespaceContext)->declarePrefix(prefix, $nc(uri)->length() != 0 ? uri : ($String*)nullptr);
		}
	}
	$var($String, prefix, $nc(element)->prefix != nullptr ? $nc(element)->prefix : $XMLSymbols::EMPTY_STRING);
	$set(element, uri, $nc(this->fNamespaceContext)->getURI(prefix));
	if (element->prefix == nullptr && element->uri != nullptr) {
		$set(element, prefix, $XMLSymbols::EMPTY_STRING);
	}
	if (element->prefix != nullptr && element->uri == nullptr) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "ElementPrefixUnbound"_s, $$new($ObjectArray, {
			$of(element->prefix),
			$of(element->rawname)
		}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
	}
	for (int32_t i = 0; i < length; ++i) {
		attributes->getName(i, this->fAttributeQName);
		$var($String, aprefix, $nc(this->fAttributeQName)->prefix != nullptr ? $nc(this->fAttributeQName)->prefix : $XMLSymbols::EMPTY_STRING);
		$var($String, arawname, $nc(this->fAttributeQName)->rawname);
		if (arawname == $XMLSymbols::PREFIX_XMLNS) {
			$set($nc(this->fAttributeQName), uri, $nc(this->fNamespaceContext)->getURI($XMLSymbols::PREFIX_XMLNS));
			attributes->setName(i, this->fAttributeQName);
		} else {
			if (aprefix != $XMLSymbols::EMPTY_STRING) {
				$set($nc(this->fAttributeQName), uri, $nc(this->fNamespaceContext)->getURI(aprefix));
				if ($nc(this->fAttributeQName)->uri == nullptr) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "AttributePrefixUnbound"_s, $$new($ObjectArray, {
						$of(element->rawname),
						$of(arawname),
						$of(aprefix)
					}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
				attributes->setName(i, this->fAttributeQName);
			}
		}
	}
	int32_t attrCount = attributes->getLength();
	for (int32_t i = 0; i < attrCount - 1; ++i) {
		$var($String, auri, attributes->getURI(i));
		if (auri == nullptr || auri == $NamespaceContext::XMLNS_URI) {
			continue;
		}
		$var($String, alocalpart, attributes->getLocalName(i));
		for (int32_t j = i + 1; j < attrCount; ++j) {
			$var($String, blocalpart, attributes->getLocalName(j));
			$var($String, buri, attributes->getURI(j));
			if (alocalpart == blocalpart && auri == buri) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "AttributeNSNotUnique"_s, $$new($ObjectArray, {
					$of(element->rawname),
					$of(alocalpart),
					$of(auri)
				}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
		}
	}
}

void XMLNSDTDValidator::endNamespaceScope($QName* element, $Augmentations* augs, bool isEmpty) {
	$init($XMLSymbols);
	$var($String, eprefix, $nc(element)->prefix != nullptr ? $nc(element)->prefix : $XMLSymbols::EMPTY_STRING);
	$set(element, uri, $nc(this->fNamespaceContext)->getURI(eprefix));
	if (element->uri != nullptr) {
		$set(element, prefix, eprefix);
	}
	if (this->fDocumentHandler != nullptr) {
		if (!isEmpty) {
			$nc(this->fDocumentHandler)->endElement(element, augs);
		}
	}
	$nc(this->fNamespaceContext)->popContext();
}

XMLNSDTDValidator::XMLNSDTDValidator() {
}

$Class* XMLNSDTDValidator::load$($String* name, bool initialize) {
	$loadClass(XMLNSDTDValidator, name, initialize, &_XMLNSDTDValidator_ClassInfo_, allocate$XMLNSDTDValidator);
	return class$;
}

$Class* XMLNSDTDValidator::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com