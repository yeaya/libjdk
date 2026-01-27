#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Filter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Xerces.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTMdefaultNamespaceDeclarationNode.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2RTFDTM.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xml/internal/utils/XMLReaderManager.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef DEBUG
#undef DUMPTREE
#undef ER_COULD_NOT_RESOLVE_NODE
#undef ER_NODE_NON_NULL
#undef ER_NOT_SUPPORTED
#undef ER_NO_DTMIDS_AVAIL
#undef IDENT_DTM_NODE_BITS
#undef IDENT_MAX_DTMS
#undef NULL

using $DTMArray = $Array<::com::sun::org::apache::xml::internal::dtm::DTM>;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMException = ::com::sun::org::apache::xml::internal::dtm::DTMException;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMNodeProxy = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeProxy;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $IncrementalSAXSource = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource;
using $IncrementalSAXSource_Filter = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource_Filter;
using $IncrementalSAXSource_Xerces = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource_Xerces;
using $DOM2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::dom2dtm::DOM2DTM;
using $DOM2DTMdefaultNamespaceDeclarationNode = ::com::sun::org::apache::xml::internal::dtm::ref::dom2dtm::DOM2DTMdefaultNamespaceDeclarationNode;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $SAX2RTFDTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2RTFDTM;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $SuballocatedIntVector = ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XMLReaderManager = ::com::sun::org::apache::xml::internal::utils::XMLReaderManager;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $PrintStream = ::java::io::PrintStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $Source = ::javax::xml::transform::Source;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMManagerDefault_FieldInfo_[] = {
	{"DUMPTREE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTMManagerDefault, DUMPTREE)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTMManagerDefault, DEBUG)},
	{"m_dtms", "[Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PROTECTED, $field(DTMManagerDefault, m_dtms)},
	{"m_dtm_offsets", "[I", nullptr, 0, $field(DTMManagerDefault, m_dtm_offsets)},
	{"m_readerManager", "Lcom/sun/org/apache/xml/internal/utils/XMLReaderManager;", nullptr, $PROTECTED, $field(DTMManagerDefault, m_readerManager)},
	{"m_defaultHandler", "Lorg/xml/sax/helpers/DefaultHandler;", nullptr, $PROTECTED, $field(DTMManagerDefault, m_defaultHandler)},
	{"m_expandedNameTable", "Lcom/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable;", nullptr, $PRIVATE, $field(DTMManagerDefault, m_expandedNameTable)},
	{}
};

$MethodInfo _DTMManagerDefault_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTMManagerDefault, init$, void)},
	{"addDTM", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, addDTM, void, $DTM*, int32_t)},
	{"addDTM", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;II)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, addDTM, void, $DTM*, int32_t, int32_t)},
	{"createDTMIterator", "(ILcom/sun/org/apache/xml/internal/dtm/DTMFilter;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, createDTMIterator, $DTMIterator*, int32_t, $DTMFilter*, bool)},
	{"createDTMIterator", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, createDTMIterator, $DTMIterator*, $String*, $PrefixResolver*)},
	{"createDTMIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, createDTMIterator, $DTMIterator*, int32_t)},
	{"createDTMIterator", "(Ljava/lang/Object;I)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, createDTMIterator, $DTMIterator*, Object$*, int32_t)},
	{"createDocumentFragment", "()Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, createDocumentFragment, $DTM*)},
	{"getDTM", "(Ljavax/xml/transform/Source;ZLcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;ZZ)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, getDTM, $DTM*, $Source*, bool, $DTMWSFilter*, bool, bool)},
	{"getDTM", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, getDTM, $DTM*, int32_t)},
	{"getDTMHandleFromNode", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, getDTMHandleFromNode, int32_t, $Node*)},
	{"getDTMIdentity", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, getDTMIdentity, int32_t, $DTM*)},
	{"getExpandedNameTable", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;)Lcom/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable;", nullptr, $PUBLIC, $virtualMethod(DTMManagerDefault, getExpandedNameTable, $ExpandedNameTable*, $DTM*)},
	{"getFirstFreeDTMID", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, getFirstFreeDTMID, int32_t)},
	{"getXMLReader", "(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, getXMLReader, $XMLReader*, $Source*)},
	{"release", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;Z)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, release, bool, $DTM*, bool)},
	{"releaseXMLReader", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMManagerDefault, releaseXMLReader, void, $XMLReader*)},
	{}
};

$ClassInfo _DTMManagerDefault_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMManagerDefault",
	"com.sun.org.apache.xml.internal.dtm.DTMManager",
	nullptr,
	_DTMManagerDefault_FieldInfo_,
	_DTMManagerDefault_MethodInfo_
};

$Object* allocate$DTMManagerDefault($Class* clazz) {
	return $of($alloc(DTMManagerDefault));
}

