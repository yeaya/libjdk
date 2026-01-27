#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$TypedFollowingSiblingIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$TypedFollowingSiblingIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingSiblingIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingSiblingIterator

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$FollowingSiblingIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class DTMDefaultBaseIterators;
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

class DTMDefaultBaseIterators$TypedFollowingSiblingIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$FollowingSiblingIterator {
	$class(DTMDefaultBaseIterators$TypedFollowingSiblingIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$FollowingSiblingIterator)
public:
	DTMDefaultBaseIterators$TypedFollowingSiblingIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0, int32_t type);
	virtual int32_t next() override;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0 = nullptr;
	int32_t _nodeType = 0;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$TypedFollowingSiblingIterator_h_