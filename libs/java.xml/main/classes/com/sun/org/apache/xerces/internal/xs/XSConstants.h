#ifndef _com_sun_org_apache_xerces_internal_xs_XSConstants_h_
#define _com_sun_org_apache_xerces_internal_xs_XSConstants_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANNOTATION")
#undef ANNOTATION
#pragma push_macro("ANYSIMPLETYPE_DT")
#undef ANYSIMPLETYPE_DT
#pragma push_macro("ANYURI_DT")
#undef ANYURI_DT
#pragma push_macro("ATTRIBUTE_DECLARATION")
#undef ATTRIBUTE_DECLARATION
#pragma push_macro("ATTRIBUTE_GROUP")
#undef ATTRIBUTE_GROUP
#pragma push_macro("ATTRIBUTE_USE")
#undef ATTRIBUTE_USE
#pragma push_macro("BASE64BINARY_DT")
#undef BASE64BINARY_DT
#pragma push_macro("BOOLEAN_DT")
#undef BOOLEAN_DT
#pragma push_macro("BYTE_DT")
#undef BYTE_DT
#pragma push_macro("DATETIME_DT")
#undef DATETIME_DT
#pragma push_macro("DATE_DT")
#undef DATE_DT
#pragma push_macro("DECIMAL_DT")
#undef DECIMAL_DT
#pragma push_macro("DERIVATION_ALL")
#undef DERIVATION_ALL
#pragma push_macro("DERIVATION_EXTENSION")
#undef DERIVATION_EXTENSION
#pragma push_macro("DERIVATION_EXTENSION_RESTRICTION_SUBSTITION")
#undef DERIVATION_EXTENSION_RESTRICTION_SUBSTITION
#pragma push_macro("DERIVATION_LIST")
#undef DERIVATION_LIST
#pragma push_macro("DERIVATION_NONE")
#undef DERIVATION_NONE
#pragma push_macro("DERIVATION_RESTRICTION")
#undef DERIVATION_RESTRICTION
#pragma push_macro("DERIVATION_SUBSTITUTION")
#undef DERIVATION_SUBSTITUTION
#pragma push_macro("DERIVATION_UNION")
#undef DERIVATION_UNION
#pragma push_macro("DOUBLE_DT")
#undef DOUBLE_DT
#pragma push_macro("DURATION_DT")
#undef DURATION_DT
#pragma push_macro("ELEMENT_DECLARATION")
#undef ELEMENT_DECLARATION
#pragma push_macro("ENTITY_DT")
#undef ENTITY_DT
#pragma push_macro("FACET")
#undef FACET
#pragma push_macro("FLOAT_DT")
#undef FLOAT_DT
#pragma push_macro("GDAY_DT")
#undef GDAY_DT
#pragma push_macro("GMONTHDAY_DT")
#undef GMONTHDAY_DT
#pragma push_macro("GMONTH_DT")
#undef GMONTH_DT
#pragma push_macro("GYEARMONTH_DT")
#undef GYEARMONTH_DT
#pragma push_macro("GYEAR_DT")
#undef GYEAR_DT
#pragma push_macro("HEXBINARY_DT")
#undef HEXBINARY_DT
#pragma push_macro("IDENTITY_CONSTRAINT")
#undef IDENTITY_CONSTRAINT
#pragma push_macro("IDREF_DT")
#undef IDREF_DT
#pragma push_macro("ID_DT")
#undef ID_DT
#pragma push_macro("INTEGER_DT")
#undef INTEGER_DT
#pragma push_macro("INT_DT")
#undef INT_DT
#pragma push_macro("LANGUAGE_DT")
#undef LANGUAGE_DT
#pragma push_macro("LISTOFUNION_DT")
#undef LISTOFUNION_DT
#pragma push_macro("LIST_DT")
#undef LIST_DT
#pragma push_macro("LONG_DT")
#undef LONG_DT
#pragma push_macro("MODEL_GROUP")
#undef MODEL_GROUP
#pragma push_macro("MODEL_GROUP_DEFINITION")
#undef MODEL_GROUP_DEFINITION
#pragma push_macro("MULTIVALUE_FACET")
#undef MULTIVALUE_FACET
#pragma push_macro("NAME_DT")
#undef NAME_DT
#pragma push_macro("NCNAME_DT")
#undef NCNAME_DT
#pragma push_macro("NEGATIVEINTEGER_DT")
#undef NEGATIVEINTEGER_DT
#pragma push_macro("NMTOKEN_DT")
#undef NMTOKEN_DT
#pragma push_macro("NONNEGATIVEINTEGER_DT")
#undef NONNEGATIVEINTEGER_DT
#pragma push_macro("NONPOSITIVEINTEGER_DT")
#undef NONPOSITIVEINTEGER_DT
#pragma push_macro("NORMALIZEDSTRING_DT")
#undef NORMALIZEDSTRING_DT
#pragma push_macro("NOTATION_DECLARATION")
#undef NOTATION_DECLARATION
#pragma push_macro("NOTATION_DT")
#undef NOTATION_DT
#pragma push_macro("PARTICLE")
#undef PARTICLE
#pragma push_macro("POSITIVEINTEGER_DT")
#undef POSITIVEINTEGER_DT
#pragma push_macro("QNAME_DT")
#undef QNAME_DT
#pragma push_macro("SCOPE_ABSENT")
#undef SCOPE_ABSENT
#pragma push_macro("SCOPE_GLOBAL")
#undef SCOPE_GLOBAL
#pragma push_macro("SCOPE_LOCAL")
#undef SCOPE_LOCAL
#pragma push_macro("SHORT_DT")
#undef SHORT_DT
#pragma push_macro("STRING_DT")
#undef STRING_DT
#pragma push_macro("TIME_DT")
#undef TIME_DT
#pragma push_macro("TOKEN_DT")
#undef TOKEN_DT
#pragma push_macro("TYPE_DEFINITION")
#undef TYPE_DEFINITION
#pragma push_macro("UNAVAILABLE_DT")
#undef UNAVAILABLE_DT
#pragma push_macro("UNSIGNEDBYTE_DT")
#undef UNSIGNEDBYTE_DT
#pragma push_macro("UNSIGNEDINT_DT")
#undef UNSIGNEDINT_DT
#pragma push_macro("UNSIGNEDLONG_DT")
#undef UNSIGNEDLONG_DT
#pragma push_macro("UNSIGNEDSHORT_DT")
#undef UNSIGNEDSHORT_DT
#pragma push_macro("VC_DEFAULT")
#undef VC_DEFAULT
#pragma push_macro("VC_FIXED")
#undef VC_FIXED
#pragma push_macro("VC_NONE")
#undef VC_NONE
#pragma push_macro("WILDCARD")
#undef WILDCARD

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

