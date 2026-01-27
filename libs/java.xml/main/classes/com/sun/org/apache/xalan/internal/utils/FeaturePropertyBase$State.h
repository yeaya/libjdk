#ifndef _com_sun_org_apache_xalan_internal_utils_FeaturePropertyBase$State_h_
#define _com_sun_org_apache_xalan_internal_utils_FeaturePropertyBase$State_h_
//$ class com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase$State
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
#pragma push_macro("SYSTEMPROPERTY")
#undef SYSTEMPROPERTY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

class FeaturePropertyBase$State : public ::java::lang::Enum {
	$class(FeaturePropertyBase$State, 0, ::java::lang::Enum)
public:
	FeaturePropertyBase$State();
	static $Array<::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* valueOf($String* name);
	static $Array<::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State>* values();
	static ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* DEFAULT;
	static ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* FSP;
	static ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* JAXPDOTPROPERTIES;
	static ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* SYSTEMPROPERTY;
	static ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* APIPROPERTY;
	static $Array<::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State>* $VALUES;
};

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("APIPROPERTY")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("FSP")
#pragma pop_macro("JAXPDOTPROPERTIES")
#pragma pop_macro("SYSTEMPROPERTY")

#endif // _com_sun_org_apache_xalan_internal_utils_FeaturePropertyBase$State_h_