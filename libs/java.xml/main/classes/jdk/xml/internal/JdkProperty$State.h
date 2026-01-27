#ifndef _jdk_xml_internal_JdkProperty$State_h_
#define _jdk_xml_internal_JdkProperty$State_h_
//$ class jdk.xml.internal.JdkProperty$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("APIPROPERTY")
#undef APIPROPERTY
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("FSP")
#undef FSP
#pragma push_macro("JAXPDOTPROPERTIES")
#undef JAXPDOTPROPERTIES
#pragma push_macro("LEGACY_APIPROPERTY")
#undef LEGACY_APIPROPERTY
#pragma push_macro("LEGACY_SYSTEMPROPERTY")
#undef LEGACY_SYSTEMPROPERTY
#pragma push_macro("SYSTEMPROPERTY")
#undef SYSTEMPROPERTY

namespace jdk {
	namespace xml {
		namespace internal {

class JdkProperty$State : public ::java::lang::Enum {
	$class(JdkProperty$State, 0, ::java::lang::Enum)
public:
	JdkProperty$State();
	static $Array<::jdk::xml::internal::JdkProperty$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* literal);
	virtual $String* literal();
	static ::jdk::xml::internal::JdkProperty$State* valueOf($String* name);
	static $Array<::jdk::xml::internal::JdkProperty$State>* values();
	static ::jdk::xml::internal::JdkProperty$State* DEFAULT;
	static ::jdk::xml::internal::JdkProperty$State* FSP;
	static ::jdk::xml::internal::JdkProperty$State* JAXPDOTPROPERTIES;
	static ::jdk::xml::internal::JdkProperty$State* LEGACY_SYSTEMPROPERTY;
	static ::jdk::xml::internal::JdkProperty$State* SYSTEMPROPERTY;
	static ::jdk::xml::internal::JdkProperty$State* LEGACY_APIPROPERTY;
	static ::jdk::xml::internal::JdkProperty$State* APIPROPERTY;
	static $Array<::jdk::xml::internal::JdkProperty$State>* $VALUES;
	$String* literal$ = nullptr;
};

		} // internal
	} // xml
} // jdk

#pragma pop_macro("APIPROPERTY")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("FSP")
#pragma pop_macro("JAXPDOTPROPERTIES")
#pragma pop_macro("LEGACY_APIPROPERTY")
#pragma pop_macro("LEGACY_SYSTEMPROPERTY")
#pragma pop_macro("SYSTEMPROPERTY")

#endif // _jdk_xml_internal_JdkProperty$State_h_