#include <com/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache$CachedDocument.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Constants.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <java/io/File.h>
#include <java/io/PrintWriter.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/AbstractMap.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/parsers/SAXParserFactory.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef NAMESPACES_SUPPORT_ERR
#undef NAMESPACE_FEATURE
#undef REFRESH_INTERVAL

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $DocumentCache$CachedDocument = ::com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache$CachedDocument;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Constants;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $File = ::java::io::File;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AbstractMap = ::java::util::AbstractMap;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $SAXParserFactory = ::javax::xml::parsers::SAXParserFactory;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _DocumentCache_FieldInfo_[] = {
	{"_size", "I", nullptr, $PRIVATE, $field(DocumentCache, _size)},
	{"_references", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache$CachedDocument;>;", $PRIVATE, $field(DocumentCache, _references)},
	{"_URIs", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(DocumentCache, _URIs)},
	{"_count", "I", nullptr, $PRIVATE, $field(DocumentCache, _count)},
	{"_current", "I", nullptr, $PRIVATE, $field(DocumentCache, _current)},
	{"_parser", "Ljavax/xml/parsers/SAXParser;", nullptr, $PRIVATE, $field(DocumentCache, _parser)},
	{"_reader", "Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE, $field(DocumentCache, _reader)},
	{"_dtmManager", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;", nullptr, $PRIVATE, $field(DocumentCache, _dtmManager)},
	{"REFRESH_INTERVAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocumentCache, REFRESH_INTERVAL)},
	{}
};

$MethodInfo _DocumentCache_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(DocumentCache, init$, void, int32_t), "org.xml.sax.SAXException"},
	{"<init>", "(ILcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;)V", nullptr, $PUBLIC, $method(DocumentCache, init$, void, int32_t, $XSLTCDTMManager*), "org.xml.sax.SAXException"},
	{"getLastModified", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $FINAL, $method(DocumentCache, getLastModified, int64_t, $String*)},
	{"getStatistics", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(DocumentCache, getStatistics, void, $PrintWriter*)},
	{"insertDocument", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache$CachedDocument;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(DocumentCache, insertDocument, void, $String*, $DocumentCache$CachedDocument*)},
	{"lookupDocument", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache$CachedDocument;", nullptr, $PRIVATE, $method(DocumentCache, lookupDocument, $DocumentCache$CachedDocument*, $String*)},
	{"replaceDocument", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache$CachedDocument;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(DocumentCache, replaceDocument, void, $String*, $DocumentCache$CachedDocument*)},
	{"retrieveDocument", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/Translet;)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $virtualMethod(DocumentCache, retrieveDocument, $DOM*, $String*, $String*, $Translet*)},
	{}
};

$InnerClassInfo _DocumentCache_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache$CachedDocument", "com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache", "CachedDocument", $PUBLIC | $FINAL},
	{}
};

$ClassInfo _DocumentCache_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.DOMCache",
	_DocumentCache_FieldInfo_,
	_DocumentCache_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache$CachedDocument"
};

$Object* allocate$DocumentCache($Class* clazz) {
	return $of($alloc(DocumentCache));
}

void DocumentCache::init$(int32_t size) {
	DocumentCache::init$(size, nullptr);
	try {
		$set(this, _dtmManager, $XSLTCDTMManager::createNewDTMManagerInstance());
	} catch ($Exception& e) {
		$throwNew($SAXException, $cast($Exception, e));
	}
}

void DocumentCache::init$(int32_t size, $XSLTCDTMManager* dtmManager) {
	$set(this, _dtmManager, dtmManager);
	this->_count = 0;
	this->_current = 0;
	this->_size = size;
	$set(this, _references, $new($HashMap, this->_size + 2));
	$set(this, _URIs, $new($StringArray, this->_size));
	try {
		$var($SAXParserFactory, factory, $SAXParserFactory::newInstance());
		try {
			$init($Constants);
			$nc(factory)->setFeature($Constants::NAMESPACE_FEATURE, true);
		} catch ($Exception& e) {
			$nc(factory)->setNamespaceAware(true);
		}
		$set(this, _parser, $nc(factory)->newSAXParser());
		$set(this, _reader, $nc(this->_parser)->getXMLReader());
	} catch ($ParserConfigurationException& e) {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::NAMESPACES_SUPPORT_ERR);
	}
}

int64_t DocumentCache::getLastModified($String* uri) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($URL, url, $new($URL, uri));
		$var($URLConnection, connection, url->openConnection());
		int64_t timestamp = $nc(connection)->getLastModified();
		if (timestamp == 0) {
			if ("file"_s->equals($(url->getProtocol()))) {
				$var($File, localfile, $nc($($Paths::get($(url->toURI()))))->toFile());
				timestamp = $nc(localfile)->lastModified();
			}
		}
		return (timestamp);
	} catch ($Exception& e) {
		return ($System::currentTimeMillis());
	}
	$shouldNotReachHere();
}

