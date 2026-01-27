#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>

#include <jcpp.h>

#undef ATTVAL_ANYSIMPLETYPE
#undef ATTVAL_ANYTYPE
#undef ATTVAL_ANYURI
#undef ATTVAL_BASE64BINARY
#undef ATTVAL_BOOLEAN
#undef ATTVAL_BYTE
#undef ATTVAL_COLLAPSE
#undef ATTVAL_DATE
#undef ATTVAL_DATETIME
#undef ATTVAL_DAY
#undef ATTVAL_DECIMAL
#undef ATTVAL_DOUBLE
#undef ATTVAL_DURATION
#undef ATTVAL_ENTITIES
#undef ATTVAL_ENTITY
#undef ATTVAL_EXTENSION
#undef ATTVAL_FALSE
#undef ATTVAL_FALSE_0
#undef ATTVAL_FLOAT
#undef ATTVAL_HEXBINARY
#undef ATTVAL_ID
#undef ATTVAL_IDREF
#undef ATTVAL_IDREFS
#undef ATTVAL_INT
#undef ATTVAL_INTEGER
#undef ATTVAL_LANGUAGE
#undef ATTVAL_LAX
#undef ATTVAL_LIST
#undef ATTVAL_LONG
#undef ATTVAL_MONTH
#undef ATTVAL_MONTHDAY
#undef ATTVAL_NAME
#undef ATTVAL_NCNAME
#undef ATTVAL_NEGATIVEINTEGER
#undef ATTVAL_NMTOKEN
#undef ATTVAL_NMTOKENS
#undef ATTVAL_NONNEGATIVEINTEGER
#undef ATTVAL_NONPOSITIVEINTEGER
#undef ATTVAL_NORMALIZEDSTRING
#undef ATTVAL_NOTATION
#undef ATTVAL_OPTIONAL
#undef ATTVAL_POSITIVEINTEGER
#undef ATTVAL_POUNDALL
#undef ATTVAL_PRESERVE
#undef ATTVAL_PROHIBITED
#undef ATTVAL_QNAME
#undef ATTVAL_QUALIFIED
#undef ATTVAL_REPLACE
#undef ATTVAL_REQUIRED
#undef ATTVAL_RESTRICTION
#undef ATTVAL_SHORT
#undef ATTVAL_SKIP
#undef ATTVAL_STRICT
#undef ATTVAL_STRING
#undef ATTVAL_SUBSTITUTION
#undef ATTVAL_TIME
#undef ATTVAL_TOKEN
#undef ATTVAL_TRUE
#undef ATTVAL_TRUE_1
#undef ATTVAL_TWOPOUNDANY
#undef ATTVAL_TWOPOUNDLOCAL
#undef ATTVAL_TWOPOUNDOTHER
#undef ATTVAL_TWOPOUNDTARGETNS
#undef ATTVAL_UNBOUNDED
#undef ATTVAL_UNION
#undef ATTVAL_UNQUALIFIED
#undef ATTVAL_UNSIGNEDBYTE
#undef ATTVAL_UNSIGNEDINT
#undef ATTVAL_UNSIGNEDLONG
#undef ATTVAL_UNSIGNEDSHORT
#undef ATTVAL_YEAR
#undef ATTVAL_YEARMONTH
#undef ATT_ABSTRACT
#undef ATT_ATTRIBUTEFORMDEFAULT
#undef ATT_BASE
#undef ATT_BLOCK
#undef ATT_BLOCKDEFAULT
#undef ATT_DEFAULT
#undef ATT_ELEMENTFORMDEFAULT
#undef ATT_FINAL
#undef ATT_FINALDEFAULT
#undef ATT_FIXED
#undef ATT_FORM
#undef ATT_ID
#undef ATT_ITEMTYPE
#undef ATT_MAXOCCURS
#undef ATT_MEMBERTYPES
#undef ATT_MINOCCURS
#undef ATT_MIXED
#undef ATT_NAME
#undef ATT_NAMESPACE
#undef ATT_NILLABLE
#undef ATT_PROCESSCONTENTS
#undef ATT_PUBLIC
#undef ATT_REF
#undef ATT_REFER
#undef ATT_SCHEMALOCATION
#undef ATT_SOURCE
#undef ATT_SUBSTITUTIONGROUP
#undef ATT_SYSTEM
#undef ATT_TARGETNAMESPACE
#undef ATT_TYPE
#undef ATT_USE
#undef ATT_VALUE
#undef ATT_VERSION
#undef ATT_XML_LANG
#undef ATT_XPATH
#undef ELT_ALL
#undef ELT_ANNOTATION
#undef ELT_ANY
#undef ELT_ANYATTRIBUTE
#undef ELT_APPINFO
#undef ELT_ATTRIBUTE
#undef ELT_ATTRIBUTEGROUP
#undef ELT_CHOICE
#undef ELT_COMPLEXCONTENT
#undef ELT_COMPLEXTYPE
#undef ELT_DOCUMENTATION
#undef ELT_ELEMENT
#undef ELT_ENUMERATION
#undef ELT_EXTENSION
#undef ELT_FIELD
#undef ELT_FRACTIONDIGITS
#undef ELT_GROUP
#undef ELT_IMPORT
#undef ELT_INCLUDE
#undef ELT_KEY
#undef ELT_KEYREF
#undef ELT_LENGTH
#undef ELT_LIST
#undef ELT_MAXEXCLUSIVE
#undef ELT_MAXINCLUSIVE
#undef ELT_MAXLENGTH
#undef ELT_MINEXCLUSIVE
#undef ELT_MININCLUSIVE
#undef ELT_MINLENGTH
#undef ELT_NOTATION
#undef ELT_PATTERN
#undef ELT_REDEFINE
#undef ELT_RESTRICTION
#undef ELT_SCHEMA
#undef ELT_SELECTOR
#undef ELT_SEQUENCE
#undef ELT_SIMPLECONTENT
#undef ELT_SIMPLETYPE
#undef ELT_TOTALDIGITS
#undef ELT_UNION
#undef ELT_UNIQUE
#undef ELT_WHITESPACE
#undef FORM_QUALIFIED
#undef FORM_UNQUALIFIED
#undef OCCURRENCE_UNBOUNDED
#undef URI_SCHEMAFORSCHEMA
#undef URI_XSI
#undef USE_OPTIONAL
#undef USE_PROHIBITED
#undef USE_REQUIRED
#undef XSI_NIL
#undef XSI_NONAMESPACESCHEMALOCATION
#undef XSI_SCHEMALOCATION
#undef XSI_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _SchemaSymbols_FieldInfo_[] = {
	{"URI_XSI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, URI_XSI)},
	{"XSI_SCHEMALOCATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, XSI_SCHEMALOCATION)},
	{"XSI_NONAMESPACESCHEMALOCATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, XSI_NONAMESPACESCHEMALOCATION)},
	{"XSI_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, XSI_TYPE)},
	{"XSI_NIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, XSI_NIL)},
	{"URI_SCHEMAFORSCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, URI_SCHEMAFORSCHEMA)},
	{"ELT_ALL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_ALL)},
	{"ELT_ANNOTATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_ANNOTATION)},
	{"ELT_ANY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_ANY)},
	{"ELT_ANYATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_ANYATTRIBUTE)},
	{"ELT_APPINFO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_APPINFO)},
	{"ELT_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_ATTRIBUTE)},
	{"ELT_ATTRIBUTEGROUP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_ATTRIBUTEGROUP)},
	{"ELT_CHOICE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_CHOICE)},
	{"ELT_COMPLEXCONTENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_COMPLEXCONTENT)},
	{"ELT_COMPLEXTYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_COMPLEXTYPE)},
	{"ELT_DOCUMENTATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_DOCUMENTATION)},
	{"ELT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_ELEMENT)},
	{"ELT_ENUMERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_ENUMERATION)},
	{"ELT_EXTENSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_EXTENSION)},
	{"ELT_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_FIELD)},
	{"ELT_FRACTIONDIGITS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_FRACTIONDIGITS)},
	{"ELT_GROUP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_GROUP)},
	{"ELT_IMPORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_IMPORT)},
	{"ELT_INCLUDE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_INCLUDE)},
	{"ELT_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_KEY)},
	{"ELT_KEYREF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_KEYREF)},
	{"ELT_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_LENGTH)},
	{"ELT_LIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_LIST)},
	{"ELT_MAXEXCLUSIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_MAXEXCLUSIVE)},
	{"ELT_MAXINCLUSIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_MAXINCLUSIVE)},
	{"ELT_MAXLENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_MAXLENGTH)},
	{"ELT_MINEXCLUSIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_MINEXCLUSIVE)},
	{"ELT_MININCLUSIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_MININCLUSIVE)},
	{"ELT_MINLENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_MINLENGTH)},
	{"ELT_NOTATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_NOTATION)},
	{"ELT_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_PATTERN)},
	{"ELT_REDEFINE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_REDEFINE)},
	{"ELT_RESTRICTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_RESTRICTION)},
	{"ELT_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_SCHEMA)},
	{"ELT_SELECTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_SELECTOR)},
	{"ELT_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_SEQUENCE)},
	{"ELT_SIMPLECONTENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_SIMPLECONTENT)},
	{"ELT_SIMPLETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_SIMPLETYPE)},
	{"ELT_TOTALDIGITS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_TOTALDIGITS)},
	{"ELT_UNION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_UNION)},
	{"ELT_UNIQUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_UNIQUE)},
	{"ELT_WHITESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ELT_WHITESPACE)},
	{"ATT_ABSTRACT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_ABSTRACT)},
	{"ATT_ATTRIBUTEFORMDEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_ATTRIBUTEFORMDEFAULT)},
	{"ATT_BASE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_BASE)},
	{"ATT_BLOCK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_BLOCK)},
	{"ATT_BLOCKDEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_BLOCKDEFAULT)},
	{"ATT_DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_DEFAULT)},
	{"ATT_ELEMENTFORMDEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_ELEMENTFORMDEFAULT)},
	{"ATT_FINAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_FINAL)},
	{"ATT_FINALDEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_FINALDEFAULT)},
	{"ATT_FIXED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_FIXED)},
	{"ATT_FORM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_FORM)},
	{"ATT_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_ID)},
	{"ATT_ITEMTYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_ITEMTYPE)},
	{"ATT_MAXOCCURS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_MAXOCCURS)},
	{"ATT_MEMBERTYPES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_MEMBERTYPES)},
	{"ATT_MINOCCURS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_MINOCCURS)},
	{"ATT_MIXED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_MIXED)},
	{"ATT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_NAME)},
	{"ATT_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_NAMESPACE)},
	{"ATT_NILLABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_NILLABLE)},
	{"ATT_PROCESSCONTENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_PROCESSCONTENTS)},
	{"ATT_REF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_REF)},
	{"ATT_REFER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_REFER)},
	{"ATT_SCHEMALOCATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_SCHEMALOCATION)},
	{"ATT_SOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_SOURCE)},
	{"ATT_SUBSTITUTIONGROUP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_SUBSTITUTIONGROUP)},
	{"ATT_SYSTEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_SYSTEM)},
	{"ATT_PUBLIC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_PUBLIC)},
	{"ATT_TARGETNAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_TARGETNAMESPACE)},
	{"ATT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_TYPE)},
	{"ATT_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_USE)},
	{"ATT_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_VALUE)},
	{"ATT_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_VERSION)},
	{"ATT_XML_LANG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_XML_LANG)},
	{"ATT_XPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATT_XPATH)},
	{"ATTVAL_TWOPOUNDANY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_TWOPOUNDANY)},
	{"ATTVAL_TWOPOUNDLOCAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_TWOPOUNDLOCAL)},
	{"ATTVAL_TWOPOUNDOTHER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_TWOPOUNDOTHER)},
	{"ATTVAL_TWOPOUNDTARGETNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_TWOPOUNDTARGETNS)},
	{"ATTVAL_POUNDALL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_POUNDALL)},
	{"ATTVAL_FALSE_0", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_FALSE_0)},
	{"ATTVAL_TRUE_1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_TRUE_1)},
	{"ATTVAL_ANYSIMPLETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_ANYSIMPLETYPE)},
	{"ATTVAL_ANYTYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_ANYTYPE)},
	{"ATTVAL_ANYURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_ANYURI)},
	{"ATTVAL_BASE64BINARY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_BASE64BINARY)},
	{"ATTVAL_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_BOOLEAN)},
	{"ATTVAL_BYTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_BYTE)},
	{"ATTVAL_COLLAPSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_COLLAPSE)},
	{"ATTVAL_DATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_DATE)},
	{"ATTVAL_DATETIME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_DATETIME)},
	{"ATTVAL_DAY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_DAY)},
	{"ATTVAL_DECIMAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_DECIMAL)},
	{"ATTVAL_DOUBLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_DOUBLE)},
	{"ATTVAL_DURATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_DURATION)},
	{"ATTVAL_ENTITY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_ENTITY)},
	{"ATTVAL_ENTITIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_ENTITIES)},
	{"ATTVAL_EXTENSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_EXTENSION)},
	{"ATTVAL_FALSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_FALSE)},
	{"ATTVAL_FLOAT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_FLOAT)},
	{"ATTVAL_HEXBINARY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_HEXBINARY)},
	{"ATTVAL_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_ID)},
	{"ATTVAL_IDREF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_IDREF)},
	{"ATTVAL_IDREFS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_IDREFS)},
	{"ATTVAL_INT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_INT)},
	{"ATTVAL_INTEGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_INTEGER)},
	{"ATTVAL_LANGUAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_LANGUAGE)},
	{"ATTVAL_LAX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_LAX)},
	{"ATTVAL_LIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_LIST)},
	{"ATTVAL_LONG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_LONG)},
	{"ATTVAL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_NAME)},
	{"ATTVAL_NEGATIVEINTEGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_NEGATIVEINTEGER)},
	{"ATTVAL_MONTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_MONTH)},
	{"ATTVAL_MONTHDAY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_MONTHDAY)},
	{"ATTVAL_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_NCNAME)},
	{"ATTVAL_NMTOKEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_NMTOKEN)},
	{"ATTVAL_NMTOKENS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_NMTOKENS)},
	{"ATTVAL_NONNEGATIVEINTEGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_NONNEGATIVEINTEGER)},
	{"ATTVAL_NONPOSITIVEINTEGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_NONPOSITIVEINTEGER)},
	{"ATTVAL_NORMALIZEDSTRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_NORMALIZEDSTRING)},
	{"ATTVAL_NOTATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_NOTATION)},
	{"ATTVAL_OPTIONAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_OPTIONAL)},
	{"ATTVAL_POSITIVEINTEGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_POSITIVEINTEGER)},
	{"ATTVAL_PRESERVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_PRESERVE)},
	{"ATTVAL_PROHIBITED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_PROHIBITED)},
	{"ATTVAL_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_QNAME)},
	{"ATTVAL_QUALIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_QUALIFIED)},
	{"ATTVAL_REPLACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_REPLACE)},
	{"ATTVAL_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_REQUIRED)},
	{"ATTVAL_RESTRICTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_RESTRICTION)},
	{"ATTVAL_SHORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_SHORT)},
	{"ATTVAL_SKIP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_SKIP)},
	{"ATTVAL_STRICT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_STRICT)},
	{"ATTVAL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_STRING)},
	{"ATTVAL_SUBSTITUTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_SUBSTITUTION)},
	{"ATTVAL_TIME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_TIME)},
	{"ATTVAL_TOKEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_TOKEN)},
	{"ATTVAL_TRUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_TRUE)},
	{"ATTVAL_UNBOUNDED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_UNBOUNDED)},
	{"ATTVAL_UNION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_UNION)},
	{"ATTVAL_UNQUALIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_UNQUALIFIED)},
	{"ATTVAL_UNSIGNEDBYTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_UNSIGNEDBYTE)},
	{"ATTVAL_UNSIGNEDINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_UNSIGNEDINT)},
	{"ATTVAL_UNSIGNEDLONG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_UNSIGNEDLONG)},
	{"ATTVAL_UNSIGNEDSHORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_UNSIGNEDSHORT)},
	{"ATTVAL_YEAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_YEAR)},
	{"ATTVAL_YEARMONTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaSymbols, ATTVAL_YEARMONTH)},
	{"FORM_UNQUALIFIED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SchemaSymbols, FORM_UNQUALIFIED)},
	{"FORM_QUALIFIED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SchemaSymbols, FORM_QUALIFIED)},
	{"USE_OPTIONAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SchemaSymbols, USE_OPTIONAL)},
	{"USE_REQUIRED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SchemaSymbols, USE_REQUIRED)},
	{"USE_PROHIBITED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SchemaSymbols, USE_PROHIBITED)},
	{"OCCURRENCE_UNBOUNDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SchemaSymbols, OCCURRENCE_UNBOUNDED)},
	{}
};

$MethodInfo _SchemaSymbols_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaSymbols, init$, void)},
	{}
};

$ClassInfo _SchemaSymbols_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaSymbols",
	"java.lang.Object",
	nullptr,
	_SchemaSymbols_FieldInfo_,
	_SchemaSymbols_MethodInfo_
};

$Object* allocate$SchemaSymbols($Class* clazz) {
	return $of($alloc(SchemaSymbols));
}

$String* SchemaSymbols::URI_XSI = nullptr;
$String* SchemaSymbols::XSI_SCHEMALOCATION = nullptr;
$String* SchemaSymbols::XSI_NONAMESPACESCHEMALOCATION = nullptr;
$String* SchemaSymbols::XSI_TYPE = nullptr;
$String* SchemaSymbols::XSI_NIL = nullptr;
$String* SchemaSymbols::URI_SCHEMAFORSCHEMA = nullptr;
$String* SchemaSymbols::ELT_ALL = nullptr;
$String* SchemaSymbols::ELT_ANNOTATION = nullptr;
$String* SchemaSymbols::ELT_ANY = nullptr;
$String* SchemaSymbols::ELT_ANYATTRIBUTE = nullptr;
$String* SchemaSymbols::ELT_APPINFO = nullptr;
$String* SchemaSymbols::ELT_ATTRIBUTE = nullptr;
$String* SchemaSymbols::ELT_ATTRIBUTEGROUP = nullptr;
$String* SchemaSymbols::ELT_CHOICE = nullptr;
$String* SchemaSymbols::ELT_COMPLEXCONTENT = nullptr;
$String* SchemaSymbols::ELT_COMPLEXTYPE = nullptr;
$String* SchemaSymbols::ELT_DOCUMENTATION = nullptr;
$String* SchemaSymbols::ELT_ELEMENT = nullptr;
$String* SchemaSymbols::ELT_ENUMERATION = nullptr;
$String* SchemaSymbols::ELT_EXTENSION = nullptr;
$String* SchemaSymbols::ELT_FIELD = nullptr;
$String* SchemaSymbols::ELT_FRACTIONDIGITS = nullptr;
$String* SchemaSymbols::ELT_GROUP = nullptr;
$String* SchemaSymbols::ELT_IMPORT = nullptr;
$String* SchemaSymbols::ELT_INCLUDE = nullptr;
$String* SchemaSymbols::ELT_KEY = nullptr;
$String* SchemaSymbols::ELT_KEYREF = nullptr;
$String* SchemaSymbols::ELT_LENGTH = nullptr;
$String* SchemaSymbols::ELT_LIST = nullptr;
$String* SchemaSymbols::ELT_MAXEXCLUSIVE = nullptr;
$String* SchemaSymbols::ELT_MAXINCLUSIVE = nullptr;
$String* SchemaSymbols::ELT_MAXLENGTH = nullptr;
$String* SchemaSymbols::ELT_MINEXCLUSIVE = nullptr;
$String* SchemaSymbols::ELT_MININCLUSIVE = nullptr;
$String* SchemaSymbols::ELT_MINLENGTH = nullptr;
$String* SchemaSymbols::ELT_NOTATION = nullptr;
$String* SchemaSymbols::ELT_PATTERN = nullptr;
$String* SchemaSymbols::ELT_REDEFINE = nullptr;
$String* SchemaSymbols::ELT_RESTRICTION = nullptr;
$String* SchemaSymbols::ELT_SCHEMA = nullptr;
$String* SchemaSymbols::ELT_SELECTOR = nullptr;
$String* SchemaSymbols::ELT_SEQUENCE = nullptr;
$String* SchemaSymbols::ELT_SIMPLECONTENT = nullptr;
$String* SchemaSymbols::ELT_SIMPLETYPE = nullptr;
$String* SchemaSymbols::ELT_TOTALDIGITS = nullptr;
$String* SchemaSymbols::ELT_UNION = nullptr;
$String* SchemaSymbols::ELT_UNIQUE = nullptr;
$String* SchemaSymbols::ELT_WHITESPACE = nullptr;
$String* SchemaSymbols::ATT_ABSTRACT = nullptr;
$String* SchemaSymbols::ATT_ATTRIBUTEFORMDEFAULT = nullptr;
$String* SchemaSymbols::ATT_BASE = nullptr;
$String* SchemaSymbols::ATT_BLOCK = nullptr;
$String* SchemaSymbols::ATT_BLOCKDEFAULT = nullptr;
$String* SchemaSymbols::ATT_DEFAULT = nullptr;
$String* SchemaSymbols::ATT_ELEMENTFORMDEFAULT = nullptr;
$String* SchemaSymbols::ATT_FINAL = nullptr;
$String* SchemaSymbols::ATT_FINALDEFAULT = nullptr;
$String* SchemaSymbols::ATT_FIXED = nullptr;
$String* SchemaSymbols::ATT_FORM = nullptr;
$String* SchemaSymbols::ATT_ID = nullptr;
$String* SchemaSymbols::ATT_ITEMTYPE = nullptr;
$String* SchemaSymbols::ATT_MAXOCCURS = nullptr;
$String* SchemaSymbols::ATT_MEMBERTYPES = nullptr;
$String* SchemaSymbols::ATT_MINOCCURS = nullptr;
$String* SchemaSymbols::ATT_MIXED = nullptr;
$String* SchemaSymbols::ATT_NAME = nullptr;
$String* SchemaSymbols::ATT_NAMESPACE = nullptr;
$String* SchemaSymbols::ATT_NILLABLE = nullptr;
$String* SchemaSymbols::ATT_PROCESSCONTENTS = nullptr;
$String* SchemaSymbols::ATT_REF = nullptr;
$String* SchemaSymbols::ATT_REFER = nullptr;
$String* SchemaSymbols::ATT_SCHEMALOCATION = nullptr;
$String* SchemaSymbols::ATT_SOURCE = nullptr;
$String* SchemaSymbols::ATT_SUBSTITUTIONGROUP = nullptr;
$String* SchemaSymbols::ATT_SYSTEM = nullptr;
$String* SchemaSymbols::ATT_PUBLIC = nullptr;
$String* SchemaSymbols::ATT_TARGETNAMESPACE = nullptr;
$String* SchemaSymbols::ATT_TYPE = nullptr;
$String* SchemaSymbols::ATT_USE = nullptr;
$String* SchemaSymbols::ATT_VALUE = nullptr;
$String* SchemaSymbols::ATT_VERSION = nullptr;
$String* SchemaSymbols::ATT_XML_LANG = nullptr;
$String* SchemaSymbols::ATT_XPATH = nullptr;
$String* SchemaSymbols::ATTVAL_TWOPOUNDANY = nullptr;
$String* SchemaSymbols::ATTVAL_TWOPOUNDLOCAL = nullptr;
$String* SchemaSymbols::ATTVAL_TWOPOUNDOTHER = nullptr;
$String* SchemaSymbols::ATTVAL_TWOPOUNDTARGETNS = nullptr;
$String* SchemaSymbols::ATTVAL_POUNDALL = nullptr;
$String* SchemaSymbols::ATTVAL_FALSE_0 = nullptr;
$String* SchemaSymbols::ATTVAL_TRUE_1 = nullptr;
$String* SchemaSymbols::ATTVAL_ANYSIMPLETYPE = nullptr;
$String* SchemaSymbols::ATTVAL_ANYTYPE = nullptr;
$String* SchemaSymbols::ATTVAL_ANYURI = nullptr;
$String* SchemaSymbols::ATTVAL_BASE64BINARY = nullptr;
$String* SchemaSymbols::ATTVAL_BOOLEAN = nullptr;
$String* SchemaSymbols::ATTVAL_BYTE = nullptr;
$String* SchemaSymbols::ATTVAL_COLLAPSE = nullptr;
$String* SchemaSymbols::ATTVAL_DATE = nullptr;
$String* SchemaSymbols::ATTVAL_DATETIME = nullptr;
$String* SchemaSymbols::ATTVAL_DAY = nullptr;
$String* SchemaSymbols::ATTVAL_DECIMAL = nullptr;
$String* SchemaSymbols::ATTVAL_DOUBLE = nullptr;
$String* SchemaSymbols::ATTVAL_DURATION = nullptr;
$String* SchemaSymbols::ATTVAL_ENTITY = nullptr;
$String* SchemaSymbols::ATTVAL_ENTITIES = nullptr;
$String* SchemaSymbols::ATTVAL_EXTENSION = nullptr;
$String* SchemaSymbols::ATTVAL_FALSE = nullptr;
$String* SchemaSymbols::ATTVAL_FLOAT = nullptr;
$String* SchemaSymbols::ATTVAL_HEXBINARY = nullptr;
$String* SchemaSymbols::ATTVAL_ID = nullptr;
$String* SchemaSymbols::ATTVAL_IDREF = nullptr;
$String* SchemaSymbols::ATTVAL_IDREFS = nullptr;
$String* SchemaSymbols::ATTVAL_INT = nullptr;
$String* SchemaSymbols::ATTVAL_INTEGER = nullptr;
$String* SchemaSymbols::ATTVAL_LANGUAGE = nullptr;
$String* SchemaSymbols::ATTVAL_LAX = nullptr;
$String* SchemaSymbols::ATTVAL_LIST = nullptr;
$String* SchemaSymbols::ATTVAL_LONG = nullptr;
$String* SchemaSymbols::ATTVAL_NAME = nullptr;
$String* SchemaSymbols::ATTVAL_NEGATIVEINTEGER = nullptr;
$String* SchemaSymbols::ATTVAL_MONTH = nullptr;
$String* SchemaSymbols::ATTVAL_MONTHDAY = nullptr;
$String* SchemaSymbols::ATTVAL_NCNAME = nullptr;
$String* SchemaSymbols::ATTVAL_NMTOKEN = nullptr;
$String* SchemaSymbols::ATTVAL_NMTOKENS = nullptr;
$String* SchemaSymbols::ATTVAL_NONNEGATIVEINTEGER = nullptr;
$String* SchemaSymbols::ATTVAL_NONPOSITIVEINTEGER = nullptr;
$String* SchemaSymbols::ATTVAL_NORMALIZEDSTRING = nullptr;
$String* SchemaSymbols::ATTVAL_NOTATION = nullptr;
$String* SchemaSymbols::ATTVAL_OPTIONAL = nullptr;
$String* SchemaSymbols::ATTVAL_POSITIVEINTEGER = nullptr;
$String* SchemaSymbols::ATTVAL_PRESERVE = nullptr;
$String* SchemaSymbols::ATTVAL_PROHIBITED = nullptr;
$String* SchemaSymbols::ATTVAL_QNAME = nullptr;
$String* SchemaSymbols::ATTVAL_QUALIFIED = nullptr;
$String* SchemaSymbols::ATTVAL_REPLACE = nullptr;
$String* SchemaSymbols::ATTVAL_REQUIRED = nullptr;
$String* SchemaSymbols::ATTVAL_RESTRICTION = nullptr;
$String* SchemaSymbols::ATTVAL_SHORT = nullptr;
$String* SchemaSymbols::ATTVAL_SKIP = nullptr;
$String* SchemaSymbols::ATTVAL_STRICT = nullptr;
$String* SchemaSymbols::ATTVAL_STRING = nullptr;
$String* SchemaSymbols::ATTVAL_SUBSTITUTION = nullptr;
$String* SchemaSymbols::ATTVAL_TIME = nullptr;
$String* SchemaSymbols::ATTVAL_TOKEN = nullptr;
$String* SchemaSymbols::ATTVAL_TRUE = nullptr;
$String* SchemaSymbols::ATTVAL_UNBOUNDED = nullptr;
$String* SchemaSymbols::ATTVAL_UNION = nullptr;
$String* SchemaSymbols::ATTVAL_UNQUALIFIED = nullptr;
$String* SchemaSymbols::ATTVAL_UNSIGNEDBYTE = nullptr;
$String* SchemaSymbols::ATTVAL_UNSIGNEDINT = nullptr;
$String* SchemaSymbols::ATTVAL_UNSIGNEDLONG = nullptr;
$String* SchemaSymbols::ATTVAL_UNSIGNEDSHORT = nullptr;
$String* SchemaSymbols::ATTVAL_YEAR = nullptr;
$String* SchemaSymbols::ATTVAL_YEARMONTH = nullptr;

void SchemaSymbols::init$() {
}

void clinit$SchemaSymbols($Class* class$) {
	$assignStatic(SchemaSymbols::ATTVAL_TWOPOUNDANY, "##any"_s);
	$assignStatic(SchemaSymbols::ATTVAL_TWOPOUNDLOCAL, "##local"_s);
	$assignStatic(SchemaSymbols::ATTVAL_TWOPOUNDOTHER, "##other"_s);
	$assignStatic(SchemaSymbols::ATTVAL_TWOPOUNDTARGETNS, "##targetNamespace"_s);
	$assignStatic(SchemaSymbols::ATTVAL_POUNDALL, "#all"_s);
	$assignStatic(SchemaSymbols::ATTVAL_FALSE_0, "0"_s);
	$assignStatic(SchemaSymbols::ATTVAL_TRUE_1, "1"_s);
	$assignStatic(SchemaSymbols::ATTVAL_ANYSIMPLETYPE, "anySimpleType"_s);
	$assignStatic(SchemaSymbols::ATTVAL_ANYTYPE, "anyType"_s);
	$assignStatic(SchemaSymbols::ATTVAL_ANYURI, "anyURI"_s);
	$assignStatic(SchemaSymbols::ATTVAL_BASE64BINARY, "base64Binary"_s);
	$assignStatic(SchemaSymbols::ATTVAL_BOOLEAN, "boolean"_s);
	$assignStatic(SchemaSymbols::ATTVAL_BYTE, "byte"_s);
	$assignStatic(SchemaSymbols::ATTVAL_COLLAPSE, "collapse"_s);
	$assignStatic(SchemaSymbols::ATTVAL_DATE, "date"_s);
	$assignStatic(SchemaSymbols::ATTVAL_DATETIME, "dateTime"_s);
	$assignStatic(SchemaSymbols::ATTVAL_DAY, "gDay"_s);
	$assignStatic(SchemaSymbols::ATTVAL_DECIMAL, "decimal"_s);
	$assignStatic(SchemaSymbols::ATTVAL_DOUBLE, "double"_s);
	$assignStatic(SchemaSymbols::ATTVAL_DURATION, "duration"_s);
	$assignStatic(SchemaSymbols::ATTVAL_ENTITY, "ENTITY"_s);
	$assignStatic(SchemaSymbols::ATTVAL_ENTITIES, "ENTITIES"_s);
	$assignStatic(SchemaSymbols::ATTVAL_EXTENSION, "extension"_s);
	$assignStatic(SchemaSymbols::ATTVAL_FALSE, "false"_s);
	$assignStatic(SchemaSymbols::ATTVAL_FLOAT, "float"_s);
	$assignStatic(SchemaSymbols::ATTVAL_HEXBINARY, "hexBinary"_s);
	$assignStatic(SchemaSymbols::ATTVAL_ID, "ID"_s);
	$assignStatic(SchemaSymbols::ATTVAL_IDREF, "IDREF"_s);
	$assignStatic(SchemaSymbols::ATTVAL_IDREFS, "IDREFS"_s);
	$assignStatic(SchemaSymbols::ATTVAL_INT, "int"_s);
	$assignStatic(SchemaSymbols::ATTVAL_INTEGER, "integer"_s);
	$assignStatic(SchemaSymbols::ATTVAL_LANGUAGE, "language"_s);
	$assignStatic(SchemaSymbols::ATTVAL_LAX, "lax"_s);
	$assignStatic(SchemaSymbols::ATTVAL_LIST, "list"_s);
	$assignStatic(SchemaSymbols::ATTVAL_LONG, "long"_s);
	$assignStatic(SchemaSymbols::ATTVAL_NAME, "Name"_s);
	$assignStatic(SchemaSymbols::ATTVAL_NEGATIVEINTEGER, "negativeInteger"_s);
	$assignStatic(SchemaSymbols::ATTVAL_MONTH, "gMonth"_s);
	$assignStatic(SchemaSymbols::ATTVAL_MONTHDAY, "gMonthDay"_s);
	$assignStatic(SchemaSymbols::ATTVAL_NCNAME, "NCName"_s);
	$assignStatic(SchemaSymbols::ATTVAL_NMTOKEN, "NMTOKEN"_s);
	$assignStatic(SchemaSymbols::ATTVAL_NMTOKENS, "NMTOKENS"_s);
	$assignStatic(SchemaSymbols::ATTVAL_NONNEGATIVEINTEGER, "nonNegativeInteger"_s);
	$assignStatic(SchemaSymbols::ATTVAL_NONPOSITIVEINTEGER, "nonPositiveInteger"_s);
	$assignStatic(SchemaSymbols::ATTVAL_NORMALIZEDSTRING, "normalizedString"_s);
	$assignStatic(SchemaSymbols::ATTVAL_NOTATION, "NOTATION"_s);
	$assignStatic(SchemaSymbols::ATTVAL_OPTIONAL, "optional"_s);
	$assignStatic(SchemaSymbols::ATTVAL_POSITIVEINTEGER, "positiveInteger"_s);
	$assignStatic(SchemaSymbols::ATTVAL_PRESERVE, "preserve"_s);
	$assignStatic(SchemaSymbols::ATTVAL_PROHIBITED, "prohibited"_s);
	$assignStatic(SchemaSymbols::ATTVAL_QNAME, "QName"_s);
	$assignStatic(SchemaSymbols::ATTVAL_QUALIFIED, "qualified"_s);
	$assignStatic(SchemaSymbols::ATTVAL_REPLACE, "replace"_s);
	$assignStatic(SchemaSymbols::ATTVAL_REQUIRED, "required"_s);
	$assignStatic(SchemaSymbols::ATTVAL_RESTRICTION, "restriction"_s);
	$assignStatic(SchemaSymbols::ATTVAL_SHORT, "short"_s);
	$assignStatic(SchemaSymbols::ATTVAL_SKIP, "skip"_s);
	$assignStatic(SchemaSymbols::ATTVAL_STRICT, "strict"_s);
	$assignStatic(SchemaSymbols::ATTVAL_STRING, "string"_s);
	$assignStatic(SchemaSymbols::ATTVAL_SUBSTITUTION, "substitution"_s);
	$assignStatic(SchemaSymbols::ATTVAL_TIME, "time"_s);
	$assignStatic(SchemaSymbols::ATTVAL_TOKEN, "token"_s);
	$assignStatic(SchemaSymbols::ATTVAL_TRUE, "true"_s);
	$assignStatic(SchemaSymbols::ATTVAL_UNBOUNDED, "unbounded"_s);
	$assignStatic(SchemaSymbols::ATTVAL_UNION, "union"_s);
	$assignStatic(SchemaSymbols::ATTVAL_UNQUALIFIED, "unqualified"_s);
	$assignStatic(SchemaSymbols::ATTVAL_UNSIGNEDBYTE, "unsignedByte"_s);
	$assignStatic(SchemaSymbols::ATTVAL_UNSIGNEDINT, "unsignedInt"_s);
	$assignStatic(SchemaSymbols::ATTVAL_UNSIGNEDLONG, "unsignedLong"_s);
	$assignStatic(SchemaSymbols::ATTVAL_UNSIGNEDSHORT, "unsignedShort"_s);
	$assignStatic(SchemaSymbols::ATTVAL_YEAR, "gYear"_s);
	$assignStatic(SchemaSymbols::ATTVAL_YEARMONTH, "gYearMonth"_s);
	$assignStatic(SchemaSymbols::URI_XSI, "http://www.w3.org/2001/XMLSchema-instance"_s->intern());
	$assignStatic(SchemaSymbols::XSI_SCHEMALOCATION, "schemaLocation"_s->intern());
	$assignStatic(SchemaSymbols::XSI_NONAMESPACESCHEMALOCATION, "noNamespaceSchemaLocation"_s->intern());
	$assignStatic(SchemaSymbols::XSI_TYPE, "type"_s->intern());
	$assignStatic(SchemaSymbols::XSI_NIL, "nil"_s->intern());
	$assignStatic(SchemaSymbols::URI_SCHEMAFORSCHEMA, "http://www.w3.org/2001/XMLSchema"_s->intern());
	$assignStatic(SchemaSymbols::ELT_ALL, "all"_s->intern());
	$assignStatic(SchemaSymbols::ELT_ANNOTATION, "annotation"_s->intern());
	$assignStatic(SchemaSymbols::ELT_ANY, "any"_s->intern());
	$assignStatic(SchemaSymbols::ELT_ANYATTRIBUTE, "anyAttribute"_s->intern());
	$assignStatic(SchemaSymbols::ELT_APPINFO, "appinfo"_s->intern());
	$assignStatic(SchemaSymbols::ELT_ATTRIBUTE, "attribute"_s->intern());
	$assignStatic(SchemaSymbols::ELT_ATTRIBUTEGROUP, "attributeGroup"_s->intern());
	$assignStatic(SchemaSymbols::ELT_CHOICE, "choice"_s->intern());
	$assignStatic(SchemaSymbols::ELT_COMPLEXCONTENT, "complexContent"_s->intern());
	$assignStatic(SchemaSymbols::ELT_COMPLEXTYPE, "complexType"_s->intern());
	$assignStatic(SchemaSymbols::ELT_DOCUMENTATION, "documentation"_s->intern());
	$assignStatic(SchemaSymbols::ELT_ELEMENT, "element"_s->intern());
	$assignStatic(SchemaSymbols::ELT_ENUMERATION, "enumeration"_s->intern());
	$assignStatic(SchemaSymbols::ELT_EXTENSION, "extension"_s->intern());
	$assignStatic(SchemaSymbols::ELT_FIELD, "field"_s->intern());
	$assignStatic(SchemaSymbols::ELT_FRACTIONDIGITS, "fractionDigits"_s->intern());
	$assignStatic(SchemaSymbols::ELT_GROUP, "group"_s->intern());
	$assignStatic(SchemaSymbols::ELT_IMPORT, "import"_s->intern());
	$assignStatic(SchemaSymbols::ELT_INCLUDE, "include"_s->intern());
	$assignStatic(SchemaSymbols::ELT_KEY, "key"_s->intern());
	$assignStatic(SchemaSymbols::ELT_KEYREF, "keyref"_s->intern());
	$assignStatic(SchemaSymbols::ELT_LENGTH, "length"_s->intern());
	$assignStatic(SchemaSymbols::ELT_LIST, "list"_s->intern());
	$assignStatic(SchemaSymbols::ELT_MAXEXCLUSIVE, "maxExclusive"_s->intern());
	$assignStatic(SchemaSymbols::ELT_MAXINCLUSIVE, "maxInclusive"_s->intern());
	$assignStatic(SchemaSymbols::ELT_MAXLENGTH, "maxLength"_s->intern());
	$assignStatic(SchemaSymbols::ELT_MINEXCLUSIVE, "minExclusive"_s->intern());
	$assignStatic(SchemaSymbols::ELT_MININCLUSIVE, "minInclusive"_s->intern());
	$assignStatic(SchemaSymbols::ELT_MINLENGTH, "minLength"_s->intern());
	$assignStatic(SchemaSymbols::ELT_NOTATION, "notation"_s->intern());
	$assignStatic(SchemaSymbols::ELT_PATTERN, "pattern"_s->intern());
	$assignStatic(SchemaSymbols::ELT_REDEFINE, "redefine"_s->intern());
	$assignStatic(SchemaSymbols::ELT_RESTRICTION, "restriction"_s->intern());
	$assignStatic(SchemaSymbols::ELT_SCHEMA, "schema"_s->intern());
	$assignStatic(SchemaSymbols::ELT_SELECTOR, "selector"_s->intern());
	$assignStatic(SchemaSymbols::ELT_SEQUENCE, "sequence"_s->intern());
	$assignStatic(SchemaSymbols::ELT_SIMPLECONTENT, "simpleContent"_s->intern());
	$assignStatic(SchemaSymbols::ELT_SIMPLETYPE, "simpleType"_s->intern());
	$assignStatic(SchemaSymbols::ELT_TOTALDIGITS, "totalDigits"_s->intern());
	$assignStatic(SchemaSymbols::ELT_UNION, "union"_s->intern());
	$assignStatic(SchemaSymbols::ELT_UNIQUE, "unique"_s->intern());
	$assignStatic(SchemaSymbols::ELT_WHITESPACE, "whiteSpace"_s->intern());
	$assignStatic(SchemaSymbols::ATT_ABSTRACT, "abstract"_s->intern());
	$assignStatic(SchemaSymbols::ATT_ATTRIBUTEFORMDEFAULT, "attributeFormDefault"_s->intern());
	$assignStatic(SchemaSymbols::ATT_BASE, "base"_s->intern());
	$assignStatic(SchemaSymbols::ATT_BLOCK, "block"_s->intern());
	$assignStatic(SchemaSymbols::ATT_BLOCKDEFAULT, "blockDefault"_s->intern());
	$assignStatic(SchemaSymbols::ATT_DEFAULT, "default"_s->intern());
	$assignStatic(SchemaSymbols::ATT_ELEMENTFORMDEFAULT, "elementFormDefault"_s->intern());
	$assignStatic(SchemaSymbols::ATT_FINAL, "final"_s->intern());
	$assignStatic(SchemaSymbols::ATT_FINALDEFAULT, "finalDefault"_s->intern());
	$assignStatic(SchemaSymbols::ATT_FIXED, "fixed"_s->intern());
	$assignStatic(SchemaSymbols::ATT_FORM, "form"_s->intern());
	$assignStatic(SchemaSymbols::ATT_ID, "id"_s->intern());
	$assignStatic(SchemaSymbols::ATT_ITEMTYPE, "itemType"_s->intern());
	$assignStatic(SchemaSymbols::ATT_MAXOCCURS, "maxOccurs"_s->intern());
	$assignStatic(SchemaSymbols::ATT_MEMBERTYPES, "memberTypes"_s->intern());
	$assignStatic(SchemaSymbols::ATT_MINOCCURS, "minOccurs"_s->intern());
	$assignStatic(SchemaSymbols::ATT_MIXED, "mixed"_s->intern());
	$assignStatic(SchemaSymbols::ATT_NAME, "name"_s->intern());
	$assignStatic(SchemaSymbols::ATT_NAMESPACE, "namespace"_s->intern());
	$assignStatic(SchemaSymbols::ATT_NILLABLE, "nillable"_s->intern());
	$assignStatic(SchemaSymbols::ATT_PROCESSCONTENTS, "processContents"_s->intern());
	$assignStatic(SchemaSymbols::ATT_REF, "ref"_s->intern());
	$assignStatic(SchemaSymbols::ATT_REFER, "refer"_s->intern());
	$assignStatic(SchemaSymbols::ATT_SCHEMALOCATION, "schemaLocation"_s->intern());
	$assignStatic(SchemaSymbols::ATT_SOURCE, "source"_s->intern());
	$assignStatic(SchemaSymbols::ATT_SUBSTITUTIONGROUP, "substitutionGroup"_s->intern());
	$assignStatic(SchemaSymbols::ATT_SYSTEM, "system"_s->intern());
	$assignStatic(SchemaSymbols::ATT_PUBLIC, "public"_s->intern());
	$assignStatic(SchemaSymbols::ATT_TARGETNAMESPACE, "targetNamespace"_s->intern());
	$assignStatic(SchemaSymbols::ATT_TYPE, "type"_s->intern());
	$assignStatic(SchemaSymbols::ATT_USE, "use"_s->intern());
	$assignStatic(SchemaSymbols::ATT_VALUE, "value"_s->intern());
	$assignStatic(SchemaSymbols::ATT_VERSION, "version"_s->intern());
	$assignStatic(SchemaSymbols::ATT_XML_LANG, "xml:lang"_s->intern());
	$assignStatic(SchemaSymbols::ATT_XPATH, "xpath"_s->intern());
}

SchemaSymbols::SchemaSymbols() {
}

$Class* SchemaSymbols::load$($String* name, bool initialize) {
	$loadClass(SchemaSymbols, name, initialize, &_SchemaSymbols_ClassInfo_, clinit$SchemaSymbols, allocate$SchemaSymbols);
	return class$;
}

$Class* SchemaSymbols::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com