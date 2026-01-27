#ifndef _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$TypedDescendantIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$TypedDescendantIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedDescendantIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$DescendantIterator

#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$DescendantIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace sax2dtm {
									class SAX2DTM2;
								}
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
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace sax2dtm {

class SAX2DTM2$TypedDescendantIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$DescendantIterator {
	$class(SAX2DTM2$TypedDescendantIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$DescendantIterator)
public:
	SAX2DTM2$TypedDescendantIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2* this$0, int32_t nodeType);
	virtual int32_t next() override;
	::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2* this$0 = nullptr;
	int32_t _nodeType = 0;
};

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$TypedDescendantIterator_h_