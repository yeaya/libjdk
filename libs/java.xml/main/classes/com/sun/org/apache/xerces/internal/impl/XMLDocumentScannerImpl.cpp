#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/ExternalSubsetResolver.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$FragmentContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$PrologDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$TrailingMiscDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$XMLDeclDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <com/sun/xml/internal/stream/XMLBufferListener.h>
#include <java/io/EOFException.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef COMMENTSTRING
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#undef DOCTYPE
#undef DOCUMENT_SCANNER
#undef DOCUMENT_SCANNER_PROPERTY
#undef DTD_SCANNER
#undef DTD_SCANNER_PROPERTY
#undef ENTITY_SKIPPED
#undef FALSE
#undef FEATURE_DEFAULTS
#undef IGNORE_EXTERNAL_DTD
#undef LOAD_EXTERNAL_DTD
#undef LOAD_EXTERNAL_DTD_FEATURE
#undef NAMESPACES
#undef NAMESPACE_CONTEXT
#undef NAMESPACE_CONTEXT_PROPERTY
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef SCANNER_STATE_DTD_EXTERNAL
#undef SCANNER_STATE_DTD_EXTERNAL_DECLS
#undef SCANNER_STATE_DTD_INTERNAL_DECLS
#undef SCANNER_STATE_NO_SUCH_ELEMENT_EXCEPTION
#undef SCANNER_STATE_PROLOG
#undef SCANNER_STATE_TERMINATED
#undef SCANNER_STATE_TEXT_DECL
#undef SCANNER_STATE_TRAILING_MISC
#undef SCANNER_STATE_XML_DECL
#undef START_DOCUMENT
#undef SUPPORT_DTD
#undef TRUE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef ZEPHYR_PROPERTY_PREFIX

using $BooleanArray = $Array<::java::lang::Boolean>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $ExternalSubsetResolver = ::com::sun::org::apache::xerces::internal::impl::ExternalSubsetResolver;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLDTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentFragmentScannerImpl$Driver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver;
using $XMLDocumentFragmentScannerImpl$FragmentContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$FragmentContentDriver;
using $XMLDocumentScannerImpl$ContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$ContentDriver;
using $XMLDocumentScannerImpl$PrologDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$PrologDriver;
using $XMLDocumentScannerImpl$TrailingMiscDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$TrailingMiscDriver;
using $XMLDocumentScannerImpl$XMLDeclDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$XMLDeclDriver;
using $XMLEntityHandler = ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLScanner = ::com::sun::org::apache::xerces::internal::impl::XMLScanner;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $1XMLDTDDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLDTDScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $Entity = ::com::sun::xml::internal::stream::Entity;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $XMLBufferListener = ::com::sun::xml::internal::stream::XMLBufferListener;
using $EOFException = ::java::io::EOFException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLDocumentScannerImpl_FieldInfo_[] = {
	{"SCANNER_STATE_XML_DECL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentScannerImpl, SCANNER_STATE_XML_DECL)},
	{"SCANNER_STATE_PROLOG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentScannerImpl, SCANNER_STATE_PROLOG)},
	{"SCANNER_STATE_TRAILING_MISC", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentScannerImpl, SCANNER_STATE_TRAILING_MISC)},
	{"SCANNER_STATE_DTD_INTERNAL_DECLS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentScannerImpl, SCANNER_STATE_DTD_INTERNAL_DECLS)},
	{"SCANNER_STATE_DTD_EXTERNAL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentScannerImpl, SCANNER_STATE_DTD_EXTERNAL)},
	{"SCANNER_STATE_DTD_EXTERNAL_DECLS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentScannerImpl, SCANNER_STATE_DTD_EXTERNAL_DECLS)},
	{"SCANNER_STATE_NO_SUCH_ELEMENT_EXCEPTION", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLDocumentScannerImpl, SCANNER_STATE_NO_SUCH_ELEMENT_EXCEPTION)},
	{"DOCUMENT_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, DOCUMENT_SCANNER)},
	{"LOAD_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, LOAD_EXTERNAL_DTD)},
	{"DISALLOW_DOCTYPE_DECL_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, DISALLOW_DOCTYPE_DECL_FEATURE)},
	{"DTD_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, DTD_SCANNER)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, VALIDATION_MANAGER)},
	{"NAMESPACE_CONTEXT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, NAMESPACE_CONTEXT)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, PROPERTY_DEFAULTS)},
	{"fDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fDTDScanner)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fValidationManager)},
	{"fDTDDecl", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fDTDDecl)},
	{"fReadingDTD", "Z", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fReadingDTD)},
	{"fAddedListener", "Z", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fAddedListener)},
	{"fDoctypeName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fDoctypeName)},
	{"fDoctypePublicId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fDoctypePublicId)},
	{"fDoctypeSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fDoctypeSystemId)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fNamespaceContext)},
	{"fLoadExternalDTD", "Z", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fLoadExternalDTD)},
	{"fSeenDoctypeDecl", "Z", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fSeenDoctypeDecl)},
	{"fScanEndElement", "Z", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fScanEndElement)},
	{"fXMLDeclDriver", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fXMLDeclDriver)},
	{"fPrologDriver", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fPrologDriver)},
	{"fDTDDriver", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fDTDDriver)},
	{"fTrailingMiscDriver", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fTrailingMiscDriver)},
	{"fStartPos", "I", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fStartPos)},
	{"fEndPos", "I", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fEndPos)},
	{"fSeenInternalSubset", "Z", nullptr, $PROTECTED, $field(XMLDocumentScannerImpl, fSeenInternalSubset)},
	{"fStrings", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLDocumentScannerImpl, fStrings)},
	{"fExternalSubsetSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PRIVATE, $field(XMLDocumentScannerImpl, fExternalSubsetSource)},
	{"fDTDDescription", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription;", nullptr, $PRIVATE | $FINAL, $field(XMLDocumentScannerImpl, fDTDDescription)},
	{"DOCTYPE", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, DOCTYPE)},
	{"COMMENTSTRING", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDocumentScannerImpl, COMMENTSTRING)},
	{}
};

