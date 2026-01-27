#ifndef _jdk_xml_internal_JdkXmlFeatures_h_
#define _jdk_xml_internal_JdkXmlFeatures_h_
//$ class jdk.xml.internal.JdkXmlFeatures
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CATALOG_FEATURES")
#undef CATALOG_FEATURES
#pragma push_macro("ORACLE_JAXP_PROPERTY_PREFIX")
#undef ORACLE_JAXP_PROPERTY_PREFIX
#pragma push_macro("PROPERTY_USE_CATALOG")
#undef PROPERTY_USE_CATALOG
#pragma push_macro("XML_FEATURE_MANAGER")
#undef XML_FEATURE_MANAGER

namespace jdk {
	namespace xml {
		namespace internal {
			class JdkProperty$State;
			class JdkXmlFeatures$XmlFeature;
		}
	}
}

namespace jdk {
	namespace xml {
		namespace internal {

class JdkXmlFeatures : public ::java::lang::Object {
	$class(JdkXmlFeatures, 0, ::java::lang::Object)
public:
	JdkXmlFeatures();
	void init$(bool secureProcessing);
	virtual ::jdk::xml::internal::JdkXmlFeatures$XmlFeature* findByName($String* propertyName);
	virtual bool getFeature(::jdk::xml::internal::JdkXmlFeatures$XmlFeature* feature);
	virtual bool getFeature(int32_t index);
	virtual int32_t getIndex($String* propertyName);
	bool getSystemProperty(::jdk::xml::internal::JdkXmlFeatures$XmlFeature* feature, $String* sysPropertyName);
	void readSystemProperties();
	virtual bool setFeature($String* propertyName, ::jdk::xml::internal::JdkProperty$State* state, Object$* value);
	virtual void setFeature(::jdk::xml::internal::JdkXmlFeatures$XmlFeature* feature, ::jdk::xml::internal::JdkProperty$State* state, bool value);
	virtual void setFeature(int32_t index, ::jdk::xml::internal::JdkProperty$State* state, Object$* value);
	virtual void setFeature(int32_t index, ::jdk::xml::internal::JdkProperty$State* state, bool value);
	virtual void update();
	static $String* ORACLE_JAXP_PROPERTY_PREFIX;
	static $String* XML_FEATURE_MANAGER;
	static $String* CATALOG_FEATURES;
	static $String* PROPERTY_USE_CATALOG;
	$booleans* featureValues = nullptr;
	$Array<::jdk::xml::internal::JdkProperty$State>* states = nullptr;
	bool secureProcessing = false;
};

		} // internal
	} // xml
} // jdk

#pragma pop_macro("CATALOG_FEATURES")
#pragma pop_macro("ORACLE_JAXP_PROPERTY_PREFIX")
#pragma pop_macro("PROPERTY_USE_CATALOG")
#pragma pop_macro("XML_FEATURE_MANAGER")

#endif // _jdk_xml_internal_JdkXmlFeatures_h_