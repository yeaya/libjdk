#include <com/sun/org/apache/xerces/internal/impl/XML11DocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef REFERENCE
#undef SEVERITY_ERROR
#undef XML_DOMAIN

using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

void XML11DocumentScannerImpl::init$() {
	$XMLDocumentScannerImpl::init$();
	$set(this, fStringBuffer, $new($XMLStringBuffer));
	$set(this, fStringBuffer2, $new($XMLStringBuffer));
	$set(this, fStringBuffer3, $new($XMLStringBuffer));
}

int32_t XML11DocumentScannerImpl::scanContent($XMLStringBuffer* content) {
	$nc(this->fTempString)->length = 0;
	int32_t c = $nc(this->fEntityScanner)->scanContent(this->fTempString);
	$nc(content)->append(this->fTempString);
	if (c == u'\r' || c == 133 || c == 8232) {
		$nc(this->fEntityScanner)->scanChar(nullptr);
		content->append((char16_t)c);
		c = -1;
	}
	if (c == u']') {
		content->append((char16_t)$nc(this->fEntityScanner)->scanChar(nullptr));
		this->fInScanContent = true;
		if ($nc(this->fEntityScanner)->skipChar(u']', nullptr)) {
			content->append(u']');
			while ($nc(this->fEntityScanner)->skipChar(u']', nullptr)) {
				content->append(u']');
			}
			if ($nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
				reportFatalError("CDEndInContent"_s, nullptr);
			}
		}
		this->fInScanContent = false;
		c = -1;
	}
	return c;
}