$MethodInfo _XMLDocumentScannerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLDocumentScannerImpl, init$, void)},
	{"createContentDriver", "()Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver;", nullptr, $PROTECTED, $virtualMethod(XMLDocumentScannerImpl, createContentDriver, $XMLDocumentFragmentScannerImpl$Driver*)},
	{"endEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, endEntity, void, $String*, $Augmentations*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getCharacterEncodingScheme", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, getCharacterEncodingScheme, $String*)},
	{"getDTDDecl", "()Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, getDTDDecl, $XMLStringBuffer*)},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, getFeatureDefault, $Boolean*, $String*)},
	{"getNamespaceContext", "()Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, getNamespaceContext, $NamespaceContext*)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, getRecognizedProperties, $StringArray*)},
	{"getScannerStateName", "(I)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XMLDocumentScannerImpl, getScannerStateName, $String*, int32_t)},
	{"getScannetState", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, getScannetState, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"refresh", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, refresh, void, int32_t)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, reset, void, $PropertyManager*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"scanDoctypeDecl", "(Z)Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentScannerImpl, scanDoctypeDecl, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setEndDTDScanState", "()V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentScannerImpl, setEndDTDScanState, void)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, setInputSource, void, $XMLInputSource*), "java.io.IOException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl, startEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _XMLDocumentScannerImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$TrailingMiscDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "TrailingMiscDriver", $PROTECTED | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "ContentDriver", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$DTDDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "DTDDriver", $PROTECTED | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$PrologDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "PrologDriver", $PROTECTED | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$XMLDeclDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "XMLDeclDriver", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _XMLDocumentScannerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl",
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl",
	nullptr,
	_XMLDocumentScannerImpl_FieldInfo_,
	_XMLDocumentScannerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentScannerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$TrailingMiscDriver,com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver,com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$DTDDriver,com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$PrologDriver,com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$XMLDeclDriver"
};

$Object* allocate$XMLDocumentScannerImpl($Class* clazz) {
	return $of($alloc(XMLDocumentScannerImpl));
}

$String* XMLDocumentScannerImpl::DOCUMENT_SCANNER = nullptr;
$String* XMLDocumentScannerImpl::LOAD_EXTERNAL_DTD = nullptr;
$String* XMLDocumentScannerImpl::DISALLOW_DOCTYPE_DECL_FEATURE = nullptr;
$String* XMLDocumentScannerImpl::DTD_SCANNER = nullptr;
$String* XMLDocumentScannerImpl::VALIDATION_MANAGER = nullptr;
$String* XMLDocumentScannerImpl::NAMESPACE_CONTEXT = nullptr;
$StringArray* XMLDocumentScannerImpl::RECOGNIZED_FEATURES = nullptr;
$BooleanArray* XMLDocumentScannerImpl::FEATURE_DEFAULTS = nullptr;
$StringArray* XMLDocumentScannerImpl::RECOGNIZED_PROPERTIES = nullptr;
$ObjectArray* XMLDocumentScannerImpl::PROPERTY_DEFAULTS = nullptr;
$chars* XMLDocumentScannerImpl::DOCTYPE = nullptr;
$chars* XMLDocumentScannerImpl::COMMENTSTRING = nullptr;

void XMLDocumentScannerImpl::init$() {
	$XMLDocumentFragmentScannerImpl::init$();
	$set(this, fDTDScanner, nullptr);
	$set(this, fDTDDecl, nullptr);
	this->fReadingDTD = false;
	this->fAddedListener = false;
	$set(this, fNamespaceContext, $new($NamespaceSupport));
	this->fLoadExternalDTD = true;
	$set(this, fXMLDeclDriver, $new($XMLDocumentScannerImpl$XMLDeclDriver, this));
	$set(this, fPrologDriver, $new($XMLDocumentScannerImpl$PrologDriver, this));
	$set(this, fDTDDriver, nullptr);
	$set(this, fTrailingMiscDriver, $new($XMLDocumentScannerImpl$TrailingMiscDriver, this));
	this->fStartPos = 0;
	this->fEndPos = 0;
	this->fSeenInternalSubset = false;
	$set(this, fStrings, $new($StringArray, 3));
	$set(this, fExternalSubsetSource, nullptr);
	$set(this, fDTDDescription, $new($XMLDTDDescription, nullptr, nullptr, nullptr, nullptr, nullptr));
}

void XMLDocumentScannerImpl::setInputSource($XMLInputSource* inputSource) {
	$nc(this->fEntityManager)->setEntityHandler(this);
	$nc(this->fEntityManager)->startDocumentEntity(inputSource);
	setScannerState($XMLEvent::START_DOCUMENT);
}

int32_t XMLDocumentScannerImpl::getScannetState() {
	return this->fScannerState;
}

void XMLDocumentScannerImpl::reset($PropertyManager* propertyManager) {
	$useLocalCurrentObjectStackCache();
	$XMLDocumentFragmentScannerImpl::reset(propertyManager);
	$set(this, fDoctypeName, nullptr);
	$set(this, fDoctypePublicId, nullptr);
	$set(this, fDoctypeSystemId, nullptr);
	this->fSeenDoctypeDecl = false;
	$nc(this->fNamespaceContext)->reset();
	$init($XMLInputFactory);
	this->fSupportDTD = $nc(($cast($Boolean, $($nc(propertyManager)->getProperty($XMLInputFactory::SUPPORT_DTD)))))->booleanValue();
	$init($Constants);
	this->fLoadExternalDTD = !$nc(($cast($Boolean, $(propertyManager->getProperty($$str({$Constants::ZEPHYR_PROPERTY_PREFIX, $Constants::IGNORE_EXTERNAL_DTD}))))))->booleanValue();
	setScannerState($XMLEvent::START_DOCUMENT);
	setDriver(this->fXMLDeclDriver);
	this->fSeenInternalSubset = false;
	if (this->fDTDScanner != nullptr) {
		$nc(($cast($XMLDTDScannerImpl, this->fDTDScanner)))->reset(propertyManager);
	}
	this->fEndPos = 0;
	this->fStartPos = 0;
	if (this->fDTDDecl != nullptr) {
		$nc(this->fDTDDecl)->clear();
	}
}

void XMLDocumentScannerImpl::reset($XMLComponentManager* componentManager) {
	$XMLDocumentFragmentScannerImpl::reset(componentManager);
	$set(this, fDoctypeName, nullptr);
	$set(this, fDoctypePublicId, nullptr);
	$set(this, fDoctypeSystemId, nullptr);
	this->fSeenDoctypeDecl = false;
	$set(this, fExternalSubsetSource, nullptr);
	this->fLoadExternalDTD = $nc(componentManager)->getFeature(XMLDocumentScannerImpl::LOAD_EXTERNAL_DTD, true);
	this->fDisallowDoctype = componentManager->getFeature(XMLDocumentScannerImpl::DISALLOW_DOCTYPE_DECL_FEATURE, false);
	$init($XMLScanner);
	this->fNamespaces = componentManager->getFeature($XMLScanner::NAMESPACES, true);
	this->fSeenInternalSubset = false;
	$set(this, fDTDScanner, $cast($XMLDTDScanner, componentManager->getProperty(XMLDocumentScannerImpl::DTD_SCANNER)));
	$set(this, fValidationManager, $cast($ValidationManager, componentManager->getProperty(XMLDocumentScannerImpl::VALIDATION_MANAGER, nullptr)));
	try {
		$set(this, fNamespaceContext, $cast($NamespaceContext, componentManager->getProperty(XMLDocumentScannerImpl::NAMESPACE_CONTEXT)));
	} catch ($XMLConfigurationException& e) {
	}
	if (this->fNamespaceContext == nullptr) {
		$set(this, fNamespaceContext, $new($NamespaceSupport));
	}
	$nc(this->fNamespaceContext)->reset();
	this->fEndPos = 0;
	this->fStartPos = 0;
	if (this->fDTDDecl != nullptr) {
		$nc(this->fDTDDecl)->clear();
	}
	setScannerState(XMLDocumentScannerImpl::SCANNER_STATE_XML_DECL);
	setDriver(this->fXMLDeclDriver);
}

$StringArray* XMLDocumentScannerImpl::getRecognizedFeatures() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, featureIds, $XMLDocumentFragmentScannerImpl::getRecognizedFeatures());
	int32_t length = featureIds != nullptr ? $nc(featureIds)->length : 0;
	$var($StringArray, combinedFeatureIds, $new($StringArray, length + $nc(XMLDocumentScannerImpl::RECOGNIZED_FEATURES)->length));
	if (featureIds != nullptr) {
		$System::arraycopy(featureIds, 0, combinedFeatureIds, 0, featureIds->length);
	}
	$System::arraycopy(XMLDocumentScannerImpl::RECOGNIZED_FEATURES, 0, combinedFeatureIds, length, $nc(XMLDocumentScannerImpl::RECOGNIZED_FEATURES)->length);
	return combinedFeatureIds;
}

