#ifndef _com_sun_org_apache_xerces_internal_impl_xs_SchemaSymbols_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_SchemaSymbols_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.SchemaSymbols
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ATTVAL_ANYSIMPLETYPE")
#undef ATTVAL_ANYSIMPLETYPE
#pragma push_macro("ATTVAL_ANYTYPE")
#undef ATTVAL_ANYTYPE
#pragma push_macro("ATTVAL_ANYURI")
#undef ATTVAL_ANYURI
#pragma push_macro("ATTVAL_BASE64BINARY")
#undef ATTVAL_BASE64BINARY
#pragma push_macro("ATTVAL_BOOLEAN")
#undef ATTVAL_BOOLEAN
#pragma push_macro("ATTVAL_BYTE")
#undef ATTVAL_BYTE
#pragma push_macro("ATTVAL_COLLAPSE")
#undef ATTVAL_COLLAPSE
#pragma push_macro("ATTVAL_DATE")
#undef ATTVAL_DATE
#pragma push_macro("ATTVAL_DATETIME")
#undef ATTVAL_DATETIME
#pragma push_macro("ATTVAL_DAY")
#undef ATTVAL_DAY
#pragma push_macro("ATTVAL_DECIMAL")
#undef ATTVAL_DECIMAL
#pragma push_macro("ATTVAL_DOUBLE")
#undef ATTVAL_DOUBLE
#pragma push_macro("ATTVAL_DURATION")
#undef ATTVAL_DURATION
#pragma push_macro("ATTVAL_ENTITIES")
#undef ATTVAL_ENTITIES
#pragma push_macro("ATTVAL_ENTITY")
#undef ATTVAL_ENTITY
#pragma push_macro("ATTVAL_EXTENSION")
#undef ATTVAL_EXTENSION
#pragma push_macro("ATTVAL_FALSE")
#undef ATTVAL_FALSE
#pragma push_macro("ATTVAL_FALSE_0")
#undef ATTVAL_FALSE_0
#pragma push_macro("ATTVAL_FLOAT")
#undef ATTVAL_FLOAT
#pragma push_macro("ATTVAL_HEXBINARY")
#undef ATTVAL_HEXBINARY
#pragma push_macro("ATTVAL_ID")
#undef ATTVAL_ID
#pragma push_macro("ATTVAL_IDREF")
#undef ATTVAL_IDREF
#pragma push_macro("ATTVAL_IDREFS")
#undef ATTVAL_IDREFS
#pragma push_macro("ATTVAL_INT")
#undef ATTVAL_INT
#pragma push_macro("ATTVAL_INTEGER")
#undef ATTVAL_INTEGER
#pragma push_macro("ATTVAL_LANGUAGE")
#undef ATTVAL_LANGUAGE
#pragma push_macro("ATTVAL_LAX")
#undef ATTVAL_LAX
#pragma push_macro("ATTVAL_LIST")
#undef ATTVAL_LIST
#pragma push_macro("ATTVAL_LONG")
#undef ATTVAL_LONG
#pragma push_macro("ATTVAL_MONTH")
#undef ATTVAL_MONTH
#pragma push_macro("ATTVAL_MONTHDAY")
#undef ATTVAL_MONTHDAY
#pragma push_macro("ATTVAL_NAME")
#undef ATTVAL_NAME
#pragma push_macro("ATTVAL_NCNAME")
#undef ATTVAL_NCNAME
#pragma push_macro("ATTVAL_NEGATIVEINTEGER")
#undef ATTVAL_NEGATIVEINTEGER
#pragma push_macro("ATTVAL_NMTOKEN")
#undef ATTVAL_NMTOKEN
#pragma push_macro("ATTVAL_NMTOKENS")
#undef ATTVAL_NMTOKENS
#pragma push_macro("ATTVAL_NONNEGATIVEINTEGER")
#undef ATTVAL_NONNEGATIVEINTEGER
#pragma push_macro("ATTVAL_NONPOSITIVEINTEGER")
#undef ATTVAL_NONPOSITIVEINTEGER
#pragma push_macro("ATTVAL_NORMALIZEDSTRING")
#undef ATTVAL_NORMALIZEDSTRING
#pragma push_macro("ATTVAL_NOTATION")
#undef ATTVAL_NOTATION
#pragma push_macro("ATTVAL_OPTIONAL")
#undef ATTVAL_OPTIONAL
#pragma push_macro("ATTVAL_POSITIVEINTEGER")
#undef ATTVAL_POSITIVEINTEGER
#pragma push_macro("ATTVAL_POUNDALL")
#undef ATTVAL_POUNDALL
#pragma push_macro("ATTVAL_PRESERVE")
#undef ATTVAL_PRESERVE
#pragma push_macro("ATTVAL_PROHIBITED")
#undef ATTVAL_PROHIBITED
#pragma push_macro("ATTVAL_QNAME")
#undef ATTVAL_QNAME
#pragma push_macro("ATTVAL_QUALIFIED")
#undef ATTVAL_QUALIFIED
#pragma push_macro("ATTVAL_REPLACE")
#undef ATTVAL_REPLACE
#pragma push_macro("ATTVAL_REQUIRED")
#undef ATTVAL_REQUIRED
#pragma push_macro("ATTVAL_RESTRICTION")
#undef ATTVAL_RESTRICTION
#pragma push_macro("ATTVAL_SHORT")
#undef ATTVAL_SHORT
#pragma push_macro("ATTVAL_SKIP")
#undef ATTVAL_SKIP
#pragma push_macro("ATTVAL_STRICT")
#undef ATTVAL_STRICT
#pragma push_macro("ATTVAL_STRING")
#undef ATTVAL_STRING
#pragma push_macro("ATTVAL_SUBSTITUTION")
#undef ATTVAL_SUBSTITUTION
#pragma push_macro("ATTVAL_TIME")
#undef ATTVAL_TIME
#pragma push_macro("ATTVAL_TOKEN")
#undef ATTVAL_TOKEN
#pragma push_macro("ATTVAL_TRUE")
#undef ATTVAL_TRUE
#pragma push_macro("ATTVAL_TRUE_1")
#undef ATTVAL_TRUE_1
#pragma push_macro("ATTVAL_TWOPOUNDANY")
#undef ATTVAL_TWOPOUNDANY
#pragma push_macro("ATTVAL_TWOPOUNDLOCAL")
#undef ATTVAL_TWOPOUNDLOCAL
#pragma push_macro("ATTVAL_TWOPOUNDOTHER")
#undef ATTVAL_TWOPOUNDOTHER
#pragma push_macro("ATTVAL_TWOPOUNDTARGETNS")
#undef ATTVAL_TWOPOUNDTARGETNS
#pragma push_macro("ATTVAL_UNBOUNDED")
#undef ATTVAL_UNBOUNDED
#pragma push_macro("ATTVAL_UNION")
#undef ATTVAL_UNION
#pragma push_macro("ATTVAL_UNQUALIFIED")
#undef ATTVAL_UNQUALIFIED
#pragma push_macro("ATTVAL_UNSIGNEDBYTE")
#undef ATTVAL_UNSIGNEDBYTE
#pragma push_macro("ATTVAL_UNSIGNEDINT")
#undef ATTVAL_UNSIGNEDINT
#pragma push_macro("ATTVAL_UNSIGNEDLONG")
#undef ATTVAL_UNSIGNEDLONG
#pragma push_macro("ATTVAL_UNSIGNEDSHORT")
#undef ATTVAL_UNSIGNEDSHORT
#pragma push_macro("ATTVAL_YEAR")
#undef ATTVAL_YEAR
#pragma push_macro("ATTVAL_YEARMONTH")
#undef ATTVAL_YEARMONTH
#pragma push_macro("ATT_ABSTRACT")
#undef ATT_ABSTRACT
#pragma push_macro("ATT_ATTRIBUTEFORMDEFAULT")
#undef ATT_ATTRIBUTEFORMDEFAULT
#pragma push_macro("ATT_BASE")
#undef ATT_BASE
#pragma push_macro("ATT_BLOCK")
#undef ATT_BLOCK
#pragma push_macro("ATT_BLOCKDEFAULT")
#undef ATT_BLOCKDEFAULT
#pragma push_macro("ATT_DEFAULT")
#undef ATT_DEFAULT
#pragma push_macro("ATT_ELEMENTFORMDEFAULT")
#undef ATT_ELEMENTFORMDEFAULT
#pragma push_macro("ATT_FINAL")
#undef ATT_FINAL
#pragma push_macro("ATT_FINALDEFAULT")
#undef ATT_FINALDEFAULT
#pragma push_macro("ATT_FIXED")
#undef ATT_FIXED
#pragma push_macro("ATT_FORM")
#undef ATT_FORM
#pragma push_macro("ATT_ID")
#undef ATT_ID
#pragma push_macro("ATT_ITEMTYPE")
#undef ATT_ITEMTYPE
#pragma push_macro("ATT_MAXOCCURS")
#undef ATT_MAXOCCURS
#pragma push_macro("ATT_MEMBERTYPES")
#undef ATT_MEMBERTYPES
#pragma push_macro("ATT_MINOCCURS")
#undef ATT_MINOCCURS
#pragma push_macro("ATT_MIXED")
#undef ATT_MIXED
#pragma push_macro("ATT_NAME")
#undef ATT_NAME
#pragma push_macro("ATT_NAMESPACE")
#undef ATT_NAMESPACE
#pragma push_macro("ATT_NILLABLE")
#undef ATT_NILLABLE
#pragma push_macro("ATT_PROCESSCONTENTS")
#undef ATT_PROCESSCONTENTS
#pragma push_macro("ATT_PUBLIC")
#undef ATT_PUBLIC
#pragma push_macro("ATT_REF")
#undef ATT_REF
#pragma push_macro("ATT_REFER")
#undef ATT_REFER
#pragma push_macro("ATT_SCHEMALOCATION")
#undef ATT_SCHEMALOCATION
#pragma push_macro("ATT_SOURCE")
#undef ATT_SOURCE
#pragma push_macro("ATT_SUBSTITUTIONGROUP")
#undef ATT_SUBSTITUTIONGROUP
#pragma push_macro("ATT_SYSTEM")
#undef ATT_SYSTEM
#pragma push_macro("ATT_TARGETNAMESPACE")
#undef ATT_TARGETNAMESPACE
#pragma push_macro("ATT_TYPE")
#undef ATT_TYPE
#pragma push_macro("ATT_USE")
#undef ATT_USE
#pragma push_macro("ATT_VALUE")
#undef ATT_VALUE
#pragma push_macro("ATT_VERSION")
#undef ATT_VERSION
#pragma push_macro("ATT_XML_LANG")
#undef ATT_XML_LANG
#pragma push_macro("ATT_XPATH")
#undef ATT_XPATH
#pragma push_macro("ELT_ALL")
#undef ELT_ALL
#pragma push_macro("ELT_ANNOTATION")
#undef ELT_ANNOTATION
#pragma push_macro("ELT_ANY")
#undef ELT_ANY
#pragma push_macro("ELT_ANYATTRIBUTE")
#undef ELT_ANYATTRIBUTE
#pragma push_macro("ELT_APPINFO")
#undef ELT_APPINFO
#pragma push_macro("ELT_ATTRIBUTE")
#undef ELT_ATTRIBUTE
#pragma push_macro("ELT_ATTRIBUTEGROUP")
#undef ELT_ATTRIBUTEGROUP
#pragma push_macro("ELT_CHOICE")
#undef ELT_CHOICE
#pragma push_macro("ELT_COMPLEXCONTENT")
#undef ELT_COMPLEXCONTENT
#pragma push_macro("ELT_COMPLEXTYPE")
#undef ELT_COMPLEXTYPE
#pragma push_macro("ELT_DOCUMENTATION")
#undef ELT_DOCUMENTATION
#pragma push_macro("ELT_ELEMENT")
#undef ELT_ELEMENT
#pragma push_macro("ELT_ENUMERATION")
#undef ELT_ENUMERATION
#pragma push_macro("ELT_EXTENSION")
#undef ELT_EXTENSION
#pragma push_macro("ELT_FIELD")
#undef ELT_FIELD
#pragma push_macro("ELT_FRACTIONDIGITS")
#undef ELT_FRACTIONDIGITS
#pragma push_macro("ELT_GROUP")
#undef ELT_GROUP
#pragma push_macro("ELT_IMPORT")
#undef ELT_IMPORT
#pragma push_macro("ELT_INCLUDE")
#undef ELT_INCLUDE
#pragma push_macro("ELT_KEY")
#undef ELT_KEY
#pragma push_macro("ELT_KEYREF")
#undef ELT_KEYREF
#pragma push_macro("ELT_LENGTH")
#undef ELT_LENGTH
#pragma push_macro("ELT_LIST")
#undef ELT_LIST
#pragma push_macro("ELT_MAXEXCLUSIVE")
#undef ELT_MAXEXCLUSIVE
#pragma push_macro("ELT_MAXINCLUSIVE")
#undef ELT_MAXINCLUSIVE
#pragma push_macro("ELT_MAXLENGTH")
#undef ELT_MAXLENGTH
#pragma push_macro("ELT_MINEXCLUSIVE")
#undef ELT_MINEXCLUSIVE
#pragma push_macro("ELT_MININCLUSIVE")
#undef ELT_MININCLUSIVE
#pragma push_macro("ELT_MINLENGTH")
#undef ELT_MINLENGTH
#pragma push_macro("ELT_NOTATION")
#undef ELT_NOTATION
#pragma push_macro("ELT_PATTERN")
#undef ELT_PATTERN
#pragma push_macro("ELT_REDEFINE")
#undef ELT_REDEFINE
#pragma push_macro("ELT_RESTRICTION")
#undef ELT_RESTRICTION
#pragma push_macro("ELT_SCHEMA")
#undef ELT_SCHEMA
#pragma push_macro("ELT_SELECTOR")
#undef ELT_SELECTOR
#pragma push_macro("ELT_SEQUENCE")
#undef ELT_SEQUENCE
#pragma push_macro("ELT_SIMPLECONTENT")
#undef ELT_SIMPLECONTENT
#pragma push_macro("ELT_SIMPLETYPE")
#undef ELT_SIMPLETYPE
#pragma push_macro("ELT_TOTALDIGITS")
#undef ELT_TOTALDIGITS
#pragma push_macro("ELT_UNION")
#undef ELT_UNION
#pragma push_macro("ELT_UNIQUE")
#undef ELT_UNIQUE
#pragma push_macro("ELT_WHITESPACE")
#undef ELT_WHITESPACE
#pragma push_macro("FORM_QUALIFIED")
#undef FORM_QUALIFIED
#pragma push_macro("FORM_UNQUALIFIED")
#undef FORM_UNQUALIFIED
#pragma push_macro("OCCURRENCE_UNBOUNDED")
#undef OCCURRENCE_UNBOUNDED
#pragma push_macro("URI_SCHEMAFORSCHEMA")
#undef URI_SCHEMAFORSCHEMA
#pragma push_macro("URI_XSI")
#undef URI_XSI
#pragma push_macro("USE_OPTIONAL")
#undef USE_OPTIONAL
#pragma push_macro("USE_PROHIBITED")
#undef USE_PROHIBITED
#pragma push_macro("USE_REQUIRED")
#undef USE_REQUIRED
#pragma push_macro("XSI_NIL")
#undef XSI_NIL
#pragma push_macro("XSI_NONAMESPACESCHEMALOCATION")
#undef XSI_NONAMESPACESCHEMALOCATION
#pragma push_macro("XSI_SCHEMALOCATION")
#undef XSI_SCHEMALOCATION
#pragma push_macro("XSI_TYPE")
#undef XSI_TYPE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

