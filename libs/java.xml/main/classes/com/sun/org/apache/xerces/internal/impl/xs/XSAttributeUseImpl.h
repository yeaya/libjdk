#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSAttributeUseImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSAttributeUseImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSAttributeUseImpl
//$ extends com.sun.org.apache.xerces.internal.xs.XSAttributeUse

#include <com/sun/org/apache/xerces/internal/xs/XSAttributeUse.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidatedInfo;
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
								class XSAttributeDecl;
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
							class XSAttributeDeclaration;
							class XSNamespaceItem;
							class XSObjectList;
							class XSValue;
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

class XSAttributeUseImpl : public ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse {
	$class(XSAttributeUseImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse)
public:
	XSAttributeUseImpl();
	void init$();
	virtual $Object* getActualVC() override;
	virtual int16_t getActualVCType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* getAttrDeclaration() override;
	virtual int16_t getConstraintType() override;
	virtual $String* getConstraintValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual bool getRequired() override;
	virtual int16_t getType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getValueConstraintValue() override;
	virtual void reset();
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* fAttrDecl = nullptr;
	int16_t fUse = 0;
	int16_t fConstraintType = 0;
	::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* fDefault = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* fAnnotations = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSAttributeUseImpl_h_