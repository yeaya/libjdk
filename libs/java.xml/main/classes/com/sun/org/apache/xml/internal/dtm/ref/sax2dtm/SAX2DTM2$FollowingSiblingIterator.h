#ifndef _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$FollowingSiblingIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$FollowingSiblingIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingSiblingIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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

class SAX2DTM2$FollowingSiblingIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase {
	$class(SAX2DTM2$FollowingSiblingIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase)
public:
	SAX2DTM2$FollowingSiblingIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2* this$0);
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2* this$0 = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$FollowingSiblingIterator_h_