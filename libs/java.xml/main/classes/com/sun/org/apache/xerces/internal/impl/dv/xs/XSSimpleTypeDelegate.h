#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDelegate_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDelegate_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDelegate
//$ extends com.sun.org.apache.xerces.internal.impl.dv.XSSimpleType

#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidatedInfo;
								class ValidationContext;
								class XSFacets;
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
							class XSObject;
							class XSObjectList;
							class XSSimpleTypeDefinition;
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
							namespace dv {
								namespace xs {

class XSSimpleTypeDelegate : public ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType {
	$class(XSSimpleTypeDelegate, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType)
public:
	XSSimpleTypeDelegate();
	void init$(::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* type);
	virtual void applyFacets(::com::sun::org::apache::xerces::internal::impl::dv::XSFacets* facets, int16_t presentFacet, int16_t fixedFacet, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual bool derivedFrom($String* namespace$, $String* name, int16_t derivationMethod) override;
	virtual bool derivedFromType(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* ancestorType, int16_t derivationMethod) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual bool getAnonymous() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getBaseType() override;
	virtual bool getBounded() override;
	virtual int16_t getBuiltInKind() override;
	virtual int16_t getDefinedFacets() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* getFacet(int32_t facetType) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getFacets() override;
	virtual int16_t getFinal() override;
	virtual bool getFinite() override;
	virtual int16_t getFixedFacets() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getItemType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getLexicalEnumeration() override;
	virtual $String* getLexicalFacetValue(int16_t facetName) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getLexicalPattern() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getMemberTypes() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getMultiValueFacets() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual bool getNumeric() override;
	virtual int16_t getOrdered() override;
	virtual int16_t getPrimitiveKind() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getPrimitiveType() override;
	virtual int16_t getType() override;
	virtual int16_t getTypeCategory() override;
	virtual int16_t getVariety() override;
	virtual int16_t getWhitespace() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* getWrappedXSSimpleType();
	virtual bool isDefinedFacet(int16_t facetName) override;
	virtual bool isEqual(Object$* value1, Object$* value2) override;
	virtual bool isFinal(int16_t restriction) override;
	virtual bool isFixedFacet(int16_t facetName) override;
	virtual bool isIDType() override;
	virtual $String* toString() override;
	virtual void validate(::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo) override;
	virtual $Object* validate($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo) override;
	virtual $Object* validate(Object$* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo) override;
	::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* type = nullptr;
};

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDelegate_h_