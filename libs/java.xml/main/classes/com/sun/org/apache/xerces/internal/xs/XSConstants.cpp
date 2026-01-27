#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>

#include <jcpp.h>

#undef ANNOTATION
#undef ANYSIMPLETYPE_DT
#undef ANYURI_DT
#undef ATTRIBUTE_DECLARATION
#undef ATTRIBUTE_GROUP
#undef ATTRIBUTE_USE
#undef BASE64BINARY_DT
#undef BOOLEAN_DT
#undef BYTE_DT
#undef DATETIME_DT
#undef DATE_DT
#undef DECIMAL_DT
#undef DERIVATION_ALL
#undef DERIVATION_EXTENSION
#undef DERIVATION_EXTENSION_RESTRICTION_SUBSTITION
#undef DERIVATION_LIST
#undef DERIVATION_NONE
#undef DERIVATION_RESTRICTION
#undef DERIVATION_SUBSTITUTION
#undef DERIVATION_UNION
#undef DOUBLE_DT
#undef DURATION_DT
#undef ELEMENT_DECLARATION
#undef ENTITY_DT
#undef FACET
#undef FLOAT_DT
#undef GDAY_DT
#undef GMONTHDAY_DT
#undef GMONTH_DT
#undef GYEARMONTH_DT
#undef GYEAR_DT
#undef HEXBINARY_DT
#undef IDENTITY_CONSTRAINT
#undef IDREF_DT
#undef ID_DT
#undef INTEGER_DT
#undef INT_DT
#undef LANGUAGE_DT
#undef LISTOFUNION_DT
#undef LIST_DT
#undef LONG_DT
#undef MODEL_GROUP
#undef MODEL_GROUP_DEFINITION
#undef MULTIVALUE_FACET
#undef NAME_DT
#undef NCNAME_DT
#undef NEGATIVEINTEGER_DT
#undef NMTOKEN_DT
#undef NONNEGATIVEINTEGER_DT
#undef NONPOSITIVEINTEGER_DT
#undef NORMALIZEDSTRING_DT
#undef NOTATION_DECLARATION
#undef NOTATION_DT
#undef PARTICLE
#undef POSITIVEINTEGER_DT
#undef QNAME_DT
#undef SCOPE_ABSENT
#undef SCOPE_GLOBAL
#undef SCOPE_LOCAL
#undef SHORT_DT
#undef STRING_DT
#undef TIME_DT
#undef TOKEN_DT
#undef TYPE_DEFINITION
#undef UNAVAILABLE_DT
#undef UNSIGNEDBYTE_DT
#undef UNSIGNEDINT_DT
#undef UNSIGNEDLONG_DT
#undef UNSIGNEDSHORT_DT
#undef VC_DEFAULT
#undef VC_FIXED
#undef VC_NONE
#undef WILDCARD

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$FieldInfo _XSConstants_FieldInfo_[] = {
	{"ATTRIBUTE_DECLARATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, ATTRIBUTE_DECLARATION)},
	{"ELEMENT_DECLARATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, ELEMENT_DECLARATION)},
	{"TYPE_DEFINITION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, TYPE_DEFINITION)},
	{"ATTRIBUTE_USE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, ATTRIBUTE_USE)},
	{"ATTRIBUTE_GROUP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, ATTRIBUTE_GROUP)},
	{"MODEL_GROUP_DEFINITION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, MODEL_GROUP_DEFINITION)},
	{"MODEL_GROUP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, MODEL_GROUP)},
	{"PARTICLE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, PARTICLE)},
	{"WILDCARD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, WILDCARD)},
	{"IDENTITY_CONSTRAINT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, IDENTITY_CONSTRAINT)},
	{"NOTATION_DECLARATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, NOTATION_DECLARATION)},
	{"ANNOTATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, ANNOTATION)},
	{"FACET", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, FACET)},
	{"MULTIVALUE_FACET", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, MULTIVALUE_FACET)},
	{"DERIVATION_NONE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DERIVATION_NONE)},
	{"DERIVATION_EXTENSION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DERIVATION_EXTENSION)},
	{"DERIVATION_RESTRICTION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DERIVATION_RESTRICTION)},
	{"DERIVATION_SUBSTITUTION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DERIVATION_SUBSTITUTION)},
	{"DERIVATION_UNION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DERIVATION_UNION)},
	{"DERIVATION_LIST", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DERIVATION_LIST)},
	{"DERIVATION_EXTENSION_RESTRICTION_SUBSTITION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DERIVATION_EXTENSION_RESTRICTION_SUBSTITION)},
	{"DERIVATION_ALL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DERIVATION_ALL)},
	{"SCOPE_ABSENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, SCOPE_ABSENT)},
	{"SCOPE_GLOBAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, SCOPE_GLOBAL)},
	{"SCOPE_LOCAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, SCOPE_LOCAL)},
	{"VC_NONE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, VC_NONE)},
	{"VC_DEFAULT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, VC_DEFAULT)},
	{"VC_FIXED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, VC_FIXED)},
	{"ANYSIMPLETYPE_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, ANYSIMPLETYPE_DT)},
	{"STRING_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, STRING_DT)},
	{"BOOLEAN_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, BOOLEAN_DT)},
	{"DECIMAL_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DECIMAL_DT)},
	{"FLOAT_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, FLOAT_DT)},
	{"DOUBLE_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DOUBLE_DT)},
	{"DURATION_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DURATION_DT)},
	{"DATETIME_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DATETIME_DT)},
	{"TIME_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, TIME_DT)},
	{"DATE_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, DATE_DT)},
	{"GYEARMONTH_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, GYEARMONTH_DT)},
	{"GYEAR_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, GYEAR_DT)},
	{"GMONTHDAY_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, GMONTHDAY_DT)},
	{"GDAY_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, GDAY_DT)},
	{"GMONTH_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, GMONTH_DT)},
	{"HEXBINARY_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, HEXBINARY_DT)},
	{"BASE64BINARY_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, BASE64BINARY_DT)},
	{"ANYURI_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, ANYURI_DT)},
	{"QNAME_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, QNAME_DT)},
	{"NOTATION_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, NOTATION_DT)},
	{"NORMALIZEDSTRING_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, NORMALIZEDSTRING_DT)},
	{"TOKEN_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, TOKEN_DT)},
	{"LANGUAGE_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, LANGUAGE_DT)},
	{"NMTOKEN_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, NMTOKEN_DT)},
	{"NAME_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, NAME_DT)},
	{"NCNAME_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, NCNAME_DT)},
	{"ID_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, ID_DT)},
	{"IDREF_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, IDREF_DT)},
	{"ENTITY_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, ENTITY_DT)},
	{"INTEGER_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, INTEGER_DT)},
	{"NONPOSITIVEINTEGER_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, NONPOSITIVEINTEGER_DT)},
	{"NEGATIVEINTEGER_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, NEGATIVEINTEGER_DT)},
	{"LONG_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, LONG_DT)},
	{"INT_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, INT_DT)},
	{"SHORT_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, SHORT_DT)},
	{"BYTE_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, BYTE_DT)},
	{"NONNEGATIVEINTEGER_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, NONNEGATIVEINTEGER_DT)},
	{"UNSIGNEDLONG_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, UNSIGNEDLONG_DT)},
	{"UNSIGNEDINT_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, UNSIGNEDINT_DT)},
	{"UNSIGNEDSHORT_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, UNSIGNEDSHORT_DT)},
	{"UNSIGNEDBYTE_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, UNSIGNEDBYTE_DT)},
	{"POSITIVEINTEGER_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, POSITIVEINTEGER_DT)},
	{"LISTOFUNION_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, LISTOFUNION_DT)},
	{"LIST_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, LIST_DT)},
	{"UNAVAILABLE_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSConstants, UNAVAILABLE_DT)},
	{}
};

$ClassInfo _XSConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSConstants",
	nullptr,
	nullptr,
	_XSConstants_FieldInfo_
};

$Object* allocate$XSConstants($Class* clazz) {
	return $of($alloc(XSConstants));
}

$Class* XSConstants::load$($String* name, bool initialize) {
	$loadClass(XSConstants, name, initialize, &_XSConstants_ClassInfo_, allocate$XSConstants);
	return class$;
}

$Class* XSConstants::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com