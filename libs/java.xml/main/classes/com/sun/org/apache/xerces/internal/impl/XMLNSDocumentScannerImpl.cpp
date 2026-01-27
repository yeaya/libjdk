#include <com/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$ElementStack.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$FragmentContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl$NSContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesIteratorImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/xml/internal/stream/dtd/DTDGrammarUtil.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef ADD_NAMESPACE_DECL_AS_ATTRIBUTE
#undef ATTRIBUTE
#undef ATTRIBUTENAME
#undef ELEMENTSTART
#undef EMPTY_STRING
#undef END_ELEMENT
#undef MAX_NAME_LIMIT
#undef PREFIX_XML
#undef PREFIX_XMLNS
#undef SCANNER_STATE_ROOT_ELEMENT
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef XMLNS_DOMAIN
#undef XMLNS_URI
#undef XML_DOMAIN
#undef XML_URI

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentFragmentScannerImpl$Driver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver;
using $XMLDocumentFragmentScannerImpl$ElementStack = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$ElementStack;
using $XMLDocumentFragmentScannerImpl$FragmentContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$FragmentContentDriver;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLDocumentScannerImpl$ContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$ContentDriver;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLNSDocumentScannerImpl$NSContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl$NSContentDriver;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $XMLDTDValidatorFilter = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLAttributesIteratorImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesIteratorImpl;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $DTDGrammarUtil = ::com::sun::xml::internal::stream::dtd::DTDGrammarUtil;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLNSDocumentScannerImpl_FieldInfo_[] = {
	{"fBindNamespaces", "Z", nullptr, $PROTECTED, $field(XMLNSDocumentScannerImpl, fBindNamespaces)},
	{"fPerformValidation", "Z", nullptr, $PROTECTED, $field(XMLNSDocumentScannerImpl, fPerformValidation)},
	{"fNotAddNSDeclAsAttribute", "Z", nullptr, $PROTECTED, $field(XMLNSDocumentScannerImpl, fNotAddNSDeclAsAttribute)},
	{"fDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter;", nullptr, $PRIVATE, $field(XMLNSDocumentScannerImpl, fDTDValidator)},
	{"fXmlnsDeclared", "Z", nullptr, $PRIVATE, $field(XMLNSDocumentScannerImpl, fXmlnsDeclared)},
	{}
};

$MethodInfo _XMLNSDocumentScannerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLNSDocumentScannerImpl, init$, void)},
	{"createContentDriver", "()Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $virtualMethod(XMLNSDocumentScannerImpl, createContentDriver, $XMLDocumentFragmentScannerImpl$Driver*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XMLNSDocumentScannerImpl, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLNSDocumentScannerImpl, reset, void, $PropertyManager*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLNSDocumentScannerImpl, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"scanAttribute", "(Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl;)V", nullptr, $PROTECTED, $virtualMethod(XMLNSDocumentScannerImpl, scanAttribute, void, $XMLAttributesImpl*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanStartElement", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLNSDocumentScannerImpl, scanStartElement, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDValidator", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter;)V", nullptr, $PUBLIC, $virtualMethod(XMLNSDocumentScannerImpl, setDTDValidator, void, $XMLDTDValidatorFilter*)},
	{}
};

$InnerClassInfo _XMLNSDocumentScannerImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl$NSContentDriver", "com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl", "NSContentDriver", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _XMLNSDocumentScannerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl",
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl",
	nullptr,
	_XMLNSDocumentScannerImpl_FieldInfo_,
	_XMLNSDocumentScannerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XMLNSDocumentScannerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl$NSContentDriver"
};

$Object* allocate$XMLNSDocumentScannerImpl($Class* clazz) {
	return $of($alloc(XMLNSDocumentScannerImpl));
}

void XMLNSDocumentScannerImpl::init$() {
	$XMLDocumentScannerImpl::init$();
	this->fNotAddNSDeclAsAttribute = false;
	this->fXmlnsDeclared = false;
}

void XMLNSDocumentScannerImpl::reset($PropertyManager* propertyManager) {
	setPropertyManager(propertyManager);
	$XMLDocumentScannerImpl::reset(propertyManager);
	this->fBindNamespaces = false;
	$init($Constants);
	this->fNotAddNSDeclAsAttribute = !$nc(($cast($Boolean, $($nc(propertyManager)->getProperty($Constants::ADD_NAMESPACE_DECL_AS_ATTRIBUTE)))))->booleanValue();
}

void XMLNSDocumentScannerImpl::reset($XMLComponentManager* componentManager) {
	$XMLDocumentScannerImpl::reset(componentManager);
	this->fNotAddNSDeclAsAttribute = false;
	this->fPerformValidation = false;
	this->fBindNamespaces = false;
}

