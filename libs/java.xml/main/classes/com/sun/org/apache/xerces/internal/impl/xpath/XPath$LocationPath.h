#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_XPath$LocationPath_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_XPath$LocationPath_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.XPath$LocationPath
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								class XPath$Step;
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

class XPath$LocationPath : public ::java::lang::Cloneable {
	$class(XPath$LocationPath, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	XPath$LocationPath();
	void init$($Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Step>* steps);
	void init$(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath* path);
	virtual $Object* clone() override;
	virtual $String* toString() override;
	$Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Step>* steps = nullptr;
};

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_XPath$LocationPath_h_