bool XML11DocumentScannerImpl::scanAttributeValue($XMLString* value, $XMLString* nonNormalizedValue, $String* atName, bool checkEntities, $String* eleName, bool isNSURI) {
	$useLocalObjectStack();
	int32_t quote = $nc(this->fEntityScanner)->peekChar();
	if (quote != u'\'' && quote != u'\"') {
		reportFatalError("OpenQuoteExpected"_s, $$new($ObjectArray, {
			eleName,
			atName
		}));
	}
	$init($XMLScanner$NameType);
	$nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::ATTRIBUTE);
	int32_t entityDepth = this->fEntityDepth;
	int32_t c = $nc(this->fEntityScanner)->scanLiteral(quote, value, isNSURI);
	;
	int32_t fromIndex = 0;
	if (c == quote && (fromIndex = isUnchangedByNormalization(value)) == -1) {
		$nc(nonNormalizedValue)->setValues(value);
		int32_t cquote = $nc(this->fEntityScanner)->scanChar($XMLScanner$NameType::ATTRIBUTE);
		if (cquote != quote) {
			reportFatalError("CloseQuoteExpected"_s, $$new($ObjectArray, {
				eleName,
				atName
			}));
		}
		return true;
	}
	this->fStringBuffer2->clear();
	this->fStringBuffer2->append(value);
	normalizeWhitespace(value, fromIndex);
	;
	if (c != quote) {
		this->fScanningAttribute = true;
		this->fStringBuffer->clear();
		do {
			this->fStringBuffer->append(value);
			;
			if (c == u'&') {
				$nc(this->fEntityScanner)->skipChar(u'&', $XMLScanner$NameType::REFERENCE);
				if (entityDepth == this->fEntityDepth) {
					this->fStringBuffer2->append(u'&');
				}
				if ($nc(this->fEntityScanner)->skipChar(u'#', $XMLScanner$NameType::REFERENCE)) {
					if (entityDepth == this->fEntityDepth) {
						this->fStringBuffer2->append(u'#');
					}
					int32_t ch = scanCharReferenceValue(this->fStringBuffer, this->fStringBuffer2);
					if (ch != -1) {
						;
					}
				} else {
					$var($String, entityName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::REFERENCE));
					if (entityName == nullptr) {
						reportFatalError("NameRequiredInReference"_s, nullptr);
					} else if (entityDepth == this->fEntityDepth) {
						this->fStringBuffer2->append(entityName);
					}
					if (!$nc(this->fEntityScanner)->skipChar(u';', $XMLScanner$NameType::REFERENCE)) {
						reportFatalError("SemicolonRequiredInReference"_s, $$new($ObjectArray, {entityName}));
					} else if (entityDepth == this->fEntityDepth) {
						this->fStringBuffer2->append(u';');
					}
					if (resolveCharacter(entityName, this->fStringBuffer)) {
						checkEntityLimit(false, $nc($nc(this->fEntityScanner)->fCurrentEntity)->name, 1);
					} else if ($nc(this->fEntityManager)->isExternalEntity(entityName)) {
						reportFatalError("ReferenceToExternalEntity"_s, $$new($ObjectArray, {entityName}));
					} else {
						if (!$nc(this->fEntityManager)->isDeclaredEntity(entityName)) {
							if (checkEntities) {
								if (this->fValidation) {
									$init($XMLMessageFormatter);
									$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "EntityNotDeclared"_s, $$new($ObjectArray, {entityName}), $XMLErrorReporter::SEVERITY_ERROR);
								}
							} else {
								reportFatalError("EntityNotDeclared"_s, $$new($ObjectArray, {entityName}));
							}
						}
						$nc(this->fEntityManager)->startEntity(true, entityName, true);
					}
				}
			} else if (c == u'<') {
				reportFatalError("LessthanInAttValue"_s, $$new($ObjectArray, {
					eleName,
					atName
				}));
				$nc(this->fEntityScanner)->scanChar(nullptr);
				if (entityDepth == this->fEntityDepth) {
					this->fStringBuffer2->append((char16_t)c);
				}
			} else if (c == u'%' || c == u']') {
				$nc(this->fEntityScanner)->scanChar(nullptr);
				this->fStringBuffer->append((char16_t)c);
				if (entityDepth == this->fEntityDepth) {
					this->fStringBuffer2->append((char16_t)c);
				}
				;
			} else if (c == u'\n' || c == u'\r' || c == 133 || c == 8232) {
				$nc(this->fEntityScanner)->scanChar(nullptr);
				this->fStringBuffer->append(u' ');
				if (entityDepth == this->fEntityDepth) {
					this->fStringBuffer2->append(u'\n');
				}
			} else if (c != -1 && $XMLChar::isHighSurrogate(c)) {
				this->fStringBuffer3->clear();
				if (scanSurrogates(this->fStringBuffer3)) {
					this->fStringBuffer->append(this->fStringBuffer3);
					if (entityDepth == this->fEntityDepth) {
						this->fStringBuffer2->append(this->fStringBuffer3);
					}
					;
				}
			} else if (c != -1 && isInvalidLiteral(c)) {
				reportFatalError("InvalidCharInAttValue"_s, $$new($ObjectArray, {
					eleName,
					atName,
					$($Integer::toString(c, 16))
				}));
				$nc(this->fEntityScanner)->scanChar(nullptr);
				if (entityDepth == this->fEntityDepth) {
					this->fStringBuffer2->append((char16_t)c);
				}
			}
			c = $nc(this->fEntityScanner)->scanLiteral(quote, value, isNSURI);
			if (entityDepth == this->fEntityDepth) {
				this->fStringBuffer2->append(value);
			}
			normalizeWhitespace(value);
		} while (c != quote || entityDepth != this->fEntityDepth);
		this->fStringBuffer->append(value);
		;
		$nc(value)->setValues(this->fStringBuffer);
		this->fScanningAttribute = false;
	}
	$nc(nonNormalizedValue)->setValues(this->fStringBuffer2);
	int32_t cquote = $nc(this->fEntityScanner)->scanChar(nullptr);
	if (cquote != quote) {
		reportFatalError("CloseQuoteExpected"_s, $$new($ObjectArray, {
			eleName,
			atName
		}));
	}
	return nonNormalizedValue->equals($nc(value)->ch, $nc(value)->offset, $nc(value)->length);
}

bool XML11DocumentScannerImpl::scanPubidLiteral($XMLString* literal) {
	$useLocalObjectStack();
	int32_t quote = $nc(this->fEntityScanner)->scanChar(nullptr);
	if (quote != u'\'' && quote != u'\"') {
		reportFatalError("QuoteRequiredInPublicID"_s, nullptr);
		return false;
	}
	this->fStringBuffer->clear();
	bool skipSpace = true;
	bool dataok = true;
	while (true) {
		int32_t c = $nc(this->fEntityScanner)->scanChar(nullptr);
		if (c == u' ' || c == u'\n' || c == u'\r' || c == 133 || c == 8232) {
			if (!skipSpace) {
				this->fStringBuffer->append(u' ');
				skipSpace = true;
			}
		} else if (c == quote) {
			if (skipSpace) {
				--this->fStringBuffer->length;
			}
			$nc(literal)->setValues(this->fStringBuffer);
			break;
		} else if ($XMLChar::isPubid(c)) {
			this->fStringBuffer->append((char16_t)c);
			skipSpace = false;
		} else if (c == -1) {
			reportFatalError("PublicIDUnterminated"_s, nullptr);
			return false;
		} else {
			dataok = false;
			reportFatalError("InvalidCharInPublicID"_s, $$new($ObjectArray, {$($Integer::toHexString(c))}));
		}
	}
	return dataok;
}

