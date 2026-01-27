#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$FragmentContentDriver.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/XMLEntityStorage.h>
#include <com/sun/xml/internal/stream/dtd/DTDGrammarUtil.h>
#include <java/io/CharConversionException.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef CDATA
#undef CHARACTERS
#undef COMMENT
#undef ELEMENTEND
#undef END_ELEMENT
#undef ENTITY_REFERENCE
#undef PROCESSING_INSTRUCTION
#undef REFERENCE
#undef SEVERITY_FATAL_ERROR
#undef SPACE
#undef START_DOCUMENT
#undef START_ELEMENT
#undef XML_DOMAIN

using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLEntityStorage = ::com::sun::xml::internal::stream::XMLEntityStorage;
using $DTDGrammarUtil = ::com::sun::xml::internal::stream::dtd::DTDGrammarUtil;
using $CharConversionException = ::java::io::CharConversionException;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
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

$FieldInfo _XMLDocumentFragmentScannerImpl$FragmentContentDriver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDocumentFragmentScannerImpl$FragmentContentDriver, this$0)},
	{}
};

$MethodInfo _XMLDocumentFragmentScannerImpl$FragmentContentDriver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl;)V", nullptr, $PROTECTED, $method(XMLDocumentFragmentScannerImpl$FragmentContentDriver, init$, void, $XMLDocumentFragmentScannerImpl*)},
	{"decideSubState", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$FragmentContentDriver, decideSubState, void), "java.io.IOException"},
	{"elementDepthIsZeroHook", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl$FragmentContentDriver, elementDepthIsZeroHook, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endOfFileHook", "(Ljava/io/EOFException;)V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl$FragmentContentDriver, endOfFileHook, void, $EOFException*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$FragmentContentDriver, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanForDoctypeHook", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl$FragmentContentDriver, scanForDoctypeHook, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanRootElementHook", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentFragmentScannerImpl$FragmentContentDriver, scanRootElementHook, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startOfContent", "()V", nullptr, $PRIVATE, $method(XMLDocumentFragmentScannerImpl$FragmentContentDriver, startOfContent, void), "java.io.IOException"},
	{"startOfMarkup", "()V", nullptr, $PRIVATE, $method(XMLDocumentFragmentScannerImpl$FragmentContentDriver, startOfMarkup, void), "java.io.IOException"},
	{}
};

$InnerClassInfo _XMLDocumentFragmentScannerImpl$FragmentContentDriver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$FragmentContentDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "FragmentContentDriver", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Driver", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XMLDocumentFragmentScannerImpl$FragmentContentDriver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$FragmentContentDriver",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver",
	_XMLDocumentFragmentScannerImpl$FragmentContentDriver_FieldInfo_,
	_XMLDocumentFragmentScannerImpl$FragmentContentDriver_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentFragmentScannerImpl$FragmentContentDriver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl"
};

$Object* allocate$XMLDocumentFragmentScannerImpl$FragmentContentDriver($Class* clazz) {
	return $of($alloc(XMLDocumentFragmentScannerImpl$FragmentContentDriver));
}

void XMLDocumentFragmentScannerImpl$FragmentContentDriver::init$($XMLDocumentFragmentScannerImpl* this$0) {
	$set(this, this$0, this$0);
}

void XMLDocumentFragmentScannerImpl$FragmentContentDriver::startOfMarkup() {
	++this->this$0->fMarkupDepth;
	int32_t ch = $nc(this->this$0->fEntityScanner)->peekChar();
	bool var$0 = this->this$0->isValidNameStartChar(ch);
	if (var$0 || this->this$0->isValidNameStartHighSurrogate(ch)) {
		this->this$0->setScannerState(38);
	} else {
		switch (ch) {
		case u'?':
			{
				{
					this->this$0->setScannerState(23);
					$nc(this->this$0->fEntityScanner)->skipChar(ch, nullptr);
					break;
				}
			}
		case u'!':
			{
				{
					$nc(this->this$0->fEntityScanner)->skipChar(ch, nullptr);
					if ($nc(this->this$0->fEntityScanner)->skipChar(u'-', nullptr)) {
						$init($XMLScanner$NameType);
						if (!$nc(this->this$0->fEntityScanner)->skipChar(u'-', $XMLScanner$NameType::COMMENT)) {
							this->this$0->reportFatalError("InvalidCommentStart"_s, nullptr);
						}
						this->this$0->setScannerState(27);
					} else {
						if ($nc(this->this$0->fEntityScanner)->skipString($XMLDocumentFragmentScannerImpl::CDATA)) {
							this->this$0->fCDataStart = true;
							this->this$0->setScannerState(35);
						} else if (!scanForDoctypeHook()) {
							this->this$0->reportFatalError("MarkupNotRecognizedInContent"_s, nullptr);
						}
					}
					break;
				}
			}
		case u'/':
			{
				{
					this->this$0->setScannerState(39);
					$init($XMLScanner$NameType);
					$nc(this->this$0->fEntityScanner)->skipChar(ch, $XMLScanner$NameType::ELEMENTEND);
					break;
				}
			}
		default:
			{
				{
					this->this$0->reportFatalError("MarkupNotRecognizedInContent"_s, nullptr);
				}
			}
		}
	}
}

