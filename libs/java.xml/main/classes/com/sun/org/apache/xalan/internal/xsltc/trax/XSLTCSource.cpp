#include <com/sun/org/apache/xalan/internal/xsltc/trax/XSLTCSource.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMWSFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>
#include <java/lang/ThreadLocal.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef XSLTC_SOURCE_ERR

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $DOMWSFilter = ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMWSFilter;
using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMManagerDefault = ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Source = ::javax::xml::transform::Source;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _XSLTCSource_FieldInfo_[] = {
	{"_systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSLTCSource, _systemId)},
	{"_source", "Ljavax/xml/transform/Source;", nullptr, $PRIVATE, $field(XSLTCSource, _source)},
	{"_dom", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;>;", $PRIVATE, $field(XSLTCSource, _dom)},
	{}
};

$MethodInfo _XSLTCSource_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XSLTCSource, init$, void, $String*)},
	{"<init>", "(Ljavax/xml/transform/Source;)V", nullptr, $PUBLIC, $method(XSLTCSource, init$, void, $Source*)},
	{"getDOM", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PROTECTED, $method(XSLTCSource, getDOM, $DOM*, $XSLTCDTMManager*, $AbstractTranslet*), "org.xml.sax.SAXException"},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSLTCSource, getSystemId, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XSLTCSource, setSystemId, void, $String*)},
	{}
};

$ClassInfo _XSLTCSource_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.XSLTCSource",
	"java.lang.Object",
	"javax.xml.transform.Source",
	_XSLTCSource_FieldInfo_,
	_XSLTCSource_MethodInfo_
};

$Object* allocate$XSLTCSource($Class* clazz) {
	return $of($alloc(XSLTCSource));
}

void XSLTCSource::init$($String* systemId) {
	$set(this, _systemId, nullptr);
	$set(this, _source, nullptr);
	$set(this, _dom, $new($ThreadLocal));
	$set(this, _systemId, systemId);
}

void XSLTCSource::init$($Source* source) {
	$set(this, _systemId, nullptr);
	$set(this, _source, nullptr);
	$set(this, _dom, $new($ThreadLocal));
	$set(this, _source, source);
}

void XSLTCSource::setSystemId($String* systemId) {
	$set(this, _systemId, systemId);
	if (this->_source != nullptr) {
		$nc(this->_source)->setSystemId(systemId);
	}
}

$String* XSLTCSource::getSystemId() {
	if (this->_source != nullptr) {
		return $nc(this->_source)->getSystemId();
	} else {
		return (this->_systemId);
	}
}

$DOM* XSLTCSource::getDOM($XSLTCDTMManager* dtmManager$renamed, $AbstractTranslet* translet) {
	$useLocalCurrentObjectStackCache();
	$var($XSLTCDTMManager, dtmManager, dtmManager$renamed);
	$var($SAXImpl, idom, $cast($SAXImpl, $nc(this->_dom)->get()));
	if (idom != nullptr) {
		if (dtmManager != nullptr) {
			idom->migrateTo(dtmManager);
		}
	} else {
		$var($Source, source, this->_source);
		if (source == nullptr) {
			if (this->_systemId != nullptr && $nc(this->_systemId)->length() > 0) {
				$assign(source, $new($StreamSource, this->_systemId));
			} else {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::XSLTC_SOURCE_ERR));
				$throwNew($SAXException, $(err->toString()));
			}
		}
		$var($DOMWSFilter, wsfilter, nullptr);
		if (translet != nullptr && $instanceOf($StripFilter, translet)) {
			$assign(wsfilter, $new($DOMWSFilter, translet));
		}
		bool hasIdCall = (translet != nullptr) ? $nc(translet)->hasIdCall() : false;
		if (dtmManager == nullptr) {
			$assign(dtmManager, $XSLTCDTMManager::newInstance());
		}
		$assign(idom, $cast($SAXImpl, $nc(dtmManager)->getDTM(source, true, wsfilter, false, false, hasIdCall)));
		$var($String, systemId, getSystemId());
		if (systemId != nullptr) {
			$nc(idom)->setDocumentURI(systemId);
		}
		$nc(this->_dom)->set(idom);
	}
	return idom;
}

XSLTCSource::XSLTCSource() {
}

$Class* XSLTCSource::load$($String* name, bool initialize) {
	$loadClass(XSLTCSource, name, initialize, &_XSLTCSource_ClassInfo_, allocate$XSLTCSource);
	return class$;
}

$Class* XSLTCSource::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com