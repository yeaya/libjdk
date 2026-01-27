#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$PrologDriver.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$DTDDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <java/io/CharConversionException.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef COMMENT
#undef DOCTYPE
#undef DTD
#undef PROCESSING_INSTRUCTION
#undef REFERENCE
#undef SEVERITY_FATAL_ERROR
#undef XML_DOMAIN

using $XMLDocumentFragmentScannerImpl$Driver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLDocumentScannerImpl$DTDDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$DTDDriver;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLDTDScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $Entity = ::com::sun::xml::internal::stream::Entity;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $CharConversionException = ::java::io::CharConversionException;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLDocumentScannerImpl$PrologDriver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDocumentScannerImpl$PrologDriver, this$0)},
	{}
};

$MethodInfo _XMLDocumentScannerImpl$PrologDriver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;)V", nullptr, $PROTECTED, $method(XMLDocumentScannerImpl$PrologDriver, init$, void, $XMLDocumentScannerImpl*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl$PrologDriver, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _XMLDocumentScannerImpl$PrologDriver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$PrologDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "PrologDriver", $PROTECTED | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Driver", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XMLDocumentScannerImpl$PrologDriver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$PrologDriver",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver",
	_XMLDocumentScannerImpl$PrologDriver_FieldInfo_,
	_XMLDocumentScannerImpl$PrologDriver_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentScannerImpl$PrologDriver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl"
};

$Object* allocate$XMLDocumentScannerImpl$PrologDriver($Class* clazz) {
	return $of($alloc(XMLDocumentScannerImpl$PrologDriver));
}

void XMLDocumentScannerImpl$PrologDriver::init$($XMLDocumentScannerImpl* this$0) {
	$set(this, this$0, this$0);
}

