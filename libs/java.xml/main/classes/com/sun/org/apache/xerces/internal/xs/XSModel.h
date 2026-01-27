#ifndef _com_sun_org_apache_xerces_internal_xs_XSModel_h_
#define _com_sun_org_apache_xerces_internal_xs_XSModel_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSModel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class StringList;
							class XSAttributeDeclaration;
							class XSAttributeGroupDefinition;
							class XSElementDeclaration;
							class XSIDCDefinition;
							class XSModelGroupDefinition;
							class XSNamedMap;
							class XSNamespaceItemList;
							class XSNotationDeclaration;
							class XSObjectList;
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
						namespace xs {

class XSModel : public ::java::lang::Object {
	$interface(XSModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* getAttributeDeclaration($String* name, $String* namespace$) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition* getAttributeGroup($String* name, $String* namespace$) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamedMap* getComponents(int16_t objectType) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamedMap* getComponentsByNamespace(int16_t objectType, $String* namespace$) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getElementDeclaration($String* name, $String* namespace$) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition* getIDCDefinition($String* name, $String* namespace$) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition* getModelGroupDefinition($String* name, $String* namespace$) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItemList* getNamespaceItems() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getNamespaces() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* getNotationDeclaration($String* name, $String* namespace$) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getSubstitutionGroup(::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* head) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition($String* name, $String* namespace$) {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSModel_h_