#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$FollowingIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$FollowingIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingIterator
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
							class DTMAxisTraverser;
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

class DTMDefaultBaseIterators$FollowingIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase {
	$class(DTMDefaultBaseIterators$FollowingIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase)
public:
	DTMDefaultBaseIterators$FollowingIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0);
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0 = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser* m_traverser = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$FollowingIterator_h_