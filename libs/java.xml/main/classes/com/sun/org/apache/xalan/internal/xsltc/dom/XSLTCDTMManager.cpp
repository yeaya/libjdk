#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMBuilder.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/ExtendedSAX.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/DOM2SAX.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXEvent2SAX.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXStream2SAX.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <javax/xml/transform/stax/StAXSource.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef DEBUG
#undef DEFAULT_BLOCKSIZE
#undef DUMPTREE
#undef ER_NOT_SUPPORTED
#undef IDENT_DTM_NODE_BITS

using $ExtendedSAX = ::com::sun::org::apache::xalan::internal::xsltc::dom::ExtendedSAX;
using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $DOM2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::DOM2SAX;
using $StAXEvent2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXEvent2SAX;
using $StAXStream2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXStream2SAX;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMException = ::com::sun::org::apache::xml::internal::dtm::DTMException;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMManagerDefault = ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $Source = ::javax::xml::transform::Source;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $StAXSource = ::javax::xml::transform::stax::StAXSource;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _XSLTCDTMManager_FieldInfo_[] = {
	{"DUMPTREE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSLTCDTMManager, DUMPTREE)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSLTCDTMManager, DEBUG)},
	{}
};

$MethodInfo _XSLTCDTMManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSLTCDTMManager, init$, void)},
	{"createNewDTMManagerInstance", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSLTCDTMManager, createNewDTMManagerInstance, XSLTCDTMManager*)},
	{"getDTM", "(Ljavax/xml/transform/Source;ZLcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;ZZ)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XSLTCDTMManager, getDTM, $DTM*, $Source*, bool, $DTMWSFilter*, bool, bool)},
	{"getDTM", "(Ljavax/xml/transform/Source;ZLcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;ZZZ)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XSLTCDTMManager, getDTM, $DTM*, $Source*, bool, $DTMWSFilter*, bool, bool, bool)},
	{"getDTM", "(Ljavax/xml/transform/Source;ZLcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;ZZZZ)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XSLTCDTMManager, getDTM, $DTM*, $Source*, bool, $DTMWSFilter*, bool, bool, bool, bool)},
	{"getDTM", "(Ljavax/xml/transform/Source;ZLcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;ZZZIZ)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XSLTCDTMManager, getDTM, $DTM*, $Source*, bool, $DTMWSFilter*, bool, bool, bool, int32_t, bool)},
	{"getDTM", "(Ljavax/xml/transform/Source;ZLcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;ZZZIZZ)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XSLTCDTMManager, getDTM, $DTM*, $Source*, bool, $DTMWSFilter*, bool, bool, bool, int32_t, bool, bool)},
	{"newInstance", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSLTCDTMManager, newInstance, XSLTCDTMManager*)},
	{}
};

$ClassInfo _XSLTCDTMManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.XSLTCDTMManager",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMManagerDefault",
	nullptr,
	_XSLTCDTMManager_FieldInfo_,
	_XSLTCDTMManager_MethodInfo_
};

$Object* allocate$XSLTCDTMManager($Class* clazz) {
	return $of($alloc(XSLTCDTMManager));
}

void XSLTCDTMManager::init$() {
	$DTMManagerDefault::init$();
}

XSLTCDTMManager* XSLTCDTMManager::newInstance() {
	$init(XSLTCDTMManager);
	return $new(XSLTCDTMManager);
}

XSLTCDTMManager* XSLTCDTMManager::createNewDTMManagerInstance() {
	$init(XSLTCDTMManager);
	return newInstance();
}

$DTM* XSLTCDTMManager::getDTM($Source* source, bool unique, $DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing) {
	return getDTM(source, unique, whiteSpaceFilter, incremental, doIndexing, false, 0, true, false);
}

$DTM* XSLTCDTMManager::getDTM($Source* source, bool unique, $DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing, bool buildIdIndex) {
	return getDTM(source, unique, whiteSpaceFilter, incremental, doIndexing, false, 0, buildIdIndex, false);
}

$DTM* XSLTCDTMManager::getDTM($Source* source, bool unique, $DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing, bool buildIdIndex, bool newNameTable) {
	return getDTM(source, unique, whiteSpaceFilter, incremental, doIndexing, false, 0, buildIdIndex, newNameTable);
}

$DTM* XSLTCDTMManager::getDTM($Source* source, bool unique, $DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing, bool hasUserReader, int32_t size, bool buildIdIndex) {
	return getDTM(source, unique, whiteSpaceFilter, incremental, doIndexing, hasUserReader, size, buildIdIndex, false);
}

$DTM* XSLTCDTMManager::getDTM($Source* source, bool unique, $DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing, bool hasUserReader, int32_t size, bool buildIdIndex, bool newNameTable) {
	$useLocalCurrentObjectStackCache();
	int32_t dtmPos = getFirstFreeDTMID();
	int32_t documentID = $sl(dtmPos, $DTMManager::IDENT_DTM_NODE_BITS);
	if ((nullptr != source) && $instanceOf($StAXSource, source)) {
		$var($StAXSource, staxSource, $cast($StAXSource, source));
		$var($StAXEvent2SAX, staxevent2sax, nullptr);
		$var($StAXStream2SAX, staxStream2SAX, nullptr);
		if (staxSource->getXMLEventReader() != nullptr) {
			$var($XMLEventReader, xmlEventReader, staxSource->getXMLEventReader());
			$assign(staxevent2sax, $new($StAXEvent2SAX, xmlEventReader));
		} else if (staxSource->getXMLStreamReader() != nullptr) {
			$var($XMLStreamReader, xmlStreamReader, staxSource->getXMLStreamReader());
			$assign(staxStream2SAX, $new($StAXStream2SAX, xmlStreamReader));
		}
		$var($SAXImpl, dtm, nullptr);
		if (size <= 0) {
			$assign(dtm, $new($SAXImpl, this, source, documentID, whiteSpaceFilter, nullptr, doIndexing, $DTMDefaultBase::DEFAULT_BLOCKSIZE, buildIdIndex, newNameTable));
		} else {
			$assign(dtm, $new($SAXImpl, this, source, documentID, whiteSpaceFilter, nullptr, doIndexing, size, buildIdIndex, newNameTable));
		}
		$nc(dtm)->setDocumentURI($(source->getSystemId()));
		addDTM(dtm, dtmPos, 0);
		try {
			if (staxevent2sax != nullptr) {
				staxevent2sax->setContentHandler(static_cast<$ContentHandler*>(static_cast<$SAX2DTM*>(static_cast<$SAX2DTM2*>(dtm))));
				staxevent2sax->parse();
			} else if (staxStream2SAX != nullptr) {
				staxStream2SAX->setContentHandler(static_cast<$ContentHandler*>(static_cast<$SAX2DTM*>(static_cast<$SAX2DTM2*>(dtm))));
				staxStream2SAX->parse();
			}
		} catch ($RuntimeException& re) {
			$throw(re);
		} catch ($Exception& e) {
			$throwNew($WrappedRuntimeException, e);
		}
		return dtm;
	} else if ((nullptr != source) && $instanceOf($DOMSource, source)) {
		$var($DOMSource, domsrc, $cast($DOMSource, source));
		$var($Node, node, domsrc->getNode());
		$var($DOM2SAX, dom2sax, $new($DOM2SAX, node));
		$var($SAXImpl, dtm, nullptr);
		if (size <= 0) {
			$assign(dtm, $new($SAXImpl, this, source, documentID, whiteSpaceFilter, nullptr, doIndexing, $DTMDefaultBase::DEFAULT_BLOCKSIZE, buildIdIndex, newNameTable));
		} else {
			$assign(dtm, $new($SAXImpl, this, source, documentID, whiteSpaceFilter, nullptr, doIndexing, size, buildIdIndex, newNameTable));
		}
		$nc(dtm)->setDocumentURI($(source->getSystemId()));
		addDTM(dtm, dtmPos, 0);
		dom2sax->setContentHandler(static_cast<$ContentHandler*>(static_cast<$SAX2DTM*>(static_cast<$SAX2DTM2*>(dtm))));
		try {
			dom2sax->parse();
		} catch ($RuntimeException& re) {
			$throw(re);
		} catch ($Exception& e) {
			$throwNew($WrappedRuntimeException, e);
		}
		return dtm;
	} else {
		bool isSAXSource = (nullptr != source) ? ($instanceOf($SAXSource, source)) : true;
		bool isStreamSource = (nullptr != source) ? ($instanceOf($StreamSource, source)) : false;
		if (isSAXSource || isStreamSource) {
			$var($XMLReader, reader, nullptr);
			$var($InputSource, xmlSource, nullptr);
			if (nullptr == source) {
				$assign(xmlSource, nullptr);
				$assign(reader, nullptr);
				hasUserReader = false;
			} else {
				$assign(reader, getXMLReader(source));
				$assign(xmlSource, $SAXSource::sourceToInputSource(source));
				$var($String, urlOfSource, $nc(xmlSource)->getSystemId());
				if (nullptr != urlOfSource) {
					try {
						$assign(urlOfSource, $SystemIDResolver::getAbsoluteURI(urlOfSource));
					} catch ($Exception& e) {
						$nc($System::err)->println($$str({"Can not absolutize URL: "_s, urlOfSource}));
					}
					xmlSource->setSystemId(urlOfSource);
				}
			}
			$var($SAXImpl, dtm, nullptr);
			if (size <= 0) {
				$assign(dtm, $new($SAXImpl, this, source, documentID, whiteSpaceFilter, nullptr, doIndexing, $DTMDefaultBase::DEFAULT_BLOCKSIZE, buildIdIndex, newNameTable));
			} else {
				$assign(dtm, $new($SAXImpl, this, source, documentID, whiteSpaceFilter, nullptr, doIndexing, size, buildIdIndex, newNameTable));
			}
			addDTM(dtm, dtmPos, 0);
			if (nullptr == reader) {
				return dtm;
			}
			$nc(reader)->setContentHandler($($nc(dtm)->getBuilder()));
			if (!hasUserReader || nullptr == reader->getDTDHandler()) {
				reader->setDTDHandler(static_cast<$DTDHandler*>(static_cast<$SAX2DTM*>(static_cast<$SAX2DTM2*>(dtm))));
			}
			if (!hasUserReader || nullptr == reader->getErrorHandler()) {
				reader->setErrorHandler(dtm);
			}
			try {
				reader->setProperty("http://xml.org/sax/properties/lexical-handler"_s, dtm);
			} catch ($SAXNotRecognizedException& e) {
			} catch ($SAXNotSupportedException& e) {
			}
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						reader->parse(xmlSource);
					} catch ($RuntimeException& re) {
						$throw(re);
					} catch ($Exception& e) {
						$throwNew($WrappedRuntimeException, e);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (!hasUserReader) {
						releaseXMLReader(reader);
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			return dtm;
		} else {
			$init($XMLErrorResources);
			$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_NOT_SUPPORTED, $$new($ObjectArray, {$of(source)}))));
		}
	}
}

XSLTCDTMManager::XSLTCDTMManager() {
}

$Class* XSLTCDTMManager::load$($String* name, bool initialize) {
	$loadClass(XSLTCDTMManager, name, initialize, &_XSLTCDTMManager_ClassInfo_, allocate$XSLTCDTMManager);
	return class$;
}

$Class* XSLTCDTMManager::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com