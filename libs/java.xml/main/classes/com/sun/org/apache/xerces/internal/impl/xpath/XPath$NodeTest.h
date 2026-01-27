#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_XPath$NodeTest_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_XPath$NodeTest_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.XPath$NodeTest
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

#pragma push_macro("NAMESPACE")
#undef NAMESPACE
#pragma push_macro("NODE")
#undef NODE
#pragma push_macro("QNAME")
#undef QNAME
#pragma push_macro("WILDCARD")
#undef WILDCARD

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class QName;
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

class XPath$NodeTest : public ::java::lang::Cloneable {
	$class(XPath$NodeTest, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	XPath$NodeTest();
	void init$(int16_t type);
	void init$(::com::sun::org::apache::xerces::internal::xni::QName* name);
	void init$($String* prefix, $String* uri);
	void init$(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$NodeTest* nodeTest);
	virtual $Object* clone() override;
	virtual $String* toString() override;
	static const int16_t QNAME = 1;
	static const int16_t WILDCARD = 2;
	static const int16_t NODE = 3;
	static const int16_t NAMESPACE = 4;
	int16_t type = 0;
	::com::sun::org::apache::xerces::internal::xni::QName* name = nullptr;
};

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NAMESPACE")
#pragma pop_macro("NODE")
#pragma pop_macro("QNAME")
#pragma pop_macro("WILDCARD")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_XPath$NodeTest_h_