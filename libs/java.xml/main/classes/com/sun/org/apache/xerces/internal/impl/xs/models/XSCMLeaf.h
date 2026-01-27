#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMLeaf_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMLeaf_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.XSCMLeaf
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

class XSCMLeaf : public ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode {
	$class(XSCMLeaf, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode)
public:
	XSCMLeaf();
	void init$(int32_t type, Object$* leaf, int32_t id, int32_t position);
	virtual void calcFirstPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	virtual void calcLastPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	$Object* getLeaf();
	int32_t getParticleId();
	int32_t getPosition();
	virtual bool isNullable() override;
	void setPosition(int32_t newPosition);
	virtual $String* toString() override;
	$Object* fLeaf = nullptr;
	int32_t fParticleId = 0;
	int32_t fPosition = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMLeaf_h_