void XML11DocumentScannerImpl::normalizeWhitespace($XMLString* value) {
	int32_t end = $nc(value)->offset + $nc(value)->length;
	for (int32_t i = value->offset; i < end; ++i) {
		int32_t c = $nc(value->ch)->get(i);
		if ($XMLChar::isSpace(c)) {
			$nc(value->ch)->set(i, u' ');
		}
	}
}

void XML11DocumentScannerImpl::normalizeWhitespace($XMLString* value, int32_t fromIndex) {
	int32_t end = $nc(value)->offset + $nc(value)->length;
	for (int32_t i = value->offset + fromIndex; i < end; ++i) {
		int32_t c = $nc(value->ch)->get(i);
		if ($XMLChar::isSpace(c)) {
			$nc(value->ch)->set(i, u' ');
		}
	}
}

int32_t XML11DocumentScannerImpl::isUnchangedByNormalization($XMLString* value) {
	int32_t end = $nc(value)->offset + $nc(value)->length;
	for (int32_t i = value->offset; i < end; ++i) {
		int32_t c = $nc(value->ch)->get(i);
		if ($XMLChar::isSpace(c)) {
			return i - value->offset;
		}
	}
	return -1;
}

bool XML11DocumentScannerImpl::isInvalid(int32_t value) {
	return ($XML11Char::isXML11Invalid(value));
}

bool XML11DocumentScannerImpl::isInvalidLiteral(int32_t value) {
	return (!$XML11Char::isXML11ValidLiteral(value));
}

bool XML11DocumentScannerImpl::isValidNameChar(int32_t value) {
	return ($XML11Char::isXML11Name(value));
}

bool XML11DocumentScannerImpl::isValidNameStartChar(int32_t value) {
	return ($XML11Char::isXML11NameStart(value));
}

bool XML11DocumentScannerImpl::isValidNCName(int32_t value) {
	return ($XML11Char::isXML11NCName(value));
}

bool XML11DocumentScannerImpl::isValidNameStartHighSurrogate(int32_t value) {
	return $XML11Char::isXML11NameHighSurrogate(value);
}

bool XML11DocumentScannerImpl::versionSupported($String* version) {
	bool var$0 = $nc(version)->equals("1.1"_s);
	return (var$0 || version->equals("1.0"_s));
}

$String* XML11DocumentScannerImpl::getVersionNotSupportedKey() {
	return "VersionNotSupported11"_s;
}

XML11DocumentScannerImpl::XML11DocumentScannerImpl() {
}

$Class* XML11DocumentScannerImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fStringBuffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE | $FINAL, $field(XML11DocumentScannerImpl, fStringBuffer)},
		{"fStringBuffer2", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE | $FINAL, $field(XML11DocumentScannerImpl, fStringBuffer2)},
		{"fStringBuffer3", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE | $FINAL, $field(XML11DocumentScannerImpl, fStringBuffer3)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XML11DocumentScannerImpl, init$, void)},
		{"getVersionNotSupportedKey", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, getVersionNotSupportedKey, $String*)},
		{"isInvalid", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, isInvalid, bool, int32_t)},
		{"isInvalidLiteral", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, isInvalidLiteral, bool, int32_t)},
		{"isUnchangedByNormalization", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)I", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, isUnchangedByNormalization, int32_t, $XMLString*)},
		{"isValidNCName", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, isValidNCName, bool, int32_t)},
		{"isValidNameChar", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, isValidNameChar, bool, int32_t)},
		{"isValidNameStartChar", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, isValidNameStartChar, bool, int32_t)},
		{"isValidNameStartHighSurrogate", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, isValidNameStartHighSurrogate, bool, int32_t)},
		{"normalizeWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, normalizeWhitespace, void, $XMLString*)},
		{"normalizeWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;I)V", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, normalizeWhitespace, void, $XMLString*, int32_t)},
		{"scanAttributeValue", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Ljava/lang/String;ZLjava/lang/String;Z)Z", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, scanAttributeValue, bool, $XMLString*, $XMLString*, $String*, bool, $String*, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"scanContent", "(Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)I", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, scanContent, int32_t, $XMLStringBuffer*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"scanPubidLiteral", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)Z", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, scanPubidLiteral, bool, $XMLString*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"versionSupported", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XML11DocumentScannerImpl, versionSupported, bool, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.XML11DocumentScannerImpl",
		"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XML11DocumentScannerImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XML11DocumentScannerImpl));
	});
	return class$;
}

$Class* XML11DocumentScannerImpl::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com