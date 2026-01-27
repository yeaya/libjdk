#include <com/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/XML11DocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl$NS11ContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$ElementStack.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$FragmentContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
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

#undef ATTRIBUTE
#undef ATTRIBUTENAME
#undef ELEMENTEND
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

using $XML11DocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl;
using $XML11NSDocumentScannerImpl$NS11ContentDriver = ::com::sun::org::apache::xerces::internal::impl::XML11NSDocumentScannerImpl$NS11ContentDriver;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentFragmentScannerImpl$Driver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver;
using $XMLDocumentFragmentScannerImpl$ElementStack = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$ElementStack;
using $XMLDocumentFragmentScannerImpl$FragmentContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$FragmentContentDriver;
using $XMLDocumentScannerImpl$ContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$ContentDriver;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $XMLDTDValidatorFilter = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
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

$FieldInfo _XML11NSDocumentScannerImpl_FieldInfo_[] = {
	{"fBindNamespaces", "Z", nullptr, $PROTECTED, $field(XML11NSDocumentScannerImpl, fBindNamespaces)},
	{"fPerformValidation", "Z", nullptr, $PROTECTED, $field(XML11NSDocumentScannerImpl, fPerformValidation)},
	{"fDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter;", nullptr, $PRIVATE, $field(XML11NSDocumentScannerImpl, fDTDValidator)},
	{"fSawSpace", "Z", nullptr, $PRIVATE, $field(XML11NSDocumentScannerImpl, fSawSpace)},
	{}
};

$MethodInfo _XML11NSDocumentScannerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11NSDocumentScannerImpl, init$, void)},
	{"createContentDriver", "()Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $virtualMethod(XML11NSDocumentScannerImpl, createContentDriver, $XMLDocumentFragmentScannerImpl$Driver*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XML11NSDocumentScannerImpl, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XML11NSDocumentScannerImpl, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"scanAttribute", "(Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl;)V", nullptr, $PROTECTED, $virtualMethod(XML11NSDocumentScannerImpl, scanAttribute, void, $XMLAttributesImpl*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanEndElement", "()I", nullptr, $PROTECTED, $virtualMethod(XML11NSDocumentScannerImpl, scanEndElement, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanStartElement", "()Z", nullptr, $PROTECTED, $virtualMethod(XML11NSDocumentScannerImpl, scanStartElement, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanStartElementAfterName", "()Z", nullptr, $PROTECTED, $virtualMethod(XML11NSDocumentScannerImpl, scanStartElementAfterName, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanStartElementName", "()V", nullptr, $PROTECTED, $virtualMethod(XML11NSDocumentScannerImpl, scanStartElementName, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDValidator", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter;)V", nullptr, $PUBLIC, $virtualMethod(XML11NSDocumentScannerImpl, setDTDValidator, void, $XMLDTDValidatorFilter*)},
	{}
};

$InnerClassInfo _XML11NSDocumentScannerImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl$NS11ContentDriver", "com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl", "NS11ContentDriver", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _XML11NSDocumentScannerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl",
	"com.sun.org.apache.xerces.internal.impl.XML11DocumentScannerImpl",
	nullptr,
	_XML11NSDocumentScannerImpl_FieldInfo_,
	_XML11NSDocumentScannerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XML11NSDocumentScannerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl$NS11ContentDriver"
};

$Object* allocate$XML11NSDocumentScannerImpl($Class* clazz) {
	return $of($alloc(XML11NSDocumentScannerImpl));
}

void XML11NSDocumentScannerImpl::init$() {
	$XML11DocumentScannerImpl::init$();
}

void XML11NSDocumentScannerImpl::setDTDValidator($XMLDTDValidatorFilter* validator) {
	$set(this, fDTDValidator, validator);
}

