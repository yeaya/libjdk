#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$XSMVFacetImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$XSMVFacetImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSMVFacetImpl
//$ extends com.sun.org.apache.xerces.internal.xs.XSMultiValueFacet

#include <com/sun/org/apache/xerces/internal/xs/XSMultiValueFacet.h>

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
						namespace xs {
							namespace datatypes {
								class ObjectList;
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
							namespace dv {
								namespace xs {

class XSSimpleTypeDecl$XSMVFacetImpl : public ::com::sun::org::apache::xerces::internal::xs::XSMultiValueFacet {
	$class(XSSimpleTypeDecl$XSMVFacetImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSMultiValueFacet)
public:
	XSSimpleTypeDecl$XSMVFacetImpl();
	void init$(int16_t kind, ::com::sun::org::apache::xerces::internal::xs::StringList* svalues, ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList* avalues, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList* getEnumerationValues() override;
	virtual int16_t getFacetKind() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getLexicalFacetValues() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual int16_t getType() override;
	int16_t kind = 0;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations = nullptr;
	::com::sun::org::apache::xerces::internal::xs::StringList* svalues = nullptr;
	::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList* avalues = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$XSMVFacetImpl_h_