void XMLDocumentScannerImpl::setFeature($String* featureId, bool state) {
	$XMLDocumentFragmentScannerImpl::setFeature(featureId, state);
	$init($Constants);
	if ($nc(featureId)->startsWith($Constants::XERCES_FEATURE_PREFIX)) {
		int32_t var$0 = featureId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_FEATURE_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::LOAD_EXTERNAL_DTD_FEATURE)->length();
		if (var$1 && featureId->endsWith($Constants::LOAD_EXTERNAL_DTD_FEATURE)) {
			this->fLoadExternalDTD = state;
			return;
		} else {
			bool var$3 = suffixLength == $nc($Constants::DISALLOW_DOCTYPE_DECL_FEATURE)->length();
			if (var$3 && featureId->endsWith($Constants::DISALLOW_DOCTYPE_DECL_FEATURE)) {
				this->fDisallowDoctype = state;
				return;
			}
		}
	}
}

$StringArray* XMLDocumentScannerImpl::getRecognizedProperties() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, propertyIds, $XMLDocumentFragmentScannerImpl::getRecognizedProperties());
	int32_t length = propertyIds != nullptr ? $nc(propertyIds)->length : 0;
	$var($StringArray, combinedPropertyIds, $new($StringArray, length + $nc(XMLDocumentScannerImpl::RECOGNIZED_PROPERTIES)->length));
	if (propertyIds != nullptr) {
		$System::arraycopy(propertyIds, 0, combinedPropertyIds, 0, propertyIds->length);
	}
	$System::arraycopy(XMLDocumentScannerImpl::RECOGNIZED_PROPERTIES, 0, combinedPropertyIds, length, $nc(XMLDocumentScannerImpl::RECOGNIZED_PROPERTIES)->length);
	return combinedPropertyIds;
}

