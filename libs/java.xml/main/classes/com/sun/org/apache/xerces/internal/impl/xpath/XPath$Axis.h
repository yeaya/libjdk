#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Axis_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Axis_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.XPath$Axis
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("CHILD")
#undef CHILD
#pragma push_macro("DESCENDANT")
#undef DESCENDANT
#pragma push_macro("SELF")
#undef SELF

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {

class XPath$Axis : public ::java::lang::Cloneable {
	$class(XPath$Axis, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	XPath$Axis();
	void init$(int16_t type);
	void init$(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Axis* axis);
	virtual $Object* clone() override;
	virtual $String* toString() override;
	static const int16_t CHILD = 1;
	static const int16_t ATTRIBUTE = 2;
	static const int16_t SELF = 3;
	static const int16_t DESCENDANT = 4;
	int16_t type = 0;
};

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("CHILD")
#pragma pop_macro("DESCENDANT")
#pragma pop_macro("SELF")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Axis_h_