$DocumentCache$CachedDocument* DocumentCache::lookupDocument($String* uri) {
	return ($cast($DocumentCache$CachedDocument, $nc(this->_references)->get(uri)));
}

void DocumentCache::insertDocument($String* uri, $DocumentCache$CachedDocument* doc) {
	$synchronized(this) {
		if (this->_count < this->_size) {
			$nc(this->_URIs)->set(this->_count++, uri);
			this->_current = 0;
		} else {
			$nc(this->_references)->remove($nc(this->_URIs)->get(this->_current));
			$nc(this->_URIs)->set(this->_current, uri);
			if (++this->_current >= this->_size) {
				this->_current = 0;
			}
		}
		$nc(this->_references)->put(uri, doc);
	}
}

void DocumentCache::replaceDocument($String* uri, $DocumentCache$CachedDocument* doc) {
	$synchronized(this) {
		if (doc == nullptr) {
			insertDocument(uri, doc);
		} else {
			$nc(this->_references)->put(uri, doc);
		}
	}
}

$DOM* DocumentCache::retrieveDocument($String* baseURI, $String* href, $Translet* trs) {
	$useLocalCurrentObjectStackCache();
	$var($DocumentCache$CachedDocument, doc, nullptr);
	$var($String, uri, href);
	if (baseURI != nullptr && !baseURI->equals(""_s)) {
		try {
			$assign(uri, $SystemIDResolver::getAbsoluteURI(uri, baseURI));
		} catch ($TransformerException& te) {
		}
	}
	if (($assign(doc, lookupDocument(uri))) == nullptr) {
		$assign(doc, $new($DocumentCache$CachedDocument, this, uri));
		if (doc == nullptr) {
			return nullptr;
		}
		doc->setLastModified(getLastModified(uri));
		insertDocument(uri, doc);
	} else {
		int64_t now = $System::currentTimeMillis();
		int64_t chk = $nc(doc)->getLastChecked();
		doc->setLastChecked(now);
		if (now > (chk + DocumentCache::REFRESH_INTERVAL)) {
			doc->setLastChecked(now);
			int64_t last = getLastModified(uri);
			if (last > doc->getLastModified()) {
				$assign(doc, $new($DocumentCache$CachedDocument, this, uri));
				if (doc == nullptr) {
					return nullptr;
				}
				doc->setLastModified(getLastModified(uri));
				replaceDocument(uri, doc);
			}
		}
	}
	$var($DOM, dom, $nc(doc)->getDocument());
	if (dom == nullptr) {
		return nullptr;
	}
	doc->incAccessCount();
	$var($AbstractTranslet, translet, $cast($AbstractTranslet, trs));
	$nc(translet)->prepassDocument(dom);
	return (doc->getDocument());
}

void DocumentCache::getStatistics($PrintWriter* out) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->println("<h2>DOM cache statistics</h2><center><table border=\"2\"><tr><td><b>Document URI</b></td><td><center><b>Build time</b></center></td><td><center><b>Access count</b></center></td><td><center><b>Last accessed</b></center></td><td><center><b>Last modified</b></center></td></tr>"_s);
	for (int32_t i = 0; i < this->_count; ++i) {
		$var($DocumentCache$CachedDocument, doc, $cast($DocumentCache$CachedDocument, $nc(this->_references)->get($nc(this->_URIs)->get(i))));
		out->print($$str({"<tr><td><a href=\""_s, $nc(this->_URIs)->get(i), "\"><font size=-1>"_s, $nc(this->_URIs)->get(i), "</font></a></td>"_s}));
		out->print($$str({"<td><center>"_s, $$str($nc(doc)->getLatency()), "ms</center></td>"_s}));
		out->print($$str({"<td><center>"_s, $$str($nc(doc)->getAccessCount()), "</center></td>"_s}));
		out->print($$str({"<td><center>"_s, ($$new($Date, $nc(doc)->getLastReferenced())), "</center></td>"_s}));
		out->print($$str({"<td><center>"_s, ($$new($Date, $nc(doc)->getLastModified())), "</center></td>"_s}));
		out->println("</tr>"_s);
	}
	out->println("</table></center>"_s);
}

DocumentCache::DocumentCache() {
}

$Class* DocumentCache::load$($String* name, bool initialize) {
	$loadClass(DocumentCache, name, initialize, &_DocumentCache_ClassInfo_, allocate$DocumentCache);
	return class$;
}

$Class* DocumentCache::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com