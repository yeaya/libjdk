#include <com/sun/org/apache/xerces/internal/impl/dv/xs/BaseDVFactory.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
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
#undef DV_ANYURI
#undef DV_BASE64BINARY
#undef DV_BOOLEAN
#undef DV_DATE
#undef DV_DATETIME
#undef DV_DECIMAL
#undef DV_GDAY
#undef DV_GMONTH
#undef DV_GMONTHDAY
#undef DV_GYEAR
#undef DV_GYEARMONTH
#undef DV_INTEGER
#undef DV_STRING
#undef DV_TIME
#undef FACET_MAXINCLUSIVE
#undef FACET_MININCLUSIVE
#undef GDAY_DT
#undef GMONTHDAY_DT
#undef GMONTH_DT
#undef GYEARMONTH_DT
#undef GYEAR_DT
#undef INT
#undef INTEGER
#undef INTEGER_DT
#undef INT_DT
#undef LONG
#undef LONG_DT
#undef MONTH
#undef MONTHDAY
#undef NEGATIVEINTEGER
#undef NEGATIVEINTEGER_DT
#undef NONNEGATIVEINTEGER
#undef NONNEGATIVEINTEGER_DT
#undef NONPOSITIVEINTEGER
#undef NONPOSITIVEINTEGER_DT
#undef ORDERED_FALSE
#undef ORDERED_PARTIAL
#undef ORDERED_TOTAL
#undef POSITIVEINTEGER
#undef POSITIVEINTEGER_DT
#undef SHORT
#undef SHORT_DT
#undef STRING
#undef STRING_DT
#undef TIME
#undef TIME_DT
#undef UNSIGNEDBYTE
#undef UNSIGNEDBYTE_DT
#undef UNSIGNEDINT
#undef UNSIGNEDINT_DT
#undef UNSIGNEDLONG
#undef UNSIGNEDLONG_DT
#undef UNSIGNEDSHORT
#undef UNSIGNEDSHORT_DT
#undef URI_SCHEMAFORSCHEMA
#undef YEAR
#undef YEARMONTH

using $XSSimpleTypeArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>;
using $XSSimpleTypeDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl>;
using $SchemaDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory;
using $XSFacets = ::com::sun::org::apache::xerces::internal::impl::dv::XSFacets;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
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

