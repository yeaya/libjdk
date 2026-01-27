#include <com/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache$CachedDocument.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $DocumentCache = ::com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Source = ::javax::xml::transform::Source;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _DocumentCache$CachedDocument_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache;", nullptr, $FINAL | $SYNTHETIC, $field(DocumentCache$CachedDocument, this$0)},
	{"_firstReferenced", "J", nullptr, $PRIVATE, $field(DocumentCache$CachedDocument, _firstReferenced)},
	{"_lastReferenced", "J", nullptr, $PRIVATE, $field(DocumentCache$CachedDocument, _lastReferenced)},
	{"_accessCount", "J", nullptr, $PRIVATE, $field(DocumentCache$CachedDocument, _accessCount)},
	{"_lastModified", "J", nullptr, $PRIVATE, $field(DocumentCache$CachedDocument, _lastModified)},
	{"_lastChecked", "J", nullptr, $PRIVATE, $field(DocumentCache$CachedDocument, _lastChecked)},
	{"_buildTime", "J", nullptr, $PRIVATE, $field(DocumentCache$CachedDocument, _buildTime)},
	{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM;", nullptr, $PRIVATE, $field(DocumentCache$CachedDocument, _dom)},
	{}
};

$MethodInfo _DocumentCache$CachedDocument_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, init$, void, $DocumentCache*, $String*)},
	{"getAccessCount", "()J", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, getAccessCount, int64_t)},
	{"getDocument", "()Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, getDocument, $DOM*)},
	{"getEstimatedSize", "()J", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, getEstimatedSize, int64_t)},
	{"getFirstReferenced", "()J", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, getFirstReferenced, int64_t)},
	{"getLastChecked", "()J", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, getLastChecked, int64_t)},
	{"getLastModified", "()J", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, getLastModified, int64_t)},
	{"getLastReferenced", "()J", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, getLastReferenced, int64_t)},
	{"getLatency", "()J", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, getLatency, int64_t)},
	{"incAccessCount", "()V", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, incAccessCount, void)},
	{"loadDocument", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, loadDocument, void, $String*)},
	{"setLastChecked", "(J)V", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, setLastChecked, void, int64_t)},
	{"setLastModified", "(J)V", nullptr, $PUBLIC, $method(DocumentCache$CachedDocument, setLastModified, void, int64_t)},
	{}
};

$InnerClassInfo _DocumentCache$CachedDocument_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache$CachedDocument", "com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache", "CachedDocument", $PUBLIC | $FINAL},
	{}
};

$ClassInfo _DocumentCache$CachedDocument_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache$CachedDocument",
	"java.lang.Object",
	nullptr,
	_DocumentCache$CachedDocument_FieldInfo_,
	_DocumentCache$CachedDocument_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentCache$CachedDocument_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache"
};

$Object* allocate$DocumentCache$CachedDocument($Class* clazz) {
	return $of($alloc(DocumentCache$CachedDocument));
}

void DocumentCache$CachedDocument::init$($DocumentCache* this$0, $String* uri) {
	$set(this, this$0, this$0);
	$set(this, _dom, nullptr);
	int64_t stamp = $System::currentTimeMillis();
	this->_firstReferenced = stamp;
	this->_lastReferenced = stamp;
	this->_accessCount = 0;
	loadDocument(uri);
	this->_buildTime = $System::currentTimeMillis() - stamp;
}

void DocumentCache$CachedDocument::loadDocument($String* uri) {
	$useLocalCurrentObjectStackCache();
	try {
		int64_t stamp = $System::currentTimeMillis();
		$set(this, _dom, $cast($DOMEnhancedForDTM, $nc(this->this$0->_dtmManager)->getDTM($$new($SAXSource, this->this$0->_reader, $$new($InputSource, uri)), false, nullptr, true, false)));
		$nc(this->_dom)->setDocumentURI(uri);
		int64_t thisTime = $System::currentTimeMillis() - stamp;
		if (this->_buildTime > 0) {
			this->_buildTime = (int64_t)((uint64_t)(this->_buildTime + thisTime) >> 1);
		} else {
			this->_buildTime = thisTime;
		}
	} catch ($Exception& e) {
		$set(this, _dom, nullptr);
	}
}

$DOM* DocumentCache$CachedDocument::getDocument() {
	return (this->_dom);
}

int64_t DocumentCache$CachedDocument::getFirstReferenced() {
	return (this->_firstReferenced);
}

int64_t DocumentCache$CachedDocument::getLastReferenced() {
	return (this->_lastReferenced);
}

int64_t DocumentCache$CachedDocument::getAccessCount() {
	return (this->_accessCount);
}

void DocumentCache$CachedDocument::incAccessCount() {
	++this->_accessCount;
}

int64_t DocumentCache$CachedDocument::getLastModified() {
	return (this->_lastModified);
}

void DocumentCache$CachedDocument::setLastModified(int64_t t) {
	this->_lastModified = t;
}

int64_t DocumentCache$CachedDocument::getLatency() {
	return (this->_buildTime);
}

int64_t DocumentCache$CachedDocument::getLastChecked() {
	return (this->_lastChecked);
}

void DocumentCache$CachedDocument::setLastChecked(int64_t t) {
	this->_lastChecked = t;
}

int64_t DocumentCache$CachedDocument::getEstimatedSize() {
	if (this->_dom != nullptr) {
		return ($nc(this->_dom)->getSize() << 5);
	} else {
		return (0);
	}
}

DocumentCache$CachedDocument::DocumentCache$CachedDocument() {
}

$Class* DocumentCache$CachedDocument::load$($String* name, bool initialize) {
	$loadClass(DocumentCache$CachedDocument, name, initialize, &_DocumentCache$CachedDocument_ClassInfo_, allocate$DocumentCache$CachedDocument);
	return class$;
}

$Class* DocumentCache$CachedDocument::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com