void XMLDocumentScannerImpl::setProperty($String* propertyId, Object$* value) {
	$XMLDocumentFragmentScannerImpl::setProperty(propertyId, value);
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::DTD_SCANNER_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::DTD_SCANNER_PROPERTY)) {
			$set(this, fDTDScanner, $cast($XMLDTDScanner, value));
		}
		bool var$2 = suffixLength == $nc($Constants::NAMESPACE_CONTEXT_PROPERTY)->length();
		if (var$2 && propertyId->endsWith($Constants::NAMESPACE_CONTEXT_PROPERTY)) {
			if (value != nullptr) {
				$set(this, fNamespaceContext, $cast($NamespaceContext, value));
			}
		}
		return;
	}
}

$Boolean* XMLDocumentScannerImpl::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XMLDocumentScannerImpl::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XMLDocumentScannerImpl::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XMLDocumentScannerImpl::FEATURE_DEFAULTS)->get(i);
		}
	}
	return $XMLDocumentFragmentScannerImpl::getFeatureDefault(featureId);
}

$Object* XMLDocumentScannerImpl::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XMLDocumentScannerImpl::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XMLDocumentScannerImpl::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XMLDocumentScannerImpl::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of($XMLDocumentFragmentScannerImpl::getPropertyDefault(propertyId));
}

