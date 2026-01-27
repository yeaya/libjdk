#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XS10TypeHelper_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XS10TypeHelper_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XS10TypeHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSTypeDefinition;
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

class XS10TypeHelper : public ::java::lang::Object {
	$class(XS10TypeHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XS10TypeHelper();
	void init$();
	static $String* getSchemaTypeName(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* typeDefn);
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XS10TypeHelper_h_