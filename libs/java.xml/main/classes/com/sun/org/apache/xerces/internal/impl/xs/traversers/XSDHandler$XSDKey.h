#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler$XSDKey_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler$XSDKey_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSDKey
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

class XSDHandler$XSDKey : public ::java::lang::Object {
	$class(XSDHandler$XSDKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSDHandler$XSDKey();
	void init$($String* systemId, int16_t referType, $String* referNS);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	$String* systemId = nullptr;
	int16_t referType = 0;
	$String* referNS = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler$XSDKey_h_