void DTMManagerDefault::addDTM($DTM* dtm, int32_t id) {
	$synchronized(this) {
		addDTM(dtm, id, 0);
	}
}

void DTMManagerDefault::addDTM($DTM* dtm, int32_t id, int32_t offset) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (id >= $DTMManager::IDENT_MAX_DTMS) {
			$init($XMLErrorResources);
			$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_NO_DTMIDS_AVAIL, nullptr)));
		}
		int32_t oldlen = $nc(this->m_dtms)->length;
		if (oldlen <= id) {
			int32_t newlen = $Math::min((id + 256), $DTMManager::IDENT_MAX_DTMS);
			$var($DTMArray, new_m_dtms, $new($DTMArray, newlen));
			$System::arraycopy(this->m_dtms, 0, new_m_dtms, 0, oldlen);
			$set(this, m_dtms, new_m_dtms);
			$var($ints, new_m_dtm_offsets, $new($ints, newlen));
			$System::arraycopy(this->m_dtm_offsets, 0, new_m_dtm_offsets, 0, oldlen);
			$set(this, m_dtm_offsets, new_m_dtm_offsets);
		}
		$nc(this->m_dtms)->set(id, dtm);
		$nc(this->m_dtm_offsets)->set(id, offset);
		$nc(dtm)->documentRegistration();
	}
}

int32_t DTMManagerDefault::getFirstFreeDTMID() {
	$synchronized(this) {
		int32_t n = $nc(this->m_dtms)->length;
		for (int32_t i = 1; i < n; ++i) {
			if (nullptr == $nc(this->m_dtms)->get(i)) {
				return i;
			}
		}
		return n;
	}
}

void DTMManagerDefault::init$() {
	$DTMManager::init$();
	$set(this, m_dtms, $new($DTMArray, 256));
	$set(this, m_dtm_offsets, $new($ints, 256));
	$set(this, m_readerManager, nullptr);
	$set(this, m_defaultHandler, $new($DefaultHandler));
	$set(this, m_expandedNameTable, $new($ExpandedNameTable));
}

$DTM* DTMManagerDefault::getDTM($Source* source, bool unique, $DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($XMLStringFactory, xstringFactory, this->m_xsf);
		int32_t dtmPos = getFirstFreeDTMID();
		int32_t documentID = $sl(dtmPos, $DTMManager::IDENT_DTM_NODE_BITS);
		if ((nullptr != source) && $instanceOf($DOMSource, source)) {
			$var($DOM2DTM, dtm, $new($DOM2DTM, this, $cast($DOMSource, source), documentID, whiteSpaceFilter, xstringFactory, doIndexing));
			addDTM(dtm, dtmPos, 0);
			return dtm;
		} else {
			bool isSAXSource = (nullptr != source) ? ($instanceOf($SAXSource, source)) : true;
			bool isStreamSource = (nullptr != source) ? ($instanceOf($StreamSource, source)) : false;
			if (isSAXSource || isStreamSource) {
				$var($XMLReader, reader, nullptr);
				$var($SAX2DTM, dtm, nullptr);
				{
					$var($Throwable, var$0, nullptr);
					$var($DTM, var$2, nullptr);
					bool return$1 = false;
					try {
						$var($InputSource, xmlSource, nullptr);
						if (nullptr == source) {
							$assign(xmlSource, nullptr);
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
						if (source == nullptr && unique && !incremental && !doIndexing) {
							$assign(dtm, $new($SAX2RTFDTM, this, source, documentID, whiteSpaceFilter, xstringFactory, doIndexing));
						} else {
							$assign(dtm, $new($SAX2DTM, this, source, documentID, whiteSpaceFilter, xstringFactory, doIndexing));
						}
						addDTM(dtm, dtmPos, 0);
						bool haveXercesParser = (nullptr != reader) && ($nc($($of(reader)->getClass()->getName()))->equals("com.sun.org.apache.xerces.internal.parsers.SAXParser"_s));
						if (haveXercesParser) {
							incremental = true;
						}
						if (this->m_incremental && incremental) {
							$var($IncrementalSAXSource, coParser, nullptr);
							if (haveXercesParser) {
								try {
									$assign(coParser, $new($IncrementalSAXSource_Xerces));
								} catch ($Exception& ex) {
									ex->printStackTrace();
									$assign(coParser, nullptr);
								}
							}
							if (coParser == nullptr) {
								if (nullptr == reader) {
									$assign(coParser, $new($IncrementalSAXSource_Filter));
								} else {
									$var($IncrementalSAXSource_Filter, filter, $new($IncrementalSAXSource_Filter));
									filter->setXMLReader(reader);
									$assign(coParser, filter);
								}
							}
							$nc(dtm)->setIncrementalSAXSource(coParser);
							if (nullptr == xmlSource) {
								$assign(var$2, dtm);
								return$1 = true;
								goto $finally;
							}
							if (nullptr == reader->getErrorHandler()) {
								reader->setErrorHandler(dtm);
							}
							reader->setDTDHandler(dtm);
							try {
								$nc(coParser)->startParse(xmlSource);
							} catch ($RuntimeException& re) {
								dtm->clearCoRoutine();
								$throw(re);
							} catch ($Exception& e) {
								dtm->clearCoRoutine();
								$throwNew($WrappedRuntimeException, e);
							}
						} else {
							if (nullptr == reader) {
								$assign(var$2, dtm);
								return$1 = true;
								goto $finally;
							}
							reader->setContentHandler(dtm);
							reader->setDTDHandler(dtm);
							if (nullptr == reader->getErrorHandler()) {
								reader->setErrorHandler(dtm);
							}
							try {
								reader->setProperty("http://xml.org/sax/properties/lexical-handler"_s, dtm);
							} catch ($SAXNotRecognizedException& e) {
							} catch ($SAXNotSupportedException& e) {
							}
							try {
								reader->parse(xmlSource);
							} catch ($RuntimeException& re) {
								$nc(dtm)->clearCoRoutine();
								$throw(re);
							} catch ($Exception& e) {
								$nc(dtm)->clearCoRoutine();
								$throwNew($WrappedRuntimeException, e);
							}
						}
						$assign(var$2, dtm);
						return$1 = true;
						goto $finally;
					} catch ($Throwable& var$3) {
						$assign(var$0, var$3);
					} $finally: {
						if (reader != nullptr && !(this->m_incremental && incremental)) {
							reader->setContentHandler(this->m_defaultHandler);
							reader->setDTDHandler(this->m_defaultHandler);
							reader->setErrorHandler(this->m_defaultHandler);
							try {
								reader->setProperty("http://xml.org/sax/properties/lexical-handler"_s, nullptr);
							} catch ($Exception& e) {
							}
						}
						releaseXMLReader(reader);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
					if (return$1) {
						return var$2;
					}
				}
			} else {
				$init($XMLErrorResources);
				$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_NOT_SUPPORTED, $$new($ObjectArray, {$of(source)}))));
			}
		}
	}
	$shouldNotReachHere();
}

