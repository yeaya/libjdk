#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_TypeValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_TypeValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EQUAL")
#undef EQUAL
#pragma push_macro("GREATER_THAN")
#undef GREATER_THAN
#pragma push_macro("INDETERMINATE")
#undef INDETERMINATE
#pragma push_macro("LESS_THAN")
#undef LESS_THAN
#pragma push_macro("USE_CODE_POINT_COUNT_FOR_STRING_LENGTH")
#undef USE_CODE_POINT_COUNT_FOR_STRING_LENGTH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidationContext;
							}
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
						namespace impl {
							namespace dv {
								namespace xs {

class TypeValidator : public ::java::lang::Object {
	$class(TypeValidator, 0, ::java::lang::Object)
public:
	TypeValidator();
	void init$();
	virtual void checkExtraRules(Object$* value, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context);
	virtual int32_t compare(Object$* value1, Object$* value2);
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) {return nullptr;}
	virtual int16_t getAllowedFacets() {return 0;}
	int32_t getCodePointLength($String* value);
	virtual int32_t getDataLength(Object$* value);
	static int32_t getDigit(char16_t ch);
	virtual int32_t getFractionDigits(Object$* value);
	virtual int32_t getTotalDigits(Object$* value);
	static bool isDigit(char16_t ch);
	virtual bool isIdentical(Object$* value1, Object$* value2);
	static bool USE_CODE_POINT_COUNT_FOR_STRING_LENGTH;
	static const int16_t LESS_THAN = (-1);
	static const int16_t EQUAL = 0;
	static const int16_t GREATER_THAN = 1;
	static const int16_t INDETERMINATE = 2;
};

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EQUAL")
#pragma pop_macro("GREATER_THAN")
#pragma pop_macro("INDETERMINATE")
#pragma pop_macro("LESS_THAN")
#pragma pop_macro("USE_CODE_POINT_COUNT_FOR_STRING_LENGTH")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_TypeValidator_h_