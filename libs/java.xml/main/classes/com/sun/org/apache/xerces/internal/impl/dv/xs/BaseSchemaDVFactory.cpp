#include <com/sun/org/apache/xerces/internal/impl/dv/xs/BaseSchemaDVFactory.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

#undef ANYSIMPLETYPE
#undef ANYURI
#undef ANYURI_DT
#undef BASE64BINARY
#undef BASE64BINARY_DT
#undef BOOLEAN
#undef BOOLEAN_DT
#undef BYTE
#undef BYTE_DT
#undef DATE
#undef DATETIME
#undef DATETIME_DT
#undef DATE_DT
#undef DAY
#undef DECIMAL
#undef DECIMAL_DT
#undef DOUBLE
#undef DOUBLE_DT
#undef DURATION
#undef DURATION_DT
#undef DV_ANYURI
#undef DV_BASE64BINARY
#undef DV_BOOLEAN
#undef DV_DATE
#undef DV_DATETIME
#undef DV_DECIMAL
#undef DV_DOUBLE
#undef DV_DURATION
#undef DV_ENTITY
#undef DV_FLOAT
#undef DV_GDAY
#undef DV_GMONTH
#undef DV_GMONTHDAY
#undef DV_GYEAR
#undef DV_GYEARMONTH
#undef DV_HEXBINARY
#undef DV_ID
#undef DV_IDREF
#undef DV_INTEGER
#undef DV_NOTATION
#undef DV_QNAME
#undef DV_STRING
#undef DV_TIME
#undef ENTITIES
#undef ENTITY
#undef ENTITY_DT
#undef FACET_MAXINCLUSIVE
#undef FACET_MININCLUSIVE
#undef FACET_MINLENGTH
#undef FACET_PATTERN
#undef FACET_WHITESPACE
#undef FLOAT
#undef FLOAT_DT
#undef GDAY_DT
#undef GMONTHDAY_DT
#undef GMONTH_DT
#undef GYEARMONTH_DT
#undef GYEAR_DT
#undef HEXBINARY
#undef HEXBINARY_DT
#undef ID
#undef IDREF
#undef IDREFS
#undef IDREF_DT
#undef ID_DT
#undef INT
#undef INTEGER
#undef INTEGER_DT
#undef INT_DT
#undef LANGUAGE
#undef LANGUAGE_DT
#undef LONG
#undef LONG_DT
#undef MONTH
#undef MONTHDAY
#undef NAME
#undef NAME_DT
#undef NCNAME
#undef NCNAME_DT
#undef NEGATIVEINTEGER
#undef NEGATIVEINTEGER_DT
#undef NMTOKEN
#undef NMTOKENS
#undef NMTOKEN_DT
#undef NONNEGATIVEINTEGER
#undef NONNEGATIVEINTEGER_DT
#undef NONPOSITIVEINTEGER
#undef NONPOSITIVEINTEGER_DT
#undef NORMALIZEDSTRING
#undef NORMALIZEDSTRING_DT
#undef NOTATION
#undef NOTATION_DT
#undef ORDERED_FALSE
#undef ORDERED_PARTIAL
#undef ORDERED_TOTAL
#undef POSITIVEINTEGER
#undef POSITIVEINTEGER_DT
#undef QNAME
#undef QNAME_DT
#undef SHORT
#undef SHORT_DT
#undef SPECIAL_PATTERN_NAME
#undef SPECIAL_PATTERN_NCNAME
#undef SPECIAL_PATTERN_NMTOKEN
#undef STRING
#undef STRING_DT
#undef TIME
#undef TIME_DT
#undef TOKEN
#undef TOKEN_DT
#undef UNSIGNEDBYTE
#undef UNSIGNEDBYTE_DT
#undef UNSIGNEDINT
#undef UNSIGNEDINT_DT
#undef UNSIGNEDLONG
#undef UNSIGNEDLONG_DT
#undef UNSIGNEDSHORT
#undef UNSIGNEDSHORT_DT
#undef URI_SCHEMAFORSCHEMA
#undef WS_COLLAPSE
#undef WS_REPLACE
#undef YEAR
#undef YEARMONTH

