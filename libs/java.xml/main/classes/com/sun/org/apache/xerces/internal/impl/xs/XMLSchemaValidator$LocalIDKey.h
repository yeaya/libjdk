#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$LocalIDKey_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$LocalIDKey_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$LocalIDKey
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
								namespace identity {
									class IdentityConstraint;
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
							namespace xs {

class XMLSchemaValidator$LocalIDKey : public ::java::lang::Object {
	$class(XMLSchemaValidator$LocalIDKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSchemaValidator$LocalIDKey();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* id, int32_t depth);
	virtual bool equals(Object$* localIDKey) override;
	virtual int32_t hashCode() override;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* fId = nullptr;
	int32_t fDepth = 0;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$LocalIDKey_h_