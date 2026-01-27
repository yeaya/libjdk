#ifndef _com_sun_org_apache_bcel_internal_ExceptionConst_h_
#define _com_sun_org_apache_bcel_internal_ExceptionConst_h_
//$ class com.sun.org.apache.bcel.internal.ExceptionConst
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ABSTRACT_METHOD_ERROR")
#undef ABSTRACT_METHOD_ERROR
#pragma push_macro("ARITHMETIC_EXCEPTION")
#undef ARITHMETIC_EXCEPTION
#pragma push_macro("ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION")
#undef ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION
#pragma push_macro("CLASS_CAST_EXCEPTION")
#undef CLASS_CAST_EXCEPTION
#pragma push_macro("CLASS_CIRCULARITY_ERROR")
#undef CLASS_CIRCULARITY_ERROR
#pragma push_macro("CLASS_FORMAT_ERROR")
#undef CLASS_FORMAT_ERROR
#pragma push_macro("EXCEPTION_IN_INITIALIZER_ERROR")
#undef EXCEPTION_IN_INITIALIZER_ERROR
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
#pragma push_macro("ILLEGAL_ACCESS_ERROR")
#undef ILLEGAL_ACCESS_ERROR
#pragma push_macro("ILLEGAL_MONITOR_STATE")
#undef ILLEGAL_MONITOR_STATE
#pragma push_macro("INCOMPATIBLE_CLASS_CHANGE_ERROR")
#undef INCOMPATIBLE_CLASS_CHANGE_ERROR
#pragma push_macro("INSTANTIATION_ERROR")
#undef INSTANTIATION_ERROR
#pragma push_macro("LINKING_EXCEPTION")
#undef LINKING_EXCEPTION
#pragma push_macro("NEGATIVE_ARRAY_SIZE_EXCEPTION")
#undef NEGATIVE_ARRAY_SIZE_EXCEPTION
#pragma push_macro("NO_CLASS_DEF_FOUND_ERROR")
#undef NO_CLASS_DEF_FOUND_ERROR
#pragma push_macro("NO_SUCH_FIELD_ERROR")
#undef NO_SUCH_FIELD_ERROR
#pragma push_macro("NO_SUCH_METHOD_ERROR")
#undef NO_SUCH_METHOD_ERROR
#pragma push_macro("NULL_POINTER_EXCEPTION")
#undef NULL_POINTER_EXCEPTION
#pragma push_macro("RUNTIME_EXCEPTION")
#undef RUNTIME_EXCEPTION
#pragma push_macro("THROWABLE")
#undef THROWABLE
#pragma push_macro("UNSATISFIED_LINK_ERROR")
#undef UNSATISFIED_LINK_ERROR
#pragma push_macro("VERIFY_ERROR")
#undef VERIFY_ERROR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						class ExceptionConst$EXCS;
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
				namespace bcel {
					namespace internal {

class ExceptionConst : public ::java::lang::Object {
	$class(ExceptionConst, 0, ::java::lang::Object)
public:
	ExceptionConst();
	void init$();
	static $ClassArray* createExceptions(::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS* type, $ClassArray* extraClasses);
	static $ClassArray* mergeExceptions($ClassArray* input, $ClassArray* extraClasses);
	static $Class* THROWABLE;
	static $Class* RUNTIME_EXCEPTION;
	static $Class* LINKING_EXCEPTION;
	static $Class* CLASS_CIRCULARITY_ERROR;
	static $Class* CLASS_FORMAT_ERROR;
	static $Class* EXCEPTION_IN_INITIALIZER_ERROR;
	static $Class* INCOMPATIBLE_CLASS_CHANGE_ERROR;
	static $Class* ABSTRACT_METHOD_ERROR;
	static $Class* ILLEGAL_ACCESS_ERROR;
	static $Class* INSTANTIATION_ERROR;
	static $Class* NO_SUCH_FIELD_ERROR;
	static $Class* NO_SUCH_METHOD_ERROR;
	static $Class* NO_CLASS_DEF_FOUND_ERROR;
	static $Class* UNSATISFIED_LINK_ERROR;
	static $Class* VERIFY_ERROR;
	static $Class* NULL_POINTER_EXCEPTION;
	static $Class* ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION;
	static $Class* ARITHMETIC_EXCEPTION;
	static $Class* NEGATIVE_ARRAY_SIZE_EXCEPTION;
	static $Class* CLASS_CAST_EXCEPTION;
	static $Class* ILLEGAL_MONITOR_STATE;
	static $ClassArray* EXCS_CLASS_AND_INTERFACE_RESOLUTION;
	static $ClassArray* EXCS_FIELD_AND_METHOD_RESOLUTION;
	static $ClassArray* EXCS_INTERFACE_METHOD_RESOLUTION;
	static $ClassArray* EXCS_STRING_RESOLUTION;
	static $ClassArray* EXCS_ARRAY_EXCEPTION;
};

					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ABSTRACT_METHOD_ERROR")
#pragma pop_macro("ARITHMETIC_EXCEPTION")
#pragma pop_macro("ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION")
#pragma pop_macro("CLASS_CAST_EXCEPTION")
#pragma pop_macro("CLASS_CIRCULARITY_ERROR")
#pragma pop_macro("CLASS_FORMAT_ERROR")
#pragma pop_macro("EXCEPTION_IN_INITIALIZER_ERROR")
#pragma pop_macro("EXCS_ARRAY_EXCEPTION")
#pragma pop_macro("EXCS_CLASS_AND_INTERFACE_RESOLUTION")
#pragma pop_macro("EXCS_FIELD_AND_METHOD_RESOLUTION")
#pragma pop_macro("EXCS_INTERFACE_METHOD_RESOLUTION")
#pragma pop_macro("EXCS_STRING_RESOLUTION")
#pragma pop_macro("ILLEGAL_ACCESS_ERROR")
#pragma pop_macro("ILLEGAL_MONITOR_STATE")
#pragma pop_macro("INCOMPATIBLE_CLASS_CHANGE_ERROR")
#pragma pop_macro("INSTANTIATION_ERROR")
#pragma pop_macro("LINKING_EXCEPTION")
#pragma pop_macro("NEGATIVE_ARRAY_SIZE_EXCEPTION")
#pragma pop_macro("NO_CLASS_DEF_FOUND_ERROR")
#pragma pop_macro("NO_SUCH_FIELD_ERROR")
#pragma pop_macro("NO_SUCH_METHOD_ERROR")
#pragma pop_macro("NULL_POINTER_EXCEPTION")
#pragma pop_macro("RUNTIME_EXCEPTION")
#pragma pop_macro("THROWABLE")
#pragma pop_macro("UNSATISFIED_LINK_ERROR")
#pragma pop_macro("VERIFY_ERROR")

#endif // _com_sun_org_apache_bcel_internal_ExceptionConst_h_