int32_t XMLNSDocumentScannerImpl::next() {
	if ((this->fScannerLastState == $XMLEvent::END_ELEMENT) && this->fBindNamespaces) {
		this->fScannerLastState = -1;
		$nc(this->fNamespaceContext)->popContext();
	}
	return this->fScannerLastState = $XMLDocumentScannerImpl::next();
}

void XMLNSDocumentScannerImpl::setDTDValidator($XMLDTDValidatorFilter* dtd) {
	$set(this, fDTDValidator, dtd);
}

bool XMLNSDocumentScannerImpl::scanStartElement() {
	$useLocalCurrentObjectStackCache();
	if (this->fSkip && !this->fAdd) {
		$var($QName, name, $nc(this->fElementStack)->getNext());
		this->fSkip = $nc(this->fEntityScanner)->skipString($nc(name)->rawname);
		if (this->fSkip) {
			$nc(this->fElementStack)->push();
			$set(this, fElementQName, name);
		} else {
			$nc(this->fElementStack)->reposition();
		}
	}
	if (!this->fSkip || this->fAdd) {
		$set(this, fElementQName, $nc(this->fElementStack)->nextElement());
		if (this->fNamespaces) {
			$init($XMLScanner$NameType);
			$nc(this->fEntityScanner)->scanQName(this->fElementQName, $XMLScanner$NameType::ELEMENTSTART);
		} else {
			$init($XMLScanner$NameType);
			$var($String, name, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::ELEMENTSTART));
			$nc(this->fElementQName)->setValues(nullptr, name, name, nullptr);
		}
	}
	if (this->fAdd) {
		$nc(this->fElementStack)->matchElement(this->fElementQName);
	}
	$set(this, fCurrentElement, this->fElementQName);
	$var($String, rawname, $nc(this->fElementQName)->rawname);
	checkDepth(rawname);
	if (this->fBindNamespaces) {
		$nc(this->fNamespaceContext)->pushContext();
		if (this->fScannerState == $XMLDocumentFragmentScannerImpl::SCANNER_STATE_ROOT_ELEMENT) {
			if (this->fPerformValidation) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_GRAMMAR_NOT_FOUND"_s, $$new($ObjectArray, {$of(rawname)}), $XMLErrorReporter::SEVERITY_ERROR);
				if (this->fDoctypeName == nullptr || !$nc(this->fDoctypeName)->equals(rawname)) {
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "RootElementTypeMustMatchDoctypedecl"_s, $$new($ObjectArray, {
						$of(this->fDoctypeName),
						$of(rawname)
					}), $XMLErrorReporter::SEVERITY_ERROR);
				}
			}
		}
	}
	this->fEmptyElement = false;
	$nc(this->fAttributes)->removeAllAttributes();
	if (!seekCloseOfStartTag()) {
		this->fReadingAttributes = true;
		this->fAttributeCacheUsedCount = 0;
		this->fStringBufferIndex = 0;
		this->fAddDefaultAttr = true;
		this->fXmlnsDeclared = false;
		do {
			scanAttribute(static_cast<$XMLAttributesImpl*>(this->fAttributes));
			bool var$0 = this->fSecurityManager != nullptr && (!$nc(this->fSecurityManager)->isNoLimit(this->fElementAttributeLimit));
			if (var$0 && $nc(this->fAttributes)->getLength() > this->fElementAttributeLimit) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "ElementAttributeLimit"_s, $$new($ObjectArray, {
					$of(rawname),
					$($of($Integer::valueOf(this->fElementAttributeLimit)))
				}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
		} while (!seekCloseOfStartTag());
		this->fReadingAttributes = false;
	}
	if (this->fBindNamespaces) {
		$init($XMLSymbols);
		if ($nc(this->fElementQName)->prefix == $XMLSymbols::PREFIX_XMLNS) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "ElementXMLNSPrefix"_s, $$new($ObjectArray, {$of($nc(this->fElementQName)->rawname)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		}
		$var($String, prefix, $nc(this->fElementQName)->prefix != nullptr ? $nc(this->fElementQName)->prefix : $XMLSymbols::EMPTY_STRING);
		$set($nc(this->fElementQName), uri, $nc(this->fNamespaceContext)->getURI(prefix));
		$set($nc(this->fCurrentElement), uri, $nc(this->fElementQName)->uri);
		if ($nc(this->fElementQName)->prefix == nullptr && $nc(this->fElementQName)->uri != nullptr) {
			$set($nc(this->fElementQName), prefix, $XMLSymbols::EMPTY_STRING);
		}
		if ($nc(this->fElementQName)->prefix != nullptr && $nc(this->fElementQName)->uri == nullptr) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "ElementPrefixUnbound"_s, $$new($ObjectArray, {
				$of($nc(this->fElementQName)->prefix),
				$of($nc(this->fElementQName)->rawname)
			}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		}
		int32_t length = $nc(this->fAttributes)->getLength();
		for (int32_t i = 0; i < length; ++i) {
			$nc(this->fAttributes)->getName(i, this->fAttributeQName);
			$var($String, aprefix, $nc(this->fAttributeQName)->prefix != nullptr ? $nc(this->fAttributeQName)->prefix : $XMLSymbols::EMPTY_STRING);
			$var($String, uri, $nc(this->fNamespaceContext)->getURI(aprefix));
			if ($nc(this->fAttributeQName)->uri != nullptr && $nc(this->fAttributeQName)->uri == uri) {
				continue;
			}
			if (aprefix != $XMLSymbols::EMPTY_STRING) {
				$set($nc(this->fAttributeQName), uri, uri);
				if (uri == nullptr) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "AttributePrefixUnbound"_s, $$new($ObjectArray, {
						$of($nc(this->fElementQName)->rawname),
						$of($nc(this->fAttributeQName)->rawname),
						$of(aprefix)
					}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
				$nc(this->fAttributes)->setURI(i, uri);
			}
		}
		if (length > 1) {
			$var($QName, name, $nc(this->fAttributes)->checkDuplicatesNS());
			if (name != nullptr) {
				if (name->uri != nullptr) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "AttributeNSNotUnique"_s, $$new($ObjectArray, {
						$of($nc(this->fElementQName)->rawname),
						$of(name->localpart),
						$of(name->uri)
					}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				} else {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "AttributeNotUnique"_s, $$new($ObjectArray, {
						$of($nc(this->fElementQName)->rawname),
						$of(name->rawname)
					}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
			}
		}
	}
	if (this->fEmptyElement) {
		--this->fMarkupDepth;
		if (this->fMarkupDepth < $nc(this->fEntityStack)->get(this->fEntityDepth - 1)) {
			reportFatalError("ElementEntityMismatch"_s, $$new($ObjectArray, {$of($nc(this->fCurrentElement)->rawname)}));
		}
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->emptyElement(this->fElementQName, this->fAttributes, nullptr);
		}
		this->fScanEndElement = true;
		$nc(this->fElementStack)->popElement();
	} else {
		if (this->dtdGrammarUtil != nullptr) {
			$nc(this->dtdGrammarUtil)->startElement(this->fElementQName, this->fAttributes);
		}
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->startElement(this->fElementQName, this->fAttributes, nullptr);
		}
	}
	return this->fEmptyElement;
}

void XMLNSDocumentScannerImpl::scanAttribute($XMLAttributesImpl* attributes) {
	$useLocalCurrentObjectStackCache();
	$init($XMLScanner$NameType);
	$nc(this->fEntityScanner)->scanQName(this->fAttributeQName, $XMLScanner$NameType::ATTRIBUTENAME);
	$nc(this->fEntityScanner)->skipSpaces();
	if (!$nc(this->fEntityScanner)->skipChar(u'=', $XMLScanner$NameType::ATTRIBUTE)) {
		reportFatalError("EqRequiredInAttribute"_s, $$new($ObjectArray, {
			$of($nc(this->fCurrentElement)->rawname),
			$of($nc(this->fAttributeQName)->rawname)
		}));
	}
	$nc(this->fEntityScanner)->skipSpaces();
	int32_t attrIndex = 0;
	bool isVC = this->fHasExternalDTD && !this->fStandalone;
	$var($XMLString, tmpStr, getString());
	$var($String, localpart, $nc(this->fAttributeQName)->localpart);
	$init($XMLSymbols);
	$var($String, prefix, $nc(this->fAttributeQName)->prefix != nullptr ? $nc(this->fAttributeQName)->prefix : $XMLSymbols::EMPTY_STRING);
	bool isNSDecl = this->fBindNamespaces & (prefix == $XMLSymbols::PREFIX_XMLNS || prefix == $XMLSymbols::EMPTY_STRING && localpart == $XMLSymbols::PREFIX_XMLNS);
	scanAttributeValue(tmpStr, this->fTempString2, $nc(this->fAttributeQName)->rawname, attributes, attrIndex, isVC, $nc(this->fCurrentElement)->rawname, isNSDecl);
	$var($String, value, nullptr);
	if (this->fBindNamespaces) {
		if (isNSDecl) {
			if ($nc(tmpStr)->length > this->fXMLNameLimit) {
				$init($XMLMessageFormatter);
				$init($XMLSecurityManager$Limit);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MaxXMLNameLimit"_s, $$new($ObjectArray, {
					$of($$new($String, tmpStr->ch, tmpStr->offset, tmpStr->length)),
					$($of($Integer::valueOf(tmpStr->length))),
					$($of($Integer::valueOf(this->fXMLNameLimit))),
					$($of($nc(this->fSecurityManager)->getStateLiteral($XMLSecurityManager$Limit::MAX_NAME_LIMIT)))
				}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			$var($String, uri, $nc(this->fSymbolTable)->addSymbol($nc(tmpStr)->ch, tmpStr->offset, tmpStr->length));
			$assign(value, uri);
			if (prefix == $XMLSymbols::PREFIX_XMLNS && localpart == $XMLSymbols::PREFIX_XMLNS) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXMLNS"_s, $$new($ObjectArray, {$of(this->fAttributeQName)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			$init($NamespaceContext);
			if (uri == $NamespaceContext::XMLNS_URI) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXMLNS"_s, $$new($ObjectArray, {$of(this->fAttributeQName)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			if (localpart == $XMLSymbols::PREFIX_XML) {
				if (uri != $NamespaceContext::XML_URI) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXML"_s, $$new($ObjectArray, {$of(this->fAttributeQName)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
			} else {
				if (uri == $NamespaceContext::XML_URI) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXML"_s, $$new($ObjectArray, {$of(this->fAttributeQName)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
			}
			$assign(prefix, localpart != $XMLSymbols::PREFIX_XMLNS ? localpart : $XMLSymbols::EMPTY_STRING);
			if (prefix == $XMLSymbols::EMPTY_STRING && localpart == $XMLSymbols::PREFIX_XMLNS) {
				$set($nc(this->fAttributeQName), prefix, $XMLSymbols::PREFIX_XMLNS);
			}
			if (uri == $XMLSymbols::EMPTY_STRING && localpart != $XMLSymbols::PREFIX_XMLNS) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "EmptyPrefixedAttName"_s, $$new($ObjectArray, {$of(this->fAttributeQName)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			if ($nc(($cast($NamespaceSupport, this->fNamespaceContext)))->containsPrefixInCurrentContext(prefix)) {
				reportFatalError("AttributeNotUnique"_s, $$new($ObjectArray, {
					$of($nc(this->fCurrentElement)->rawname),
					$of($nc(this->fAttributeQName)->rawname)
				}));
			}
			bool declared = $nc(this->fNamespaceContext)->declarePrefix(prefix, $nc(uri)->length() != 0 ? uri : ($String*)nullptr);
			if (!declared) {
				if (this->fXmlnsDeclared) {
					reportFatalError("AttributeNotUnique"_s, $$new($ObjectArray, {
						$of($nc(this->fCurrentElement)->rawname),
						$of($nc(this->fAttributeQName)->rawname)
					}));
				}
				this->fXmlnsDeclared = true;
			}
			if (this->fNotAddNSDeclAsAttribute) {
				return;
			}
		}
	}
	if (this->fBindNamespaces) {
		attrIndex = $nc(attributes)->getLength();
		attributes->addAttributeNS(this->fAttributeQName, $XMLSymbols::fCDATASymbol, nullptr);
	} else {
		int32_t oldLen = $nc(attributes)->getLength();
		attrIndex = attributes->addAttribute(this->fAttributeQName, $XMLSymbols::fCDATASymbol, nullptr);
		if (oldLen == attributes->getLength()) {
			reportFatalError("AttributeNotUnique"_s, $$new($ObjectArray, {
				$of($nc(this->fCurrentElement)->rawname),
				$of($nc(this->fAttributeQName)->rawname)
			}));
		}
	}
	$nc(attributes)->setValue(attrIndex, value, tmpStr);
	attributes->setSpecified(attrIndex, true);
	if ($nc(this->fAttributeQName)->prefix != nullptr) {
		attributes->setURI(attrIndex, $($nc(this->fNamespaceContext)->getURI($nc(this->fAttributeQName)->prefix)));
	}
}

$XMLDocumentFragmentScannerImpl$Driver* XMLNSDocumentScannerImpl::createContentDriver() {
	return $new($XMLNSDocumentScannerImpl$NSContentDriver, this);
}

XMLNSDocumentScannerImpl::XMLNSDocumentScannerImpl() {
}

$Class* XMLNSDocumentScannerImpl::load$($String* name, bool initialize) {
	$loadClass(XMLNSDocumentScannerImpl, name, initialize, &_XMLNSDocumentScannerImpl_ClassInfo_, allocate$XMLNSDocumentScannerImpl);
	return class$;
}

$Class* XMLNSDocumentScannerImpl::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com