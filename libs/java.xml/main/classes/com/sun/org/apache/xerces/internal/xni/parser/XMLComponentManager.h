#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLComponentManager_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLComponentManager_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLComponentManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class FeatureState;
							class PropertyState;
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
							namespace parser {

class XMLComponentManager : public ::java::lang::Object {
	$interface(XMLComponentManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool getFeature($String* featureId) {return false;}
	virtual bool getFeature($String* featureId, bool defaultValue) {return false;}
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState($String* featureId) {return nullptr;}
	virtual $Object* getProperty($String* propertyId) {return nullptr;}
	virtual $Object* getProperty($String* propertyId, Object$* defaultObject) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* getPropertyState($String* propertyId) {return nullptr;}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLComponentManager_h_