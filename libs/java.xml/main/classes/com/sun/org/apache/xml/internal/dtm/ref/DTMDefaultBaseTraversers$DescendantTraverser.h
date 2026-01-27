#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$DescendantTraverser_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$DescendantTraverser_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$IndexedDTMAxisTraverser

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$IndexedDTMAxisTraverser.h>

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

class DTMDefaultBaseTraversers$DescendantTraverser : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$IndexedDTMAxisTraverser {
	$class(DTMDefaultBaseTraversers$DescendantTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$IndexedDTMAxisTraverser)
public:
	DTMDefaultBaseTraversers$DescendantTraverser();
	using ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$IndexedDTMAxisTraverser::first;
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers* this$0);
	virtual bool axisHasBeenProcessed(int32_t axisRoot) override;
	virtual int32_t first(int32_t context, int32_t expandedTypeID) override;
	virtual int32_t getFirstPotential(int32_t identity);
	virtual int32_t getSubtreeRoot(int32_t handle);
	virtual bool isAfterAxis(int32_t axisRoot, int32_t identity) override;
	virtual bool isDescendant(int32_t subtreeRootIdentity, int32_t identity);
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

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$DescendantTraverser_h_