#ifndef _com_sun_org_apache_xerces_internal_util_ParserConfigurationSettings_h_
#define _com_sun_org_apache_xerces_internal_util_ParserConfigurationSettings_h_
//$ class com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponentManager

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <java/lang/Array.h>

#pragma push_macro("PARSER_SETTINGS")
#undef PARSER_SETTINGS

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
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class ParserConfigurationSettings : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager {
	$class(ParserConfigurationSettings, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager)
public:
	ParserConfigurationSettings();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parent);
	virtual void addRecognizedFeatures($StringArray* featureIds);
	virtual void addRecognizedProperties($StringArray* propertyIds);
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* checkFeature($String* featureId);
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* checkProperty($String* propertyId);
	virtual bool getFeature($String* featureId) override;
	virtual bool getFeature($String* featureId, bool defaultValue) override;
	virtual ::com::sun::org::apache::xerces::internal::util::FeatureState* getFeatureState($String* featureId) override;
	virtual $Object* getProperty($String* propertyId) override;
	virtual $Object* getProperty($String* propertyId, Object$* defaultValue) override;
	virtual ::com::sun::org::apache::xerces::internal::util::PropertyState* getPropertyState($String* propertyId) override;
	virtual void setFeature($String* featureId, bool state);
	virtual void setProperty($String* propertyId, Object$* value);
	static $String* PARSER_SETTINGS;
	::java::util::List* fRecognizedProperties = nullptr;
	::java::util::Map* fProperties = nullptr;
	::java::util::List* fRecognizedFeatures = nullptr;
	::java::util::Map* fFeatures = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* fParentSettings = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PARSER_SETTINGS")

#endif // _com_sun_org_apache_xerces_internal_util_ParserConfigurationSettings_h_