void XMLDocumentScannerImpl::startEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	$XMLDocumentFragmentScannerImpl::startEntity(name, identifier, encoding, augs);
	$nc(this->fEntityScanner)->registerListener(this);
	bool var$0 = !$nc(name)->equals("[xml]"_s);
	if (var$0 && $nc(this->fEntityScanner)->isExternal()) {
		$init($Constants);
		if (augs == nullptr || !$nc(($cast($Boolean, $($nc(augs)->getItem($Constants::ENTITY_SKIPPED)))))->booleanValue()) {
			setScannerState($XMLDocumentFragmentScannerImpl::SCANNER_STATE_TEXT_DECL);
		}
	}
	if (this->fDocumentHandler != nullptr && $nc(name)->equals("[xml]"_s)) {
		$nc(this->fDocumentHandler)->startDocument(this->fEntityScanner, encoding, this->fNamespaceContext, nullptr);
	}
}

void XMLDocumentScannerImpl::endEntity($String* name, $Augmentations* augs) {
	$XMLDocumentFragmentScannerImpl::endEntity(name, augs);
	if ($nc(name)->equals("[xml]"_s)) {
		if (this->fMarkupDepth == 0 && this->fDriver == this->fTrailingMiscDriver) {
			setScannerState($XMLDocumentFragmentScannerImpl::SCANNER_STATE_TERMINATED);
		} else {
			$throwNew($EOFException);
		}
	}
}

$XMLStringBuffer* XMLDocumentScannerImpl::getDTDDecl() {
	$var($Entity, entity, $nc(this->fEntityScanner)->getCurrentEntity());
	$nc(this->fDTDDecl)->append($nc(($cast($Entity$ScannedEntity, entity)))->ch, this->fStartPos, this->fEndPos - this->fStartPos);
	if (this->fSeenInternalSubset) {
		$nc(this->fDTDDecl)->append("]>"_s);
	}
	return this->fDTDDecl;
}

$String* XMLDocumentScannerImpl::getCharacterEncodingScheme() {
	return this->fDeclaredEncoding;
}