int32_t DTMManagerDefault::getDTMHandleFromNode($Node* node) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (nullptr == node) {
			$init($XMLErrorResources);
			$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_NODE_NON_NULL, nullptr)));
		}
		if ($instanceOf($DTMNodeProxy, node)) {
			return $nc(($cast($DTMNodeProxy, node)))->getDTMNodeNumber();
		} else {
			int32_t max = $nc(this->m_dtms)->length;
			for (int32_t i = 0; i < max; ++i) {
				$var($DTM, thisDTM, $nc(this->m_dtms)->get(i));
				if ((nullptr != thisDTM) && $instanceOf($DOM2DTM, thisDTM)) {
					int32_t handle = $nc(($cast($DOM2DTM, thisDTM)))->getHandleOfNode(node);
					if (handle != $DTM::NULL) {
						return handle;
					}
				}
			}
			$var($Node, root, node);
			$var($Node, p, ($nc(root)->getNodeType() == $Node::ATTRIBUTE_NODE) ? static_cast<$Node*>($nc(($cast($Attr, root)))->getOwnerElement()) : $nc(root)->getParentNode());
			for (; p != nullptr; $assign(p, $nc(p)->getParentNode())) {
				$assign(root, p);
			}
			$var($DOM2DTM, dtm, $cast($DOM2DTM, getDTM($$new($DOMSource, root), false, nullptr, true, true)));
			int32_t handle = 0;
			if ($instanceOf($DOM2DTMdefaultNamespaceDeclarationNode, node)) {
				handle = $nc(dtm)->getHandleOfNode($($nc(($cast($Attr, node)))->getOwnerElement()));
				int32_t var$0 = handle;
				$var($String, var$1, $nc(node)->getNamespaceURI());
				handle = dtm->getAttributeNode(var$0, var$1, $(node->getLocalName()));
			} else {
				handle = $nc(dtm)->getHandleOfNode(node);
			}
			if ($DTM::NULL == handle) {
				$init($XMLErrorResources);
				$throwNew($RuntimeException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_COULD_NOT_RESOLVE_NODE, nullptr)));
			}
			return handle;
		}
	}
}

$XMLReader* DTMManagerDefault::getXMLReader($Source* inputSource) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		try {
			$var($XMLReader, reader, ($instanceOf($SAXSource, inputSource)) ? $nc(($cast($SAXSource, inputSource)))->getXMLReader() : ($XMLReader*)nullptr);
			if (nullptr == reader) {
				if (this->m_readerManager == nullptr) {
					$set(this, m_readerManager, $XMLReaderManager::getInstance($DTMManager::overrideDefaultParser()));
				}
				$assign(reader, $nc(this->m_readerManager)->getXMLReader());
			}
			return reader;
		} catch ($SAXException& se) {
			$throwNew($DTMException, $(se->getMessage()), se);
		}
	}
	$shouldNotReachHere();
}

