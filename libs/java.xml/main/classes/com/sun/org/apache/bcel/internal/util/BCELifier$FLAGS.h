#ifndef _com_sun_org_apache_bcel_internal_util_BCELifier$FLAGS_h_
#define _com_sun_org_apache_bcel_internal_util_BCELifier$FLAGS_h_
//$ class com.sun.org.apache.bcel.internal.util.BCELifier$FLAGS
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class BCELifier$FLAGS : public ::java::lang::Enum {
	$class(BCELifier$FLAGS, 0, ::java::lang::Enum)
public:
	BCELifier$FLAGS();
	static $Array<::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS* valueOf($String* name);
	static $Array<::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS>* values();
	static ::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS* UNKNOWN;
	static ::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS* CLASS;
	static ::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS* METHOD;
	static $Array<::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS>* $VALUES;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CLASS")
#pragma pop_macro("METHOD")
#pragma pop_macro("UNKNOWN")

#endif // _com_sun_org_apache_bcel_internal_util_BCELifier$FLAGS_h_