int32_t XMLDocumentScannerImpl::next() {
	return $nc(this->fDriver)->next();
}

$NamespaceContext* XMLDocumentScannerImpl::getNamespaceContext() {
	return this->fNamespaceContext;
}

$XMLDocumentFragmentScannerImpl$Driver* XMLDocumentScannerImpl::createContentDriver() {
	return $new($XMLDocumentScannerImpl$ContentDriver, this);
}

bool XMLDocumentScannerImpl::scanDoctypeDecl(bool supportDTD) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->fEntityScanner)->skipSpaces()) {
		reportFatalError("MSG_SPACE_REQUIRED_BEFORE_ROOT_ELEMENT_TYPE_IN_DOCTYPEDECL"_s, nullptr);
	}
	$init($XMLScanner$NameType);
	$set(this, fDoctypeName, $nc(this->fEntityScanner)->scanName($XMLScanner$NameType::DOCTYPE));
	if (this->fDoctypeName == nullptr) {
		reportFatalError("MSG_ROOT_ELEMENT_TYPE_REQUIRED"_s, nullptr);
	}
	if ($nc(this->fEntityScanner)->skipSpaces()) {
		scanExternalID(this->fStrings, false);
		$set(this, fDoctypeSystemId, $nc(this->fStrings)->get(0));
		$set(this, fDoctypePublicId, $nc(this->fStrings)->get(1));
		$nc(this->fEntityScanner)->skipSpaces();
	}
	this->fHasExternalDTD = this->fDoctypeSystemId != nullptr;
	if (supportDTD && !this->fHasExternalDTD && this->fExternalSubsetResolver != nullptr) {
		$nc(this->fDTDDescription)->setValues(nullptr, nullptr, $($nc($($nc(this->fEntityManager)->getCurrentResourceIdentifier()))->getExpandedSystemId()), nullptr);
		$nc(this->fDTDDescription)->setRootName(this->fDoctypeName);
		$set(this, fExternalSubsetSource, $nc(this->fExternalSubsetResolver)->getExternalSubset(this->fDTDDescription));
		this->fHasExternalDTD = this->fExternalSubsetSource != nullptr;
	}
	if (supportDTD && this->fDocumentHandler != nullptr) {
		if (this->fExternalSubsetSource == nullptr) {
			$nc(this->fDocumentHandler)->doctypeDecl(this->fDoctypeName, this->fDoctypePublicId, this->fDoctypeSystemId, nullptr);
		} else {
			$var($String, var$0, this->fDoctypeName);
			$var($String, var$1, $nc(this->fExternalSubsetSource)->getPublicId());
			$nc(this->fDocumentHandler)->doctypeDecl(var$0, var$1, $($nc(this->fExternalSubsetSource)->getSystemId()), nullptr);
		}
	}
	bool internalSubset = true;
	if (!$nc(this->fEntityScanner)->skipChar(u'[', nullptr)) {
		internalSubset = false;
		$nc(this->fEntityScanner)->skipSpaces();
		if (!$nc(this->fEntityScanner)->skipChar(u'>', nullptr)) {
			reportFatalError("DoctypedeclUnterminated"_s, $$new($ObjectArray, {$of(this->fDoctypeName)}));
		}
		--this->fMarkupDepth;
	}
	return internalSubset;
}

void XMLDocumentScannerImpl::setEndDTDScanState() {
	setScannerState(XMLDocumentScannerImpl::SCANNER_STATE_PROLOG);
	setDriver(this->fPrologDriver);
	$nc(this->fEntityManager)->setEntityHandler(this);
	this->fReadingDTD = false;
}