void DTMManagerDefault::releaseXMLReader($XMLReader* reader) {
	$synchronized(this) {
		if (this->m_readerManager != nullptr) {
			$nc(this->m_readerManager)->releaseXMLReader(reader);
		}
	}
}

$DTM* DTMManagerDefault::getDTM(int32_t nodeHandle) {
	$synchronized(this) {
		try {
			return $nc(this->m_dtms)->get($usr(nodeHandle, $DTMManager::IDENT_DTM_NODE_BITS));
		} catch ($ArrayIndexOutOfBoundsException& e) {
			if (nodeHandle == $DTM::NULL) {
				return nullptr;
			} else {
				$throw(e);
			}
		}
	}
	$shouldNotReachHere();
}

int32_t DTMManagerDefault::getDTMIdentity($DTM* dtm) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($instanceOf($DTMDefaultBase, dtm)) {
			$var($DTMDefaultBase, dtmdb, $cast($DTMDefaultBase, dtm));
			if ($equals($nc(dtmdb)->getManager(), this)) {
				return $nc($(dtmdb->getDTMIDs()))->elementAt(0);
			} else {
				return -1;
			}
		}
		int32_t n = $nc(this->m_dtms)->length;
		for (int32_t i = 0; i < n; ++i) {
			$var($DTM, tdtm, $nc(this->m_dtms)->get(i));
			if (tdtm == dtm && $nc(this->m_dtm_offsets)->get(i) == 0) {
				return $sl(i, $DTMManager::IDENT_DTM_NODE_BITS);
			}
		}
		return -1;
	}
}

bool DTMManagerDefault::release($DTM* dtm, bool shouldHardDelete) {
	$synchronized(this) {
		if ($instanceOf($SAX2DTM, dtm)) {
			$nc(($cast($SAX2DTM, dtm)))->clearCoRoutine();
		}
		if ($instanceOf($DTMDefaultBase, dtm)) {
			$var($SuballocatedIntVector, ids, $nc(($cast($DTMDefaultBase, dtm)))->getDTMIDs());
			for (int32_t i = $nc(ids)->size() - 1; i >= 0; --i) {
				$nc(this->m_dtms)->set($usr(ids->elementAt(i), $DTMManager::IDENT_DTM_NODE_BITS), nullptr);
			}
		} else {
			int32_t i = getDTMIdentity(dtm);
			if (i >= 0) {
				$nc(this->m_dtms)->set($usr(i, $DTMManager::IDENT_DTM_NODE_BITS), nullptr);
			}
		}
		$nc(dtm)->documentRelease();
		return true;
	}
}

$DTM* DTMManagerDefault::createDocumentFragment() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		try {
			$var($DocumentBuilderFactory, dbf, $JdkXmlUtils::getDOMFactory($DTMManager::overrideDefaultParser()));
			$var($DocumentBuilder, db, $nc(dbf)->newDocumentBuilder());
			$var($Document, doc, $nc(db)->newDocument());
			$var($Node, df, $nc(doc)->createDocumentFragment());
			return getDTM($$new($DOMSource, df), true, nullptr, false, false);
		} catch ($Exception& e) {
			$throwNew($DTMException, static_cast<$Throwable*>(e));
		}
	}
	$shouldNotReachHere();
}

$DTMIterator* DTMManagerDefault::createDTMIterator(int32_t whatToShow, $DTMFilter* filter, bool entityReferenceExpansion) {
	$synchronized(this) {
		return nullptr;
	}
}

$DTMIterator* DTMManagerDefault::createDTMIterator($String* xpathString, $PrefixResolver* presolver) {
	$synchronized(this) {
		return nullptr;
	}
}

$DTMIterator* DTMManagerDefault::createDTMIterator(int32_t node) {
	$synchronized(this) {
		return nullptr;
	}
}

$DTMIterator* DTMManagerDefault::createDTMIterator(Object$* xpathCompiler, int32_t pos) {
	$synchronized(this) {
		return nullptr;
	}
}

$ExpandedNameTable* DTMManagerDefault::getExpandedNameTable($DTM* dtm) {
	return this->m_expandedNameTable;
}

DTMManagerDefault::DTMManagerDefault() {
}

$Class* DTMManagerDefault::load$($String* name, bool initialize) {
	$loadClass(DTMManagerDefault, name, initialize, &_DTMManagerDefault_ClassInfo_, allocate$DTMManagerDefault);
	return class$;
}

$Class* DTMManagerDefault::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com