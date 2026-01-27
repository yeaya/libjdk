#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSElementDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSElementDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSElementDecl
//$ extends com.sun.org.apache.xerces.internal.xs.XSElementDeclaration

#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <java/lang/Array.h>

#pragma push_macro("ABSTRACT")
#undef ABSTRACT
#pragma push_macro("CONSTRAINT_MASK")
#undef CONSTRAINT_MASK
#pragma push_macro("INITIAL_SIZE")
#undef INITIAL_SIZE
#pragma push_macro("NILLABLE")
#undef NILLABLE
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
							class XSNamedMap;
							class XSNamespaceItem;
							class XSObjectList;
							class XSTypeDefinition;
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

class XSElementDecl : public ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration {
	$class(XSElementDecl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration)
public:
	XSElementDecl();
	void init$();
	virtual void addIDConstraint(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* idc);
	virtual bool equals(Object$* o) override;
	virtual bool getAbstract() override;
	virtual $Object* getActualVC() override;
	virtual int16_t getActualVCType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual int16_t getConstraintType() override;
	virtual $String* getConstraintValue() override;
	virtual int16_t getDisallowedSubstitutions() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition* getEnclosingCTDefinition() override;
	virtual $Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>* getIDConstraints();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamedMap* getIdentityConstraints() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getItemValueTypes() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual bool getNillable() override;
	virtual int16_t getScope() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getSubstitutionGroupAffiliation() override;
	virtual int16_t getSubstitutionGroupExclusions() override;
	virtual int16_t getType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSValue* getValueConstraintValue() override;
	virtual int32_t hashCode() override;
	virtual bool isDisallowedSubstitution(int16_t disallowed) override;
	virtual bool isSubstitutionGroupExclusion(int16_t exclusion) override;
	virtual void reset();
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>* oldArray, int32_t newSize);
	virtual void setConstraintType(int16_t constraintType);
	virtual void setIsAbstract();
	virtual void setIsGlobal();
	virtual void setIsLocal(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* enclosingCT);
	virtual void setIsNillable();
	virtual void setNamespaceItem(::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* namespaceItem);
	virtual $String* toString() override;
	static const int16_t SCOPE_ABSENT = 0;
	static const int16_t SCOPE_GLOBAL = 1;
	static const int16_t SCOPE_LOCAL = 2;
	$String* fName = nullptr;
	$String* fTargetNamespace = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* fType = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fUnresolvedTypeName = nullptr;
	int16_t fMiscFlags = 0;
	int16_t fScope = 0;
	::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* fEnclosingCT = nullptr;
	int16_t fBlock = 0;
	int16_t fFinal = 0;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* fAnnotations = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* fDefault = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* fSubGroup = nullptr;
	static const int32_t INITIAL_SIZE = 2;
	int32_t fIDCPos = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>* fIDConstraints = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* fNamespaceItem = nullptr;
	static const int16_t CONSTRAINT_MASK = 3;
	static const int16_t NILLABLE = 4;
	static const int16_t ABSTRACT = 8;
	$String* fDescription = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ABSTRACT")
#pragma pop_macro("CONSTRAINT_MASK")
#pragma pop_macro("INITIAL_SIZE")
#pragma pop_macro("NILLABLE")
#pragma pop_macro("SCOPE_ABSENT")
#pragma pop_macro("SCOPE_GLOBAL")
#pragma pop_macro("SCOPE_LOCAL")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSElementDecl_h_