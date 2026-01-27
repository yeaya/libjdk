#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl$1$1_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl$1$1_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {
									class XSNamedMapImpl$1;
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

class XSNamedMapImpl$1$1 : public ::java::util::Iterator {
	$class(XSNamedMapImpl$1$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	XSNamedMapImpl$1$1();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$1* this$1);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$1* this$1 = nullptr;
	int32_t index = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl$1$1_h_