#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_models_CMNode_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_models_CMNode_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class CMNode : public ::java::lang::Object {
	$class(CMNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CMNode();
	void init$(int32_t type);
	virtual void calcFirstPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) {}
	virtual void calcLastPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* toSet) {}
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* firstPos();
	virtual $Object* getUserData();
	virtual bool isCompactedForUPA();
	virtual bool isNullable() {return false;}
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* lastPos();
	void setFollowPos(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* setToAdopt);
	virtual void setIsCompactUPAModel(bool value);
	void setMaxStates(int32_t maxStates);
	virtual void setUserData(Object$* userData);
	int32_t type();
	int32_t fType = 0;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* fFirstPos = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* fFollowPos = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* fLastPos = nullptr;
	int32_t fMaxStates = 0;
	$Object* fUserData = nullptr;
	bool fCompactedForUPA = false;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_models_CMNode_h_