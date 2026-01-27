#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_Selector$Matcher_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_Selector$Matcher_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$Matcher
//$ extends com.sun.org.apache.xerces.internal.impl.xs.identity.XPathMatcher

#include <com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {
									class FieldActivator;
									class IdentityConstraint;
									class Selector;
									class Selector$XPath;
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
						namespace xni {
							class QName;
							class XMLAttributes;
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
						namespace xs {
							class ShortList;
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
								namespace identity {

class Selector$Matcher : public ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher {
	$class(Selector$Matcher, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher)
public:
	Selector$Matcher();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector* this$0, ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector$XPath* xpath, ::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator* activator, int32_t initialDepth);
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type, bool nillable, Object$* actualValue, int16_t valueType, ::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* getIdentityConstraint();
	virtual int32_t getInitialDepth();
	virtual void startDocumentFragment() override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes) override;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator* fFieldActivator = nullptr;
	int32_t fInitialDepth = 0;
	int32_t fElementDepth = 0;
	int32_t fMatchedDepth = 0;
};

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_Selector$Matcher_h_