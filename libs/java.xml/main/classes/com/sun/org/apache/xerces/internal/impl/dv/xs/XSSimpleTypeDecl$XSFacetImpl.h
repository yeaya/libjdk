#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$XSFacetImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$XSFacetImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSFacetImpl
//$ extends com.sun.org.apache.xerces.internal.xs.XSFacet

#include <com/sun/org/apache/xerces/internal/xs/XSFacet.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSAnnotation;
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
							namespace dv {
								namespace xs {

class XSSimpleTypeDecl$XSFacetImpl : public ::com::sun::org::apache::xerces::internal::xs::XSFacet {
	$class(XSSimpleTypeDecl$XSFacetImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSFacet)
public:
	XSSimpleTypeDecl$XSFacetImpl();
	void init$(int16_t kind, $String* svalue, int32_t ivalue, Object$* avalue, bool fixed, ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* annotation);
	virtual $Object* getActualFacetValue() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual int16_t getFacetKind() override;
	virtual bool getFixed() override;
	virtual int32_t getIntFacetValue() override;
	virtual $String* getLexicalFacetValue() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual int16_t getType() override;
	int16_t kind = 0;
	$String* svalue = nullptr;
	int32_t ivalue = 0;
	$Object* avalue = nullptr;
	bool fixed = false;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$XSFacetImpl_h_