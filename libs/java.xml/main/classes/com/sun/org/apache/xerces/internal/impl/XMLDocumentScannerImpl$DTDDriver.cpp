#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$DTDDriver.h>

#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11EntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <com/sun/xml/internal/stream/StaxXMLInputSource.h>
#include <com/sun/xml/internal/stream/XMLEntityStorage.h>
#include <com/sun/xml/internal/stream/dtd/DTDGrammarUtil.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar.h>
#include <java/io/CharConversionException.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DTD
#undef SEVERITY_FATAL_ERROR
#undef XML_DOMAIN

using $XML11DTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11DTDScannerImpl;
using $XML11EntityScanner = ::com::sun::org::apache::xerces::internal::impl::XML11EntityScanner;
using $XMLDTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLEntityHandler = ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLDTDScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $Entity = ::com::sun::xml::internal::stream::Entity;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $StaxXMLInputSource = ::com::sun::xml::internal::stream::StaxXMLInputSource;
using $XMLEntityStorage = ::com::sun::xml::internal::stream::XMLEntityStorage;
using $DTDGrammarUtil = ::com::sun::xml::internal::stream::dtd::DTDGrammarUtil;
using $CharConversionException = ::java::io::CharConversionException;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLDocumentScannerImpl$DTDDriver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDocumentScannerImpl$DTDDriver, this$0)},
	{}
};