$String* XMLDocumentScannerImpl::getScannerStateName(int32_t state) {
	switch (state) {
	case XMLDocumentScannerImpl::SCANNER_STATE_XML_DECL:
		{
			return "SCANNER_STATE_XML_DECL"_s;
		}
	case XMLDocumentScannerImpl::SCANNER_STATE_PROLOG:
		{
			return "SCANNER_STATE_PROLOG"_s;
		}
	case XMLDocumentScannerImpl::SCANNER_STATE_TRAILING_MISC:
		{
			return "SCANNER_STATE_TRAILING_MISC"_s;
		}
	case XMLDocumentScannerImpl::SCANNER_STATE_DTD_INTERNAL_DECLS:
		{
			return "SCANNER_STATE_DTD_INTERNAL_DECLS"_s;
		}
	case XMLDocumentScannerImpl::SCANNER_STATE_DTD_EXTERNAL:
		{
			return "SCANNER_STATE_DTD_EXTERNAL"_s;
		}
	case XMLDocumentScannerImpl::SCANNER_STATE_DTD_EXTERNAL_DECLS:
		{
			return "SCANNER_STATE_DTD_EXTERNAL_DECLS"_s;
		}
	}
	return $XMLDocumentFragmentScannerImpl::getScannerStateName(state);
}

void XMLDocumentScannerImpl::refresh(int32_t refreshPosition) {
	$XMLDocumentFragmentScannerImpl::refresh(refreshPosition);
	if (this->fReadingDTD) {
		$var($Entity, entity, $nc(this->fEntityScanner)->getCurrentEntity());
		if ($instanceOf($Entity$ScannedEntity, entity)) {
			this->fEndPos = $nc(($cast($Entity$ScannedEntity, entity)))->position;
		}
		$nc(this->fDTDDecl)->append($nc(($cast($Entity$ScannedEntity, entity)))->ch, this->fStartPos, this->fEndPos - this->fStartPos);
		this->fStartPos = refreshPosition;
	}
}

void clinit$XMLDocumentScannerImpl($Class* class$) {
	$init($Constants);
	$assignStatic(XMLDocumentScannerImpl::DOCUMENT_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DOCUMENT_SCANNER_PROPERTY}));
	$assignStatic(XMLDocumentScannerImpl::LOAD_EXTERNAL_DTD, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::LOAD_EXTERNAL_DTD_FEATURE}));
	$assignStatic(XMLDocumentScannerImpl::DISALLOW_DOCTYPE_DECL_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DISALLOW_DOCTYPE_DECL_FEATURE}));
	$assignStatic(XMLDocumentScannerImpl::DTD_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_SCANNER_PROPERTY}));
	$assignStatic(XMLDocumentScannerImpl::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(XMLDocumentScannerImpl::NAMESPACE_CONTEXT, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY}));
	$assignStatic(XMLDocumentScannerImpl::RECOGNIZED_FEATURES, $new($StringArray, {
		XMLDocumentScannerImpl::LOAD_EXTERNAL_DTD,
		XMLDocumentScannerImpl::DISALLOW_DOCTYPE_DECL_FEATURE
	}));
	$init($Boolean);
	$assignStatic(XMLDocumentScannerImpl::FEATURE_DEFAULTS, $new($BooleanArray, {
		$Boolean::TRUE,
		$Boolean::FALSE
	}));
	$assignStatic(XMLDocumentScannerImpl::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XMLDocumentScannerImpl::DTD_SCANNER,
		XMLDocumentScannerImpl::VALIDATION_MANAGER
	}));
	$assignStatic(XMLDocumentScannerImpl::PROPERTY_DEFAULTS, $new($ObjectArray, {
		($Object*)nullptr,
		($Object*)nullptr
	}));
	$assignStatic(XMLDocumentScannerImpl::DOCTYPE, $new($chars, {
		u'D',
		u'O',
		u'C',
		u'T',
		u'Y',
		u'P',
		u'E'
	}));
	$assignStatic(XMLDocumentScannerImpl::COMMENTSTRING, $new($chars, {
		u'-',
		u'-'
	}));
}

XMLDocumentScannerImpl::XMLDocumentScannerImpl() {
}

$Class* XMLDocumentScannerImpl::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentScannerImpl, name, initialize, &_XMLDocumentScannerImpl_ClassInfo_, clinit$XMLDocumentScannerImpl, allocate$XMLDocumentScannerImpl);
	return class$;
}

$Class* XMLDocumentScannerImpl::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com