#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XInt_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XInt_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XInt
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

class XInt : public ::java::lang::Object {
	$class(XInt, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XInt();
	using ::java::lang::Object::equals;
	void init$(int32_t value);
	bool equals(::com::sun::org::apache::xerces::internal::impl::xs::util::XInt* compareVal);
	int32_t intValue();
	int16_t shortValue();
	virtual $String* toString() override;
	int32_t fValue = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XInt_h_