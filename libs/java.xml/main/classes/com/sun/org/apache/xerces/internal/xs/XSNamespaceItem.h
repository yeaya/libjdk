#ifndef _com_sun_org_apache_xerces_internal_xs_XSNamespaceItem_h_
#define _com_sun_org_apache_xerces_internal_xs_XSNamespaceItem_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSNamespaceItem
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

class XSNamespaceItem : public ::java::lang::Object {
	$interface(XSNamespaceItem, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* getAttributeDeclaration($String* name) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition* getAttributeGroup($String* name) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamedMap* getComponents(int16_t objectType) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getDocumentLocations() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getElementDeclaration($String* name) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition* getIDCDefinition($String* name) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition* getModelGroupDefinition($String* name) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* getNotationDeclaration($String* name) {return nullptr;}
	virtual $String* getSchemaNamespace() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition($String* name) {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSNamespaceItem_h_