$FieldInfo _BaseDVFactory_FieldInfo_[] = {
	{"URI_SCHEMAFORSCHEMA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BaseDVFactory, URI_SCHEMAFORSCHEMA)},
	{"fBaseTypes", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $STATIC, $staticField(BaseDVFactory, fBaseTypes)},
	{}
};

$MethodInfo _BaseDVFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BaseDVFactory, init$, void)},
	{"createBuiltInTypes", "(Lcom/sun/org/apache/xerces/internal/util/SymbolHash;)V", nullptr, $STATIC, $staticMethod(BaseDVFactory, createBuiltInTypes, void, $SymbolHash*)},
	{"createTypeList", "(Ljava/lang/String;Ljava/lang/String;SLcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(BaseDVFactory, createTypeList, $XSSimpleType*, $String*, $String*, int16_t, $XSSimpleType*, $XSObjectList*)},
	{"createTypeRestriction", "(Ljava/lang/String;Ljava/lang/String;SLcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(BaseDVFactory, createTypeRestriction, $XSSimpleType*, $String*, $String*, int16_t, $XSSimpleType*, $XSObjectList*)},
	{"createTypeUnion", "(Ljava/lang/String;Ljava/lang/String;S[Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(BaseDVFactory, createTypeUnion, $XSSimpleType*, $String*, $String*, int16_t, $XSSimpleTypeArray*, $XSObjectList*)},
	{"getBuiltInType", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(BaseDVFactory, getBuiltInType, $XSSimpleType*, $String*)},
	{"getBuiltInTypes", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PUBLIC, $virtualMethod(BaseDVFactory, getBuiltInTypes, $SymbolHash*)},
	{}
};

$ClassInfo _BaseDVFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.BaseDVFactory",
	"com.sun.org.apache.xerces.internal.impl.dv.SchemaDVFactory",
	nullptr,
	_BaseDVFactory_FieldInfo_,
	_BaseDVFactory_MethodInfo_
};

$Object* allocate$BaseDVFactory($Class* clazz) {
	return $of($alloc(BaseDVFactory));
}

$String* BaseDVFactory::URI_SCHEMAFORSCHEMA = nullptr;
$SymbolHash* BaseDVFactory::fBaseTypes = nullptr;

void BaseDVFactory::init$() {
	$SchemaDVFactory::init$();
}

$XSSimpleType* BaseDVFactory::getBuiltInType($String* name) {
	return $cast($XSSimpleType, $nc(BaseDVFactory::fBaseTypes)->get(name));
}

$SymbolHash* BaseDVFactory::getBuiltInTypes() {
	return $nc(BaseDVFactory::fBaseTypes)->makeClone();
}

$XSSimpleType* BaseDVFactory::createTypeRestriction($String* name, $String* targetNamespace, int16_t finalSet, $XSSimpleType* base, $XSObjectList* annotations) {
	return $new($XSSimpleTypeDecl, $cast($XSSimpleTypeDecl, base), name, targetNamespace, finalSet, false, annotations);
}

$XSSimpleType* BaseDVFactory::createTypeList($String* name, $String* targetNamespace, int16_t finalSet, $XSSimpleType* itemType, $XSObjectList* annotations) {
	return $new($XSSimpleTypeDecl, name, targetNamespace, finalSet, $cast($XSSimpleTypeDecl, itemType), false, annotations);
}

$XSSimpleType* BaseDVFactory::createTypeUnion($String* name, $String* targetNamespace, int16_t finalSet, $XSSimpleTypeArray* memberTypes, $XSObjectList* annotations) {
	int32_t typeNum = $nc(memberTypes)->length;
	$var($XSSimpleTypeDeclArray, mtypes, $new($XSSimpleTypeDeclArray, typeNum));
	$System::arraycopy(memberTypes, 0, mtypes, 0, typeNum);
	return $new($XSSimpleTypeDecl, name, targetNamespace, finalSet, mtypes, annotations);
}

void BaseDVFactory::createBuiltInTypes($SymbolHash* types) {
	$init(BaseDVFactory);
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
	$var($String, INT, "int"_s);
	$var($String, INTEGER, "integer"_s);
	$var($String, LONG, "long"_s);
	$var($String, NEGATIVEINTEGER, "negativeInteger"_s);
	$var($String, MONTH, "gMonth"_s);
	$var($String, MONTHDAY, "gMonthDay"_s);
	$var($String, NONNEGATIVEINTEGER, "nonNegativeInteger"_s);
	$var($String, NONPOSITIVEINTEGER, "nonPositiveInteger"_s);
	$var($String, POSITIVEINTEGER, "positiveInteger"_s);
	$var($String, SHORT, "short"_s);
	$var($String, STRING, "string"_s);
	$var($String, TIME, "time"_s);
	$var($String, UNSIGNEDBYTE, "unsignedByte"_s);
	$var($String, UNSIGNEDINT, "unsignedInt"_s);
	$var($String, UNSIGNEDLONG, "unsignedLong"_s);
	$var($String, UNSIGNEDSHORT, "unsignedShort"_s);
	$var($String, YEAR, "gYear"_s);
	$var($String, YEARMONTH, "gYearMonth"_s);
	$var($XSFacets, facets, $new($XSFacets));
	$init($XSSimpleTypeDecl);
	$var($XSSimpleTypeDecl, anySimpleType, $XSSimpleTypeDecl::fAnySimpleType);
	$nc(types)->put(ANYSIMPLETYPE, anySimpleType);
	$var($XSSimpleTypeDecl, stringDV, $new($XSSimpleTypeDecl, anySimpleType, STRING, $XSSimpleTypeDecl::DV_STRING, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::STRING_DT));
	types->put(STRING, stringDV);
	types->put(BOOLEAN, $$new($XSSimpleTypeDecl, anySimpleType, BOOLEAN, $XSSimpleTypeDecl::DV_BOOLEAN, $XSSimpleType::ORDERED_FALSE, false, true, false, true, $XSConstants::BOOLEAN_DT));
	$var($XSSimpleTypeDecl, decimalDV, $new($XSSimpleTypeDecl, anySimpleType, DECIMAL, $XSSimpleTypeDecl::DV_DECIMAL, $XSSimpleType::ORDERED_TOTAL, false, false, true, true, $XSConstants::DECIMAL_DT));
	types->put(DECIMAL, decimalDV);
	types->put(ANYURI, $$new($XSSimpleTypeDecl, anySimpleType, ANYURI, $XSSimpleTypeDecl::DV_ANYURI, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::ANYURI_DT));
	types->put(BASE64BINARY, $$new($XSSimpleTypeDecl, anySimpleType, BASE64BINARY, $XSSimpleTypeDecl::DV_BASE64BINARY, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::BASE64BINARY_DT));
	types->put(DATETIME, $$new($XSSimpleTypeDecl, anySimpleType, DATETIME, $XSSimpleTypeDecl::DV_DATETIME, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::DATETIME_DT));
	types->put(TIME, $$new($XSSimpleTypeDecl, anySimpleType, TIME, $XSSimpleTypeDecl::DV_TIME, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::TIME_DT));
	types->put(DATE, $$new($XSSimpleTypeDecl, anySimpleType, DATE, $XSSimpleTypeDecl::DV_DATE, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::DATE_DT));
	types->put(YEARMONTH, $$new($XSSimpleTypeDecl, anySimpleType, YEARMONTH, $XSSimpleTypeDecl::DV_GYEARMONTH, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GYEARMONTH_DT));
	types->put(YEAR, $$new($XSSimpleTypeDecl, anySimpleType, YEAR, $XSSimpleTypeDecl::DV_GYEAR, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GYEAR_DT));
	types->put(MONTHDAY, $$new($XSSimpleTypeDecl, anySimpleType, MONTHDAY, $XSSimpleTypeDecl::DV_GMONTHDAY, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GMONTHDAY_DT));
	types->put(DAY, $$new($XSSimpleTypeDecl, anySimpleType, DAY, $XSSimpleTypeDecl::DV_GDAY, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GDAY_DT));
	types->put(MONTH, $$new($XSSimpleTypeDecl, anySimpleType, MONTH, $XSSimpleTypeDecl::DV_GMONTH, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::GMONTH_DT));
	$var($XSSimpleTypeDecl, integerDV, $new($XSSimpleTypeDecl, decimalDV, INTEGER, $XSSimpleTypeDecl::DV_INTEGER, $XSSimpleType::ORDERED_TOTAL, false, false, true, true, $XSConstants::INTEGER_DT));
	types->put(INTEGER, integerDV);
	$set(facets, maxInclusive, "0"_s);
	$var($XSSimpleTypeDecl, nonPositiveDV, $new($XSSimpleTypeDecl, integerDV, NONPOSITIVEINTEGER, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NONPOSITIVEINTEGER_DT));
	nonPositiveDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	types->put(NONPOSITIVEINTEGER, nonPositiveDV);
	$set(facets, maxInclusive, "-1"_s);
	$var($XSSimpleTypeDecl, negativeDV, $new($XSSimpleTypeDecl, nonPositiveDV, NEGATIVEINTEGER, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NEGATIVEINTEGER_DT));
	negativeDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	types->put(NEGATIVEINTEGER, negativeDV);
	$set(facets, maxInclusive, "9223372036854775807"_s);
	$set(facets, minInclusive, "-9223372036854775808"_s);
	$var($XSSimpleTypeDecl, longDV, $new($XSSimpleTypeDecl, integerDV, LONG, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::LONG_DT));
	longDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_MAXINCLUSIVE | $XSSimpleType::FACET_MININCLUSIVE), (int16_t)0);
	types->put(LONG, longDV);
	$set(facets, maxInclusive, "2147483647"_s);
	$set(facets, minInclusive, "-2147483648"_s);
	$var($XSSimpleTypeDecl, intDV, $new($XSSimpleTypeDecl, longDV, INT, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::INT_DT));
	intDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_MAXINCLUSIVE | $XSSimpleType::FACET_MININCLUSIVE), (int16_t)0);
	types->put(INT, intDV);
	$set(facets, maxInclusive, "32767"_s);
	$set(facets, minInclusive, "-32768"_s);
	$var($XSSimpleTypeDecl, shortDV, $new($XSSimpleTypeDecl, intDV, SHORT, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::SHORT_DT));
	shortDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_MAXINCLUSIVE | $XSSimpleType::FACET_MININCLUSIVE), (int16_t)0);
	types->put(SHORT, shortDV);
	$set(facets, maxInclusive, "127"_s);
	$set(facets, minInclusive, "-128"_s);
	$var($XSSimpleTypeDecl, byteDV, $new($XSSimpleTypeDecl, shortDV, BYTE, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::BYTE_DT));
	byteDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_MAXINCLUSIVE | $XSSimpleType::FACET_MININCLUSIVE), (int16_t)0);
	types->put(BYTE, byteDV);
	$set(facets, minInclusive, "0"_s);
	$var($XSSimpleTypeDecl, nonNegativeDV, $new($XSSimpleTypeDecl, integerDV, NONNEGATIVEINTEGER, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NONNEGATIVEINTEGER_DT));
	nonNegativeDV->applyFacets1(facets, $XSSimpleType::FACET_MININCLUSIVE, (int16_t)0);
	types->put(NONNEGATIVEINTEGER, nonNegativeDV);
	$set(facets, maxInclusive, "18446744073709551615"_s);
	$var($XSSimpleTypeDecl, unsignedLongDV, $new($XSSimpleTypeDecl, nonNegativeDV, UNSIGNEDLONG, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::UNSIGNEDLONG_DT));
	unsignedLongDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	types->put(UNSIGNEDLONG, unsignedLongDV);
	$set(facets, maxInclusive, "4294967295"_s);
	$var($XSSimpleTypeDecl, unsignedIntDV, $new($XSSimpleTypeDecl, unsignedLongDV, UNSIGNEDINT, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::UNSIGNEDINT_DT));
	unsignedIntDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	types->put(UNSIGNEDINT, unsignedIntDV);
	$set(facets, maxInclusive, "65535"_s);
	$var($XSSimpleTypeDecl, unsignedShortDV, $new($XSSimpleTypeDecl, unsignedIntDV, UNSIGNEDSHORT, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::UNSIGNEDSHORT_DT));
	unsignedShortDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	types->put(UNSIGNEDSHORT, unsignedShortDV);
	$set(facets, maxInclusive, "255"_s);
	$var($XSSimpleTypeDecl, unsignedByteDV, $new($XSSimpleTypeDecl, unsignedShortDV, UNSIGNEDBYTE, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::UNSIGNEDBYTE_DT));
	unsignedByteDV->applyFacets1(facets, $XSSimpleType::FACET_MAXINCLUSIVE, (int16_t)0);
	types->put(UNSIGNEDBYTE, unsignedByteDV);
	$set(facets, minInclusive, "1"_s);
	$var($XSSimpleTypeDecl, positiveIntegerDV, $new($XSSimpleTypeDecl, nonNegativeDV, POSITIVEINTEGER, BaseDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::POSITIVEINTEGER_DT));
	positiveIntegerDV->applyFacets1(facets, $XSSimpleType::FACET_MININCLUSIVE, (int16_t)0);
	types->put(POSITIVEINTEGER, positiveIntegerDV);
}

void clinit$BaseDVFactory($Class* class$) {
	$assignStatic(BaseDVFactory::URI_SCHEMAFORSCHEMA, "http://www.w3.org/2001/XMLSchema"_s);
	$assignStatic(BaseDVFactory::fBaseTypes, $new($SymbolHash, 53));
	{
		BaseDVFactory::createBuiltInTypes(BaseDVFactory::fBaseTypes);
	}
}

BaseDVFactory::BaseDVFactory() {
}

$Class* BaseDVFactory::load$($String* name, bool initialize) {
	$loadClass(BaseDVFactory, name, initialize, &_BaseDVFactory_ClassInfo_, clinit$BaseDVFactory, allocate$BaseDVFactory);
	return class$;
}

$Class* BaseDVFactory::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com