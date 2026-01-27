#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLComponent_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLComponent_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLComponent
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLComponentManager;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

class XMLComponent : public ::java::lang::Object {
	$interface(XMLComponent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) {return nullptr;}
	virtual $Object* getPropertyDefault($String* propertyId) {return nullptr;}
	virtual $StringArray* getRecognizedFeatures() {return nullptr;}
	virtual $StringArray* getRecognizedProperties() {return nullptr;}
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) {}
	virtual void setFeature($String* featureId, bool state) {}
	virtual void setProperty($String* propertyId, Object$* value) {}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLComponent_h_