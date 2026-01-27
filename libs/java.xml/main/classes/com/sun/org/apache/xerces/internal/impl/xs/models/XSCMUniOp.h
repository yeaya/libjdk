#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMUniOp_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMUniOp_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.XSCMUniOp
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

class XSCMUniOp : public ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode {
	$class(XSCMUniOp, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode)
public:
	XSCMUniOp();
	void init$(int32_t type, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* childNode);
	virtual void calcFirstPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	virtual void calcLastPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* getChild();
	virtual bool isNullable() override;
	virtual void setUserData(Object$* userData) override;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* fChild = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMUniOp_h_