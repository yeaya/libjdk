#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_OneAttr_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_OneAttr_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.OneAttr
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
								namespace traversers {

class OneAttr : public ::java::lang::Object {
	$class(OneAttr, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OneAttr();
	void init$($String* name, int32_t dvIndex, int32_t valueIndex, Object$* dfltValue);
	$String* name = nullptr;
	int32_t dvIndex = 0;
	int32_t valueIndex = 0;
	$Object* dfltValue = nullptr;
};

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_OneAttr_h_