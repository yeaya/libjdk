#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_IdentityConstraint_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_IdentityConstraint_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.IdentityConstraint
//$ extends com.sun.org.apache.xerces.internal.xs.XSIDCDefinition

#include <com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XSAnnotationImpl;
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
								namespace identity {
									class Field;
									class Selector;
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
							class StringList;
							class XSNamespaceItem;
							class XSObjectList;
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

class IdentityConstraint : public ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition {
	$class(IdentityConstraint, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition)
public:
	IdentityConstraint();
	using ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition::equals;
	void init$($String* namespace$, $String* identityConstraintName, $String* elemName);
	virtual void addAnnotation(::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl* annotation);
	virtual void addField(::com::sun::org::apache::xerces::internal::impl::xs::identity::Field* field);
	virtual bool equals(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* id);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual int16_t getCategory() override;
	virtual $String* getElementName();
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field* getFieldAt(int32_t index);
	virtual int32_t getFieldCount();
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getFieldStrs() override;
	virtual $String* getIdentityConstraintName();
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition* getRefKey() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector* getSelector();
	virtual $String* getSelectorStr() override;
	virtual int16_t getType() override;
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::Field>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::Field>* oldArray, int32_t newSize);
	virtual void setSelector(::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector* selector);
	virtual $String* toString() override;
	int16_t type = 0;
	$String* fNamespace = nullptr;
	$String* fIdentityConstraintName = nullptr;
	$String* fElementName = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector* fSelector = nullptr;
	int32_t fFieldCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::Field>* fFields = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl>* fAnnotations = nullptr;
	int32_t fNumAnnotations = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_IdentityConstraint_h_