#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_DocumentCache_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_DocumentCache_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache
//$ extends com.sun.org.apache.xalan.internal.xsltc.DOMCache

#include <com/sun/org/apache/xalan/internal/xsltc/DOMCache.h>
#include <java/lang/Array.h>

#pragma push_macro("REFRESH_INTERVAL")
#undef REFRESH_INTERVAL

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class Translet;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class DocumentCache$CachedDocument;
								class XSLTCDTMManager;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace xml {
		namespace parsers {
			class SAXParser;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class XMLReader;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class DocumentCache : public ::com::sun::org::apache::xalan::internal::xsltc::DOMCache {
	$class(DocumentCache, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::DOMCache)
public:
	DocumentCache();
	void init$(int32_t size);
	void init$(int32_t size, ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* dtmManager);
	int64_t getLastModified($String* uri);
	void getStatistics(::java::io::PrintWriter* out);
	void insertDocument($String* uri, ::com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache$CachedDocument* doc);
	::com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache$CachedDocument* lookupDocument($String* uri);
	void replaceDocument($String* uri, ::com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache$CachedDocument* doc);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* retrieveDocument($String* baseURI, $String* href, ::com::sun::org::apache::xalan::internal::xsltc::Translet* trs) override;
	int32_t _size = 0;
	::java::util::Map* _references = nullptr;
	$StringArray* _URIs = nullptr;
	int32_t _count = 0;
	int32_t _current = 0;
	::javax::xml::parsers::SAXParser* _parser = nullptr;
	::org::xml::sax::XMLReader* _reader = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* _dtmManager = nullptr;
	static const int32_t REFRESH_INTERVAL = 1000;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("REFRESH_INTERVAL")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_DocumentCache_h_