using $XSSimpleTypeArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>;
using $XSSimpleTypeDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl>;
using $SchemaDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory;
using $XSFacets = ::com::sun::org::apache::xerces::internal::impl::dv::XSFacets;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $XSDeclarationPool = ::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
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
							namespace dv {
								namespace xs {

$FieldInfo _BaseSchemaDVFactory_FieldInfo_[] = {
	{"URI_SCHEMAFORSCHEMA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BaseSchemaDVFactory, URI_SCHEMAFORSCHEMA)},
	{"fDeclPool", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool;", nullptr, $PROTECTED, $field(BaseSchemaDVFactory, fDeclPool)},
	{}
};

$MethodInfo _BaseSchemaDVFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BaseSchemaDVFactory, init$, void)},
	{"createBuiltInTypes", "(Lcom/sun/org/apache/xerces/internal/util/SymbolHash;Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(BaseSchemaDVFactory, createBuiltInTypes, void, $SymbolHash*, $XSSimpleTypeDecl*)},
	{"createTypeList", "(Ljava/lang/String;Ljava/lang/String;SLcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(BaseSchemaDVFactory, createTypeList, $XSSimpleType*, $String*, $String*, int16_t, $XSSimpleType*, $XSObjectList*)},
	{"createTypeRestriction", "(Ljava/lang/String;Ljava/lang/String;SLcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(BaseSchemaDVFactory, createTypeRestriction, $XSSimpleType*, $String*, $String*, int16_t, $XSSimpleType*, $XSObjectList*)},
	{"createTypeUnion", "(Ljava/lang/String;Ljava/lang/String;S[Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(BaseSchemaDVFactory, createTypeUnion, $XSSimpleType*, $String*, $String*, int16_t, $XSSimpleTypeArray*, $XSObjectList*)},
	{"newXSSimpleTypeDecl", "()Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PUBLIC, $virtualMethod(BaseSchemaDVFactory, newXSSimpleTypeDecl, $XSSimpleTypeDecl*)},
	{"setDeclPool", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool;)V", nullptr, $PUBLIC, $virtualMethod(BaseSchemaDVFactory, setDeclPool, void, $XSDeclarationPool*)},
	{}
};

$ClassInfo _BaseSchemaDVFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.BaseSchemaDVFactory",
	"com.sun.org.apache.xerces.internal.impl.dv.SchemaDVFactory",
	nullptr,
	_BaseSchemaDVFactory_FieldInfo_,
	_BaseSchemaDVFactory_MethodInfo_
};

$Object* allocate$BaseSchemaDVFactory($Class* clazz) {
	return $of($alloc(BaseSchemaDVFactory));
}

$String* BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA = nullptr;

void BaseSchemaDVFactory::init$() {
	$SchemaDVFactory::init$();
	$set(this, fDeclPool, nullptr);
}

void BaseSchemaDVFactory::createBuiltInTypes($SymbolHash* builtInTypes, $XSSimpleTypeDecl* baseAtomicType) {
	$init(BaseSchemaDVFactory);
	$useLocalCurrentObjectStackCache();
	$var($String, ANYSIMPLETYPE, "anySimpleType"_s);
	$var($String, ANYURI, "anyURI"_s);
	$var($String, BASE64BINARY, "base64Binary"_s);
	$var($String, BOOLEAN, "boolean"_s);
	$var($String, BYTE, "byte"_s);
	$var($String, DATE, "date"_s);
	$var($String, DATETIME, "dateTime"_s);
	$var($String, DAY, "gDay"_s);
	$var($String, DECIMAL, "decimal"_s);
	$var($String, DOUBLE, "double"_s);
	$var($String, DURATION, "duration"_s);
	$var($String, ENTITY, "ENTITY"_s);
	$var($String, ENTITIES, "ENTITIES"_s);
	$var($String, FLOAT, "float"_s);
	$var($String, HEXBINARY, "hexBinary"_s);
	$var($String, ID, "ID"_s);
	$var($String, IDREF, "IDREF"_s);
	$var($String, IDREFS, "IDREFS"_s);
	$var($String, INT, "int"_s);
	$var($String, INTEGER, "integer"_s);
	$var($String, LONG, "long"_s);
	$var($String, NAME, "Name"_s);
	$var($String, NEGATIVEINTEGER, "negativeInteger"_s);
	$var($String, MONTH, "gMonth"_s);
	$var($String, MONTHDAY, "gMonthDay"_s);
	$var($String, NCNAME, "NCName"_s);
	$var($String, NMTOKEN, "NMTOKEN"_s);
	$var($String, NMTOKENS, "NMTOKENS"_s);
	$var($String, LANGUAGE, "language"_s);
	$var($String, NONNEGATIVEINTEGER, "nonNegativeInteger"_s);
	$var($String, NONPOSITIVEINTEGER, "nonPositiveInteger"_s);
	$var($String, NORMALIZEDSTRING, "normalizedString"_s);
	$var($String, NOTATION, "NOTATION"_s);
	$var($String, POSITIVEINTEGER, "positiveInteger"_s);
	$var($String, QNAME, "QName"_s);
	$var($String, SHORT, "short"_s);
	$var($String, STRING, "string"_s);
	$var($String, TIME, "time"_s);
	$var($String, TOKEN, "token"_s);
	$var($String, UNSIGNEDBYTE, "unsignedByte"_s);
	$var($String, UNSIGNEDINT, "unsignedInt"_s);
	$var($String, UNSIGNEDLONG, "unsignedLong"_s);
	$var($String, UNSIGNEDSHORT, "unsignedShort"_s);
	$var($String, YEAR, "gYear"_s);
	$var($String, YEARMONTH, "gYearMonth"_s);
	$var($XSFacets, facets, $new($XSFacets));
	$init($XSSimpleTypeDecl);
	$nc(builtInTypes)->put(ANYSIMPLETYPE, $XSSimpleTypeDecl::fAnySimpleType);
	$var($XSSimpleTypeDecl, stringDV, $new($XSSimpleTypeDecl, baseAtomicType, STRING, $XSSimpleTypeDecl::DV_STRING, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::STRING_DT));
	builtInTypes->put(STRING, stringDV);
	builtInTypes->put(BOOLEAN, $$new($XSSimpleTypeDecl, baseAtomicType, BOOLEAN, $XSSimpleTypeDecl::DV_BOOLEAN, $XSSimpleType::ORDERED_FALSE, false, true, false, true, $XSConstants::BOOLEAN_DT));
	$var($XSSimpleTypeDecl, decimalDV, $new($XSSimpleTypeDecl, baseAtomicType, DECIMAL, $XSSimpleTypeDecl::DV_DECIMAL, $XSSimpleType::ORDERED_TOTAL, false, false, true, true, $XSConstants::DECIMAL_DT));
	builtInTypes->put(DECIMAL, decimalDV);
	builtInTypes->put(ANYURI, $$new($XSSimpleTypeDecl, baseAtomicType, ANYURI, $XSSimpleTypeDecl::DV_ANYURI, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::ANYURI_DT));
	builtInTypes->put(BASE64BINARY, $$new($XSSimpleTypeDecl, baseAtomicType, BASE64BINARY, $XSSimpleTypeDecl::DV_BASE64BINARY, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::BASE64BINARY_DT));
	$var($XSSimpleTypeDecl, durationDV, $new($XSSimpleTypeDecl, baseAtomicType, DURATION, $XSSimpleTypeDecl::DV_DURATION, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::DURATION_DT));
	builtInTypes->put(DURATION, durationDV);
	builtInTypes->put(DATETIME, $$new($XSSimpleTypeDecl, baseAtomicType, DATETIME, $XSSimpleTypeDecl::DV_DATETIME, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::DATETIME_DT));
	builtInTypes->put(TIME, $$new($XSSimpleTypeDecl, baseAtomicType, TIME, $XSSimpleTypeDecl::DV_TIME, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::TIME_DT));
	builtInTypes->put(DATE, $$new($XSSimpleTypeDecl, baseAtomicType, DATE, $XSSimpleTypeDecl::DV_DATE, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::DATE_DT));
	builtInTypes->put(YEARMONTH, $$new($XSSimpleTypeDecl, baseAtomicType, YEARMONTH, $XSSimpleTypeDecl::DV_GYEARMONTH, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GYEARMONTH_DT));
	builtInTypes->put(YEAR, $$new($XSSimpleTypeDecl, baseAtomicType, YEAR, $XSSimpleTypeDecl::DV_GYEAR, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GYEAR_DT));
	builtInTypes->put(MONTHDAY, $$new($XSSimpleTypeDecl, baseAtomicType, MONTHDAY, $XSSimpleTypeDecl::DV_GMONTHDAY, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GMONTHDAY_DT));
	builtInTypes->put(DAY, $$new($XSSimpleTypeDecl, baseAtomicType, DAY, $XSSimpleTypeDecl::DV_GDAY, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GDAY_DT));
	builtInTypes->put(MONTH, $$new($XSSimpleTypeDecl, baseAtomicType, MONTH, $XSSimpleTypeDecl::DV_GMONTH, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GMONTH_DT));
	$var($XSSimpleTypeDecl, integerDV, $new($XSSimpleTypeDecl, decimalDV, INTEGER, $XSSimpleTypeDecl::DV_INTEGER, $XSSimpleType::ORDERED_TOTAL, false, false, true, true, $XSConstants::INTEGER_DT));
	builtInTypes->put(INTEGER, integerDV);
	$set(facets, maxInclusive, "0"_s);
	$var($XSSimpleTypeDecl, nonPositiveDV, $new($XSSimpleTypeDecl, integerDV, NONPOSITIVEINTEGER, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NONPOSITIVEINTEGER_DT));
	nonPositiveDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	builtInTypes->put(NONPOSITIVEINTEGER, nonPositiveDV);
	$set(facets, maxInclusive, "-1"_s);
	$var($XSSimpleTypeDecl, negativeDV, $new($XSSimpleTypeDecl, nonPositiveDV, NEGATIVEINTEGER, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NEGATIVEINTEGER_DT));
	negativeDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	builtInTypes->put(NEGATIVEINTEGER, negativeDV);
	$set(facets, maxInclusive, "9223372036854775807"_s);
	$set(facets, minInclusive, "-9223372036854775808"_s);
	$var($XSSimpleTypeDecl, longDV, $new($XSSimpleTypeDecl, integerDV, LONG, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::LONG_DT));
	longDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_MAXINCLUSIVE | $XSSimpleType::FACET_MININCLUSIVE), (int16_t)0);
	builtInTypes->put(LONG, longDV);
	$set(facets, maxInclusive, "2147483647"_s);
	$set(facets, minInclusive, "-2147483648"_s);
	$var($XSSimpleTypeDecl, intDV, $new($XSSimpleTypeDecl, longDV, INT, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::INT_DT));
	intDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_MAXINCLUSIVE | $XSSimpleType::FACET_MININCLUSIVE), (int16_t)0);
	builtInTypes->put(INT, intDV);
	$set(facets, maxInclusive, "32767"_s);
	$set(facets, minInclusive, "-32768"_s);
	$var($XSSimpleTypeDecl, shortDV, $new($XSSimpleTypeDecl, intDV, SHORT, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::SHORT_DT));
	shortDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_MAXINCLUSIVE | $XSSimpleType::FACET_MININCLUSIVE), (int16_t)0);
	builtInTypes->put(SHORT, shortDV);
	$set(facets, maxInclusive, "127"_s);
	$set(facets, minInclusive, "-128"_s);
	$var($XSSimpleTypeDecl, byteDV, $new($XSSimpleTypeDecl, shortDV, BYTE, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::BYTE_DT));
	byteDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_MAXINCLUSIVE | $XSSimpleType::FACET_MININCLUSIVE), (int16_t)0);
	builtInTypes->put(BYTE, byteDV);
	$set(facets, minInclusive, "0"_s);
	$var($XSSimpleTypeDecl, nonNegativeDV, $new($XSSimpleTypeDecl, integerDV, NONNEGATIVEINTEGER, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NONNEGATIVEINTEGER_DT));
	nonNegativeDV->applyFacets1(facets, $XSSimpleType::FACET_MININCLUSIVE, (int16_t)0);
	builtInTypes->put(NONNEGATIVEINTEGER, nonNegativeDV);
	$set(facets, maxInclusive, "18446744073709551615"_s);
	$var($XSSimpleTypeDecl, unsignedLongDV, $new($XSSimpleTypeDecl, nonNegativeDV, UNSIGNEDLONG, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::UNSIGNEDLONG_DT));
	unsignedLongDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	builtInTypes->put(UNSIGNEDLONG, unsignedLongDV);
	$set(facets, maxInclusive, "4294967295"_s);
	$var($XSSimpleTypeDecl, unsignedIntDV, $new($XSSimpleTypeDecl, unsignedLongDV, UNSIGNEDINT, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::UNSIGNEDINT_DT));
	unsignedIntDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	builtInTypes->put(UNSIGNEDINT, unsignedIntDV);
	$set(facets, maxInclusive, "65535"_s);
	$var($XSSimpleTypeDecl, unsignedShortDV, $new($XSSimpleTypeDecl, unsignedIntDV, UNSIGNEDSHORT, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::UNSIGNEDSHORT_DT));
	unsignedShortDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	builtInTypes->put(UNSIGNEDSHORT, unsignedShortDV);
	$set(facets, maxInclusive, "255"_s);
	$var($XSSimpleTypeDecl, unsignedByteDV, $new($XSSimpleTypeDecl, unsignedShortDV, UNSIGNEDBYTE, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::UNSIGNEDBYTE_DT));
	unsignedByteDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	builtInTypes->put(UNSIGNEDBYTE, unsignedByteDV);
	$set(facets, minInclusive, "1"_s);
	$var($XSSimpleTypeDecl, positiveIntegerDV, $new($XSSimpleTypeDecl, nonNegativeDV, POSITIVEINTEGER, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::POSITIVEINTEGER_DT));
	positiveIntegerDV->applyFacets1(facets, $XSSimpleType::FACET_MININCLUSIVE, (int16_t)0);
	builtInTypes->put(POSITIVEINTEGER, positiveIntegerDV);
	builtInTypes->put(FLOAT, $$new($XSSimpleTypeDecl, baseAtomicType, FLOAT, $XSSimpleTypeDecl::DV_FLOAT, $XSSimpleType::ORDERED_PARTIAL, true, true, true, true, $XSConstants::FLOAT_DT));
	builtInTypes->put(DOUBLE, $$new($XSSimpleTypeDecl, baseAtomicType, DOUBLE, $XSSimpleTypeDecl::DV_DOUBLE, $XSSimpleType::ORDERED_PARTIAL, true, true, true, true, $XSConstants::DOUBLE_DT));
	builtInTypes->put(HEXBINARY, $$new($XSSimpleTypeDecl, baseAtomicType, HEXBINARY, $XSSimpleTypeDecl::DV_HEXBINARY, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::HEXBINARY_DT));
	builtInTypes->put(NOTATION, $$new($XSSimpleTypeDecl, baseAtomicType, NOTATION, $XSSimpleTypeDecl::DV_NOTATION, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::NOTATION_DT));
	facets->whiteSpace = $XSSimpleType::WS_REPLACE;
	$var($XSSimpleTypeDecl, normalizedDV, $new($XSSimpleTypeDecl, stringDV, NORMALIZEDSTRING, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NORMALIZEDSTRING_DT));
	normalizedDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0);
	builtInTypes->put(NORMALIZEDSTRING, normalizedDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$var($XSSimpleTypeDecl, tokenDV, $new($XSSimpleTypeDecl, normalizedDV, TOKEN, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::TOKEN_DT));
	tokenDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0);
	builtInTypes->put(TOKEN, tokenDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$set(facets, pattern, "([a-zA-Z]{1,8})(-[a-zA-Z0-9]{1,8})*"_s);
	$var($XSSimpleTypeDecl, languageDV, $new($XSSimpleTypeDecl, tokenDV, LANGUAGE, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::LANGUAGE_DT));
	languageDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_WHITESPACE | $XSSimpleType::FACET_PATTERN), (int16_t)0);
	builtInTypes->put(LANGUAGE, languageDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$var($XSSimpleTypeDecl, nameDV, $new($XSSimpleTypeDecl, tokenDV, NAME, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NAME_DT));
	nameDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0, $XSSimpleTypeDecl::SPECIAL_PATTERN_NAME);
	builtInTypes->put(NAME, nameDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$var($XSSimpleTypeDecl, ncnameDV, $new($XSSimpleTypeDecl, nameDV, NCNAME, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NCNAME_DT));
	ncnameDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0, $XSSimpleTypeDecl::SPECIAL_PATTERN_NCNAME);
	builtInTypes->put(NCNAME, ncnameDV);
	builtInTypes->put(QNAME, $$new($XSSimpleTypeDecl, baseAtomicType, QNAME, $XSSimpleTypeDecl::DV_QNAME, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::QNAME_DT));
	builtInTypes->put(ID, $$new($XSSimpleTypeDecl, ncnameDV, ID, $XSSimpleTypeDecl::DV_ID, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::ID_DT));
	$var($XSSimpleTypeDecl, idrefDV, $new($XSSimpleTypeDecl, ncnameDV, IDREF, $XSSimpleTypeDecl::DV_IDREF, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::IDREF_DT));
	builtInTypes->put(IDREF, idrefDV);
	facets->minLength = 1;
	$var($XSSimpleTypeDecl, tempDV, $new($XSSimpleTypeDecl, ($String*)nullptr, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, idrefDV, true, ($XSObjectList*)nullptr));
	$var($XSSimpleTypeDecl, idrefsDV, $new($XSSimpleTypeDecl, tempDV, IDREFS, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, ($XSObjectList*)nullptr));
	idrefsDV->applyFacets1(facets, $XSSimpleType::FACET_MINLENGTH, (int16_t)0);
	builtInTypes->put(IDREFS, idrefsDV);
	$var($XSSimpleTypeDecl, entityDV, $new($XSSimpleTypeDecl, ncnameDV, ENTITY, $XSSimpleTypeDecl::DV_ENTITY, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::ENTITY_DT));
	builtInTypes->put(ENTITY, entityDV);
	facets->minLength = 1;
	$assign(tempDV, $new($XSSimpleTypeDecl, ($String*)nullptr, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, entityDV, true, ($XSObjectList*)nullptr));
	$var($XSSimpleTypeDecl, entitiesDV, $new($XSSimpleTypeDecl, tempDV, ENTITIES, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, ($XSObjectList*)nullptr));
	entitiesDV->applyFacets1(facets, $XSSimpleType::FACET_MINLENGTH, (int16_t)0);
	builtInTypes->put(ENTITIES, entitiesDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$var($XSSimpleTypeDecl, nmtokenDV, $new($XSSimpleTypeDecl, tokenDV, NMTOKEN, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NMTOKEN_DT));
	nmtokenDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0, $XSSimpleTypeDecl::SPECIAL_PATTERN_NMTOKEN);
	builtInTypes->put(NMTOKEN, nmtokenDV);
	facets->minLength = 1;
	$assign(tempDV, $new($XSSimpleTypeDecl, ($String*)nullptr, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, nmtokenDV, true, ($XSObjectList*)nullptr));
	$var($XSSimpleTypeDecl, nmtokensDV, $new($XSSimpleTypeDecl, tempDV, NMTOKENS, BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, ($XSObjectList*)nullptr));
	nmtokensDV->applyFacets1(facets, $XSSimpleType::FACET_MINLENGTH, (int16_t)0);
	builtInTypes->put(NMTOKENS, nmtokensDV);
}

