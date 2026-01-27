#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$FixedStringContainer_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$FixedStringContainer_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$FixedStringContainer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {
									class Token;
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
							namespace xpath {
								namespace regex {

class Token$FixedStringContainer : public ::java::lang::Object {
	$class(Token$FixedStringContainer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Token$FixedStringContainer();
	void init$();
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token = nullptr;
	int32_t options = 0;
};

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$FixedStringContainer_h_