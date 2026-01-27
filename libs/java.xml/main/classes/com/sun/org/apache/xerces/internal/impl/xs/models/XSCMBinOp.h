#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMBinOp_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMBinOp_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.XSCMBinOp
//$ extends com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {
									class CMStateSet;
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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

class XSCMBinOp : public ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode {
	$class(XSCMBinOp, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode)
public:
	XSCMBinOp();
	void init$(int32_t type, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* leftNode, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* rightNode);
	virtual void calcFirstPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	virtual void calcLastPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* getLeft();
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* getRight();
	virtual bool isNullable() override;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* fLeftChild = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* fRightChild = nullptr;
};

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMBinOp_h_