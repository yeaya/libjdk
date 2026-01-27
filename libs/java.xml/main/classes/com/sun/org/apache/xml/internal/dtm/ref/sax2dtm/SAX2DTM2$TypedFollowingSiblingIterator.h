#ifndef _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$TypedFollowingSiblingIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$TypedFollowingSiblingIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedFollowingSiblingIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingSiblingIterator

#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$FollowingSiblingIterator.h>

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

class SAX2DTM2$TypedFollowingSiblingIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$FollowingSiblingIterator {
	$class(SAX2DTM2$TypedFollowingSiblingIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$FollowingSiblingIterator)
public:
	SAX2DTM2$TypedFollowingSiblingIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2* this$0, int32_t type);
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

#endif // _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$TypedFollowingSiblingIterator_h_