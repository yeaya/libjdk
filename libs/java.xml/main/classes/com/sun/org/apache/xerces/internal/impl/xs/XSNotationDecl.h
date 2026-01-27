#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSNotationDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSNotationDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSNotationDecl
//$ extends com.sun.org.apache.xerces.internal.xs.XSNotationDeclaration

#include <com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>

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
							namespace xs {

class XSNotationDecl : public ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration {
	$class(XSNotationDecl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration)
public:
	XSNotationDecl();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual int16_t getType() override;
	virtual void setNamespaceItem(::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* namespaceItem);
	$String* fName = nullptr;
	$String* fTargetNamespace = nullptr;
	$String* fPublicId = nullptr;
	$String* fSystemId = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSNotationDecl_h_