$XSSimpleType* BaseSchemaDVFactory::createTypeRestriction($String* name, $String* targetNamespace, int16_t finalSet, $XSSimpleType* base, $XSObjectList* annotations) {
	if (this->fDeclPool != nullptr) {
		$var($XSSimpleTypeDecl, st, $nc(this->fDeclPool)->getSimpleTypeDecl());
		return $nc(st)->setRestrictionValues($cast($XSSimpleTypeDecl, base), name, targetNamespace, finalSet, annotations);
	}
	return $new($XSSimpleTypeDecl, $cast($XSSimpleTypeDecl, base), name, targetNamespace, finalSet, false, annotations);
}

$XSSimpleType* BaseSchemaDVFactory::createTypeList($String* name, $String* targetNamespace, int16_t finalSet, $XSSimpleType* itemType, $XSObjectList* annotations) {
	if (this->fDeclPool != nullptr) {
		$var($XSSimpleTypeDecl, st, $nc(this->fDeclPool)->getSimpleTypeDecl());
		return $nc(st)->setListValues(name, targetNamespace, finalSet, $cast($XSSimpleTypeDecl, itemType), annotations);
	}
	return $new($XSSimpleTypeDecl, name, targetNamespace, finalSet, $cast($XSSimpleTypeDecl, itemType), false, annotations);
}

