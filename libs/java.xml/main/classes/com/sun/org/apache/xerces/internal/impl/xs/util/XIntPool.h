#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XIntPool_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XIntPool_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XIntPool
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("POOL_SIZE")
#undef POOL_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {
									class XInt;
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
								namespace util {

class XIntPool : public ::java::lang::Object {
	$class(XIntPool, 0, ::java::lang::Object)
public:
	XIntPool();
	void init$();
	::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* getXInt(int32_t value);
	static const int16_t POOL_SIZE = 10;
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::util::XInt>* fXIntPool;
};

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("POOL_SIZE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XIntPool_h_