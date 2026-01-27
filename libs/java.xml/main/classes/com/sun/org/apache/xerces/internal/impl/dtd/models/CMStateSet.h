#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_models_CMStateSet_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_models_CMStateSet_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.models.CMStateSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {

class CMStateSet : public ::java::lang::Object {
	$class(CMStateSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CMStateSet();
	void init$(int32_t bitCount);
	virtual bool equals(Object$* o) override;
	bool getBit(int32_t bitToGet);
	virtual int32_t hashCode() override;
	void intersection(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* setToAnd);
	bool isEmpty();
	bool isSameSet(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* setToCompare);
	void setBit(int32_t bitToSet);
	void setTo(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* srcSet);
	virtual $String* toString() override;
	void union$(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet* setToOr);
	void zeroBits();
	int32_t fBitCount = 0;
	int32_t fByteCount = 0;
	int32_t fBits1 = 0;
	int32_t fBits2 = 0;
	$bytes* fByteArray = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_models_CMStateSet_h_