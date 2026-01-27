#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl$1_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl$1_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1
//$ extends java.util.AbstractSet

#include <java/lang/Array.h>
#include <java/util/AbstractSet.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {
									class XSNamedMapImpl;
									class XSNamedMapImpl$XSNamedMapEntry;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
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

class XSNamedMapImpl$1 : public ::java::util::AbstractSet {
	$class(XSNamedMapImpl$1, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	XSNamedMapImpl$1();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl* this$0, int32_t val$length, $Array<::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$XSNamedMapEntry>* val$entries);
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl* this$0 = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$XSNamedMapEntry>* val$entries = nullptr;
	int32_t val$length = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XSNamedMapImpl$1_h_