class SchemaSymbols : public ::java::lang::Object {
	$class(SchemaSymbols, 0, ::java::lang::Object)
public:
	SchemaSymbols();
	void init$();
	static $String* URI_XSI;
	static $String* XSI_SCHEMALOCATION;
	static $String* XSI_NONAMESPACESCHEMALOCATION;
	static $String* XSI_TYPE;
	static $String* XSI_NIL;
	static $String* URI_SCHEMAFORSCHEMA;
	static $String* ELT_ALL;
	static $String* ELT_ANNOTATION;
	static $String* ELT_ANY;
	static $String* ELT_ANYATTRIBUTE;
	static $String* ELT_APPINFO;
	static $String* ELT_ATTRIBUTE;
	static $String* ELT_ATTRIBUTEGROUP;
	static $String* ELT_CHOICE;
	static $String* ELT_COMPLEXCONTENT;
	static $String* ELT_COMPLEXTYPE;
	static $String* ELT_DOCUMENTATION;
	static $String* ELT_ELEMENT;
	static $String* ELT_ENUMERATION;
	static $String* ELT_EXTENSION;
	static $String* ELT_FIELD;
	static $String* ELT_FRACTIONDIGITS;
	static $String* ELT_GROUP;
	static $String* ELT_IMPORT;
	static $String* ELT_INCLUDE;
	static $String* ELT_KEY;
	static $String* ELT_KEYREF;
	static $String* ELT_LENGTH;
	static $String* ELT_LIST;
	static $String* ELT_MAXEXCLUSIVE;
	static $String* ELT_MAXINCLUSIVE;
	static $String* ELT_MAXLENGTH;
	static $String* ELT_MINEXCLUSIVE;
	static $String* ELT_MININCLUSIVE;
	static $String* ELT_MINLENGTH;
	static $String* ELT_NOTATION;
	static $String* ELT_PATTERN;
	static $String* ELT_REDEFINE;
	static $String* ELT_RESTRICTION;
	static $String* ELT_SCHEMA;
	static $String* ELT_SELECTOR;
	static $String* ELT_SEQUENCE;
	static $String* ELT_SIMPLECONTENT;
	static $String* ELT_SIMPLETYPE;
	static $String* ELT_TOTALDIGITS;
	static $String* ELT_UNION;
	static $String* ELT_UNIQUE;
	static $String* ELT_WHITESPACE;
	static $String* ATT_ABSTRACT;
	static $String* ATT_ATTRIBUTEFORMDEFAULT;
	static $String* ATT_BASE;
	static $String* ATT_BLOCK;
	static $String* ATT_BLOCKDEFAULT;
	static $String* ATT_DEFAULT;
	static $String* ATT_ELEMENTFORMDEFAULT;
	static $String* ATT_FINAL;
	static $String* ATT_FINALDEFAULT;
	static $String* ATT_FIXED;
	static $String* ATT_FORM;
	static $String* ATT_ID;
	static $String* ATT_ITEMTYPE;
	static $String* ATT_MAXOCCURS;
	static $String* ATT_MEMBERTYPES;
	static $String* ATT_MINOCCURS;
	static $String* ATT_MIXED;
	static $String* ATT_NAME;
	static $String* ATT_NAMESPACE;
	static $String* ATT_NILLABLE;
	static $String* ATT_PROCESSCONTENTS;
	static $String* ATT_REF;
	static $String* ATT_REFER;
	static $String* ATT_SCHEMALOCATION;
	static $String* ATT_SOURCE;
	static $String* ATT_SUBSTITUTIONGROUP;
	static $String* ATT_SYSTEM;
	static $String* ATT_PUBLIC;
	static $String* ATT_TARGETNAMESPACE;
	static $String* ATT_TYPE;
	static $String* ATT_USE;
	static $String* ATT_VALUE;
	static $String* ATT_VERSION;
	static $String* ATT_XML_LANG;
	static $String* ATT_XPATH;
	static $String* ATTVAL_TWOPOUNDANY;
	static $String* ATTVAL_TWOPOUNDLOCAL;
	static $String* ATTVAL_TWOPOUNDOTHER;
	static $String* ATTVAL_TWOPOUNDTARGETNS;
	static $String* ATTVAL_POUNDALL;
	static $String* ATTVAL_FALSE_0;
	static $String* ATTVAL_TRUE_1;
	static $String* ATTVAL_ANYSIMPLETYPE;
	static $String* ATTVAL_ANYTYPE;
	static $String* ATTVAL_ANYURI;
	static $String* ATTVAL_BASE64BINARY;
	static $String* ATTVAL_BOOLEAN;
	static $String* ATTVAL_BYTE;
	static $String* ATTVAL_COLLAPSE;
	static $String* ATTVAL_DATE;
	static $String* ATTVAL_DATETIME;
	static $String* ATTVAL_DAY;
	static $String* ATTVAL_DECIMAL;
	static $String* ATTVAL_DOUBLE;
	static $String* ATTVAL_DURATION;
	static $String* ATTVAL_ENTITY;
	static $String* ATTVAL_ENTITIES;
	static $String* ATTVAL_EXTENSION;
	static $String* ATTVAL_FALSE;
	static $String* ATTVAL_FLOAT;
	static $String* ATTVAL_HEXBINARY;
	static $String* ATTVAL_ID;
	static $String* ATTVAL_IDREF;
	static $String* ATTVAL_IDREFS;
	static $String* ATTVAL_INT;
	static $String* ATTVAL_INTEGER;
	static $String* ATTVAL_LANGUAGE;
	static $String* ATTVAL_LAX;
	static $String* ATTVAL_LIST;
	static $String* ATTVAL_LONG;
	static $String* ATTVAL_NAME;
	static $String* ATTVAL_NEGATIVEINTEGER;
	static $String* ATTVAL_MONTH;
	static $String* ATTVAL_MONTHDAY;
	static $String* ATTVAL_NCNAME;
	static $String* ATTVAL_NMTOKEN;
	static $String* ATTVAL_NMTOKENS;
	static $String* ATTVAL_NONNEGATIVEINTEGER;
	static $String* ATTVAL_NONPOSITIVEINTEGER;
	static $String* ATTVAL_NORMALIZEDSTRING;
	static $String* ATTVAL_NOTATION;
	static $String* ATTVAL_OPTIONAL;
	static $String* ATTVAL_POSITIVEINTEGER;
	static $String* ATTVAL_PRESERVE;
	static $String* ATTVAL_PROHIBITED;
	static $String* ATTVAL_QNAME;
	static $String* ATTVAL_QUALIFIED;
	static $String* ATTVAL_REPLACE;
	static $String* ATTVAL_REQUIRED;
	static $String* ATTVAL_RESTRICTION;
	static $String* ATTVAL_SHORT;
	static $String* ATTVAL_SKIP;
	static $String* ATTVAL_STRICT;
	static $String* ATTVAL_STRING;
	static $String* ATTVAL_SUBSTITUTION;
	static $String* ATTVAL_TIME;
	static $String* ATTVAL_TOKEN;
	static $String* ATTVAL_TRUE;
	static $String* ATTVAL_UNBOUNDED;
	static $String* ATTVAL_UNION;
	static $String* ATTVAL_UNQUALIFIED;
	static $String* ATTVAL_UNSIGNEDBYTE;
	static $String* ATTVAL_UNSIGNEDINT;
	static $String* ATTVAL_UNSIGNEDLONG;
	static $String* ATTVAL_UNSIGNEDSHORT;
	static $String* ATTVAL_YEAR;
	static $String* ATTVAL_YEARMONTH;
	static const int16_t FORM_UNQUALIFIED = 0;
	static const int16_t FORM_QUALIFIED = 1;
	static const int16_t USE_OPTIONAL = 0;
	static const int16_t USE_REQUIRED = 1;
	static const int16_t USE_PROHIBITED = 2;
	static const int32_t OCCURRENCE_UNBOUNDED = (-1);
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATTVAL_ANYSIMPLETYPE")
#pragma pop_macro("ATTVAL_ANYTYPE")
#pragma pop_macro("ATTVAL_ANYURI")
#pragma pop_macro("ATTVAL_BASE64BINARY")
#pragma pop_macro("ATTVAL_BOOLEAN")
#pragma pop_macro("ATTVAL_BYTE")
#pragma pop_macro("ATTVAL_COLLAPSE")
#pragma pop_macro("ATTVAL_DATE")
#pragma pop_macro("ATTVAL_DATETIME")
#pragma pop_macro("ATTVAL_DAY")
#pragma pop_macro("ATTVAL_DECIMAL")
#pragma pop_macro("ATTVAL_DOUBLE")
#pragma pop_macro("ATTVAL_DURATION")
#pragma pop_macro("ATTVAL_ENTITIES")
#pragma pop_macro("ATTVAL_ENTITY")
#pragma pop_macro("ATTVAL_EXTENSION")
#pragma pop_macro("ATTVAL_FALSE")
#pragma pop_macro("ATTVAL_FALSE_0")
#pragma pop_macro("ATTVAL_FLOAT")
#pragma pop_macro("ATTVAL_HEXBINARY")
#pragma pop_macro("ATTVAL_ID")
#pragma pop_macro("ATTVAL_IDREF")
#pragma pop_macro("ATTVAL_IDREFS")
#pragma pop_macro("ATTVAL_INT")
#pragma pop_macro("ATTVAL_INTEGER")
#pragma pop_macro("ATTVAL_LANGUAGE")
#pragma pop_macro("ATTVAL_LAX")
#pragma pop_macro("ATTVAL_LIST")
#pragma pop_macro("ATTVAL_LONG")
#pragma pop_macro("ATTVAL_MONTH")
#pragma pop_macro("ATTVAL_MONTHDAY")
#pragma pop_macro("ATTVAL_NAME")
#pragma pop_macro("ATTVAL_NCNAME")
#pragma pop_macro("ATTVAL_NEGATIVEINTEGER")
#pragma pop_macro("ATTVAL_NMTOKEN")
#pragma pop_macro("ATTVAL_NMTOKENS")
#pragma pop_macro("ATTVAL_NONNEGATIVEINTEGER")
#pragma pop_macro("ATTVAL_NONPOSITIVEINTEGER")
#pragma pop_macro("ATTVAL_NORMALIZEDSTRING")
#pragma pop_macro("ATTVAL_NOTATION")
#pragma pop_macro("ATTVAL_OPTIONAL")
#pragma pop_macro("ATTVAL_POSITIVEINTEGER")
#pragma pop_macro("ATTVAL_POUNDALL")
#pragma pop_macro("ATTVAL_PRESERVE")
#pragma pop_macro("ATTVAL_PROHIBITED")
#pragma pop_macro("ATTVAL_QNAME")
#pragma pop_macro("ATTVAL_QUALIFIED")
#pragma pop_macro("ATTVAL_REPLACE")
#pragma pop_macro("ATTVAL_REQUIRED")
#pragma pop_macro("ATTVAL_RESTRICTION")
#pragma pop_macro("ATTVAL_SHORT")
#pragma pop_macro("ATTVAL_SKIP")
#pragma pop_macro("ATTVAL_STRICT")
#pragma pop_macro("ATTVAL_STRING")
#pragma pop_macro("ATTVAL_SUBSTITUTION")
#pragma pop_macro("ATTVAL_TIME")
#pragma pop_macro("ATTVAL_TOKEN")
#pragma pop_macro("ATTVAL_TRUE")
#pragma pop_macro("ATTVAL_TRUE_1")
#pragma pop_macro("ATTVAL_TWOPOUNDANY")
#pragma pop_macro("ATTVAL_TWOPOUNDLOCAL")
#pragma pop_macro("ATTVAL_TWOPOUNDOTHER")
#pragma pop_macro("ATTVAL_TWOPOUNDTARGETNS")
#pragma pop_macro("ATTVAL_UNBOUNDED")
#pragma pop_macro("ATTVAL_UNION")
#pragma pop_macro("ATTVAL_UNQUALIFIED")
#pragma pop_macro("ATTVAL_UNSIGNEDBYTE")
#pragma pop_macro("ATTVAL_UNSIGNEDINT")
#pragma pop_macro("ATTVAL_UNSIGNEDLONG")
#pragma pop_macro("ATTVAL_UNSIGNEDSHORT")
#pragma pop_macro("ATTVAL_YEAR")
#pragma pop_macro("ATTVAL_YEARMONTH")
#pragma pop_macro("ATT_ABSTRACT")
#pragma pop_macro("ATT_ATTRIBUTEFORMDEFAULT")
#pragma pop_macro("ATT_BASE")
#pragma pop_macro("ATT_BLOCK")
#pragma pop_macro("ATT_BLOCKDEFAULT")
#pragma pop_macro("ATT_DEFAULT")
#pragma pop_macro("ATT_ELEMENTFORMDEFAULT")
#pragma pop_macro("ATT_FINAL")
#pragma pop_macro("ATT_FINALDEFAULT")
#pragma pop_macro("ATT_FIXED")
#pragma pop_macro("ATT_FORM")
#pragma pop_macro("ATT_ID")
#pragma pop_macro("ATT_ITEMTYPE")
#pragma pop_macro("ATT_MAXOCCURS")
#pragma pop_macro("ATT_MEMBERTYPES")
#pragma pop_macro("ATT_MINOCCURS")
#pragma pop_macro("ATT_MIXED")
#pragma pop_macro("ATT_NAME")
#pragma pop_macro("ATT_NAMESPACE")
#pragma pop_macro("ATT_NILLABLE")
#pragma pop_macro("ATT_PROCESSCONTENTS")
#pragma pop_macro("ATT_PUBLIC")
#pragma pop_macro("ATT_REF")
#pragma pop_macro("ATT_REFER")
#pragma pop_macro("ATT_SCHEMALOCATION")
#pragma pop_macro("ATT_SOURCE")
#pragma pop_macro("ATT_SUBSTITUTIONGROUP")
#pragma pop_macro("ATT_SYSTEM")
#pragma pop_macro("ATT_TARGETNAMESPACE")
#pragma pop_macro("ATT_TYPE")
#pragma pop_macro("ATT_USE")
#pragma pop_macro("ATT_VALUE")
#pragma pop_macro("ATT_VERSION")
#pragma pop_macro("ATT_XML_LANG")
#pragma pop_macro("ATT_XPATH")
#pragma pop_macro("ELT_ALL")
#pragma pop_macro("ELT_ANNOTATION")
#pragma pop_macro("ELT_ANY")
#pragma pop_macro("ELT_ANYATTRIBUTE")
#pragma pop_macro("ELT_APPINFO")
#pragma pop_macro("ELT_ATTRIBUTE")
#pragma pop_macro("ELT_ATTRIBUTEGROUP")
#pragma pop_macro("ELT_CHOICE")
#pragma pop_macro("ELT_COMPLEXCONTENT")
#pragma pop_macro("ELT_COMPLEXTYPE")
#pragma pop_macro("ELT_DOCUMENTATION")
#pragma pop_macro("ELT_ELEMENT")
#pragma pop_macro("ELT_ENUMERATION")
#pragma pop_macro("ELT_EXTENSION")
#pragma pop_macro("ELT_FIELD")
#pragma pop_macro("ELT_FRACTIONDIGITS")
#pragma pop_macro("ELT_GROUP")
#pragma pop_macro("ELT_IMPORT")
#pragma pop_macro("ELT_INCLUDE")
#pragma pop_macro("ELT_KEY")
#pragma pop_macro("ELT_KEYREF")
#pragma pop_macro("ELT_LENGTH")
#pragma pop_macro("ELT_LIST")
#pragma pop_macro("ELT_MAXEXCLUSIVE")
#pragma pop_macro("ELT_MAXINCLUSIVE")
#pragma pop_macro("ELT_MAXLENGTH")
#pragma pop_macro("ELT_MINEXCLUSIVE")
#pragma pop_macro("ELT_MININCLUSIVE")
#pragma pop_macro("ELT_MINLENGTH")
#pragma pop_macro("ELT_NOTATION")
#pragma pop_macro("ELT_PATTERN")
#pragma pop_macro("ELT_REDEFINE")
#pragma pop_macro("ELT_RESTRICTION")
#pragma pop_macro("ELT_SCHEMA")
#pragma pop_macro("ELT_SELECTOR")
#pragma pop_macro("ELT_SEQUENCE")
#pragma pop_macro("ELT_SIMPLECONTENT")
#pragma pop_macro("ELT_SIMPLETYPE")
#pragma pop_macro("ELT_TOTALDIGITS")
#pragma pop_macro("ELT_UNION")
#pragma pop_macro("ELT_UNIQUE")
#pragma pop_macro("ELT_WHITESPACE")
#pragma pop_macro("FORM_QUALIFIED")
#pragma pop_macro("FORM_UNQUALIFIED")
#pragma pop_macro("OCCURRENCE_UNBOUNDED")
#pragma pop_macro("URI_SCHEMAFORSCHEMA")
#pragma pop_macro("URI_XSI")
#pragma pop_macro("USE_OPTIONAL")
#pragma pop_macro("USE_PROHIBITED")
#pragma pop_macro("USE_REQUIRED")
#pragma pop_macro("XSI_NIL")
#pragma pop_macro("XSI_NONAMESPACESCHEMALOCATION")
#pragma pop_macro("XSI_SCHEMALOCATION")
#pragma pop_macro("XSI_TYPE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_SchemaSymbols_h_