$MethodInfo _XMLDocumentScannerImpl$DTDDriver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;)V", nullptr, $PROTECTED, $method(XMLDocumentScannerImpl$DTDDriver, init$, void, $XMLDocumentScannerImpl*)},
	{"dispatch", "(Z)Z", nullptr, $PUBLIC, $method(XMLDocumentScannerImpl$DTDDriver, dispatch, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl$DTDDriver, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _XMLDocumentScannerImpl$DTDDriver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$DTDDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "DTDDriver", $PROTECTED | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Driver", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XMLDocumentScannerImpl$DTDDriver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$DTDDriver",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver",
	_XMLDocumentScannerImpl$DTDDriver_FieldInfo_,
	_XMLDocumentScannerImpl$DTDDriver_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentScannerImpl$DTDDriver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl"
};

$Object* allocate$XMLDocumentScannerImpl$DTDDriver($Class* clazz) {
	return $of($alloc(XMLDocumentScannerImpl$DTDDriver));
}

void XMLDocumentScannerImpl$DTDDriver::init$($XMLDocumentScannerImpl* this$0) {
	$set(this, this$0, this$0);
}

int32_t XMLDocumentScannerImpl$DTDDriver::next() {
	dispatch(true);
	if (this->this$0->fPropertyManager != nullptr) {
		$set(this->this$0, dtdGrammarUtil, $new($DTDGrammarUtil, $($nc(($cast($XMLDTDScannerImpl, this->this$0->fDTDScanner)))->getGrammar()), this->this$0->fSymbolTable, this->this$0->fNamespaceContext));
	}
	return $XMLEvent::DTD;
}

bool XMLDocumentScannerImpl$DTDDriver::dispatch(bool complete) {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->fEntityManager)->setEntityHandler(nullptr);
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				bool again = false;
				$var($XMLResourceIdentifierImpl, resourceIdentifier, $new($XMLResourceIdentifierImpl));
				if (this->this$0->fDTDScanner == nullptr) {
					if ($instanceOf($XML11EntityScanner, $($nc(this->this$0->fEntityManager)->getEntityScanner()))) {
						$set(this->this$0, fDTDScanner, $new($XML11DTDScannerImpl));
					} else {
						$set(this->this$0, fDTDScanner, $new($XMLDTDScannerImpl));
					}
					$nc(($cast($XMLDTDScannerImpl, this->this$0->fDTDScanner)))->reset(this->this$0->fPropertyManager);
				}
				$nc(this->this$0->fDTDScanner)->setLimitAnalyzer(this->this$0->fLimitAnalyzer);
				do {
					again = false;
					switch (this->this$0->fScannerState) {
					case 45:
						{
							{
								bool moreToScan = false;
								if (!$nc(this->this$0->fDTDScanner)->skipDTD(this->this$0->fSupportDTD)) {
									bool completeDTD = true;
									moreToScan = $nc(this->this$0->fDTDScanner)->scanDTDInternalSubset(completeDTD, this->this$0->fStandalone, this->this$0->fHasExternalDTD && this->this$0->fLoadExternalDTD);
								}
								$var($Entity, entity, $nc(this->this$0->fEntityScanner)->getCurrentEntity());
								if ($instanceOf($Entity$ScannedEntity, entity)) {
									this->this$0->fEndPos = $nc(($cast($Entity$ScannedEntity, entity)))->position;
								}
								this->this$0->fReadingDTD = false;
								if (!moreToScan) {
									if (!$nc(this->this$0->fEntityScanner)->skipChar(u']', nullptr)) {
										this->this$0->reportFatalError("DoctypedeclNotClosed"_s, $$new($ObjectArray, {$of(this->this$0->fDoctypeName)}));
									}
									$nc(this->this$0->fEntityScanner)->skipSpaces();
									if (!$nc(this->this$0->fEntityScanner)->skipChar(u'>', nullptr)) {
										this->this$0->reportFatalError("DoctypedeclUnterminated"_s, $$new($ObjectArray, {$of(this->this$0->fDoctypeName)}));
									}
									--this->this$0->fMarkupDepth;
									if (!this->this$0->fSupportDTD) {
										$set(this->this$0, fEntityStore, $nc(this->this$0->fEntityManager)->getEntityStore());
										$nc(this->this$0->fEntityStore)->reset();
									} else if (this->this$0->fDoctypeSystemId != nullptr && (this->this$0->fValidation || this->this$0->fLoadExternalDTD)) {
										this->this$0->setScannerState(46);
										break;
									}
									this->this$0->setEndDTDScanState();
									var$2 = true;
									return$1 = true;
									goto $finally;
								}
								break;
							}
						}
					case 46:
						{
							{
								resourceIdentifier->setValues(this->this$0->fDoctypePublicId, this->this$0->fDoctypeSystemId, nullptr, nullptr);
								$var($XMLInputSource, xmlInputSource, nullptr);
								$var($StaxXMLInputSource, staxInputSource, $nc(this->this$0->fEntityManager)->resolveEntityAsPerStax(resourceIdentifier));
								if (!$nc(staxInputSource)->isCreatedByResolver()) {
									$var($String, accessError, this->this$0->checkAccess(this->this$0->fDoctypeSystemId, this->this$0->fAccessExternalDTD));
									if (accessError != nullptr) {
										this->this$0->reportFatalError("AccessExternalDTD"_s, $$new($ObjectArray, {
											$($of($SecuritySupport::sanitizePath(this->this$0->fDoctypeSystemId))),
											$of(accessError)
										}));
									}
								}
								$assign(xmlInputSource, $nc(staxInputSource)->getXMLInputSource());
								$nc(this->this$0->fDTDScanner)->setInputSource(xmlInputSource);
								if ($nc(this->this$0->fEntityScanner)->fCurrentEntity != nullptr) {
									this->this$0->setScannerState(47);
								} else {
									this->this$0->setScannerState(43);
								}
								again = true;
								break;
							}
						}
					case 47:
						{
							{
								bool completeDTD = true;
								bool moreToScan = $nc(this->this$0->fDTDScanner)->scanDTDExternalSubset(completeDTD);
								if (!moreToScan) {
									this->this$0->setEndDTDScanState();
									var$2 = true;
									return$1 = true;
									goto $finally;
								}
								break;
							}
						}
					case 43:
						{
							{
								this->this$0->setEndDTDScanState();
								var$2 = true;
								return$1 = true;
								goto $finally;
							}
						}
					default:
						{
							{
								$throwNew($XNIException, $$str({"DTDDriver#dispatch: scanner state="_s, $$str(this->this$0->fScannerState), " ("_s, $(this->this$0->getScannerStateName(this->this$0->fScannerState)), $$str(u')')}));
							}
						}
					}
				} while (complete || again);
			} catch ($MalformedByteSequenceException& e) {
				$var($String, var$3, e->getDomain());
				$var($String, var$4, e->getKey());
				$nc(this->this$0->fErrorReporter)->reportError(var$3, var$4, $(e->getArguments()), $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
				var$2 = false;
				return$1 = true;
				goto $finally;
			} catch ($CharConversionException& e) {
				$init($XMLMessageFormatter);
				$nc(this->this$0->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "CharConversionFailure"_s, ($ObjectArray*)nullptr, $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
				var$2 = false;
				return$1 = true;
				goto $finally;
			} catch ($EOFException& e) {
				e->printStackTrace();
				this->this$0->reportFatalError("PrematureEOF"_s, nullptr);
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			$nc(this->this$0->fEntityManager)->setEntityHandler(this->this$0);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return true;
}

XMLDocumentScannerImpl$DTDDriver::XMLDocumentScannerImpl$DTDDriver() {
}

$Class* XMLDocumentScannerImpl$DTDDriver::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentScannerImpl$DTDDriver, name, initialize, &_XMLDocumentScannerImpl$DTDDriver_ClassInfo_, allocate$XMLDocumentScannerImpl$DTDDriver);
	return class$;
}

$Class* XMLDocumentScannerImpl$DTDDriver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com