bool XML11NSDocumentScannerImpl::scanStartElement() {
	$useLocalCurrentObjectStackCache();
	$init($XMLScanner$NameType);
	$nc(this->fEntityScanner)->scanQName(this->fElementQName, $XMLScanner$NameType::ELEMENTSTART);
	$var($String, rawname, $nc(this->fElementQName)->rawname);
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
	$set(this, fCurrentElement, $nc(this->fElementStack)->pushElement(this->fElementQName));
	bool empty = false;
	$nc(this->fAttributes)->removeAllAttributes();
	do {
		bool sawSpace = $nc(this->fEntityScanner)->skipSpaces();
		int32_t c = $nc(this->fEntityScanner)->peekChar();
		if (c == u'>') {
			$nc(this->fEntityScanner)->scanChar(nullptr);
			break;
		} else if (c == u'/') {
			$nc(this->fEntityScanner)->scanChar(nullptr);
			if (!$nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
				reportFatalError("ElementUnterminated"_s, $$new($ObjectArray, {$of(rawname)}));
			}
			empty = true;
			break;
		} else if (!isValidNameStartChar(c) || !sawSpace) {
			if (!isValidNameStartHighSurrogate(c) || !sawSpace) {
				reportFatalError("ElementUnterminated"_s, $$new($ObjectArray, {$of(rawname)}));
			}
		}
		scanAttribute(static_cast<$XMLAttributesImpl*>(this->fAttributes));
		bool var$0 = this->fSecurityManager != nullptr && (!$nc(this->fSecurityManager)->isNoLimit(this->fElementAttributeLimit));
		if (var$0 && $nc(this->fAttributes)->getLength() > this->fElementAttributeLimit) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "ElementAttributeLimit"_s, $$new($ObjectArray, {
				$of(rawname),
				$($of($Integer::valueOf(this->fElementAttributeLimit)))
			}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		}
	} while (true);
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
			$set($nc(this->fCurrentElement), prefix, $XMLSymbols::EMPTY_STRING);
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
	if (empty) {
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
	return empty;
}

void XML11NSDocumentScannerImpl::scanStartElementName() {
	$init($XMLScanner$NameType);
	$nc(this->fEntityScanner)->scanQName(this->fElementQName, $XMLScanner$NameType::ELEMENTSTART);
	this->fSawSpace = $nc(this->fEntityScanner)->skipSpaces();
}

bool XML11NSDocumentScannerImpl::scanStartElementAfterName() {
	$useLocalCurrentObjectStackCache();
	$var($String, rawname, $nc(this->fElementQName)->rawname);
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
	$set(this, fCurrentElement, $nc(this->fElementStack)->pushElement(this->fElementQName));
	bool empty = false;
	$nc(this->fAttributes)->removeAllAttributes();
	do {
		int32_t c = $nc(this->fEntityScanner)->peekChar();
		if (c == u'>') {
			$nc(this->fEntityScanner)->scanChar(nullptr);
			break;
		} else if (c == u'/') {
			$nc(this->fEntityScanner)->scanChar(nullptr);
			if (!$nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
				reportFatalError("ElementUnterminated"_s, $$new($ObjectArray, {$of(rawname)}));
			}
			empty = true;
			break;
		} else if (!isValidNameStartChar(c) || !this->fSawSpace) {
			if (!isValidNameStartHighSurrogate(c) || !this->fSawSpace) {
				reportFatalError("ElementUnterminated"_s, $$new($ObjectArray, {$of(rawname)}));
			}
		}
		scanAttribute(static_cast<$XMLAttributesImpl*>(this->fAttributes));
		this->fSawSpace = $nc(this->fEntityScanner)->skipSpaces();
	} while (true);
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
			$set($nc(this->fCurrentElement), prefix, $XMLSymbols::EMPTY_STRING);
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
	if (this->fDocumentHandler != nullptr) {
		if (empty) {
			--this->fMarkupDepth;
			if (this->fMarkupDepth < $nc(this->fEntityStack)->get(this->fEntityDepth - 1)) {
				reportFatalError("ElementEntityMismatch"_s, $$new($ObjectArray, {$of($nc(this->fCurrentElement)->rawname)}));
			}
			$nc(this->fDocumentHandler)->emptyElement(this->fElementQName, this->fAttributes, nullptr);
			if (this->fBindNamespaces) {
				$nc(this->fNamespaceContext)->popContext();
			}
			$nc(this->fElementStack)->popElement();
		} else {
			$nc(this->fDocumentHandler)->startElement(this->fElementQName, this->fAttributes, nullptr);
		}
	}
	return empty;
}

void XML11NSDocumentScannerImpl::scanAttribute($XMLAttributesImpl* attributes) {
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
	if (this->fBindNamespaces) {
		attrIndex = $nc(attributes)->getLength();
		$init($XMLSymbols);
		attributes->addAttributeNS(this->fAttributeQName, $XMLSymbols::fCDATASymbol, nullptr);
	} else {
		int32_t oldLen = $nc(attributes)->getLength();
		$init($XMLSymbols);
		attrIndex = attributes->addAttribute(this->fAttributeQName, $XMLSymbols::fCDATASymbol, nullptr);
		if (oldLen == attributes->getLength()) {
			reportFatalError("AttributeNotUnique"_s, $$new($ObjectArray, {
				$of($nc(this->fCurrentElement)->rawname),
				$of($nc(this->fAttributeQName)->rawname)
			}));
		}
	}
	bool isVC = this->fHasExternalDTD && !this->fStandalone;
	$var($String, localpart, $nc(this->fAttributeQName)->localpart);
	$init($XMLSymbols);
	$var($String, prefix, $nc(this->fAttributeQName)->prefix != nullptr ? $nc(this->fAttributeQName)->prefix : $XMLSymbols::EMPTY_STRING);
	bool isNSDecl = this->fBindNamespaces & (prefix == $XMLSymbols::PREFIX_XMLNS || prefix == $XMLSymbols::EMPTY_STRING && localpart == $XMLSymbols::PREFIX_XMLNS);
	scanAttributeValue(this->fTempString, this->fTempString2, $nc(this->fAttributeQName)->rawname, isVC, $nc(this->fCurrentElement)->rawname, isNSDecl);
	$var($String, value, $nc(this->fTempString)->toString());
	$nc(attributes)->setValue(attrIndex, value);
	attributes->setNonNormalizedValue(attrIndex, $($nc(this->fTempString2)->toString()));
	attributes->setSpecified(attrIndex, true);
	if (this->fBindNamespaces) {
		if (isNSDecl) {
			if ($nc(value)->length() > this->fXMLNameLimit) {
				$init($XMLMessageFormatter);
				$init($XMLSecurityManager$Limit);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MaxXMLNameLimit"_s, $$new($ObjectArray, {
					$of(value),
					$($of($Integer::valueOf(value->length()))),
					$($of($Integer::valueOf(this->fXMLNameLimit))),
					$($of($nc(this->fSecurityManager)->getStateLiteral($XMLSecurityManager$Limit::MAX_NAME_LIMIT)))
				}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			$var($String, uri, $nc(this->fSymbolTable)->addSymbol(value));
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
			$nc(this->fNamespaceContext)->declarePrefix(prefix, $nc(uri)->length() != 0 ? uri : ($String*)nullptr);
			attributes->setURI(attrIndex, $($nc(this->fNamespaceContext)->getURI($XMLSymbols::PREFIX_XMLNS)));
		} else if ($nc(this->fAttributeQName)->prefix != nullptr) {
			attributes->setURI(attrIndex, $($nc(this->fNamespaceContext)->getURI($nc(this->fAttributeQName)->prefix)));
		}
	}
}

int32_t XML11NSDocumentScannerImpl::scanEndElement() {
	$useLocalCurrentObjectStackCache();
	$var($QName, endElementName, $nc(this->fElementStack)->popElement());
	if (!$nc(this->fEntityScanner)->skipString($nc(endElementName)->rawname)) {
		reportFatalError("ETagRequired"_s, $$new($ObjectArray, {$of($nc(endElementName)->rawname)}));
	}
	$nc(this->fEntityScanner)->skipSpaces();
	$init($XMLScanner$NameType);
	if (!$nc(this->fEntityScanner)->skipChar(u'>', $XMLScanner$NameType::ELEMENTEND)) {
		reportFatalError("ETagUnterminated"_s, $$new($ObjectArray, {$of($nc(endElementName)->rawname)}));
	}
	--this->fMarkupDepth;
	--this->fMarkupDepth;
	if (this->fMarkupDepth < $nc(this->fEntityStack)->get(this->fEntityDepth - 1)) {
		reportFatalError("ElementEntityMismatch"_s, $$new($ObjectArray, {$of($nc(endElementName)->rawname)}));
	}
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->endElement(endElementName, nullptr);
	}
	if (this->dtdGrammarUtil != nullptr) {
		$nc(this->dtdGrammarUtil)->endElement(endElementName);
	}
	return this->fMarkupDepth;
}

void XML11NSDocumentScannerImpl::reset($XMLComponentManager* componentManager) {
	$XML11DocumentScannerImpl::reset(componentManager);
	this->fPerformValidation = false;
	this->fBindNamespaces = false;
}

$XMLDocumentFragmentScannerImpl$Driver* XML11NSDocumentScannerImpl::createContentDriver() {
	return $new($XML11NSDocumentScannerImpl$NS11ContentDriver, this);
}

int32_t XML11NSDocumentScannerImpl::next() {
	if ((this->fScannerLastState == $XMLEvent::END_ELEMENT) && this->fBindNamespaces) {
		this->fScannerLastState = -1;
		$nc(this->fNamespaceContext)->popContext();
	}
	return this->fScannerLastState = $XML11DocumentScannerImpl::next();
}

XML11NSDocumentScannerImpl::XML11NSDocumentScannerImpl() {
}

$Class* XML11NSDocumentScannerImpl::load$($String* name, bool initialize) {
	$loadClass(XML11NSDocumentScannerImpl, name, initialize, &_XML11NSDocumentScannerImpl_ClassInfo_, allocate$XML11NSDocumentScannerImpl);
	return class$;
}

$Class* XML11NSDocumentScannerImpl::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com