void XMLDocumentFragmentScannerImpl$FragmentContentDriver::startOfContent() {
	if ($nc(this->this$0->fEntityScanner)->skipChar(u'<', nullptr)) {
		this->this$0->setScannerState(21);
	} else {
		$init($XMLScanner$NameType);
		if ($nc(this->this$0->fEntityScanner)->skipChar(u'&', $XMLScanner$NameType::REFERENCE)) {
			this->this$0->setScannerState(28);
		} else {
			this->this$0->setScannerState(37);
		}
	}
}

void XMLDocumentFragmentScannerImpl$FragmentContentDriver::decideSubState() {
	while (this->this$0->fScannerState == 22 || this->this$0->fScannerState == 21) {
		switch (this->this$0->fScannerState) {
		case 22:
			{
				{
					startOfContent();
					break;
				}
			}
		case 21:
			{
				{
					startOfMarkup();
					break;
				}
			}
		}
	}
}

int32_t XMLDocumentFragmentScannerImpl$FragmentContentDriver::next() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		try {
			if (this->this$0->fScannerState == 22) {
				int32_t ch = $nc(this->this$0->fEntityScanner)->peekChar();
				if (ch == u'<') {
					$nc(this->this$0->fEntityScanner)->scanChar(nullptr);
					this->this$0->setScannerState(21);
				} else if (ch == u'&') {
					$init($XMLScanner$NameType);
					$nc(this->this$0->fEntityScanner)->scanChar($XMLScanner$NameType::REFERENCE);
					this->this$0->setScannerState(28);
				} else {
					this->this$0->setScannerState(37);
				}
			}
			if (this->this$0->fScannerState == 21) {
				startOfMarkup();
			}
			if (this->this$0->fIsCoalesce) {
				this->this$0->fUsebuffer = true;
				if (this->this$0->fLastSectionWasCharacterData) {
					if ((this->this$0->fScannerState != 35) && (this->this$0->fScannerState != 28) && (this->this$0->fScannerState != 37)) {
						this->this$0->fLastSectionWasCharacterData = false;
						return $XMLEvent::CHARACTERS;
					}
				} else if (this->this$0->fLastSectionWasCData || this->this$0->fLastSectionWasEntityReference) {
					if ((this->this$0->fScannerState != 35) && (this->this$0->fScannerState != 28) && (this->this$0->fScannerState != 37)) {
						this->this$0->fLastSectionWasCData = false;
						this->this$0->fLastSectionWasEntityReference = false;
						return $XMLEvent::CHARACTERS;
					}
				}
			}
			switch (this->this$0->fScannerState) {
			case $XMLEvent::START_DOCUMENT:
				{
					return $XMLEvent::START_DOCUMENT;
				}
			case 38:
				{
					{
						this->this$0->fEmptyElement = this->this$0->scanStartElement();
						if (this->this$0->fEmptyElement) {
							this->this$0->setScannerState(39);
						} else {
							this->this$0->setScannerState(22);
						}
						return $XMLEvent::START_ELEMENT;
					}
				}
			case 37:
				{
					{
						this->this$0->fUsebuffer = this->this$0->fLastSectionWasEntityReference || this->this$0->fLastSectionWasCData || this->this$0->fLastSectionWasCharacterData;
						if (this->this$0->fIsCoalesce && (this->this$0->fLastSectionWasEntityReference || this->this$0->fLastSectionWasCData || this->this$0->fLastSectionWasCharacterData)) {
							this->this$0->fLastSectionWasEntityReference = false;
							this->this$0->fLastSectionWasCData = false;
							this->this$0->fLastSectionWasCharacterData = true;
							this->this$0->fUsebuffer = true;
						} else {
							$nc(this->this$0->fContentBuffer)->clear();
						}
						$nc(this->this$0->fTempString)->length = 0;
						int32_t c = $nc(this->this$0->fEntityScanner)->scanContent(this->this$0->fTempString);
						if ($nc(this->this$0->fEntityScanner)->skipChar(u'<', nullptr)) {
							$init($XMLScanner$NameType);
							if ($nc(this->this$0->fEntityScanner)->skipChar(u'/', $XMLScanner$NameType::ELEMENTEND)) {
								++this->this$0->fMarkupDepth;
								this->this$0->fLastSectionWasCharacterData = false;
								this->this$0->setScannerState(39);
							} else if ($XMLChar::isNameStart($nc(this->this$0->fEntityScanner)->peekChar())) {
								++this->this$0->fMarkupDepth;
								this->this$0->fLastSectionWasCharacterData = false;
								this->this$0->setScannerState(38);
							} else {
								this->this$0->setScannerState(21);
								if (this->this$0->fIsCoalesce) {
									this->this$0->fLastSectionWasCharacterData = true;
									this->this$0->bufferContent();
									continue;
								}
							}
							if (this->this$0->fUsebuffer) {
								this->this$0->bufferContent();
							}
							if (this->this$0->dtdGrammarUtil != nullptr && $nc(this->this$0->dtdGrammarUtil)->isIgnorableWhiteSpace(this->this$0->fContentBuffer)) {
								return $XMLEvent::SPACE;
							} else {
								return $XMLEvent::CHARACTERS;
							}
						} else {
							this->this$0->bufferContent();
						}
						if (c == u'\r') {
							$nc(this->this$0->fEntityScanner)->scanChar(nullptr);
							this->this$0->fUsebuffer = true;
							$nc(this->this$0->fContentBuffer)->append((char16_t)c);
							c = -1;
						} else if (c == u']') {
							this->this$0->fUsebuffer = true;
							$nc(this->this$0->fContentBuffer)->append((char16_t)$nc(this->this$0->fEntityScanner)->scanChar(nullptr));
							this->this$0->fInScanContent = true;
							if ($nc(this->this$0->fEntityScanner)->skipChar(u']', nullptr)) {
								$nc(this->this$0->fContentBuffer)->append(u']');
								while ($nc(this->this$0->fEntityScanner)->skipChar(u']', nullptr)) {
									$nc(this->this$0->fContentBuffer)->append(u']');
								}
								if ($nc(this->this$0->fEntityScanner)->skipChar(u'>', nullptr)) {
									this->this$0->reportFatalError("CDEndInContent"_s, nullptr);
								}
							}
							c = -1;
							this->this$0->fInScanContent = false;
						}
						do {
							if (c == u'<') {
								$nc(this->this$0->fEntityScanner)->scanChar(nullptr);
								this->this$0->setScannerState(21);
								break;
							} else if (c == u'&') {
								$init($XMLScanner$NameType);
								$nc(this->this$0->fEntityScanner)->scanChar($XMLScanner$NameType::REFERENCE);
								this->this$0->setScannerState(28);
								break;
							} else if (c != -1 && this->this$0->isInvalidLiteral(c)) {
								if ($XMLChar::isHighSurrogate(c)) {
									this->this$0->scanSurrogates(this->this$0->fContentBuffer);
									this->this$0->setScannerState(22);
								} else {
									this->this$0->reportFatalError("InvalidCharInContent"_s, $$new($ObjectArray, {$($of($Integer::toString(c, 16)))}));
									$nc(this->this$0->fEntityScanner)->scanChar(nullptr);
								}
								break;
							}
							c = this->this$0->scanContent(this->this$0->fContentBuffer);
							if (!this->this$0->fIsCoalesce) {
								this->this$0->setScannerState(22);
								break;
							}
						} while (true);
						if (this->this$0->fIsCoalesce) {
							this->this$0->fLastSectionWasCharacterData = true;
							continue;
						} else if (this->this$0->dtdGrammarUtil != nullptr && $nc(this->this$0->dtdGrammarUtil)->isIgnorableWhiteSpace(this->this$0->fContentBuffer)) {
							return $XMLEvent::SPACE;
						} else {
							return $XMLEvent::CHARACTERS;
						}
					}
				}
			case 39:
				{
					{
						if (this->this$0->fEmptyElement) {
							this->this$0->fEmptyElement = false;
							this->this$0->setScannerState(22);
							return (this->this$0->fMarkupDepth == 0 && elementDepthIsZeroHook()) ? $XMLEvent::END_ELEMENT : $XMLEvent::END_ELEMENT;
						} else if (this->this$0->scanEndElement() == 0) {
							if (elementDepthIsZeroHook()) {
								return $XMLEvent::END_ELEMENT;
							}
						}
						this->this$0->setScannerState(22);
						return $XMLEvent::END_ELEMENT;
					}
				}
			case 27:
				{
					{
						this->this$0->scanComment();
						this->this$0->setScannerState(22);
						return $XMLEvent::COMMENT;
					}
				}
			case 23:
				{
					{
						$nc(this->this$0->fContentBuffer)->clear();
						this->this$0->scanPI(this->this$0->fContentBuffer);
						this->this$0->setScannerState(22);
						return $XMLEvent::PROCESSING_INSTRUCTION;
					}
				}
			case 35:
				{
					{
						if (this->this$0->fIsCoalesce && (this->this$0->fLastSectionWasEntityReference || this->this$0->fLastSectionWasCData || this->this$0->fLastSectionWasCharacterData)) {
							this->this$0->fLastSectionWasCData = true;
							this->this$0->fLastSectionWasEntityReference = false;
							this->this$0->fLastSectionWasCharacterData = false;
						} else {
							$nc(this->this$0->fContentBuffer)->clear();
						}
						this->this$0->fUsebuffer = true;
						this->this$0->scanCDATASection(this->this$0->fContentBuffer, true);
						if (!this->this$0->fCDataEnd) {
							this->this$0->setScannerState(35);
						} else {
							this->this$0->setScannerState(22);
						}
						if (this->this$0->fIsCoalesce) {
							this->this$0->fLastSectionWasCData = true;
							continue;
						} else if (this->this$0->fReportCdataEvent) {
							return $XMLEvent::CDATA;
						} else {
							return $XMLEvent::CHARACTERS;
						}
					}
				}
			case 28:
				{
					{
						++this->this$0->fMarkupDepth;
						this->this$0->foundBuiltInRefs = false;
						if (this->this$0->fIsCoalesce && (this->this$0->fLastSectionWasEntityReference || this->this$0->fLastSectionWasCData || this->this$0->fLastSectionWasCharacterData)) {
							this->this$0->fLastSectionWasEntityReference = true;
							this->this$0->fLastSectionWasCData = false;
							this->this$0->fLastSectionWasCharacterData = false;
						} else {
							$nc(this->this$0->fContentBuffer)->clear();
						}
						this->this$0->fUsebuffer = true;
						$init($XMLScanner$NameType);
						if ($nc(this->this$0->fEntityScanner)->skipChar(u'#', $XMLScanner$NameType::REFERENCE)) {
							this->this$0->scanCharReferenceValue(this->this$0->fContentBuffer, nullptr);
							--this->this$0->fMarkupDepth;
							if (!this->this$0->fIsCoalesce) {
								this->this$0->setScannerState(22);
								return $XMLEvent::CHARACTERS;
							}
						} else {
							this->this$0->scanEntityReference(this->this$0->fContentBuffer);
							if (this->this$0->fScannerState == 41 && !this->this$0->fIsCoalesce) {
								this->this$0->setScannerState(22);
								if (this->this$0->builtInRefCharacterHandled) {
									this->this$0->builtInRefCharacterHandled = false;
									return $XMLEvent::ENTITY_REFERENCE;
								} else {
									return $XMLEvent::CHARACTERS;
								}
							}
							if (this->this$0->fScannerState == 36) {
								this->this$0->fLastSectionWasEntityReference = true;
								continue;
							}
							if (this->this$0->fScannerState == 28) {
								this->this$0->setScannerState(22);
								if (this->this$0->fReplaceEntityReferences && $nc(this->this$0->fEntityStore)->isDeclaredEntity(this->this$0->fCurrentEntityName)) {
									continue;
								}
								return $XMLEvent::ENTITY_REFERENCE;
							}
						}
						this->this$0->setScannerState(22);
						this->this$0->fLastSectionWasEntityReference = true;
						continue;
					}
				}
			case 36:
				{
					{
						if ($nc(this->this$0->fEntityScanner)->skipString("<?xml"_s)) {
							++this->this$0->fMarkupDepth;
							if (this->this$0->isValidNameChar($nc(this->this$0->fEntityScanner)->peekChar())) {
								$nc(this->this$0->fStringBuffer)->clear();
								$nc(this->this$0->fStringBuffer)->append("xml"_s);
								if (this->this$0->fNamespaces) {
									while (this->this$0->isValidNCName($nc(this->this$0->fEntityScanner)->peekChar())) {
										$nc(this->this$0->fStringBuffer)->append((char16_t)$nc(this->this$0->fEntityScanner)->scanChar(nullptr));
									}
								} else {
									while (this->this$0->isValidNameChar($nc(this->this$0->fEntityScanner)->peekChar())) {
										$nc(this->this$0->fStringBuffer)->append((char16_t)$nc(this->this$0->fEntityScanner)->scanChar(nullptr));
									}
								}
								$var($String, target, $nc(this->this$0->fSymbolTable)->addSymbol($nc(this->this$0->fStringBuffer)->ch, $nc(this->this$0->fStringBuffer)->offset, $nc(this->this$0->fStringBuffer)->length));
								$nc(this->this$0->fContentBuffer)->clear();
								this->this$0->scanPIData(target, this->this$0->fContentBuffer);
							} else {
								this->this$0->scanXMLDeclOrTextDecl(true);
							}
						}
						$nc($nc(this->this$0->fEntityManager)->fCurrentEntity)->mayReadChunks = true;
						this->this$0->setScannerState(22);
						continue;
					}
				}
			case 26:
				{
					{
						if (scanRootElementHook()) {
							this->this$0->fEmptyElement = true;
							return $XMLEvent::START_ELEMENT;
						}
						this->this$0->setScannerState(22);
						return $XMLEvent::START_ELEMENT;
					}
				}
			case 40:
				{
					{
						$nc(this->this$0->fContentBuffer)->clear();
						this->this$0->scanCharReferenceValue(this->this$0->fContentBuffer, nullptr);
						--this->this$0->fMarkupDepth;
						this->this$0->setScannerState(22);
						return $XMLEvent::CHARACTERS;
					}
				}
			default:
				{
					$throwNew($XNIException, $$str({"Scanner State "_s, $$str(this->this$0->fScannerState), " not Recognized "_s}));
				}
			}
		} catch ($MalformedByteSequenceException& e) {
			$var($String, var$0, e->getDomain());
			$var($String, var$1, e->getKey());
			$nc(this->this$0->fErrorReporter)->reportError(var$0, var$1, $(e->getArguments()), $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
			return -1;
		} catch ($CharConversionException& e) {
			$init($XMLMessageFormatter);
			$nc(this->this$0->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "CharConversionFailure"_s, ($ObjectArray*)nullptr, $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
			return -1;
		} catch ($EOFException& e) {
			endOfFileHook(e);
			return -1;
		}
	}
	$shouldNotReachHere();
}

bool XMLDocumentFragmentScannerImpl$FragmentContentDriver::scanForDoctypeHook() {
	return false;
}

bool XMLDocumentFragmentScannerImpl$FragmentContentDriver::elementDepthIsZeroHook() {
	return false;
}

bool XMLDocumentFragmentScannerImpl$FragmentContentDriver::scanRootElementHook() {
	return false;
}

void XMLDocumentFragmentScannerImpl$FragmentContentDriver::endOfFileHook($EOFException* e) {
	if (this->this$0->fMarkupDepth != 0) {
		this->this$0->reportFatalError("PrematureEOF"_s, nullptr);
	}
}

XMLDocumentFragmentScannerImpl$FragmentContentDriver::XMLDocumentFragmentScannerImpl$FragmentContentDriver() {
}

$Class* XMLDocumentFragmentScannerImpl$FragmentContentDriver::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentFragmentScannerImpl$FragmentContentDriver, name, initialize, &_XMLDocumentFragmentScannerImpl$FragmentContentDriver_ClassInfo_, allocate$XMLDocumentFragmentScannerImpl$FragmentContentDriver);
	return class$;
}

$Class* XMLDocumentFragmentScannerImpl$FragmentContentDriver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com