int32_t XMLDocumentScannerImpl$PrologDriver::next() {
	$useLocalCurrentObjectStackCache();
	try {
		do {
			switch (this->this$0->fScannerState) {
			case 43:
				{
					{
						$nc(this->this$0->fEntityScanner)->skipSpaces();
						if ($nc(this->this$0->fEntityScanner)->skipChar(u'<', nullptr)) {
							this->this$0->setScannerState(21);
						} else {
							$init($XMLScanner$NameType);
							if ($nc(this->this$0->fEntityScanner)->skipChar(u'&', $XMLScanner$NameType::REFERENCE)) {
								this->this$0->setScannerState(28);
							} else {
								this->this$0->setScannerState(22);
							}
						}
						break;
					}
				}
			case 21:
				{
					{
						++this->this$0->fMarkupDepth;
						bool var$0 = this->this$0->isValidNameStartChar($nc(this->this$0->fEntityScanner)->peekChar());
						if (var$0 || this->this$0->isValidNameStartHighSurrogate($nc(this->this$0->fEntityScanner)->peekChar())) {
							this->this$0->setScannerState(26);
							this->this$0->setDriver(this->this$0->fContentDriver);
							return $nc(this->this$0->fContentDriver)->next();
						} else if ($nc(this->this$0->fEntityScanner)->skipChar(u'!', nullptr)) {
							if ($nc(this->this$0->fEntityScanner)->skipChar(u'-', nullptr)) {
								if (!$nc(this->this$0->fEntityScanner)->skipChar(u'-', nullptr)) {
									this->this$0->reportFatalError("InvalidCommentStart"_s, nullptr);
								}
								this->this$0->setScannerState(27);
							} else {
								if ($nc(this->this$0->fEntityScanner)->skipString($XMLDocumentScannerImpl::DOCTYPE)) {
									this->this$0->setScannerState(24);
									$var($Entity, entity, $nc(this->this$0->fEntityScanner)->getCurrentEntity());
									if ($instanceOf($Entity$ScannedEntity, entity)) {
										this->this$0->fStartPos = $nc(($cast($Entity$ScannedEntity, entity)))->position;
									}
									this->this$0->fReadingDTD = true;
									if (this->this$0->fDTDDecl == nullptr) {
										$set(this->this$0, fDTDDecl, $new($XMLStringBuffer));
									}
									$nc(this->this$0->fDTDDecl)->append("<!DOCTYPE"_s);
								} else {
									this->this$0->reportFatalError("MarkupNotRecognizedInProlog"_s, nullptr);
								}
							}
						} else if ($nc(this->this$0->fEntityScanner)->skipChar(u'?', nullptr)) {
							this->this$0->setScannerState(23);
						} else {
							this->this$0->reportFatalError("MarkupNotRecognizedInProlog"_s, nullptr);
						}
						break;
					}
				}
			}
		} while (this->this$0->fScannerState == 43 || this->this$0->fScannerState == 21);
		switch (this->this$0->fScannerState) {
		case 27:
			{
				{
					this->this$0->scanComment();
					this->this$0->setScannerState(43);
					return $XMLEvent::COMMENT;
				}
			}
		case 23:
			{
				{
					$nc(this->this$0->fContentBuffer)->clear();
					this->this$0->scanPI(this->this$0->fContentBuffer);
					this->this$0->setScannerState(43);
					return $XMLEvent::PROCESSING_INSTRUCTION;
				}
			}
		case 24:
			{
				{
					if (this->this$0->fDisallowDoctype) {
						this->this$0->reportFatalError("DoctypeNotAllowed"_s, nullptr);
					}
					if (this->this$0->fSeenDoctypeDecl) {
						this->this$0->reportFatalError("AlreadySeenDoctype"_s, nullptr);
					}
					this->this$0->fSeenDoctypeDecl = true;
					if (this->this$0->scanDoctypeDecl(this->this$0->fSupportDTD)) {
						this->this$0->setScannerState(45);
						this->this$0->fSeenInternalSubset = true;
						if (this->this$0->fDTDDriver == nullptr) {
							$set(this->this$0, fDTDDriver, $new($XMLDocumentScannerImpl$DTDDriver, this->this$0));
						}
						this->this$0->setDriver(this->this$0->fContentDriver);
						return $nc(this->this$0->fDTDDriver)->next();
					}
					if (this->this$0->fSeenDoctypeDecl) {
						$var($Entity, entity, $nc(this->this$0->fEntityScanner)->getCurrentEntity());
						if ($instanceOf($Entity$ScannedEntity, entity)) {
							this->this$0->fEndPos = $nc(($cast($Entity$ScannedEntity, entity)))->position;
						}
						this->this$0->fReadingDTD = false;
					}
					if (this->this$0->fDoctypeSystemId != nullptr) {
						if ((this->this$0->fValidation || this->this$0->fLoadExternalDTD) && (this->this$0->fValidationManager == nullptr || !$nc(this->this$0->fValidationManager)->isCachedDTD())) {
							if (this->this$0->fSupportDTD) {
								this->this$0->setScannerState(46);
							} else {
								this->this$0->setScannerState(43);
							}
							this->this$0->setDriver(this->this$0->fContentDriver);
							if (this->this$0->fDTDDriver == nullptr) {
								$set(this->this$0, fDTDDriver, $new($XMLDocumentScannerImpl$DTDDriver, this->this$0));
							}
							return $nc(this->this$0->fDTDDriver)->next();
						}
					} else if (this->this$0->fExternalSubsetSource != nullptr) {
						if ((this->this$0->fValidation || this->this$0->fLoadExternalDTD) && (this->this$0->fValidationManager == nullptr || !$nc(this->this$0->fValidationManager)->isCachedDTD())) {
							$nc(this->this$0->fDTDScanner)->setInputSource(this->this$0->fExternalSubsetSource);
							$set(this->this$0, fExternalSubsetSource, nullptr);
							if (this->this$0->fSupportDTD) {
								this->this$0->setScannerState(47);
							} else {
								this->this$0->setScannerState(43);
							}
							this->this$0->setDriver(this->this$0->fContentDriver);
							if (this->this$0->fDTDDriver == nullptr) {
								$set(this->this$0, fDTDDriver, $new($XMLDocumentScannerImpl$DTDDriver, this->this$0));
							}
							return $nc(this->this$0->fDTDDriver)->next();
						}
					}
					if (this->this$0->fDTDScanner != nullptr) {
						$nc(this->this$0->fDTDScanner)->setInputSource(nullptr);
					}
					this->this$0->setScannerState(43);
					return $XMLEvent::DTD;
				}
			}
		case 22:
			{
				{
					this->this$0->reportFatalError("ContentIllegalInProlog"_s, nullptr);
					$nc(this->this$0->fEntityScanner)->scanChar(nullptr);
					return -1;
				}
			}
		case 28:
			{
				{
					this->this$0->reportFatalError("ReferenceIllegalInProlog"_s, nullptr);
					return -1;
				}
			}
		}
	} catch ($MalformedByteSequenceException& e) {
		$var($String, var$1, e->getDomain());
		$var($String, var$2, e->getKey());
		$nc(this->this$0->fErrorReporter)->reportError(var$1, var$2, $(e->getArguments()), $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
		return -1;
	} catch ($CharConversionException& e) {
		$init($XMLMessageFormatter);
		$nc(this->this$0->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "CharConversionFailure"_s, ($ObjectArray*)nullptr, $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
		return -1;
	} catch ($EOFException& e) {
		this->this$0->reportFatalError("PrematureEOF"_s, nullptr);
		return -1;
	}
	return -1;
}

XMLDocumentScannerImpl$PrologDriver::XMLDocumentScannerImpl$PrologDriver() {
}

$Class* XMLDocumentScannerImpl$PrologDriver::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentScannerImpl$PrologDriver, name, initialize, &_XMLDocumentScannerImpl$PrologDriver_ClassInfo_, allocate$XMLDocumentScannerImpl$PrologDriver);
	return class$;
}

$Class* XMLDocumentScannerImpl$PrologDriver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com