class XSConstants : public ::java::lang::Object {
	$interface(XSConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int16_t ATTRIBUTE_DECLARATION = 1;
	static const int16_t ELEMENT_DECLARATION = 2;
	static const int16_t TYPE_DEFINITION = 3;
	static const int16_t ATTRIBUTE_USE = 4;
	static const int16_t ATTRIBUTE_GROUP = 5;
	static const int16_t MODEL_GROUP_DEFINITION = 6;
	static const int16_t MODEL_GROUP = 7;
	static const int16_t PARTICLE = 8;
	static const int16_t WILDCARD = 9;
	static const int16_t IDENTITY_CONSTRAINT = 10;
	static const int16_t NOTATION_DECLARATION = 11;
	static const int16_t ANNOTATION = 12;
	static const int16_t FACET = 13;
	static const int16_t MULTIVALUE_FACET = 14;
	static const int16_t DERIVATION_NONE = 0;
	static const int16_t DERIVATION_EXTENSION = 1;
	static const int16_t DERIVATION_RESTRICTION = 2;
	static const int16_t DERIVATION_SUBSTITUTION = 4;
	static const int16_t DERIVATION_UNION = 8;
	static const int16_t DERIVATION_LIST = 16;
	static const int16_t DERIVATION_EXTENSION_RESTRICTION_SUBSTITION = 7; // XSConstants.DERIVATION_EXTENSION | XSConstants.DERIVATION_RESTRICTION | XSConstants.DERIVATION_SUBSTITUTION
	static const int16_t DERIVATION_ALL = 31; // XSConstants.DERIVATION_SUBSTITUTION | XSConstants.DERIVATION_EXTENSION | XSConstants.DERIVATION_RESTRICTION | XSConstants.DERIVATION_LIST | XSConstants.DERIVATION_UNION
	static const int16_t SCOPE_ABSENT = 0;
	static const int16_t SCOPE_GLOBAL = 1;
	static const int16_t SCOPE_LOCAL = 2;
	static const int16_t VC_NONE = 0;
	static const int16_t VC_DEFAULT = 1;
	static const int16_t VC_FIXED = 2;
	static const int16_t ANYSIMPLETYPE_DT = 1;
	static const int16_t STRING_DT = 2;
	static const int16_t BOOLEAN_DT = 3;
	static const int16_t DECIMAL_DT = 4;
	static const int16_t FLOAT_DT = 5;
	static const int16_t DOUBLE_DT = 6;
	static const int16_t DURATION_DT = 7;
	static const int16_t DATETIME_DT = 8;
	static const int16_t TIME_DT = 9;
	static const int16_t DATE_DT = 10;
	static const int16_t GYEARMONTH_DT = 11;
	static const int16_t GYEAR_DT = 12;
	static const int16_t GMONTHDAY_DT = 13;
	static const int16_t GDAY_DT = 14;
	static const int16_t GMONTH_DT = 15;
	static const int16_t HEXBINARY_DT = 16;
	static const int16_t BASE64BINARY_DT = 17;
	static const int16_t ANYURI_DT = 18;
	static const int16_t QNAME_DT = 19;
	static const int16_t NOTATION_DT = 20;
	static const int16_t NORMALIZEDSTRING_DT = 21;
	static const int16_t TOKEN_DT = 22;
	static const int16_t LANGUAGE_DT = 23;
	static const int16_t NMTOKEN_DT = 24;
	static const int16_t NAME_DT = 25;
	static const int16_t NCNAME_DT = 26;
	static const int16_t ID_DT = 27;
	static const int16_t IDREF_DT = 28;
	static const int16_t ENTITY_DT = 29;
	static const int16_t INTEGER_DT = 30;
	static const int16_t NONPOSITIVEINTEGER_DT = 31;
	static const int16_t NEGATIVEINTEGER_DT = 32;
	static const int16_t LONG_DT = 33;
	static const int16_t INT_DT = 34;
	static const int16_t SHORT_DT = 35;
	static const int16_t BYTE_DT = 36;
	static const int16_t NONNEGATIVEINTEGER_DT = 37;
	static const int16_t UNSIGNEDLONG_DT = 38;
	static const int16_t UNSIGNEDINT_DT = 39;
	static const int16_t UNSIGNEDSHORT_DT = 40;
	static const int16_t UNSIGNEDBYTE_DT = 41;
	static const int16_t POSITIVEINTEGER_DT = 42;
	static const int16_t LISTOFUNION_DT = 43;
	static const int16_t LIST_DT = 44;
	static const int16_t UNAVAILABLE_DT = 45;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANNOTATION")
#pragma pop_macro("ANYSIMPLETYPE_DT")
#pragma pop_macro("ANYURI_DT")
#pragma pop_macro("ATTRIBUTE_DECLARATION")
#pragma pop_macro("ATTRIBUTE_GROUP")
#pragma pop_macro("ATTRIBUTE_USE")
#pragma pop_macro("BASE64BINARY_DT")
#pragma pop_macro("BOOLEAN_DT")
#pragma pop_macro("BYTE_DT")
#pragma pop_macro("DATETIME_DT")
#pragma pop_macro("DATE_DT")
#pragma pop_macro("DECIMAL_DT")
#pragma pop_macro("DERIVATION_ALL")
#pragma pop_macro("DERIVATION_EXTENSION")
#pragma pop_macro("DERIVATION_EXTENSION_RESTRICTION_SUBSTITION")
#pragma pop_macro("DERIVATION_LIST")
#pragma pop_macro("DERIVATION_NONE")
#pragma pop_macro("DERIVATION_RESTRICTION")
#pragma pop_macro("DERIVATION_SUBSTITUTION")
#pragma pop_macro("DERIVATION_UNION")
#pragma pop_macro("DOUBLE_DT")
#pragma pop_macro("DURATION_DT")
#pragma pop_macro("ELEMENT_DECLARATION")
#pragma pop_macro("ENTITY_DT")
#pragma pop_macro("FACET")
#pragma pop_macro("FLOAT_DT")
#pragma pop_macro("GDAY_DT")
#pragma pop_macro("GMONTHDAY_DT")
#pragma pop_macro("GMONTH_DT")
#pragma pop_macro("GYEARMONTH_DT")
#pragma pop_macro("GYEAR_DT")
#pragma pop_macro("HEXBINARY_DT")
#pragma pop_macro("IDENTITY_CONSTRAINT")
#pragma pop_macro("IDREF_DT")
#pragma pop_macro("ID_DT")
#pragma pop_macro("INTEGER_DT")
#pragma pop_macro("INT_DT")
#pragma pop_macro("LANGUAGE_DT")
#pragma pop_macro("LISTOFUNION_DT")
#pragma pop_macro("LIST_DT")
#pragma pop_macro("LONG_DT")
#pragma pop_macro("MODEL_GROUP")
#pragma pop_macro("MODEL_GROUP_DEFINITION")
#pragma pop_macro("MULTIVALUE_FACET")
#pragma pop_macro("NAME_DT")
#pragma pop_macro("NCNAME_DT")
#pragma pop_macro("NEGATIVEINTEGER_DT")
#pragma pop_macro("NMTOKEN_DT")
#pragma pop_macro("NONNEGATIVEINTEGER_DT")
#pragma pop_macro("NONPOSITIVEINTEGER_DT")
#pragma pop_macro("NORMALIZEDSTRING_DT")
#pragma pop_macro("NOTATION_DECLARATION")
#pragma pop_macro("NOTATION_DT")
#pragma pop_macro("PARTICLE")
#pragma pop_macro("POSITIVEINTEGER_DT")
#pragma pop_macro("QNAME_DT")
#pragma pop_macro("SCOPE_ABSENT")
#pragma pop_macro("SCOPE_GLOBAL")
#pragma pop_macro("SCOPE_LOCAL")
#pragma pop_macro("SHORT_DT")
#pragma pop_macro("STRING_DT")
#pragma pop_macro("TIME_DT")
#pragma pop_macro("TOKEN_DT")
#pragma pop_macro("TYPE_DEFINITION")
#pragma pop_macro("UNAVAILABLE_DT")
#pragma pop_macro("UNSIGNEDBYTE_DT")
#pragma pop_macro("UNSIGNEDINT_DT")
#pragma pop_macro("UNSIGNEDLONG_DT")
#pragma pop_macro("UNSIGNEDSHORT_DT")
#pragma pop_macro("VC_DEFAULT")
#pragma pop_macro("VC_FIXED")
#pragma pop_macro("VC_NONE")
#pragma pop_macro("WILDCARD")

#endif // _com_sun_org_apache_xerces_internal_xs_XSConstants_h_