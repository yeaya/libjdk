#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_models_CMLeaf_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_models_CMLeaf_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.models.CMLeaf
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
						namespace xni {
							class QName;
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
							namespace dtd {
								namespace models {

class CMLeaf : public ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode {
	$class(CMLeaf, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode)
public:
	CMLeaf();
	void init$(::com::sun::org::apache::xerces::internal::xni::QName* element, int32_t position);
	void init$(::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual void calcFirstPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	virtual void calcLastPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	::com::sun::org::apache::xerces::internal::xni::QName* getElement();
	int32_t getPosition();
	virtual bool isNullable() override;
	void setPosition(int32_t newPosition);
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::xni::QName* fElement = nullptr;
	int32_t fPosition = 0;
};

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_models_CMLeaf_h_