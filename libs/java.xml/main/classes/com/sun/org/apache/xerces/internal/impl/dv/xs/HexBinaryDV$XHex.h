#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_HexBinaryDV$XHex_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_HexBinaryDV$XHex_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.HexBinaryDV$XHex
//$ extends com.sun.org.apache.xerces.internal.impl.dv.util.ByteListImpl

#include <com/sun/org/apache/xerces/internal/impl/dv/util/ByteListImpl.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

class HexBinaryDV$XHex : public ::com::sun::org::apache::xerces::internal::impl::dv::util::ByteListImpl {
	$class(HexBinaryDV$XHex, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::util::ByteListImpl)
public:
	HexBinaryDV$XHex();
	using ::com::sun::org::apache::xerces::internal::impl::dv::util::ByteListImpl::contains;
	using ::com::sun::org::apache::xerces::internal::impl::dv::util::ByteListImpl::addAll;
	void init$($bytes* data);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	using ::com::sun::org::apache::xerces::internal::impl::dv::util::ByteListImpl::remove;
	using ::com::sun::org::apache::xerces::internal::impl::dv::util::ByteListImpl::toArray;
	virtual $String* toString() override;
};

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_HexBinaryDV$XHex_h_