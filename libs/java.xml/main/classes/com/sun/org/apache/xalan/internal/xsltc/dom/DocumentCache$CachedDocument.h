#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_DocumentCache$CachedDocument_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_DocumentCache$CachedDocument_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.DocumentCache$CachedDocument
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class DOMEnhancedForDTM;
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
								class DocumentCache;
							}
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

class DocumentCache$CachedDocument : public ::java::lang::Object {
	$class(DocumentCache$CachedDocument, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DocumentCache$CachedDocument();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache* this$0, $String* uri);
	int64_t getAccessCount();
	::com::sun::org::apache::xalan::internal::xsltc::DOM* getDocument();
	int64_t getEstimatedSize();
	int64_t getFirstReferenced();
	int64_t getLastChecked();
	int64_t getLastModified();
	int64_t getLastReferenced();
	int64_t getLatency();
	void incAccessCount();
	void loadDocument($String* uri);
	void setLastChecked(int64_t t);
	void setLastModified(int64_t t);
	::com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache* this$0 = nullptr;
	int64_t _firstReferenced = 0;
	int64_t _lastReferenced = 0;
	int64_t _accessCount = 0;
	int64_t _lastModified = 0;
	int64_t _lastChecked = 0;
	int64_t _buildTime = 0;
	::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM* _dom = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_DocumentCache$CachedDocument_h_