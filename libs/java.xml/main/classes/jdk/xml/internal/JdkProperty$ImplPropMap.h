#ifndef _jdk_xml_internal_JdkProperty$ImplPropMap_h_
#define _jdk_xml_internal_JdkProperty$ImplPropMap_h_
//$ class jdk.xml.internal.JdkProperty$ImplPropMap
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CDATACHUNKSIZE")
#undef CDATACHUNKSIZE
#pragma push_macro("ENABLEEXTFUNC")
#undef ENABLEEXTFUNC
#pragma push_macro("ENTITYCOUNT")
#undef ENTITYCOUNT
#pragma push_macro("EXTCLSLOADER")
#undef EXTCLSLOADER
#pragma push_macro("ISSTANDALONE")
#undef ISSTANDALONE
#pragma push_macro("OVERRIDEPARSER")
#undef OVERRIDEPARSER
#pragma push_macro("RESETSYMBOLTABLE")
#undef RESETSYMBOLTABLE
#pragma push_macro("XSLTCISSTANDALONE")
#undef XSLTCISSTANDALONE

namespace jdk {
	namespace xml {
		namespace internal {
			class JdkProperty$State;
		}
	}
}

namespace jdk {
	namespace xml {
		namespace internal {

class JdkProperty$ImplPropMap : public ::java::lang::Enum {
	$class(JdkProperty$ImplPropMap, 0, ::java::lang::Enum)
public:
	JdkProperty$ImplPropMap();
	static $Array<::jdk::xml::internal::JdkProperty$ImplPropMap>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $String* qName, $String* spName, bool differ, $String* oldQName, $String* oldSPName);
	virtual ::jdk::xml::internal::JdkProperty$State* getState($String* name);
	virtual bool is($String* name);
	virtual bool isNameDiffer();
	virtual $String* qName();
	virtual $String* qNameOld();
	virtual $String* systemProperty();
	virtual $String* systemPropertyOld();
	static ::jdk::xml::internal::JdkProperty$ImplPropMap* valueOf($String* name);
	static $Array<::jdk::xml::internal::JdkProperty$ImplPropMap>* values();
	static ::jdk::xml::internal::JdkProperty$ImplPropMap* ISSTANDALONE;
	static ::jdk::xml::internal::JdkProperty$ImplPropMap* XSLTCISSTANDALONE;
	static ::jdk::xml::internal::JdkProperty$ImplPropMap* CDATACHUNKSIZE;
	static ::jdk::xml::internal::JdkProperty$ImplPropMap* EXTCLSLOADER;
	static ::jdk::xml::internal::JdkProperty$ImplPropMap* ENABLEEXTFUNC;
	static ::jdk::xml::internal::JdkProperty$ImplPropMap* OVERRIDEPARSER;
	static ::jdk::xml::internal::JdkProperty$ImplPropMap* RESETSYMBOLTABLE;
	static ::jdk::xml::internal::JdkProperty$ImplPropMap* ENTITYCOUNT;
	static $Array<::jdk::xml::internal::JdkProperty$ImplPropMap>* $VALUES;
	$String* name$ = nullptr;
	$String* qName$ = nullptr;
	$String* spName = nullptr;
	bool differ = false;
	$String* oldQName = nullptr;
	$String* oldSPName = nullptr;
};

		} // internal
	} // xml
} // jdk

#pragma pop_macro("CDATACHUNKSIZE")
#pragma pop_macro("ENABLEEXTFUNC")
#pragma pop_macro("ENTITYCOUNT")
#pragma pop_macro("EXTCLSLOADER")
#pragma pop_macro("ISSTANDALONE")
#pragma pop_macro("OVERRIDEPARSER")
#pragma pop_macro("RESETSYMBOLTABLE")
#pragma pop_macro("XSLTCISSTANDALONE")

#endif // _jdk_xml_internal_JdkProperty$ImplPropMap_h_