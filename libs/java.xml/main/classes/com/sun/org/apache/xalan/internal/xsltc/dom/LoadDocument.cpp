#include <com/sun/org/apache/xalan/internal/xsltc/dom/LoadDocument.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMCache.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/TransletException.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SingletonIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/EmptyIterator.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <java/io/FileNotFoundException.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Templates.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ACCESSING_XSLT_TARGET_ERR
#undef ACCESS_EXTERNAL_ALL
#undef END
#undef NAMESPACE_FEATURE
#undef NULL

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMCache = ::com::sun::org::apache::xalan::internal::xsltc::DOMCache;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $TransletException = ::com::sun::org::apache::xalan::internal::xsltc::TransletException;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $DOMAdapter = ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter;
using $MultiDOM = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM;
using $SingletonIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::SingletonIterator;
using $UnionIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $TemplatesImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $EmptyIterator = ::com::sun::org::apache::xml::internal::dtm::ref::EmptyIterator;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Source = ::javax::xml::transform::Source;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$String* LoadDocument::NAMESPACE_FEATURE = nullptr;

void LoadDocument::init$() {
}

$DTMAxisIterator* LoadDocument::documentF(Object$* arg1, $DTMAxisIterator* arg2, $String* xslURI, $AbstractTranslet* translet, $DOM* dom) {
	$init(LoadDocument);
	$useLocalObjectStack();
	$var($String, baseURI, nullptr);
	int32_t arg2FirstNode = $nc(arg2)->next();
	if (arg2FirstNode == $DTMAxisIterator::END) {
		return $EmptyIterator::getInstance();
	} else {
		$assign(baseURI, $nc(dom)->getDocumentURI(arg2FirstNode));
		if (!$SystemIDResolver::isAbsoluteURI(baseURI)) {
			$assign(baseURI, $SystemIDResolver::getAbsoluteURIFromRelative(baseURI));
		}
	}
	try {
		if ($instanceOf($String, arg1)) {
			if ($cast($String, arg1)->length() == 0) {
				return document(xslURI, ""_s, translet, dom);
			} else {
				return document($cast($String, arg1), baseURI, translet, dom);
			}
		} else if ($instanceOf($DTMAxisIterator, arg1)) {
			return document($cast($DTMAxisIterator, arg1), baseURI, translet, dom);
		} else {
			$var($String, err, $str({"document("_s, $($nc($of(arg1))->toString()), ")"_s}));
			$throwNew($IllegalArgumentException, err);
		}
	} catch ($Exception& e) {
		$throwNew($TransletException, e);
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* LoadDocument::documentF(Object$* arg, $String* xslURI$renamed, $AbstractTranslet* translet, $DOM* dom) {
	$init(LoadDocument);
	$useLocalObjectStack();
	$var($String, xslURI, xslURI$renamed);
	try {
		if ($instanceOf($String, arg)) {
			if (xslURI == nullptr) {
				$assign(xslURI, ""_s);
			}
			$var($String, baseURI, xslURI);
			if (!$SystemIDResolver::isAbsoluteURI(xslURI)) {
				$assign(baseURI, $SystemIDResolver::getAbsoluteURIFromRelative(xslURI));
			}
			$var($String, href, $cast($String, arg));
			if (href->length() == 0) {
				$assign(href, ""_s);
				$var($TemplatesImpl, templates, $cast($TemplatesImpl, $nc(translet)->getTemplates()));
				$var($DOM, sdom, nullptr);
				if (templates != nullptr) {
					$assign(sdom, templates->getStylesheetDOM());
				}
				if (sdom != nullptr) {
					return document(sdom, translet, dom);
				} else {
					return document(href, baseURI, translet, dom, true);
				}
			} else {
				return document(href, baseURI, translet, dom);
			}
		} else if ($instanceOf($DTMAxisIterator, arg)) {
			return document($cast($DTMAxisIterator, arg), nullptr, translet, dom);
		} else {
			$var($String, err, $str({"document("_s, $($nc($of(arg))->toString()), ")"_s}));
			$throwNew($IllegalArgumentException, err);
		}
	} catch ($Exception& e) {
		$throwNew($TransletException, e);
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* LoadDocument::document($String* uri, $String* base, $AbstractTranslet* translet, $DOM* dom) {
	$init(LoadDocument);
	return document(uri, base, translet, dom, false);
}

$DTMAxisIterator* LoadDocument::document($String* uri$renamed, $String* base, $AbstractTranslet* translet, $DOM* dom, bool cacheDOM) {
	$init(LoadDocument);
	$useLocalObjectStack();
	$var($String, uri, uri$renamed);
	try {
		$var($String, originalUri, uri);
		$var($MultiDOM, multiplexer, $cast($MultiDOM, dom));
		if (base != nullptr && !base->equals(""_s)) {
			$assign(uri, $SystemIDResolver::getAbsoluteURI(uri, base));
		}
		if (uri == nullptr || uri->equals(""_s)) {
			return ($EmptyIterator::getInstance());
		}
		int32_t mask = $nc(multiplexer)->getDocumentMask(uri);
		if (mask != -1) {
			$var($DOM, newDom, $$sure($DOMAdapter, multiplexer->getDOMAdapter(uri))->getDOMImpl());
			if ($instanceOf($DOMEnhancedForDTM, newDom)) {
				return $new($SingletonIterator, $cast($DOMEnhancedForDTM, newDom)->getDocument(), true);
			}
		}
		$var($DOMCache, cache, $nc(translet)->getDOMCache());
		$var($DOM, newdom, nullptr);
		mask = multiplexer->nextMask();
		if (cache != nullptr) {
			$assign(newdom, cache->retrieveDocument(base, originalUri, translet));
			if (newdom == nullptr) {
				$var($Exception, e, $new($FileNotFoundException, originalUri));
				$throwNew($TransletException, e);
			}
		} else {
			$init($JdkConstants);
			$var($String, accessError, $SecuritySupport::checkAccess(uri, $(translet->getAllowedProtocols()), $JdkConstants::ACCESS_EXTERNAL_ALL));
			if (accessError != nullptr) {
				$init($ErrorMsg);
				$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::ACCESSING_XSLT_TARGET_ERR, $($SecuritySupport::sanitizePath(uri)), accessError));
				$throwNew($Exception, $(msg->toString()));
			}
			$var($XSLTCDTMManager, dtmManager, $cast($XSLTCDTMManager, multiplexer->getDTMManager()));
			$var($Source, var$0, $new($StreamSource, uri));
			$var($DOMEnhancedForDTM, enhancedDOM, $cast($DOMEnhancedForDTM, $nc(dtmManager)->getDTM(var$0, false, nullptr, true, false, translet->hasIdCall(), cacheDOM)));
			$assign(newdom, enhancedDOM);
			if (cacheDOM) {
				$var($TemplatesImpl, templates, $cast($TemplatesImpl, translet->getTemplates()));
				if (templates != nullptr) {
					templates->setStylesheetDOM(enhancedDOM);
				}
			}
			translet->prepassDocument(enhancedDOM);
			$nc(enhancedDOM)->setDocumentURI(uri);
		}
		$var($DOMAdapter, domAdapter, translet->makeDOMAdapter(newdom));
		multiplexer->addDOMAdapter(domAdapter);
		translet->buildKeys(domAdapter, nullptr, nullptr, $nc(newdom)->getDocument());
		return $new($SingletonIterator, newdom->getDocument(), true);
	} catch ($Exception& e) {
		$throw(e);
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* LoadDocument::document($DTMAxisIterator* arg1, $String* baseURI$renamed, $AbstractTranslet* translet, $DOM* dom) {
	$init(LoadDocument);
	$useLocalObjectStack();
	$var($String, baseURI, baseURI$renamed);
	$var($UnionIterator, union$, $new($UnionIterator, dom));
	int32_t node = $DTM::NULL;
	while ((node = $nc(arg1)->next()) != $DTM::NULL) {
		$var($String, uri, $nc(dom)->getStringValueX(node));
		if (baseURI == nullptr) {
			$assign(baseURI, dom->getDocumentURI(node));
			if (!$SystemIDResolver::isAbsoluteURI(baseURI)) {
				$assign(baseURI, $SystemIDResolver::getAbsoluteURIFromRelative(baseURI));
			}
		}
		union$->addIterator($(document(uri, baseURI, translet, dom)));
	}
	return (union$);
}

$DTMAxisIterator* LoadDocument::document($DOM* newdom, $AbstractTranslet* translet, $DOM* dom) {
	$init(LoadDocument);
	$useLocalObjectStack();
	$var($DTMManager, dtmManager, $nc($cast($MultiDOM, dom))->getDTMManager());
	if (dtmManager != nullptr && $instanceOf($DTM, newdom)) {
		$cast($DTM, newdom)->migrateTo(dtmManager);
	}
	$nc(translet)->prepassDocument(newdom);
	$var($DOMAdapter, domAdapter, translet->makeDOMAdapter(newdom));
	$cast($MultiDOM, dom)->addDOMAdapter(domAdapter);
	translet->buildKeys(domAdapter, nullptr, nullptr, $nc(newdom)->getDocument());
	return $new($SingletonIterator, newdom->getDocument(), true);
}

LoadDocument::LoadDocument() {
}

void LoadDocument::clinit$($Class* clazz) {
	$assignStatic(LoadDocument::NAMESPACE_FEATURE, "http://xml.org/sax/features/namespaces"_s);
}

$Class* LoadDocument::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NAMESPACE_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LoadDocument, NAMESPACE_FEATURE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LoadDocument, init$, void)},
		{"document", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE | $STATIC, $staticMethod(LoadDocument, document, $DTMAxisIterator*, $String*, $String*, $AbstractTranslet*, $DOM*), "java.lang.Exception"},
		{"document", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE | $STATIC, $staticMethod(LoadDocument, document, $DTMAxisIterator*, $String*, $String*, $AbstractTranslet*, $DOM*, bool), "java.lang.Exception"},
		{"document", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE | $STATIC, $staticMethod(LoadDocument, document, $DTMAxisIterator*, $DTMAxisIterator*, $String*, $AbstractTranslet*, $DOM*), "java.lang.Exception"},
		{"document", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE | $STATIC, $staticMethod(LoadDocument, document, $DTMAxisIterator*, $DOM*, $AbstractTranslet*, $DOM*), "java.lang.Exception"},
		{"documentF", "(Ljava/lang/Object;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(LoadDocument, documentF, $DTMAxisIterator*, Object$*, $DTMAxisIterator*, $String*, $AbstractTranslet*, $DOM*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
		{"documentF", "(Ljava/lang/Object;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(LoadDocument, documentF, $DTMAxisIterator*, Object$*, $String*, $AbstractTranslet*, $DOM*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.dom.LoadDocument",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LoadDocument, name, initialize, &classInfo$$, LoadDocument::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LoadDocument);
	});
	return class$;
}

$Class* LoadDocument::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com