#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_models_CMAny_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_models_CMAny_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.models.CMAny
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
							namespace dtd {
								namespace models {

class CMAny : public ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode {
	$class(CMAny, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode)
public:
	CMAny();
	void init$(int32_t type, $String* uri, int32_t position);
	virtual void calcFirstPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	virtual void calcLastPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) override;
	int32_t getPosition();
	int32_t getType();
	$String* getURI();
	virtual bool isNullable() override;
	void setPosition(int32_t newPosition);
	virtual $String* toString() override;
	int32_t fType = 0;
	$String* fURI = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_models_CMAny_h_