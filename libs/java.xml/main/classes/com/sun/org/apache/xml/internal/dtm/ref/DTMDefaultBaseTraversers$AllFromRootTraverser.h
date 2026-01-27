#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$AllFromRootTraverser_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$AllFromRootTraverser_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromRootTraverser
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromNodeTraverser

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AllFromNodeTraverser.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class DTMDefaultBaseTraversers;
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

class DTMDefaultBaseTraversers$AllFromRootTraverser : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AllFromNodeTraverser {
	$class(DTMDefaultBaseTraversers$AllFromRootTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AllFromNodeTraverser)
public:
	DTMDefaultBaseTraversers$AllFromRootTraverser();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers* this$0);
	virtual int32_t first(int32_t context) override;
	virtual int32_t first(int32_t context, int32_t expandedTypeID) override;
	virtual int32_t next(int32_t context, int32_t current) override;
	virtual int32_t next(int32_t context, int32_t current, int32_t expandedTypeID) override;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers* this$0 = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$AllFromRootTraverser_h_