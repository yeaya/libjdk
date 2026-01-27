#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSGroupDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSGroupDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSGroupDecl
//$ extends com.sun.org.apache.xerces.internal.xs.XSModelGroupDefinition

#include <com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XSModelGroupImpl;
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
							class XSAnnotation;
							class XSModelGroup;
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

class XSGroupDecl : public ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition {
	$class(XSGroupDecl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition)
public:
	XSGroupDecl();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModelGroup* getModelGroup() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual int16_t getType() override;
	virtual void setNamespaceItem(::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* namespaceItem);
	$String* fName = nullptr;
	$String* fTargetNamespace = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl* fModelGroup = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* fAnnotations = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSGroupDecl_h_