$XSSimpleType* BaseSchemaDVFactory::createTypeUnion($String* name, $String* targetNamespace, int16_t finalSet, $XSSimpleTypeArray* memberTypes, $XSObjectList* annotations) {
	$useLocalCurrentObjectStackCache();
	int32_t typeNum = $nc(memberTypes)->length;
	$var($XSSimpleTypeDeclArray, mtypes, $new($XSSimpleTypeDeclArray, typeNum));
	$System::arraycopy(memberTypes, 0, mtypes, 0, typeNum);
	if (this->fDeclPool != nullptr) {
		$var($XSSimpleTypeDecl, st, $nc(this->fDeclPool)->getSimpleTypeDecl());
		return $nc(st)->setUnionValues(name, targetNamespace, finalSet, mtypes, annotations);
	}
	return $new($XSSimpleTypeDecl, name, targetNamespace, finalSet, mtypes, annotations);
}

void BaseSchemaDVFactory::setDeclPool($XSDeclarationPool* declPool) {
	$set(this, fDeclPool, declPool);
}

$XSSimpleTypeDecl* BaseSchemaDVFactory::newXSSimpleTypeDecl() {
	return $new($XSSimpleTypeDecl);
}

BaseSchemaDVFactory::BaseSchemaDVFactory() {
}

void clinit$BaseSchemaDVFactory($Class* class$) {
	$assignStatic(BaseSchemaDVFactory::URI_SCHEMAFORSCHEMA, "http://www.w3.org/2001/XMLSchema"_s);
}

$Class* BaseSchemaDVFactory::load$($String* name, bool initialize) {
	$loadClass(BaseSchemaDVFactory, name, initialize, &_BaseSchemaDVFactory_ClassInfo_, clinit$BaseSchemaDVFactory, allocate$BaseSchemaDVFactory);
	return class$;
}

$Class* BaseSchemaDVFactory::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com