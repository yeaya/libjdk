#ifndef _com_sun_org_apache_xerces_internal_impl_dv_XSSimpleType_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_XSSimpleType_h_
//$ interface com.sun.org.apache.xerces.internal.impl.dv.XSSimpleType
//$ extends com.sun.org.apache.xerces.internal.xs.XSSimpleTypeDefinition

#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>

#pragma push_macro("PRIMITIVE_ANYURI")
#undef PRIMITIVE_ANYURI
#pragma push_macro("PRIMITIVE_BASE64BINARY")
#undef PRIMITIVE_BASE64BINARY
#pragma push_macro("PRIMITIVE_BOOLEAN")
#undef PRIMITIVE_BOOLEAN
#pragma push_macro("PRIMITIVE_DATE")
#undef PRIMITIVE_DATE
#pragma push_macro("PRIMITIVE_DATETIME")
#undef PRIMITIVE_DATETIME
#pragma push_macro("PRIMITIVE_DECIMAL")
#undef PRIMITIVE_DECIMAL
#pragma push_macro("PRIMITIVE_DOUBLE")
#undef PRIMITIVE_DOUBLE
#pragma push_macro("PRIMITIVE_DURATION")
#undef PRIMITIVE_DURATION
#pragma push_macro("PRIMITIVE_FLOAT")
#undef PRIMITIVE_FLOAT
#pragma push_macro("PRIMITIVE_GDAY")
#undef PRIMITIVE_GDAY
#pragma push_macro("PRIMITIVE_GMONTH")
#undef PRIMITIVE_GMONTH
#pragma push_macro("PRIMITIVE_GMONTHDAY")
#undef PRIMITIVE_GMONTHDAY
#pragma push_macro("PRIMITIVE_GYEAR")
#undef PRIMITIVE_GYEAR
#pragma push_macro("PRIMITIVE_GYEARMONTH")
#undef PRIMITIVE_GYEARMONTH
#pragma push_macro("PRIMITIVE_HEXBINARY")
#undef PRIMITIVE_HEXBINARY
#pragma push_macro("PRIMITIVE_NOTATION")
#undef PRIMITIVE_NOTATION
#pragma push_macro("PRIMITIVE_PRECISIONDECIMAL")
#undef PRIMITIVE_PRECISIONDECIMAL
#pragma push_macro("PRIMITIVE_QNAME")
#undef PRIMITIVE_QNAME
#pragma push_macro("PRIMITIVE_STRING")
#undef PRIMITIVE_STRING
#pragma push_macro("PRIMITIVE_TIME")
#undef PRIMITIVE_TIME
#pragma push_macro("WS_COLLAPSE")
#undef WS_COLLAPSE
#pragma push_macro("WS_PRESERVE")
#undef WS_PRESERVE
#pragma push_macro("WS_REPLACE")
#undef WS_REPLACE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidatedInfo;
								class ValidationContext;
								class XSFacets;
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

class XSSimpleType : public ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition {
	$interface(XSSimpleType, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition)
public:
	virtual void applyFacets(::com::sun::org::apache::xerces::internal::impl::dv::XSFacets* facets, int16_t presentFacet, int16_t fixedFacet, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) {}
	virtual int16_t getPrimitiveKind() {return 0;}
	virtual int16_t getWhitespace() {return 0;}
	virtual bool isEqual(Object$* value1, Object$* value2) {return false;}
	virtual bool isIDType() {return false;}
	virtual $Object* validate($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo) {return nullptr;}
	virtual $Object* validate(Object$* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo) {return nullptr;}
	virtual void validate(::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo) {}
	static const int16_t WS_PRESERVE = 0;
	static const int16_t WS_REPLACE = 1;
	static const int16_t WS_COLLAPSE = 2;
	static const int16_t PRIMITIVE_STRING = 1;
	static const int16_t PRIMITIVE_BOOLEAN = 2;
	static const int16_t PRIMITIVE_DECIMAL = 3;
	static const int16_t PRIMITIVE_FLOAT = 4;
	static const int16_t PRIMITIVE_DOUBLE = 5;
	static const int16_t PRIMITIVE_DURATION = 6;
	static const int16_t PRIMITIVE_DATETIME = 7;
	static const int16_t PRIMITIVE_TIME = 8;
	static const int16_t PRIMITIVE_DATE = 9;
	static const int16_t PRIMITIVE_GYEARMONTH = 10;
	static const int16_t PRIMITIVE_GYEAR = 11;
	static const int16_t PRIMITIVE_GMONTHDAY = 12;
	static const int16_t PRIMITIVE_GDAY = 13;
	static const int16_t PRIMITIVE_GMONTH = 14;
	static const int16_t PRIMITIVE_HEXBINARY = 15;
	static const int16_t PRIMITIVE_BASE64BINARY = 16;
	static const int16_t PRIMITIVE_ANYURI = 17;
	static const int16_t PRIMITIVE_QNAME = 18;
	static const int16_t PRIMITIVE_PRECISIONDECIMAL = 19;
	static const int16_t PRIMITIVE_NOTATION = 20;
};

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PRIMITIVE_ANYURI")
#pragma pop_macro("PRIMITIVE_BASE64BINARY")
#pragma pop_macro("PRIMITIVE_BOOLEAN")
#pragma pop_macro("PRIMITIVE_DATE")
#pragma pop_macro("PRIMITIVE_DATETIME")
#pragma pop_macro("PRIMITIVE_DECIMAL")
#pragma pop_macro("PRIMITIVE_DOUBLE")
#pragma pop_macro("PRIMITIVE_DURATION")
#pragma pop_macro("PRIMITIVE_FLOAT")
#pragma pop_macro("PRIMITIVE_GDAY")
#pragma pop_macro("PRIMITIVE_GMONTH")
#pragma pop_macro("PRIMITIVE_GMONTHDAY")
#pragma pop_macro("PRIMITIVE_GYEAR")
#pragma pop_macro("PRIMITIVE_GYEARMONTH")
#pragma pop_macro("PRIMITIVE_HEXBINARY")
#pragma pop_macro("PRIMITIVE_NOTATION")
#pragma pop_macro("PRIMITIVE_PRECISIONDECIMAL")
#pragma pop_macro("PRIMITIVE_QNAME")
#pragma pop_macro("PRIMITIVE_STRING")
#pragma pop_macro("PRIMITIVE_TIME")
#pragma pop_macro("WS_COLLAPSE")
#pragma pop_macro("WS_PRESERVE")
#pragma pop_macro("WS_REPLACE")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_XSSimpleType_h_