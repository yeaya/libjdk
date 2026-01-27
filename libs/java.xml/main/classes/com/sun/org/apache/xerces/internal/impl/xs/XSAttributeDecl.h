#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSAttributeDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSAttributeDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSAttributeDecl
//$ extends com.sun.org.apache.xerces.internal.xs.XSAttributeDeclaration

#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>

#pragma push_macro("SCOPE_ABSENT")
#undef SCOPE_ABSENT
#pragma push_macro("SCOPE_GLOBAL")
#undef SCOPE_GLOBAL
#pragma push_macro("SCOPE_LOCAL")
#undef SCOPE_LOCAL

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidatedInfo;
								class XSSimpleType;
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
								class XSComplexTypeDecl;
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
							class XSAnnotation;
							class XSComplexTypeDefinition;
							class XSNamespaceItem;
							class XSObjectList;
							class XSSimpleTypeDefinition;
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

class XSAttributeDecl : public ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration {
	$class(XSAttributeDecl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration)
public:
	XSAttributeDecl();
	void init$();
	virtual $Object* getActualVC() override;
	virtual int16_t getActualVCType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual int16_t getConstraintType() override;
	virtual $String* getConstraintValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition* getEnclosingCTDefinition() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual int16_t getScope() override;
	virtual int16_t getType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getTypeDefinition() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* getValInfo();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getValueConstraintValue() override;
	virtual void reset();
	virtual void setNamespaceItem(::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* namespaceItem);
	virtual void setValues($String* name, $String* targetNamespace, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* simpleType, int16_t constraintType, int16_t scope, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* valInfo, ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* enclosingCT, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations);
	static const int16_t SCOPE_ABSENT = 0;
	static const int16_t SCOPE_GLOBAL = 1;
	static const int16_t SCOPE_LOCAL = 2;
	$String* fName = nullptr;
	$String* fTargetNamespace = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* fType = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fUnresolvedTypeName = nullptr;
	int16_t fConstraintType = 0;
	int16_t fScope = 0;
	::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* fEnclosingCT = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* fAnnotations = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* fDefault = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* fNamespaceItem = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SCOPE_ABSENT")
#pragma pop_macro("SCOPE_GLOBAL")
#pragma pop_macro("SCOPE_LOCAL")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSAttributeDecl_h_