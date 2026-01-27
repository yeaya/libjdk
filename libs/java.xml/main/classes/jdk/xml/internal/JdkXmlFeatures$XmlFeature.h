#ifndef _jdk_xml_internal_JdkXmlFeatures$XmlFeature_h_
#define _jdk_xml_internal_JdkXmlFeatures$XmlFeature_h_
//$ class jdk.xml.internal.JdkXmlFeatures$XmlFeature
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ENABLE_EXTENSION_FUNCTION")
#undef ENABLE_EXTENSION_FUNCTION
#pragma push_macro("JDK_OVERRIDE_PARSER")
#undef JDK_OVERRIDE_PARSER
#pragma push_macro("RESET_SYMBOL_TABLE_FEATURE")
#undef RESET_SYMBOL_TABLE_FEATURE
#pragma push_macro("USE_CATALOG")
#undef USE_CATALOG

namespace jdk {
	namespace xml {
		namespace internal {
			class JdkProperty$ImplPropMap;
			class JdkProperty$State;
		}
	}
}

namespace jdk {
	namespace xml {
		namespace internal {

class JdkXmlFeatures$XmlFeature : public ::java::lang::Enum {
	$class(JdkXmlFeatures$XmlFeature, 0, ::java::lang::Enum)
public:
	JdkXmlFeatures$XmlFeature();
	static $Array<::jdk::xml::internal::JdkXmlFeatures$XmlFeature>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::jdk::xml::internal::JdkProperty$ImplPropMap* implMap, $String* name, $String* nameSP, bool differ, $String* nameOld, $String* nameOldSP, bool value, bool valueEnforced, bool hasSystem, bool enforced);
	virtual $String* apiProperty();
	virtual bool defaultValue();
	virtual bool enforced();
	virtual bool enforcedValue();
	virtual bool equalsPropertyName($String* propertyName);
	virtual ::jdk::xml::internal::JdkProperty$State* getState($String* name);
	virtual bool hasSystemProperty();
	virtual $String* systemProperty();
	virtual $String* systemPropertyOld();
	static ::jdk::xml::internal::JdkXmlFeatures$XmlFeature* valueOf($String* name);
	static $Array<::jdk::xml::internal::JdkXmlFeatures$XmlFeature>* values();
	static ::jdk::xml::internal::JdkXmlFeatures$XmlFeature* ENABLE_EXTENSION_FUNCTION;
	static ::jdk::xml::internal::JdkXmlFeatures$XmlFeature* USE_CATALOG;
	static ::jdk::xml::internal::JdkXmlFeatures$XmlFeature* RESET_SYMBOL_TABLE_FEATURE;
	static ::jdk::xml::internal::JdkXmlFeatures$XmlFeature* JDK_OVERRIDE_PARSER;
	static $Array<::jdk::xml::internal::JdkXmlFeatures$XmlFeature>* $VALUES;
	::jdk::xml::internal::JdkProperty$ImplPropMap* implMap = nullptr;
	$String* name$ = nullptr;
	$String* nameSP = nullptr;
	bool differ = false;
	$String* nameOld = nullptr;
	$String* nameOldSP = nullptr;
	bool valueDefault = false;
	bool valueEnforced = false;
	bool hasSystem = false;
	bool enforced$ = false;
};

		} // internal
	} // xml
} // jdk

#pragma pop_macro("ENABLE_EXTENSION_FUNCTION")
#pragma pop_macro("JDK_OVERRIDE_PARSER")
#pragma pop_macro("RESET_SYMBOL_TABLE_FEATURE")
#pragma pop_macro("USE_CATALOG")

#endif // _jdk_xml_internal_JdkXmlFeatures$XmlFeature_h_