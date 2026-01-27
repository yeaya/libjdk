#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_Field$Matcher_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_Field$Matcher_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.Field$Matcher
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
									class Field;
									class Field$XPath;
									class ValueStore;
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

class Field$Matcher : public ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher {
	$class(Field$Matcher, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher)
public:
	Field$Matcher();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::identity::Field* this$0, ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field$XPath* xpath, ::com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore* store);
	int16_t convertToPrimitiveKind(int16_t valueType);
	::com::sun::org::apache::xerces::internal::xs::ShortList* convertToPrimitiveKind(::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType);
	virtual void handleContent(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type, bool nillable, Object$* actualValue, int16_t valueType, ::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType) override;
	virtual void matched(Object$* actualValue, int16_t valueType, ::com::sun::org::apache::xerces::internal::xs::ShortList* itemValueType, bool isNil) override;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::Field* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore* fStore = nullptr;
	bool fMayMatch = false;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_Field$Matcher_h_