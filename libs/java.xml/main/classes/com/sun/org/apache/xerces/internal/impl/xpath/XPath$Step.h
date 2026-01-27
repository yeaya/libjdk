#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Step_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Step_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.XPath$Step
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								class XPath$Axis;
								class XPath$NodeTest;
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
							namespace xpath {

class XPath$Step : public ::java::lang::Cloneable {
	$class(XPath$Step, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	XPath$Step();
	void init$(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Axis* axis, ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$NodeTest* nodeTest);
	void init$(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Step* step);
	virtual $Object* clone() override;
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Axis* axis = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::XPath$NodeTest* nodeTest = nullptr;
};

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Step_h_