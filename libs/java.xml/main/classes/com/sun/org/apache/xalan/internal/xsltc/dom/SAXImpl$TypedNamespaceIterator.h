#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl$TypedNamespaceIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl$TypedNamespaceIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$TypedNamespaceIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NamespaceIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class SAXImpl;
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

class SAXImpl$TypedNamespaceIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$NamespaceIterator {
	$class(SAXImpl$TypedNamespaceIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$NamespaceIterator)
public:
	SAXImpl$TypedNamespaceIterator();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* this$0, int32_t nodeType);
	virtual int32_t next() override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* this$0 = nullptr;
	$String* _nsPrefix = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_SAXImpl$TypedNamespaceIterator_h_