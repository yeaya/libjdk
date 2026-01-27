#ifndef _com_sun_org_apache_bcel_internal_ExceptionConst$EXCS_h_
#define _com_sun_org_apache_bcel_internal_ExceptionConst$EXCS_h_
//$ class com.sun.org.apache.bcel.internal.ExceptionConst$EXCS
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXCS_ARRAY_EXCEPTION")
#undef EXCS_ARRAY_EXCEPTION
#pragma push_macro("EXCS_CLASS_AND_INTERFACE_RESOLUTION")
#undef EXCS_CLASS_AND_INTERFACE_RESOLUTION
#pragma push_macro("EXCS_FIELD_AND_METHOD_RESOLUTION")
#undef EXCS_FIELD_AND_METHOD_RESOLUTION
#pragma push_macro("EXCS_INTERFACE_METHOD_RESOLUTION")
#undef EXCS_INTERFACE_METHOD_RESOLUTION
#pragma push_macro("EXCS_STRING_RESOLUTION")
#undef EXCS_STRING_RESOLUTION

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {

class ExceptionConst$EXCS : public ::java::lang::Enum {
	$class(ExceptionConst$EXCS, 0, ::java::lang::Enum)
public:
	ExceptionConst$EXCS();
	static $Array<::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS* valueOf($String* name);
	static $Array<::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS>* values();
	static ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS* EXCS_CLASS_AND_INTERFACE_RESOLUTION;
	static ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS* EXCS_FIELD_AND_METHOD_RESOLUTION;
	static ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS* EXCS_INTERFACE_METHOD_RESOLUTION;
	static ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS* EXCS_STRING_RESOLUTION;
	static ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS* EXCS_ARRAY_EXCEPTION;
	static $Array<::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS>* $VALUES;
};

					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EXCS_ARRAY_EXCEPTION")
#pragma pop_macro("EXCS_CLASS_AND_INTERFACE_RESOLUTION")
#pragma pop_macro("EXCS_FIELD_AND_METHOD_RESOLUTION")
#pragma pop_macro("EXCS_INTERFACE_METHOD_RESOLUTION")
#pragma pop_macro("EXCS_STRING_RESOLUTION")

#endif // _com_sun_org_apache_bcel_internal_ExceptionConst$EXCS_h_