#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeFacetException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AnyAtomicDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AnySimpleDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AnyURIDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/Base64BinaryDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/BooleanDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DateDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DateTimeDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DayDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DayTimeDurationDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DoubleDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DurationDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/EntityDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/FloatDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/HexBinaryDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/IDDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/IDREFDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/IntegerDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/ListDV$ListData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/ListDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/MonthDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/MonthDayDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/QNameDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/StringDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TimeDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/UnionDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$1.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$2.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$3.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$4.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$AbstractObjectList.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$ValidationContextImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$XSFacetImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$XSMVFacetImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDelegate.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/YearDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/YearMonthDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/YearMonthDurationDV.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/ObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/ShortListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSFacet.h>
#include <com/sun/org/apache/xerces/internal/xs/XSMultiValueFacet.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef ANYATOMICTYPE_DT
#undef ANYSIMPLETYPE_DT
#undef ANY_TYPE
#undef ATTVAL_ANYTYPE
#undef DAYTIMEDURATION_DT
#undef DECIMAL_DT
#undef DERIVATION_ANY
#undef DERIVATION_EXTENSION
#undef DERIVATION_LIST
#undef DERIVATION_RESTRICTION
#undef DERIVATION_UNION
#undef DV_ANYATOMICTYPE
#undef DV_ANYSIMPLETYPE
#undef DV_ANYURI
#undef DV_BASE64BINARY
#undef DV_BOOLEAN
#undef DV_DATE
#undef DV_DATETIME
#undef DV_DAYTIMEDURATION
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
#undef DV_LIST
#undef DV_NOTATION
#undef DV_PRECISIONDECIMAL
#undef DV_QNAME
#undef DV_STRING
#undef DV_TIME
#undef DV_UNION
#undef DV_YEARMONTHDURATION
#undef EMPTY_LIST
#undef ENTITY_DT
#undef FACET_ENUMERATION
#undef FACET_FRACTIONDIGITS
#undef FACET_LENGTH
#undef FACET_MAXEXCLUSIVE
#undef FACET_MAXINCLUSIVE
#undef FACET_MAXLENGTH
#undef FACET_MINEXCLUSIVE
#undef FACET_MININCLUSIVE
#undef FACET_MINLENGTH
#undef FACET_NONE
#undef FACET_PATTERN
#undef FACET_TOTALDIGITS
#undef FACET_WHITESPACE
#undef LISTOFUNION_DT
#undef LIST_DT
#undef NORMALIZE_FULL
#undef NORMALIZE_NONE
#undef NORMALIZE_TRIM
#undef NOTATION_DT
#undef ORDERED_FALSE
#undef ORDERED_PARTIAL
#undef POSITIVEINTEGER_DT
#undef PRECISIONDECIMAL_DT
#undef SIMPLE_TYPE
#undef SPECIAL_PATTERN_NAME
#undef SPECIAL_PATTERN_NCNAME
#undef SPECIAL_PATTERN_NMTOKEN
#undef SPECIAL_PATTERN_NONE
#undef SPECIAL_PATTERN_STRING
#undef STRING_DT
#undef TYPE_DEFINITION
#undef UNAVAILABLE_DT
#undef URI_SCHEMAFORSCHEMA
#undef VARIETY_ABSENT
#undef VARIETY_ATOMIC
#undef VARIETY_LIST
#undef VARIETY_UNION
#undef WS_COLLAPSE
#undef WS_FACET_STRING
#undef WS_PRESERVE
#undef WS_REPLACE
#undef YEARMONTHDURATION_DT

using $ValidatedInfoArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo>;
using $XSSimpleTypeArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>;
using $TypeValidatorArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator>;
using $XSSimpleTypeDecl$XSFacetImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$XSFacetImpl>;
using $XSSimpleTypeDecl$XSMVFacetImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$XSMVFacetImpl>;
using $XSSimpleTypeDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $DatatypeException = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeException;
using $InvalidDatatypeFacetException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeFacetException;
using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSFacets = ::com::sun::org::apache::xerces::internal::impl::dv::XSFacets;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $AnyAtomicDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AnyAtomicDV;
using $AnySimpleDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AnySimpleDV;
using $AnyURIDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AnyURIDV;
using $Base64BinaryDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::Base64BinaryDV;
using $BooleanDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::BooleanDV;
using $DateDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DateDV;
using $DateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DateTimeDV;
using $DayDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DayDV;
using $DayTimeDurationDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DayTimeDurationDV;
using $DecimalDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DecimalDV;
using $DoubleDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DoubleDV;
using $DurationDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DurationDV;
using $EntityDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::EntityDV;
using $FloatDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::FloatDV;
using $HexBinaryDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::HexBinaryDV;
using $IDDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::IDDV;
using $IDREFDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::IDREFDV;
using $IntegerDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::IntegerDV;
using $ListDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::ListDV;
using $ListDV$ListData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::ListDV$ListData;
using $MonthDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::MonthDV;
using $MonthDayDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::MonthDayDV;
using $PrecisionDecimalDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV;
using $QNameDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::QNameDV;
using $StringDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::StringDV;
using $TimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TimeDV;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $UnionDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::UnionDV;
using $XSSimpleTypeDecl$1 = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$1;
using $XSSimpleTypeDecl$2 = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$2;
using $XSSimpleTypeDecl$3 = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$3;
using $XSSimpleTypeDecl$4 = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$4;
using $XSSimpleTypeDecl$AbstractObjectList = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$AbstractObjectList;
using $XSSimpleTypeDecl$ValidationContextImpl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$ValidationContextImpl;
using $XSSimpleTypeDecl$XSFacetImpl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$XSFacetImpl;
using $XSSimpleTypeDecl$XSMVFacetImpl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$XSMVFacetImpl;
using $XSSimpleTypeDelegate = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDelegate;
using $YearDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::YearDV;
using $YearMonthDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::YearMonthDV;
using $YearMonthDurationDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::YearMonthDurationDV;
using $RegularExpression = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $ObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::ObjectListImpl;
using $ShortListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::ShortListImpl;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSFacet = ::com::sun::org::apache::xerces::internal::xs::XSFacet;
using $XSMultiValueFacet = ::com::sun::org::apache::xerces::internal::xs::XSMultiValueFacet;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ObjectList = ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _XSSimpleTypeDecl_FieldInfo_[] = {
	{"DV_STRING", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_STRING)},
	{"DV_BOOLEAN", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_BOOLEAN)},
	{"DV_DECIMAL", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_DECIMAL)},
	{"DV_FLOAT", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_FLOAT)},
	{"DV_DOUBLE", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_DOUBLE)},
	{"DV_DURATION", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_DURATION)},
	{"DV_DATETIME", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_DATETIME)},
	{"DV_TIME", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_TIME)},
	{"DV_DATE", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_DATE)},
	{"DV_GYEARMONTH", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_GYEARMONTH)},
	{"DV_GYEAR", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_GYEAR)},
	{"DV_GMONTHDAY", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_GMONTHDAY)},
	{"DV_GDAY", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_GDAY)},
	{"DV_GMONTH", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_GMONTH)},
	{"DV_HEXBINARY", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_HEXBINARY)},
	{"DV_BASE64BINARY", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_BASE64BINARY)},
	{"DV_ANYURI", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_ANYURI)},
	{"DV_QNAME", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_QNAME)},
	{"DV_PRECISIONDECIMAL", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_PRECISIONDECIMAL)},
	{"DV_NOTATION", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_NOTATION)},
	{"DV_ANYSIMPLETYPE", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_ANYSIMPLETYPE)},
	{"DV_ID", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_ID)},
	{"DV_IDREF", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_IDREF)},
	{"DV_ENTITY", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_ENTITY)},
	{"DV_INTEGER", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_INTEGER)},
	{"DV_LIST", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_LIST)},
	{"DV_UNION", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_UNION)},
	{"DV_YEARMONTHDURATION", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_YEARMONTHDURATION)},
	{"DV_DAYTIMEDURATION", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_DAYTIMEDURATION)},
	{"DV_ANYATOMICTYPE", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DV_ANYATOMICTYPE)},
	{"gDVs", "[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, gDVs)},
	{"NORMALIZE_NONE", "S", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, NORMALIZE_NONE)},
	{"NORMALIZE_TRIM", "S", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, NORMALIZE_TRIM)},
	{"NORMALIZE_FULL", "S", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, NORMALIZE_FULL)},
	{"fDVNormalizeType", "[S", nullptr, $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, fDVNormalizeType)},
	{"SPECIAL_PATTERN_NONE", "S", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, SPECIAL_PATTERN_NONE)},
	{"SPECIAL_PATTERN_NMTOKEN", "S", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, SPECIAL_PATTERN_NMTOKEN)},
	{"SPECIAL_PATTERN_NAME", "S", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, SPECIAL_PATTERN_NAME)},
	{"SPECIAL_PATTERN_NCNAME", "S", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, SPECIAL_PATTERN_NCNAME)},
	{"SPECIAL_PATTERN_STRING", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, SPECIAL_PATTERN_STRING)},
	{"WS_FACET_STRING", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, WS_FACET_STRING)},
	{"URI_SCHEMAFORSCHEMA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, URI_SCHEMAFORSCHEMA)},
	{"ANY_TYPE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, ANY_TYPE)},
	{"YEARMONTHDURATION_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, YEARMONTHDURATION_DT)},
	{"DAYTIMEDURATION_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DAYTIMEDURATION_DT)},
	{"PRECISIONDECIMAL_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, PRECISIONDECIMAL_DT)},
	{"ANYATOMICTYPE_DT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDecl, ANYATOMICTYPE_DT)},
	{"DERIVATION_ANY", "I", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DERIVATION_ANY)},
	{"DERIVATION_RESTRICTION", "I", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DERIVATION_RESTRICTION)},
	{"DERIVATION_EXTENSION", "I", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DERIVATION_EXTENSION)},
	{"DERIVATION_UNION", "I", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DERIVATION_UNION)},
	{"DERIVATION_LIST", "I", nullptr, $STATIC | $FINAL, $constField(XSSimpleTypeDecl, DERIVATION_LIST)},
	{"fEmptyContext", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;", nullptr, $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, fEmptyContext)},
	{"fDVs", "[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fDVs)},
	{"fIsImmutable", "Z", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fIsImmutable)},
	{"fItemType", "Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fItemType)},
	{"fMemberTypes", "[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fMemberTypes)},
	{"fBuiltInKind", "S", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fBuiltInKind)},
	{"fTypeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fTypeName)},
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fTargetNamespace)},
	{"fFinalSet", "S", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fFinalSet)},
	{"fBase", "Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fBase)},
	{"fVariety", "S", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fVariety)},
	{"fValidationDV", "S", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fValidationDV)},
	{"fFacetsDefined", "S", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fFacetsDefined)},
	{"fFixedFacet", "S", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fFixedFacet)},
	{"fWhiteSpace", "S", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fWhiteSpace)},
	{"fLength", "I", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fLength)},
	{"fMinLength", "I", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fMinLength)},
	{"fMaxLength", "I", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fMaxLength)},
	{"fTotalDigits", "I", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fTotalDigits)},
	{"fFractionDigits", "I", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fFractionDigits)},
	{"fPattern", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression;>;", $PRIVATE, $field(XSSimpleTypeDecl, fPattern)},
	{"fPatternStr", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(XSSimpleTypeDecl, fPatternStr)},
	{"fEnumeration", "[Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fEnumeration)},
	{"fEnumerationSize", "I", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fEnumerationSize)},
	{"fEnumerationTypeList", "Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fEnumerationTypeList)},
	{"fEnumerationItemTypeList", "Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fEnumerationItemTypeList)},
	{"fLexicalPattern", "Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fLexicalPattern)},
	{"fLexicalEnumeration", "Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fLexicalEnumeration)},
	{"fActualEnumeration", "Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fActualEnumeration)},
	{"fMaxInclusive", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fMaxInclusive)},
	{"fMaxExclusive", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fMaxExclusive)},
	{"fMinExclusive", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fMinExclusive)},
	{"fMinInclusive", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fMinInclusive)},
	{"lengthAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, lengthAnnotation)},
	{"minLengthAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, minLengthAnnotation)},
	{"maxLengthAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, maxLengthAnnotation)},
	{"whiteSpaceAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, whiteSpaceAnnotation)},
	{"totalDigitsAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, totalDigitsAnnotation)},
	{"fractionDigitsAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, fractionDigitsAnnotation)},
	{"patternAnnotations", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, patternAnnotations)},
	{"enumerationAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, enumerationAnnotations)},
	{"maxInclusiveAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, maxInclusiveAnnotation)},
	{"maxExclusiveAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, maxExclusiveAnnotation)},
	{"minInclusiveAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, minInclusiveAnnotation)},
	{"minExclusiveAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSSimpleTypeDecl, minExclusiveAnnotation)},
	{"fFacets", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fFacets)},
	{"fMultiValueFacets", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fMultiValueFacets)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fAnnotations)},
	{"fPatternType", "S", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fPatternType)},
	{"fOrdered", "S", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fOrdered)},
	{"fFinite", "Z", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fFinite)},
	{"fBounded", "Z", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fBounded)},
	{"fNumeric", "Z", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fNumeric)},
	{"fNamespaceItem", "Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fNamespaceItem)},
	{"fAnySimpleType", "Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, fAnySimpleType)},
	{"fAnyAtomicType", "Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, fAnyAtomicType)},
	{"fDummyContext", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;", nullptr, $STATIC | $FINAL, $staticField(XSSimpleTypeDecl, fDummyContext)},
	{"fAnonymous", "Z", nullptr, $PRIVATE, $field(XSSimpleTypeDecl, fAnonymous)},
	{}
};

$MethodInfo _XSSimpleTypeDecl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSSimpleTypeDecl, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;Ljava/lang/String;SSZZZZS)V", nullptr, $PROTECTED, $method(XSSimpleTypeDecl, init$, void, XSSimpleTypeDecl*, $String*, int16_t, int16_t, bool, bool, bool, bool, int16_t)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;Ljava/lang/String;Ljava/lang/String;SZLcom/sun/org/apache/xerces/internal/xs/XSObjectList;S)V", nullptr, $PROTECTED, $method(XSSimpleTypeDecl, init$, void, XSSimpleTypeDecl*, $String*, $String*, int16_t, bool, $XSObjectList*, int16_t)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;Ljava/lang/String;Ljava/lang/String;SZLcom/sun/org/apache/xerces/internal/xs/XSObjectList;)V", nullptr, $PROTECTED, $method(XSSimpleTypeDecl, init$, void, XSSimpleTypeDecl*, $String*, $String*, int16_t, bool, $XSObjectList*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;SLcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;ZLcom/sun/org/apache/xerces/internal/xs/XSObjectList;)V", nullptr, $PROTECTED, $method(XSSimpleTypeDecl, init$, void, $String*, $String*, int16_t, XSSimpleTypeDecl*, bool, $XSObjectList*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;S[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)V", nullptr, $PROTECTED, $method(XSSimpleTypeDecl, init$, void, $String*, $String*, int16_t, $XSSimpleTypeDeclArray*, $XSObjectList*)},
	{"appendEnumString", "(Ljava/lang/StringBuffer;)V", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, appendEnumString, void, $StringBuffer*)},
	{"applyFacets", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSFacets;SSLcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, applyFacets, void, $XSFacets*, int16_t, int16_t, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeFacetException"},
	{"applyFacets", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSFacets;SSSLcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, 0, $virtualMethod(XSSimpleTypeDecl, applyFacets, void, $XSFacets*, int16_t, int16_t, int16_t, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeFacetException"},
	{"applyFacets1", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSFacets;SS)V", nullptr, 0, $virtualMethod(XSSimpleTypeDecl, applyFacets1, void, $XSFacets*, int16_t, int16_t)},
	{"applyFacets1", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSFacets;SSS)V", nullptr, 0, $virtualMethod(XSSimpleTypeDecl, applyFacets1, void, $XSFacets*, int16_t, int16_t, int16_t)},
	{"calcFundamentalFacets", "()V", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, calcFundamentalFacets, void)},
	{"checkExtraRules", "(Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)V", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, checkExtraRules, void, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"checkFacets", "(Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)V", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, checkFacets, void, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"convertToPrimitiveKind", "(S)S", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, convertToPrimitiveKind, int16_t, int16_t)},
	{"derivedFrom", "(Ljava/lang/String;Ljava/lang/String;S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, derivedFrom, bool, $String*, $String*, int16_t)},
	{"derivedFromType", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, derivedFromType, bool, $XSTypeDefinition*, int16_t)},
	{"getActualEnumValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PROTECTED, $virtualMethod(XSSimpleTypeDecl, getActualEnumValue, $ValidatedInfo*, $String*, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getActualEnumeration", "()Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getActualEnumeration, $ObjectList*)},
	{"getActualValue", "(Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;Z)Ljava/lang/Object;", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, getActualValue, $Object*, Object$*, $ValidationContext*, $ValidatedInfo*, bool), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getAnnotations, $XSObjectList*)},
	{"getAnonymous", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getAnonymous, bool)},
	{"getBaseType", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getBaseType, $XSTypeDefinition*)},
	{"getBounded", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getBounded, bool)},
	{"getBuiltInKind", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getBuiltInKind, int16_t)},
	{"getDefinedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getDefinedFacets, int16_t)},
	{"getEnumerationItemTypeList", "()Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getEnumerationItemTypeList, $ObjectList*)},
	{"getEnumerationTypeList", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getEnumerationTypeList, $ShortList*)},
	{"getFacet", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getFacet, $XSObject*, int32_t)},
	{"getFacets", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getFacets, $XSObjectList*)},
	{"getFinal", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getFinal, int16_t)},
	{"getFinite", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getFinite, bool)},
	{"getFixedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getFixedFacets, int16_t)},
	{"getGDVs", "()[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator;", nullptr, $PROTECTED | $STATIC, $staticMethod(XSSimpleTypeDecl, getGDVs, $TypeValidatorArray*)},
	{"getItemType", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getItemType, $XSSimpleTypeDefinition*)},
	{"getLexicalEnumeration", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getLexicalEnumeration, $StringList*)},
	{"getLexicalFacetValue", "(S)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getLexicalFacetValue, $String*, int16_t)},
	{"getLexicalPattern", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getLexicalPattern, $StringList*)},
	{"getMaxExclusiveValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getMaxExclusiveValue, $Object*)},
	{"getMaxInclusiveValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getMaxInclusiveValue, $Object*)},
	{"getMemberTypes", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getMemberTypes, $XSObjectList*)},
	{"getMinExclusiveValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getMinExclusiveValue, $Object*)},
	{"getMinInclusiveValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getMinInclusiveValue, $Object*)},
	{"getMultiValueFacets", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getMultiValueFacets, $XSObjectList*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getNamespaceItem, $XSNamespaceItem*)},
	{"getNumeric", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getNumeric, bool)},
	{"getOrdered", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getOrdered, int16_t)},
	{"getPrimitiveDV", "(S)S", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, getPrimitiveDV, int16_t, int16_t)},
	{"getPrimitiveKind", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getPrimitiveKind, int16_t)},
	{"getPrimitiveType", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getPrimitiveType, $XSSimpleTypeDefinition*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getType, int16_t)},
	{"getTypeCategory", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getTypeCategory, int16_t)},
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getTypeName, $String*)},
	{"getTypeNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getTypeNamespace, $String*)},
	{"getVariety", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getVariety, int16_t)},
	{"getWhitespace", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, getWhitespace, int16_t), "com.sun.org.apache.xerces.internal.impl.dv.DatatypeException"},
	{"isDOMDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, isDOMDerivedFrom, bool, $String*, $String*, int32_t)},
	{"isDefinedFacet", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, isDefinedFacet, bool, int16_t)},
	{"isDerivedByAny", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)Z", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, isDerivedByAny, bool, $String*, $String*, $XSTypeDefinition*)},
	{"isDerivedByList", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)Z", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, isDerivedByList, bool, $String*, $String*, $XSTypeDefinition*)},
	{"isDerivedByRestriction", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)Z", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, isDerivedByRestriction, bool, $String*, $String*, $XSTypeDefinition*)},
	{"isDerivedByUnion", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)Z", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, isDerivedByUnion, bool, $String*, $String*, $XSTypeDefinition*)},
	{"isDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, isDerivedFrom, bool, $String*, $String*, int32_t)},
	{"isEqual", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, isEqual, bool, Object$*, Object$*)},
	{"isFinal", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, isFinal, bool, int16_t)},
	{"isFixedFacet", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, isFixedFacet, bool, int16_t)},
	{"isIDType", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, isIDType, bool)},
	{"isIdentical", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, isIdentical, bool, Object$*, Object$*)},
	{"normalize", "(Ljava/lang/String;S)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSSimpleTypeDecl, normalize, $String*, $String*, int16_t)},
	{"normalize", "(Ljava/lang/Object;S)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XSSimpleTypeDecl, normalize, $String*, Object$*, int16_t)},
	{"reportError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(XSSimpleTypeDecl, reportError, void, $String*, $ObjectArray*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeFacetException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, reset, void)},
	{"setAnonymous", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, setAnonymous, void, bool)},
	{"setBounded", "()V", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, setBounded, void)},
	{"setCardinality", "()V", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, setCardinality, void)},
	{"setDVs", "([Lcom/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator;)V", nullptr, $PROTECTED, $virtualMethod(XSSimpleTypeDecl, setDVs, void, $TypeValidatorArray*)},
	{"setListValues", "(Ljava/lang/String;Ljava/lang/String;SLcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PROTECTED, $virtualMethod(XSSimpleTypeDecl, setListValues, XSSimpleTypeDecl*, $String*, $String*, int16_t, XSSimpleTypeDecl*, $XSObjectList*)},
	{"setNamespaceItem", "(Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, setNamespaceItem, void, $XSNamespaceItem*)},
	{"setNumeric", "()V", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, setNumeric, void)},
	{"setOrdered", "()V", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, setOrdered, void)},
	{"setRestrictionValues", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;Ljava/lang/String;Ljava/lang/String;SLcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PROTECTED, $virtualMethod(XSSimpleTypeDecl, setRestrictionValues, XSSimpleTypeDecl*, XSSimpleTypeDecl*, $String*, $String*, int16_t, $XSObjectList*)},
	{"setUnionValues", "(Ljava/lang/String;Ljava/lang/String;S[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PROTECTED, $virtualMethod(XSSimpleTypeDecl, setUnionValues, XSSimpleTypeDecl*, $String*, $String*, int16_t, $XSSimpleTypeDeclArray*, $XSObjectList*)},
	{"specialCardinalityCheck", "()Z", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, specialCardinalityCheck, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, toString, $String*)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, validate, $Object*, $String*, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"validate", "(Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, validate, $Object*, Object$*, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"validate", "(Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, validate, void, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"validateWithInfo", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl, validateWithInfo, $ValidatedInfo*, $String*, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"whiteSpaceValue", "(S)Ljava/lang/String;", nullptr, $PRIVATE, $method(XSSimpleTypeDecl, whiteSpaceValue, $String*, int16_t)},
	{}
};

$InnerClassInfo _XSSimpleTypeDecl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$AbstractObjectList", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "AbstractObjectList", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSMVFacetImpl", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "XSMVFacetImpl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSFacetImpl", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "XSFacetImpl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$ValidationContextImpl", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "ValidationContextImpl", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$4", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$3", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XSSimpleTypeDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.XSSimpleType,org.w3c.dom.TypeInfo",
	_XSSimpleTypeDecl_FieldInfo_,
	_XSSimpleTypeDecl_MethodInfo_,
	nullptr,
	nullptr,
	_XSSimpleTypeDecl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$AbstractObjectList,com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSMVFacetImpl,com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSFacetImpl,com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$ValidationContextImpl,com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$4,com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$3,com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$2,com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$1"
};

$Object* allocate$XSSimpleTypeDecl($Class* clazz) {
	return $of($alloc(XSSimpleTypeDecl));
}

int32_t XSSimpleTypeDecl::hashCode() {
	 return this->$XSSimpleType::hashCode();
}

bool XSSimpleTypeDecl::equals(Object$* arg0) {
	 return this->$XSSimpleType::equals(arg0);
}

$Object* XSSimpleTypeDecl::clone() {
	 return this->$XSSimpleType::clone();
}

void XSSimpleTypeDecl::finalize() {
	this->$XSSimpleType::finalize();
}

$TypeValidatorArray* XSSimpleTypeDecl::gDVs = nullptr;
$shorts* XSSimpleTypeDecl::fDVNormalizeType = nullptr;
$StringArray* XSSimpleTypeDecl::SPECIAL_PATTERN_STRING = nullptr;
$StringArray* XSSimpleTypeDecl::WS_FACET_STRING = nullptr;
$String* XSSimpleTypeDecl::URI_SCHEMAFORSCHEMA = nullptr;
$String* XSSimpleTypeDecl::ANY_TYPE = nullptr;
$ValidationContext* XSSimpleTypeDecl::fEmptyContext = nullptr;
XSSimpleTypeDecl* XSSimpleTypeDecl::fAnySimpleType = nullptr;
XSSimpleTypeDecl* XSSimpleTypeDecl::fAnyAtomicType = nullptr;
$ValidationContext* XSSimpleTypeDecl::fDummyContext = nullptr;

$TypeValidatorArray* XSSimpleTypeDecl::getGDVs() {
	$init(XSSimpleTypeDecl);
	return $cast($TypeValidatorArray, $nc(XSSimpleTypeDecl::gDVs)->clone());
}

void XSSimpleTypeDecl::setDVs($TypeValidatorArray* dvs) {
	$set(this, fDVs, dvs);
}

void XSSimpleTypeDecl::init$() {
	$set(this, fDVs, XSSimpleTypeDecl::gDVs);
	this->fIsImmutable = false;
	this->fFinalSet = (int16_t)0;
	this->fVariety = (int16_t)-1;
	this->fValidationDV = (int16_t)-1;
	this->fFacetsDefined = (int16_t)0;
	this->fFixedFacet = (int16_t)0;
	this->fWhiteSpace = (int16_t)0;
	this->fLength = -1;
	this->fMinLength = -1;
	this->fMaxLength = -1;
	this->fTotalDigits = -1;
	this->fFractionDigits = -1;
	$set(this, fAnnotations, nullptr);
	this->fPatternType = XSSimpleTypeDecl::SPECIAL_PATTERN_NONE;
	$set(this, fNamespaceItem, nullptr);
	this->fAnonymous = false;
}

void XSSimpleTypeDecl::init$(XSSimpleTypeDecl* base, $String* name, int16_t validateDV, int16_t ordered, bool bounded, bool finite, bool numeric, bool isImmutable, int16_t builtInKind) {
	$set(this, fDVs, XSSimpleTypeDecl::gDVs);
	this->fIsImmutable = false;
	this->fFinalSet = (int16_t)0;
	this->fVariety = (int16_t)-1;
	this->fValidationDV = (int16_t)-1;
	this->fFacetsDefined = (int16_t)0;
	this->fFixedFacet = (int16_t)0;
	this->fWhiteSpace = (int16_t)0;
	this->fLength = -1;
	this->fMinLength = -1;
	this->fMaxLength = -1;
	this->fTotalDigits = -1;
	this->fFractionDigits = -1;
	$set(this, fAnnotations, nullptr);
	this->fPatternType = XSSimpleTypeDecl::SPECIAL_PATTERN_NONE;
	$set(this, fNamespaceItem, nullptr);
	this->fAnonymous = false;
	this->fIsImmutable = isImmutable;
	$set(this, fBase, base);
	$set(this, fTypeName, name);
	$set(this, fTargetNamespace, XSSimpleTypeDecl::URI_SCHEMAFORSCHEMA);
	this->fVariety = $XSSimpleTypeDefinition::VARIETY_ATOMIC;
	this->fValidationDV = validateDV;
	this->fFacetsDefined = $XSSimpleTypeDefinition::FACET_WHITESPACE;
	if (validateDV == XSSimpleTypeDecl::DV_ANYSIMPLETYPE || validateDV == XSSimpleTypeDecl::DV_ANYATOMICTYPE || validateDV == XSSimpleTypeDecl::DV_STRING) {
		this->fWhiteSpace = $XSSimpleType::WS_PRESERVE;
	} else {
		this->fWhiteSpace = $XSSimpleType::WS_COLLAPSE;
		this->fFixedFacet = $XSSimpleTypeDefinition::FACET_WHITESPACE;
	}
	this->fOrdered = ordered;
	this->fBounded = bounded;
	this->fFinite = finite;
	this->fNumeric = numeric;
	$set(this, fAnnotations, nullptr);
	this->fBuiltInKind = builtInKind;
}

void XSSimpleTypeDecl::init$(XSSimpleTypeDecl* base, $String* name, $String* uri, int16_t finalSet, bool isImmutable, $XSObjectList* annotations, int16_t builtInKind) {
	XSSimpleTypeDecl::init$(base, name, uri, finalSet, isImmutable, annotations);
	this->fBuiltInKind = builtInKind;
}

void XSSimpleTypeDecl::init$(XSSimpleTypeDecl* base, $String* name, $String* uri, int16_t finalSet, bool isImmutable, $XSObjectList* annotations) {
	$set(this, fDVs, XSSimpleTypeDecl::gDVs);
	this->fIsImmutable = false;
	this->fFinalSet = (int16_t)0;
	this->fVariety = (int16_t)-1;
	this->fValidationDV = (int16_t)-1;
	this->fFacetsDefined = (int16_t)0;
	this->fFixedFacet = (int16_t)0;
	this->fWhiteSpace = (int16_t)0;
	this->fLength = -1;
	this->fMinLength = -1;
	this->fMaxLength = -1;
	this->fTotalDigits = -1;
	this->fFractionDigits = -1;
	$set(this, fAnnotations, nullptr);
	this->fPatternType = XSSimpleTypeDecl::SPECIAL_PATTERN_NONE;
	$set(this, fNamespaceItem, nullptr);
	this->fAnonymous = false;
	$set(this, fBase, base);
	$set(this, fTypeName, name);
	$set(this, fTargetNamespace, uri);
	this->fFinalSet = finalSet;
	$set(this, fAnnotations, annotations);
	this->fVariety = $nc(this->fBase)->fVariety;
	this->fValidationDV = $nc(this->fBase)->fValidationDV;
	switch (this->fVariety) {
	case $XSSimpleTypeDefinition::VARIETY_ATOMIC:
		{
			break;
		}
	case $XSSimpleTypeDefinition::VARIETY_LIST:
		{
			$set(this, fItemType, $nc(this->fBase)->fItemType);
			break;
		}
	case $XSSimpleTypeDefinition::VARIETY_UNION:
		{
			$set(this, fMemberTypes, $nc(this->fBase)->fMemberTypes);
			break;
		}
	}
	this->fLength = $nc(this->fBase)->fLength;
	this->fMinLength = $nc(this->fBase)->fMinLength;
	this->fMaxLength = $nc(this->fBase)->fMaxLength;
	$set(this, fPattern, $nc(this->fBase)->fPattern);
	$set(this, fPatternStr, $nc(this->fBase)->fPatternStr);
	$set(this, fEnumeration, $nc(this->fBase)->fEnumeration);
	this->fEnumerationSize = $nc(this->fBase)->fEnumerationSize;
	this->fWhiteSpace = $nc(this->fBase)->fWhiteSpace;
	$set(this, fMaxExclusive, $nc(this->fBase)->fMaxExclusive);
	$set(this, fMaxInclusive, $nc(this->fBase)->fMaxInclusive);
	$set(this, fMinExclusive, $nc(this->fBase)->fMinExclusive);
	$set(this, fMinInclusive, $nc(this->fBase)->fMinInclusive);
	this->fTotalDigits = $nc(this->fBase)->fTotalDigits;
	this->fFractionDigits = $nc(this->fBase)->fFractionDigits;
	this->fPatternType = $nc(this->fBase)->fPatternType;
	this->fFixedFacet = $nc(this->fBase)->fFixedFacet;
	this->fFacetsDefined = $nc(this->fBase)->fFacetsDefined;
	$set(this, lengthAnnotation, $nc(this->fBase)->lengthAnnotation);
	$set(this, minLengthAnnotation, $nc(this->fBase)->minLengthAnnotation);
	$set(this, maxLengthAnnotation, $nc(this->fBase)->maxLengthAnnotation);
	$set(this, patternAnnotations, $nc(this->fBase)->patternAnnotations);
	$set(this, enumerationAnnotations, $nc(this->fBase)->enumerationAnnotations);
	$set(this, whiteSpaceAnnotation, $nc(this->fBase)->whiteSpaceAnnotation);
	$set(this, maxExclusiveAnnotation, $nc(this->fBase)->maxExclusiveAnnotation);
	$set(this, maxInclusiveAnnotation, $nc(this->fBase)->maxInclusiveAnnotation);
	$set(this, minExclusiveAnnotation, $nc(this->fBase)->minExclusiveAnnotation);
	$set(this, minInclusiveAnnotation, $nc(this->fBase)->minInclusiveAnnotation);
	$set(this, totalDigitsAnnotation, $nc(this->fBase)->totalDigitsAnnotation);
	$set(this, fractionDigitsAnnotation, $nc(this->fBase)->fractionDigitsAnnotation);
	calcFundamentalFacets();
	this->fIsImmutable = isImmutable;
	this->fBuiltInKind = $nc(base)->fBuiltInKind;
}

void XSSimpleTypeDecl::init$($String* name, $String* uri, int16_t finalSet, XSSimpleTypeDecl* itemType, bool isImmutable, $XSObjectList* annotations) {
	$set(this, fDVs, XSSimpleTypeDecl::gDVs);
	this->fIsImmutable = false;
	this->fFinalSet = (int16_t)0;
	this->fVariety = (int16_t)-1;
	this->fValidationDV = (int16_t)-1;
	this->fFacetsDefined = (int16_t)0;
	this->fFixedFacet = (int16_t)0;
	this->fWhiteSpace = (int16_t)0;
	this->fLength = -1;
	this->fMinLength = -1;
	this->fMaxLength = -1;
	this->fTotalDigits = -1;
	this->fFractionDigits = -1;
	$set(this, fAnnotations, nullptr);
	this->fPatternType = XSSimpleTypeDecl::SPECIAL_PATTERN_NONE;
	$set(this, fNamespaceItem, nullptr);
	this->fAnonymous = false;
	$set(this, fBase, XSSimpleTypeDecl::fAnySimpleType);
	$set(this, fTypeName, name);
	$set(this, fTargetNamespace, uri);
	this->fFinalSet = finalSet;
	$set(this, fAnnotations, annotations);
	this->fVariety = $XSSimpleTypeDefinition::VARIETY_LIST;
	$set(this, fItemType, itemType);
	this->fValidationDV = XSSimpleTypeDecl::DV_LIST;
	this->fFacetsDefined = $XSSimpleTypeDefinition::FACET_WHITESPACE;
	this->fFixedFacet = $XSSimpleTypeDefinition::FACET_WHITESPACE;
	this->fWhiteSpace = $XSSimpleType::WS_COLLAPSE;
	calcFundamentalFacets();
	this->fIsImmutable = isImmutable;
	this->fBuiltInKind = $XSConstants::LIST_DT;
}

void XSSimpleTypeDecl::init$($String* name, $String* uri, int16_t finalSet, $XSSimpleTypeDeclArray* memberTypes, $XSObjectList* annotations) {
	$set(this, fDVs, XSSimpleTypeDecl::gDVs);
	this->fIsImmutable = false;
	this->fFinalSet = (int16_t)0;
	this->fVariety = (int16_t)-1;
	this->fValidationDV = (int16_t)-1;
	this->fFacetsDefined = (int16_t)0;
	this->fFixedFacet = (int16_t)0;
	this->fWhiteSpace = (int16_t)0;
	this->fLength = -1;
	this->fMinLength = -1;
	this->fMaxLength = -1;
	this->fTotalDigits = -1;
	this->fFractionDigits = -1;
	$set(this, fAnnotations, nullptr);
	this->fPatternType = XSSimpleTypeDecl::SPECIAL_PATTERN_NONE;
	$set(this, fNamespaceItem, nullptr);
	this->fAnonymous = false;
	$set(this, fBase, XSSimpleTypeDecl::fAnySimpleType);
	$set(this, fTypeName, name);
	$set(this, fTargetNamespace, uri);
	this->fFinalSet = finalSet;
	$set(this, fAnnotations, annotations);
	this->fVariety = $XSSimpleTypeDefinition::VARIETY_UNION;
	$set(this, fMemberTypes, memberTypes);
	this->fValidationDV = XSSimpleTypeDecl::DV_UNION;
	this->fFacetsDefined = $XSSimpleTypeDefinition::FACET_WHITESPACE;
	this->fWhiteSpace = $XSSimpleType::WS_COLLAPSE;
	calcFundamentalFacets();
	this->fIsImmutable = false;
	this->fBuiltInKind = $XSConstants::UNAVAILABLE_DT;
}

XSSimpleTypeDecl* XSSimpleTypeDecl::setRestrictionValues(XSSimpleTypeDecl* base, $String* name, $String* uri, int16_t finalSet, $XSObjectList* annotations) {
	if (this->fIsImmutable) {
		return nullptr;
	}
	$set(this, fBase, base);
	this->fAnonymous = false;
	$set(this, fTypeName, name);
	$set(this, fTargetNamespace, uri);
	this->fFinalSet = finalSet;
	$set(this, fAnnotations, annotations);
	this->fVariety = $nc(this->fBase)->fVariety;
	this->fValidationDV = $nc(this->fBase)->fValidationDV;
	switch (this->fVariety) {
	case $XSSimpleTypeDefinition::VARIETY_ATOMIC:
		{
			break;
		}
	case $XSSimpleTypeDefinition::VARIETY_LIST:
		{
			$set(this, fItemType, $nc(this->fBase)->fItemType);
			break;
		}
	case $XSSimpleTypeDefinition::VARIETY_UNION:
		{
			$set(this, fMemberTypes, $nc(this->fBase)->fMemberTypes);
			break;
		}
	}
	this->fLength = $nc(this->fBase)->fLength;
	this->fMinLength = $nc(this->fBase)->fMinLength;
	this->fMaxLength = $nc(this->fBase)->fMaxLength;
	$set(this, fPattern, $nc(this->fBase)->fPattern);
	$set(this, fPatternStr, $nc(this->fBase)->fPatternStr);
	$set(this, fEnumeration, $nc(this->fBase)->fEnumeration);
	this->fEnumerationSize = $nc(this->fBase)->fEnumerationSize;
	this->fWhiteSpace = $nc(this->fBase)->fWhiteSpace;
	$set(this, fMaxExclusive, $nc(this->fBase)->fMaxExclusive);
	$set(this, fMaxInclusive, $nc(this->fBase)->fMaxInclusive);
	$set(this, fMinExclusive, $nc(this->fBase)->fMinExclusive);
	$set(this, fMinInclusive, $nc(this->fBase)->fMinInclusive);
	this->fTotalDigits = $nc(this->fBase)->fTotalDigits;
	this->fFractionDigits = $nc(this->fBase)->fFractionDigits;
	this->fPatternType = $nc(this->fBase)->fPatternType;
	this->fFixedFacet = $nc(this->fBase)->fFixedFacet;
	this->fFacetsDefined = $nc(this->fBase)->fFacetsDefined;
	calcFundamentalFacets();
	this->fBuiltInKind = $nc(base)->fBuiltInKind;
	return this;
}

XSSimpleTypeDecl* XSSimpleTypeDecl::setListValues($String* name, $String* uri, int16_t finalSet, XSSimpleTypeDecl* itemType, $XSObjectList* annotations) {
	if (this->fIsImmutable) {
		return nullptr;
	}
	$set(this, fBase, XSSimpleTypeDecl::fAnySimpleType);
	this->fAnonymous = false;
	$set(this, fTypeName, name);
	$set(this, fTargetNamespace, uri);
	this->fFinalSet = finalSet;
	$set(this, fAnnotations, annotations);
	this->fVariety = $XSSimpleTypeDefinition::VARIETY_LIST;
	$set(this, fItemType, itemType);
	this->fValidationDV = XSSimpleTypeDecl::DV_LIST;
	this->fFacetsDefined = $XSSimpleTypeDefinition::FACET_WHITESPACE;
	this->fFixedFacet = $XSSimpleTypeDefinition::FACET_WHITESPACE;
	this->fWhiteSpace = $XSSimpleType::WS_COLLAPSE;
	calcFundamentalFacets();
	this->fBuiltInKind = $XSConstants::LIST_DT;
	return this;
}

XSSimpleTypeDecl* XSSimpleTypeDecl::setUnionValues($String* name, $String* uri, int16_t finalSet, $XSSimpleTypeDeclArray* memberTypes, $XSObjectList* annotations) {
	if (this->fIsImmutable) {
		return nullptr;
	}
	$set(this, fBase, XSSimpleTypeDecl::fAnySimpleType);
	this->fAnonymous = false;
	$set(this, fTypeName, name);
	$set(this, fTargetNamespace, uri);
	this->fFinalSet = finalSet;
	$set(this, fAnnotations, annotations);
	this->fVariety = $XSSimpleTypeDefinition::VARIETY_UNION;
	$set(this, fMemberTypes, memberTypes);
	this->fValidationDV = XSSimpleTypeDecl::DV_UNION;
	this->fFacetsDefined = $XSSimpleTypeDefinition::FACET_WHITESPACE;
	this->fWhiteSpace = $XSSimpleType::WS_COLLAPSE;
	calcFundamentalFacets();
	this->fBuiltInKind = $XSConstants::UNAVAILABLE_DT;
	return this;
}

int16_t XSSimpleTypeDecl::getType() {
	return $XSConstants::TYPE_DEFINITION;
}

int16_t XSSimpleTypeDecl::getTypeCategory() {
	return $XSTypeDefinition::SIMPLE_TYPE;
}

$String* XSSimpleTypeDecl::getName() {
	return getAnonymous() ? ($String*)nullptr : this->fTypeName;
}

$String* XSSimpleTypeDecl::getTypeName() {
	return this->fTypeName;
}

$String* XSSimpleTypeDecl::getNamespace() {
	return this->fTargetNamespace;
}

int16_t XSSimpleTypeDecl::getFinal() {
	return this->fFinalSet;
}

bool XSSimpleTypeDecl::isFinal(int16_t derivation) {
	return ((int32_t)(this->fFinalSet & (uint32_t)(int32_t)derivation)) != 0;
}

$XSTypeDefinition* XSSimpleTypeDecl::getBaseType() {
	return this->fBase;
}

bool XSSimpleTypeDecl::getAnonymous() {
	return this->fAnonymous || (this->fTypeName == nullptr);
}

int16_t XSSimpleTypeDecl::getVariety() {
	return this->fValidationDV == XSSimpleTypeDecl::DV_ANYSIMPLETYPE ? $XSSimpleTypeDefinition::VARIETY_ABSENT : this->fVariety;
}

bool XSSimpleTypeDecl::isIDType() {
	switch (this->fVariety) {
	case $XSSimpleTypeDefinition::VARIETY_ATOMIC:
		{
			return this->fValidationDV == XSSimpleTypeDecl::DV_ID;
		}
	case $XSSimpleTypeDefinition::VARIETY_LIST:
		{
			return $nc(this->fItemType)->isIDType();
		}
	case $XSSimpleTypeDefinition::VARIETY_UNION:
		{
			for (int32_t i = 0; i < $nc(this->fMemberTypes)->length; ++i) {
				if ($nc($nc(this->fMemberTypes)->get(i))->isIDType()) {
					return true;
				}
			}
		}
	}
	return false;
}

int16_t XSSimpleTypeDecl::getWhitespace() {
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_UNION) {
		$throwNew($DatatypeException, "dt-whitespace"_s, $$new($ObjectArray, {$of(this->fTypeName)}));
	}
	return this->fWhiteSpace;
}

int16_t XSSimpleTypeDecl::getPrimitiveKind() {
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_ATOMIC && this->fValidationDV != XSSimpleTypeDecl::DV_ANYSIMPLETYPE) {
		if (this->fValidationDV == XSSimpleTypeDecl::DV_ID || this->fValidationDV == XSSimpleTypeDecl::DV_IDREF || this->fValidationDV == XSSimpleTypeDecl::DV_ENTITY) {
			return XSSimpleTypeDecl::DV_STRING;
		} else if (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER) {
			return XSSimpleTypeDecl::DV_DECIMAL;
		} else {
			return this->fValidationDV;
		}
	} else {
		return (int16_t)0;
	}
}

int16_t XSSimpleTypeDecl::getBuiltInKind() {
	return this->fBuiltInKind;
}

$XSSimpleTypeDefinition* XSSimpleTypeDecl::getPrimitiveType() {
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_ATOMIC && this->fValidationDV != XSSimpleTypeDecl::DV_ANYSIMPLETYPE) {
		$var(XSSimpleTypeDecl, pri, this);
		while ($nc(pri)->fBase != XSSimpleTypeDecl::fAnySimpleType) {
			$assign(pri, pri->fBase);
		}
		return pri;
	} else {
		return nullptr;
	}
}

$XSSimpleTypeDefinition* XSSimpleTypeDecl::getItemType() {
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_LIST) {
		return this->fItemType;
	} else {
		return nullptr;
	}
}

$XSObjectList* XSSimpleTypeDecl::getMemberTypes() {
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_UNION) {
		return $new($XSObjectListImpl, $fcast($XSObjectArray, this->fMemberTypes), $nc(this->fMemberTypes)->length);
	} else {
		$init($XSObjectListImpl);
		return $XSObjectListImpl::EMPTY_LIST;
	}
}

void XSSimpleTypeDecl::applyFacets($XSFacets* facets, int16_t presentFacet, int16_t fixedFacet, $ValidationContext* context$renamed) {
	$var($ValidationContext, context, context$renamed);
	if (context == nullptr) {
		$assign(context, XSSimpleTypeDecl::fEmptyContext);
	}
	applyFacets(facets, presentFacet, fixedFacet, XSSimpleTypeDecl::SPECIAL_PATTERN_NONE, context);
}

void XSSimpleTypeDecl::applyFacets1($XSFacets* facets, int16_t presentFacet, int16_t fixedFacet) {
	try {
		applyFacets(facets, presentFacet, fixedFacet, XSSimpleTypeDecl::SPECIAL_PATTERN_NONE, XSSimpleTypeDecl::fDummyContext);
	} catch ($InvalidDatatypeFacetException& e) {
		$throwNew($RuntimeException, "internal error"_s);
	}
	this->fIsImmutable = true;
}

void XSSimpleTypeDecl::applyFacets1($XSFacets* facets, int16_t presentFacet, int16_t fixedFacet, int16_t patternType) {
	try {
		applyFacets(facets, presentFacet, fixedFacet, patternType, XSSimpleTypeDecl::fDummyContext);
	} catch ($InvalidDatatypeFacetException& e) {
		$throwNew($RuntimeException, "internal error"_s);
	}
	this->fIsImmutable = true;
}

void XSSimpleTypeDecl::applyFacets($XSFacets* facets, int16_t presentFacet, int16_t fixedFacet, int16_t patternType, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	if (this->fIsImmutable) {
		return;
	}
	$var($ValidatedInfo, tempInfo, $new($ValidatedInfo));
	this->fFacetsDefined = (int16_t)0;
	this->fFixedFacet = (int16_t)0;
	int32_t result = 0;
	int16_t allowedFacet = $nc($nc(this->fDVs)->get(this->fValidationDV))->getAllowedFacets();
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("length"_s),
				$of(this->fTypeName)
			}));
		} else {
			this->fLength = $nc(facets)->length;
			$set(this, lengthAnnotation, facets->lengthAnnotation);
			this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_LENGTH;
			if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) {
				this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_LENGTH;
			}
		}
	}
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("minLength"_s),
				$of(this->fTypeName)
			}));
		} else {
			this->fMinLength = $nc(facets)->minLength;
			$set(this, minLengthAnnotation, facets->minLengthAnnotation);
			this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MINLENGTH;
			if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) {
				this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_MINLENGTH;
			}
		}
	}
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("maxLength"_s),
				$of(this->fTypeName)
			}));
		} else {
			this->fMaxLength = $nc(facets)->maxLength;
			$set(this, maxLengthAnnotation, facets->maxLengthAnnotation);
			this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MAXLENGTH;
			if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) {
				this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_MAXLENGTH;
			}
		}
	}
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_PATTERN)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_PATTERN)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("pattern"_s),
				$of(this->fTypeName)
			}));
		} else {
			$set(this, patternAnnotations, $nc(facets)->patternAnnotations);
			$var($RegularExpression, regex, nullptr);
			try {
				$assign(regex, $new($RegularExpression, facets->pattern, "X"_s, $($nc(context)->getLocale())));
			} catch ($Exception& e) {
				reportError("InvalidRegex"_s, $$new($ObjectArray, {
					$of(facets->pattern),
					$($of(e->getLocalizedMessage()))
				}));
			}
			if (regex != nullptr) {
				$set(this, fPattern, $new($ArrayList));
				$nc(this->fPattern)->add(regex);
				$set(this, fPatternStr, $new($ArrayList));
				$nc(this->fPatternStr)->add(facets->pattern);
				this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_PATTERN;
				if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_PATTERN)) != 0) {
					this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_PATTERN;
				}
			}
		}
	}
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("whiteSpace"_s),
				$of(this->fTypeName)
			}));
		} else {
			this->fWhiteSpace = $nc(facets)->whiteSpace;
			$set(this, whiteSpaceAnnotation, facets->whiteSpaceAnnotation);
			this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_WHITESPACE;
			if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) != 0) {
				this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_WHITESPACE;
			}
		}
	}
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_ENUMERATION)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_ENUMERATION)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("enumeration"_s),
				$of(this->fTypeName)
			}));
		} else {
			$var($List, enumVals, $nc(facets)->enumeration);
			int32_t size = $nc(enumVals)->size();
			$set(this, fEnumeration, $new($ValidatedInfoArray, size));
			$var($List, enumNSDecls, facets->enumNSDecls);
			$var($XSSimpleTypeDecl$ValidationContextImpl, ctx, $new($XSSimpleTypeDecl$ValidationContextImpl, context));
			$set(this, enumerationAnnotations, facets->enumAnnotations);
			this->fEnumerationSize = 0;
			for (int32_t i = 0; i < size; ++i) {
				if (enumNSDecls != nullptr) {
					ctx->setNSContext($cast($NamespaceContext, $(enumNSDecls->get(i))));
				}
				try {
					$var($ValidatedInfo, info, getActualEnumValue($cast($String, $(enumVals->get(i))), ctx, nullptr));
					$nc(this->fEnumeration)->set(this->fEnumerationSize++, info);
				} catch ($InvalidDatatypeValueException& ide) {
					reportError("enumeration-valid-restriction"_s, $$new($ObjectArray, {
						$(enumVals->get(i)),
						$($of($nc($(this->getBaseType()))->getName()))
					}));
				}
			}
			this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_ENUMERATION;
			if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_ENUMERATION)) != 0) {
				this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_ENUMERATION;
			}
		}
	}
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("maxInclusive"_s),
				$of(this->fTypeName)
			}));
		} else {
			$set(this, maxInclusiveAnnotation, $nc(facets)->maxInclusiveAnnotation);
			try {
				$set(this, fMaxInclusive, $nc(this->fBase)->getActualValue(facets->maxInclusive, context, tempInfo, true));
				this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MAXINCLUSIVE;
				if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) {
					this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_MAXINCLUSIVE;
				}
			} catch ($InvalidDatatypeValueException& ide) {
				$var($String, var$0, ide->getKey());
				reportError(var$0, $(ide->getArgs()));
				reportError("FacetValueFromBase"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$of(facets->maxInclusive),
					$of("maxInclusive"_s),
					$($of($nc(this->fBase)->getName()))
				}));
			}
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) {
				if (((int32_t)($nc(this->fBase)->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) {
					if ($nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMaxInclusive, $nc(this->fBase)->fMaxInclusive) != 0) {
						reportError("FixedFacetValue"_s, $$new($ObjectArray, {
							$of("maxInclusive"_s),
							this->fMaxInclusive,
							$nc(this->fBase)->fMaxInclusive,
							$of(this->fTypeName)
						}));
					}
				}
			}
			try {
				$nc(this->fBase)->validate(context, tempInfo);
			} catch ($InvalidDatatypeValueException& ide) {
				$var($String, var$1, ide->getKey());
				reportError(var$1, $(ide->getArgs()));
				reportError("FacetValueFromBase"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$of(facets->maxInclusive),
					$of("maxInclusive"_s),
					$($of($nc(this->fBase)->getName()))
				}));
			}
		}
	}
	bool needCheckBase = true;
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("maxExclusive"_s),
				$of(this->fTypeName)
			}));
		} else {
			$set(this, maxExclusiveAnnotation, $nc(facets)->maxExclusiveAnnotation);
			try {
				$set(this, fMaxExclusive, $nc(this->fBase)->getActualValue(facets->maxExclusive, context, tempInfo, true));
				this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE;
				if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) {
					this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE;
				}
			} catch ($InvalidDatatypeValueException& ide) {
				$var($String, var$2, ide->getKey());
				reportError(var$2, $(ide->getArgs()));
				reportError("FacetValueFromBase"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$of(facets->maxExclusive),
					$of("maxExclusive"_s),
					$($of($nc(this->fBase)->getName()))
				}));
			}
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) {
				result = $nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMaxExclusive, $nc(this->fBase)->fMaxExclusive);
				if (((int32_t)($nc(this->fBase)->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0 && result != 0) {
					reportError("FixedFacetValue"_s, $$new($ObjectArray, {
						$of("maxExclusive"_s),
						$of(facets->maxExclusive),
						$nc(this->fBase)->fMaxExclusive,
						$of(this->fTypeName)
					}));
				}
				if (result == 0) {
					needCheckBase = false;
				}
			}
			if (needCheckBase) {
				try {
					$nc(this->fBase)->validate(context, tempInfo);
				} catch ($InvalidDatatypeValueException& ide) {
					$var($String, var$3, ide->getKey());
					reportError(var$3, $(ide->getArgs()));
					reportError("FacetValueFromBase"_s, $$new($ObjectArray, {
						$of(this->fTypeName),
						$of(facets->maxExclusive),
						$of("maxExclusive"_s),
						$($of($nc(this->fBase)->getName()))
					}));
				}
			} else if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) {
				if ($nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMaxExclusive, $nc(this->fBase)->fMaxInclusive) > 0) {
					reportError("maxExclusive-valid-restriction.2"_s, $$new($ObjectArray, {
						$of(facets->maxExclusive),
						$nc(this->fBase)->fMaxInclusive
					}));
				}
			}
		}
	}
	needCheckBase = true;
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("minExclusive"_s),
				$of(this->fTypeName)
			}));
		} else {
			$set(this, minExclusiveAnnotation, $nc(facets)->minExclusiveAnnotation);
			try {
				$set(this, fMinExclusive, $nc(this->fBase)->getActualValue(facets->minExclusive, context, tempInfo, true));
				this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MINEXCLUSIVE;
				if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0) {
					this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_MINEXCLUSIVE;
				}
			} catch ($InvalidDatatypeValueException& ide) {
				$var($String, var$4, ide->getKey());
				reportError(var$4, $(ide->getArgs()));
				reportError("FacetValueFromBase"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$of(facets->minExclusive),
					$of("minExclusive"_s),
					$($of($nc(this->fBase)->getName()))
				}));
			}
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0) {
				result = $nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMinExclusive, $nc(this->fBase)->fMinExclusive);
				if (((int32_t)($nc(this->fBase)->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0 && result != 0) {
					reportError("FixedFacetValue"_s, $$new($ObjectArray, {
						$of("minExclusive"_s),
						$of(facets->minExclusive),
						$nc(this->fBase)->fMinExclusive,
						$of(this->fTypeName)
					}));
				}
				if (result == 0) {
					needCheckBase = false;
				}
			}
			if (needCheckBase) {
				try {
					$nc(this->fBase)->validate(context, tempInfo);
				} catch ($InvalidDatatypeValueException& ide) {
					$var($String, var$5, ide->getKey());
					reportError(var$5, $(ide->getArgs()));
					reportError("FacetValueFromBase"_s, $$new($ObjectArray, {
						$of(this->fTypeName),
						$of(facets->minExclusive),
						$of("minExclusive"_s),
						$($of($nc(this->fBase)->getName()))
					}));
				}
			} else if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0) {
				if ($nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMinExclusive, $nc(this->fBase)->fMinInclusive) < 0) {
					reportError("minExclusive-valid-restriction.3"_s, $$new($ObjectArray, {
						$of(facets->minExclusive),
						$nc(this->fBase)->fMinInclusive
					}));
				}
			}
		}
	}
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("minInclusive"_s),
				$of(this->fTypeName)
			}));
		} else {
			$set(this, minInclusiveAnnotation, $nc(facets)->minInclusiveAnnotation);
			try {
				$set(this, fMinInclusive, $nc(this->fBase)->getActualValue(facets->minInclusive, context, tempInfo, true));
				this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MININCLUSIVE;
				if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0) {
					this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_MININCLUSIVE;
				}
			} catch ($InvalidDatatypeValueException& ide) {
				$var($String, var$6, ide->getKey());
				reportError(var$6, $(ide->getArgs()));
				reportError("FacetValueFromBase"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$of(facets->minInclusive),
					$of("minInclusive"_s),
					$($of($nc(this->fBase)->getName()))
				}));
			}
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0) {
				if (((int32_t)($nc(this->fBase)->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0) {
					if ($nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMinInclusive, $nc(this->fBase)->fMinInclusive) != 0) {
						reportError("FixedFacetValue"_s, $$new($ObjectArray, {
							$of("minInclusive"_s),
							$of(facets->minInclusive),
							$nc(this->fBase)->fMinInclusive,
							$of(this->fTypeName)
						}));
					}
				}
			}
			try {
				$nc(this->fBase)->validate(context, tempInfo);
			} catch ($InvalidDatatypeValueException& ide) {
				$var($String, var$7, ide->getKey());
				reportError(var$7, $(ide->getArgs()));
				reportError("FacetValueFromBase"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$of(facets->minInclusive),
					$of("minInclusive"_s),
					$($of($nc(this->fBase)->getName()))
				}));
			}
		}
	}
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("totalDigits"_s),
				$of(this->fTypeName)
			}));
		} else {
			$set(this, totalDigitsAnnotation, $nc(facets)->totalDigitsAnnotation);
			this->fTotalDigits = facets->totalDigits;
			this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_TOTALDIGITS;
			if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0) {
				this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_TOTALDIGITS;
			}
		}
	}
	if (((int32_t)(presentFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0) {
		if (((int32_t)(allowedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) == 0) {
			reportError("cos-applicable-facets"_s, $$new($ObjectArray, {
				$of("fractionDigits"_s),
				$of(this->fTypeName)
			}));
		} else {
			this->fFractionDigits = $nc(facets)->fractionDigits;
			$set(this, fractionDigitsAnnotation, facets->fractionDigitsAnnotation);
			this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS;
			if (((int32_t)(fixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0) {
				this->fFixedFacet |= $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS;
			}
		}
	}
	if (patternType != XSSimpleTypeDecl::SPECIAL_PATTERN_NONE) {
		this->fPatternType = patternType;
	}
	if (this->fFacetsDefined != 0) {
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0)) {
			if (this->fMinLength > this->fMaxLength) {
				reportError("minLength-less-than-equal-to-maxLength"_s, $$new($ObjectArray, {
					$($of($Integer::toString(this->fMinLength))),
					$($of($Integer::toString(this->fMaxLength))),
					$of(this->fTypeName)
				}));
			}
		}
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0)) {
			reportError("maxInclusive-maxExclusive"_s, $$new($ObjectArray, {
				this->fMaxInclusive,
				this->fMaxExclusive,
				$of(this->fTypeName)
			}));
		}
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0)) {
			reportError("minInclusive-minExclusive"_s, $$new($ObjectArray, {
				this->fMinInclusive,
				this->fMinExclusive,
				$of(this->fTypeName)
			}));
		}
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0)) {
			result = $nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMinInclusive, this->fMaxInclusive);
			if (result != -1 && result != 0) {
				reportError("minInclusive-less-than-equal-to-maxInclusive"_s, $$new($ObjectArray, {
					this->fMinInclusive,
					this->fMaxInclusive,
					$of(this->fTypeName)
				}));
			}
		}
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0)) {
			result = $nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMinExclusive, this->fMaxExclusive);
			if (result != -1 && result != 0) {
				reportError("minExclusive-less-than-equal-to-maxExclusive"_s, $$new($ObjectArray, {
					this->fMinExclusive,
					this->fMaxExclusive,
					$of(this->fTypeName)
				}));
			}
		}
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0)) {
			if ($nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMinExclusive, this->fMaxInclusive) != -1) {
				reportError("minExclusive-less-than-maxInclusive"_s, $$new($ObjectArray, {
					this->fMinExclusive,
					this->fMaxInclusive,
					$of(this->fTypeName)
				}));
			}
		}
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0)) {
			if ($nc($nc(this->fDVs)->get(this->fValidationDV))->compare(this->fMinInclusive, this->fMaxExclusive) != -1) {
				reportError("minInclusive-less-than-maxExclusive"_s, $$new($ObjectArray, {
					this->fMinInclusive,
					this->fMaxExclusive,
					$of(this->fTypeName)
				}));
			}
		}
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0)) {
			if (this->fFractionDigits > this->fTotalDigits) {
				reportError("fractionDigits-totalDigits"_s, $$new($ObjectArray, {
					$($of($Integer::toString(this->fFractionDigits))),
					$($of($Integer::toString(this->fTotalDigits))),
					$of(this->fTypeName)
				}));
			}
		}
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) {
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0 && this->fLength < $nc(this->fBase)->fMinLength) {
				reportError("length-minLength-maxLength.1.1"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$($of($Integer::toString(this->fLength))),
					$($of($Integer::toString($nc(this->fBase)->fMinLength)))
				}));
			}
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0 && this->fLength > $nc(this->fBase)->fMaxLength) {
				reportError("length-minLength-maxLength.2.1"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$($of($Integer::toString(this->fLength))),
					$($of($Integer::toString($nc(this->fBase)->fMaxLength)))
				}));
			}
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) {
				if (this->fLength != $nc(this->fBase)->fLength) {
					reportError("length-valid-restriction"_s, $$new($ObjectArray, {
						$($of($Integer::toString(this->fLength))),
						$($of($Integer::toString($nc(this->fBase)->fLength))),
						$of(this->fTypeName)
					}));
				}
			}
		}
		if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0 || ((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) {
			if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) {
				if ($nc(this->fBase)->fLength < this->fMinLength) {
					reportError("length-minLength-maxLength.1.1"_s, $$new($ObjectArray, {
						$of(this->fTypeName),
						$($of($Integer::toString($nc(this->fBase)->fLength))),
						$($of($Integer::toString(this->fMinLength)))
					}));
				}
				if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) == 0) {
					reportError("length-minLength-maxLength.1.2.a"_s, $$new($ObjectArray, {$of(this->fTypeName)}));
				}
				if (this->fMinLength != $nc(this->fBase)->fMinLength) {
					reportError("length-minLength-maxLength.1.2.b"_s, $$new($ObjectArray, {
						$of(this->fTypeName),
						$($of($Integer::toString(this->fMinLength))),
						$($of($Integer::toString($nc(this->fBase)->fMinLength)))
					}));
				}
			}
			if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) {
				if ($nc(this->fBase)->fLength > this->fMaxLength) {
					reportError("length-minLength-maxLength.2.1"_s, $$new($ObjectArray, {
						$of(this->fTypeName),
						$($of($Integer::toString($nc(this->fBase)->fLength))),
						$($of($Integer::toString(this->fMaxLength)))
					}));
				}
				if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) == 0) {
					reportError("length-minLength-maxLength.2.2.a"_s, $$new($ObjectArray, {$of(this->fTypeName)}));
				}
				if (this->fMaxLength != $nc(this->fBase)->fMaxLength) {
					reportError("length-minLength-maxLength.2.2.b"_s, $$new($ObjectArray, {
						$of(this->fTypeName),
						$($of($Integer::toString(this->fMaxLength))),
						$($of($Integer::toString($nc($nc(this->fBase)->fBase)->fMaxLength)))
					}));
				}
			}
		}
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) {
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) {
				if (this->fMinLength > $nc(this->fBase)->fMaxLength) {
					reportError("minLength-less-than-equal-to-maxLength"_s, $$new($ObjectArray, {
						$($of($Integer::toString(this->fMinLength))),
						$($of($Integer::toString($nc(this->fBase)->fMaxLength))),
						$of(this->fTypeName)
					}));
				}
			} else if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) {
				if (((int32_t)($nc(this->fBase)->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0 && this->fMinLength != $nc(this->fBase)->fMinLength) {
					reportError("FixedFacetValue"_s, $$new($ObjectArray, {
						$of("minLength"_s),
						$($of($Integer::toString(this->fMinLength))),
						$($of($Integer::toString($nc(this->fBase)->fMinLength))),
						$of(this->fTypeName)
					}));
				}
				if (this->fMinLength < $nc(this->fBase)->fMinLength) {
					reportError("minLength-valid-restriction"_s, $$new($ObjectArray, {
						$($of($Integer::toString(this->fMinLength))),
						$($of($Integer::toString($nc(this->fBase)->fMinLength))),
						$of(this->fTypeName)
					}));
				}
			}
		}
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) && (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0)) {
			if (this->fMaxLength < $nc(this->fBase)->fMinLength) {
				reportError("minLength-less-than-equal-to-maxLength"_s, $$new($ObjectArray, {
					$($of($Integer::toString($nc(this->fBase)->fMinLength))),
					$($of($Integer::toString(this->fMaxLength)))
				}));
			}
		}
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) {
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) {
				if ((((int32_t)($nc(this->fBase)->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) && this->fMaxLength != $nc(this->fBase)->fMaxLength) {
					reportError("FixedFacetValue"_s, $$new($ObjectArray, {
						$of("maxLength"_s),
						$($of($Integer::toString(this->fMaxLength))),
						$($of($Integer::toString($nc(this->fBase)->fMaxLength))),
						$of(this->fTypeName)
					}));
				}
				if (this->fMaxLength > $nc(this->fBase)->fMaxLength) {
					reportError("maxLength-valid-restriction"_s, $$new($ObjectArray, {
						$($of($Integer::toString(this->fMaxLength))),
						$($of($Integer::toString($nc(this->fBase)->fMaxLength))),
						$of(this->fTypeName)
					}));
				}
			}
		}
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0) {
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0) {
				if (((int32_t)($nc(this->fBase)->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0 && this->fTotalDigits != $nc(this->fBase)->fTotalDigits) {
					reportError("FixedFacetValue"_s, $$new($ObjectArray, {
						$of("totalDigits"_s),
						$($of($Integer::toString(this->fTotalDigits))),
						$($of($Integer::toString($nc(this->fBase)->fTotalDigits))),
						$of(this->fTypeName)
					}));
				}
				if (this->fTotalDigits > $nc(this->fBase)->fTotalDigits) {
					reportError("totalDigits-valid-restriction"_s, $$new($ObjectArray, {
						$($of($Integer::toString(this->fTotalDigits))),
						$($of($Integer::toString($nc(this->fBase)->fTotalDigits))),
						$of(this->fTypeName)
					}));
				}
			}
		}
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0) {
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0) {
				if (this->fFractionDigits > $nc(this->fBase)->fTotalDigits) {
					reportError("fractionDigits-totalDigits"_s, $$new($ObjectArray, {
						$($of($Integer::toString(this->fFractionDigits))),
						$($of($Integer::toString(this->fTotalDigits))),
						$of(this->fTypeName)
					}));
				}
			}
		}
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0) {
			if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0) {
				if ((((int32_t)($nc(this->fBase)->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0 && this->fFractionDigits != $nc(this->fBase)->fFractionDigits) || (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER && this->fFractionDigits != 0)) {
					reportError("FixedFacetValue"_s, $$new($ObjectArray, {
						$of("fractionDigits"_s),
						$($of($Integer::toString(this->fFractionDigits))),
						$($of($Integer::toString($nc(this->fBase)->fFractionDigits))),
						$of(this->fTypeName)
					}));
				}
				if (this->fFractionDigits > $nc(this->fBase)->fFractionDigits) {
					reportError("fractionDigits-valid-restriction"_s, $$new($ObjectArray, {
						$($of($Integer::toString(this->fFractionDigits))),
						$($of($Integer::toString($nc(this->fBase)->fFractionDigits))),
						$of(this->fTypeName)
					}));
				}
			} else if (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER && this->fFractionDigits != 0) {
				reportError("FixedFacetValue"_s, $$new($ObjectArray, {
					$of("fractionDigits"_s),
					$($of($Integer::toString(this->fFractionDigits))),
					$of("0"_s),
					$of(this->fTypeName)
				}));
			}
		}
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) != 0 && ((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) != 0) {
			if (((int32_t)($nc(this->fBase)->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) != 0 && this->fWhiteSpace != $nc(this->fBase)->fWhiteSpace) {
				reportError("FixedFacetValue"_s, $$new($ObjectArray, {
					$of("whiteSpace"_s),
					$($of(whiteSpaceValue(this->fWhiteSpace))),
					$($of(whiteSpaceValue($nc(this->fBase)->fWhiteSpace))),
					$of(this->fTypeName)
				}));
			}
			if (this->fWhiteSpace == $XSSimpleType::WS_PRESERVE && $nc(this->fBase)->fWhiteSpace == $XSSimpleType::WS_COLLAPSE) {
				reportError("whiteSpace-valid-restriction.1"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$of("preserve"_s)
				}));
			}
			if (this->fWhiteSpace == $XSSimpleType::WS_REPLACE && $nc(this->fBase)->fWhiteSpace == $XSSimpleType::WS_COLLAPSE) {
				reportError("whiteSpace-valid-restriction.1"_s, $$new($ObjectArray, {
					$of(this->fTypeName),
					$of("replace"_s)
				}));
			}
			if (this->fWhiteSpace == $XSSimpleType::WS_PRESERVE && $nc(this->fBase)->fWhiteSpace == $XSSimpleType::WS_REPLACE) {
				reportError("whiteSpace-valid-restriction.2"_s, $$new($ObjectArray, {$of(this->fTypeName)}));
			}
		}
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) == 0 && ((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_LENGTH;
		this->fLength = $nc(this->fBase)->fLength;
		$set(this, lengthAnnotation, $nc(this->fBase)->lengthAnnotation);
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) == 0 && ((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MINLENGTH;
		this->fMinLength = $nc(this->fBase)->fMinLength;
		$set(this, minLengthAnnotation, $nc(this->fBase)->minLengthAnnotation);
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) == 0 && ((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MAXLENGTH;
		this->fMaxLength = $nc(this->fBase)->fMaxLength;
		$set(this, maxLengthAnnotation, $nc(this->fBase)->maxLengthAnnotation);
	}
	if (((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_PATTERN)) != 0) {
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_PATTERN)) == 0) {
			this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_PATTERN;
			$set(this, fPattern, $nc(this->fBase)->fPattern);
			$set(this, fPatternStr, $nc(this->fBase)->fPatternStr);
			$set(this, patternAnnotations, $nc(this->fBase)->patternAnnotations);
		} else {
			for (int32_t i = $nc($nc(this->fBase)->fPattern)->size() - 1; i >= 0; --i) {
				$nc(this->fPattern)->add($cast($RegularExpression, $($nc($nc(this->fBase)->fPattern)->get(i))));
				$nc(this->fPatternStr)->add($cast($String, $($nc($nc(this->fBase)->fPatternStr)->get(i))));
			}
			if ($nc(this->fBase)->patternAnnotations != nullptr) {
				if (this->patternAnnotations != nullptr) {
					for (int32_t i = $nc($nc(this->fBase)->patternAnnotations)->getLength() - 1; i >= 0; --i) {
						$nc(this->patternAnnotations)->addXSObject($($nc($nc(this->fBase)->patternAnnotations)->item(i)));
					}
				} else {
					$set(this, patternAnnotations, $nc(this->fBase)->patternAnnotations);
				}
			}
		}
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) == 0 && ((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) != 0) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_WHITESPACE;
		this->fWhiteSpace = $nc(this->fBase)->fWhiteSpace;
		$set(this, whiteSpaceAnnotation, $nc(this->fBase)->whiteSpaceAnnotation);
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_ENUMERATION)) == 0 && ((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_ENUMERATION)) != 0) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_ENUMERATION;
		$set(this, fEnumeration, $nc(this->fBase)->fEnumeration);
		this->fEnumerationSize = $nc(this->fBase)->fEnumerationSize;
		$set(this, enumerationAnnotations, $nc(this->fBase)->enumerationAnnotations);
	}
	if ((((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0)) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE;
		$set(this, fMaxExclusive, $nc(this->fBase)->fMaxExclusive);
		$set(this, maxExclusiveAnnotation, $nc(this->fBase)->maxExclusiveAnnotation);
	}
	if ((((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0)) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MAXINCLUSIVE;
		$set(this, fMaxInclusive, $nc(this->fBase)->fMaxInclusive);
		$set(this, maxInclusiveAnnotation, $nc(this->fBase)->maxInclusiveAnnotation);
	}
	if ((((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0)) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MINEXCLUSIVE;
		$set(this, fMinExclusive, $nc(this->fBase)->fMinExclusive);
		$set(this, minExclusiveAnnotation, $nc(this->fBase)->minExclusiveAnnotation);
	}
	if ((((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0)) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_MININCLUSIVE;
		$set(this, fMinInclusive, $nc(this->fBase)->fMinInclusive);
		$set(this, minInclusiveAnnotation, $nc(this->fBase)->minInclusiveAnnotation);
	}
	if ((((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0)) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_TOTALDIGITS;
		this->fTotalDigits = $nc(this->fBase)->fTotalDigits;
		$set(this, totalDigitsAnnotation, $nc(this->fBase)->totalDigitsAnnotation);
	}
	if ((((int32_t)($nc(this->fBase)->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0) && !(((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0)) {
		this->fFacetsDefined |= $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS;
		this->fFractionDigits = $nc(this->fBase)->fFractionDigits;
		$set(this, fractionDigitsAnnotation, $nc(this->fBase)->fractionDigitsAnnotation);
	}
	if ((this->fPatternType == XSSimpleTypeDecl::SPECIAL_PATTERN_NONE) && ($nc(this->fBase)->fPatternType != XSSimpleTypeDecl::SPECIAL_PATTERN_NONE)) {
		this->fPatternType = $nc(this->fBase)->fPatternType;
	}
	this->fFixedFacet |= $nc(this->fBase)->fFixedFacet;
	calcFundamentalFacets();
}

$Object* XSSimpleTypeDecl::validate($String* content, $ValidationContext* context$renamed, $ValidatedInfo* validatedInfo$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ValidatedInfo, validatedInfo, validatedInfo$renamed);
	$var($ValidationContext, context, context$renamed);
	if (context == nullptr) {
		$assign(context, XSSimpleTypeDecl::fEmptyContext);
	}
	if (validatedInfo == nullptr) {
		$assign(validatedInfo, $new($ValidatedInfo));
	} else {
		$set($nc(validatedInfo), memberType, nullptr);
	}
	bool needNormalize = context == nullptr || $nc(context)->needToNormalize();
	$var($Object, ob, getActualValue(content, context, validatedInfo, needNormalize));
	validate(context, validatedInfo);
	return $of(ob);
}

$ValidatedInfo* XSSimpleTypeDecl::getActualEnumValue($String* lexical, $ValidationContext* ctx, $ValidatedInfo* info) {
	return $nc(this->fBase)->validateWithInfo(lexical, ctx, info);
}

$ValidatedInfo* XSSimpleTypeDecl::validateWithInfo($String* content, $ValidationContext* context$renamed, $ValidatedInfo* validatedInfo$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ValidatedInfo, validatedInfo, validatedInfo$renamed);
	$var($ValidationContext, context, context$renamed);
	if (context == nullptr) {
		$assign(context, XSSimpleTypeDecl::fEmptyContext);
	}
	if (validatedInfo == nullptr) {
		$assign(validatedInfo, $new($ValidatedInfo));
	} else {
		$set($nc(validatedInfo), memberType, nullptr);
	}
	bool needNormalize = context == nullptr || $nc(context)->needToNormalize();
	getActualValue(content, context, validatedInfo, needNormalize);
	validate(context, validatedInfo);
	return validatedInfo;
}

$Object* XSSimpleTypeDecl::validate(Object$* content, $ValidationContext* context$renamed, $ValidatedInfo* validatedInfo$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ValidatedInfo, validatedInfo, validatedInfo$renamed);
	$var($ValidationContext, context, context$renamed);
	if (context == nullptr) {
		$assign(context, XSSimpleTypeDecl::fEmptyContext);
	}
	if (validatedInfo == nullptr) {
		$assign(validatedInfo, $new($ValidatedInfo));
	} else {
		$set($nc(validatedInfo), memberType, nullptr);
	}
	bool needNormalize = context == nullptr || $nc(context)->needToNormalize();
	$var($Object, ob, getActualValue(content, context, validatedInfo, needNormalize));
	validate(context, validatedInfo);
	return $of(ob);
}

void XSSimpleTypeDecl::validate($ValidationContext* context$renamed, $ValidatedInfo* validatedInfo) {
	$var($ValidationContext, context, context$renamed);
	if (context == nullptr) {
		$assign(context, XSSimpleTypeDecl::fEmptyContext);
	}
	if ($nc(context)->needFacetChecking() && (this->fFacetsDefined != 0 && this->fFacetsDefined != $XSSimpleTypeDefinition::FACET_WHITESPACE)) {
		checkFacets(validatedInfo);
	}
	if ($nc(context)->needExtraChecking()) {
		checkExtraRules(context, validatedInfo);
	}
}

void XSSimpleTypeDecl::checkFacets($ValidatedInfo* validatedInfo) {
	$useLocalCurrentObjectStackCache();
	$var($Object, ob, $nc(validatedInfo)->actualValue);
	$var($String, content, validatedInfo->normalizedValue);
	int16_t type = validatedInfo->actualValueType;
	$var($ShortList, itemType, validatedInfo->itemValueTypes);
	if (this->fValidationDV != XSSimpleTypeDecl::DV_QNAME && this->fValidationDV != XSSimpleTypeDecl::DV_NOTATION) {
		int32_t length = $nc($nc(this->fDVs)->get(this->fValidationDV))->getDataLength(ob);
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) {
			if (length > this->fMaxLength) {
				$throwNew($InvalidDatatypeValueException, "cvc-maxLength-valid"_s, $$new($ObjectArray, {
					$of(content),
					$($of($Integer::toString(length))),
					$($of($Integer::toString(this->fMaxLength))),
					$of(this->fTypeName)
				}));
			}
		}
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) {
			if (length < this->fMinLength) {
				$throwNew($InvalidDatatypeValueException, "cvc-minLength-valid"_s, $$new($ObjectArray, {
					$of(content),
					$($of($Integer::toString(length))),
					$($of($Integer::toString(this->fMinLength))),
					$of(this->fTypeName)
				}));
			}
		}
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) {
			if (length != this->fLength) {
				$throwNew($InvalidDatatypeValueException, "cvc-length-valid"_s, $$new($ObjectArray, {
					$of(content),
					$($of($Integer::toString(length))),
					$($of($Integer::toString(this->fLength))),
					$of(this->fTypeName)
				}));
			}
		}
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_ENUMERATION)) != 0) {
		bool present = false;
		int32_t enumSize = this->fEnumerationSize;
		int16_t primitiveType1 = convertToPrimitiveKind(type);
		for (int32_t i = 0; i < enumSize; ++i) {
			int16_t primitiveType2 = convertToPrimitiveKind($nc($nc(this->fEnumeration)->get(i))->actualValueType);
			if ((primitiveType1 == primitiveType2 || primitiveType1 == $XSConstants::ANYSIMPLETYPE_DT && primitiveType2 == $XSConstants::STRING_DT || primitiveType1 == $XSConstants::STRING_DT && primitiveType2 == $XSConstants::ANYSIMPLETYPE_DT) && $nc($of($nc($nc(this->fEnumeration)->get(i))->actualValue))->equals(ob)) {
				if (primitiveType1 == $XSConstants::LIST_DT || primitiveType1 == $XSConstants::LISTOFUNION_DT) {
					$var($ShortList, enumItemType, $nc($nc(this->fEnumeration)->get(i))->itemValueTypes);
					int32_t typeList1Length = itemType != nullptr ? $nc(itemType)->getLength() : 0;
					int32_t typeList2Length = enumItemType != nullptr ? $nc(enumItemType)->getLength() : 0;
					if (typeList1Length == typeList2Length) {
						int32_t j = 0;
						for (j = 0; j < typeList1Length; ++j) {
							int16_t primitiveItem1 = convertToPrimitiveKind(itemType->item(j));
							int16_t primitiveItem2 = convertToPrimitiveKind(enumItemType->item(j));
							if (primitiveItem1 != primitiveItem2) {
								if (primitiveItem1 == $XSConstants::ANYSIMPLETYPE_DT && primitiveItem2 == $XSConstants::STRING_DT || primitiveItem1 == $XSConstants::STRING_DT && primitiveItem2 == $XSConstants::ANYSIMPLETYPE_DT) {
									continue;
								}
								break;
							}
						}
						if (j == typeList1Length) {
							present = true;
							break;
						}
					}
				} else {
					present = true;
					break;
				}
			}
		}
		if (!present) {
			$var($StringBuffer, sb, $new($StringBuffer));
			appendEnumString(sb);
			$throwNew($InvalidDatatypeValueException, "cvc-enumeration-valid"_s, $$new($ObjectArray, {
				$of(content),
				$($of(sb->toString()))
			}));
		}
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0) {
		int32_t scale = $nc($nc(this->fDVs)->get(this->fValidationDV))->getFractionDigits(ob);
		if (scale > this->fFractionDigits) {
			$throwNew($InvalidDatatypeValueException, "cvc-fractionDigits-valid"_s, $$new($ObjectArray, {
				$of(content),
				$($of($Integer::toString(scale))),
				$($of($Integer::toString(this->fFractionDigits)))
			}));
		}
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0) {
		int32_t totalDigits = $nc($nc(this->fDVs)->get(this->fValidationDV))->getTotalDigits(ob);
		if (totalDigits > this->fTotalDigits) {
			$throwNew($InvalidDatatypeValueException, "cvc-totalDigits-valid"_s, $$new($ObjectArray, {
				$of(content),
				$($of($Integer::toString(totalDigits))),
				$($of($Integer::toString(this->fTotalDigits)))
			}));
		}
	}
	int32_t compare = 0;
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) {
		compare = $nc($nc(this->fDVs)->get(this->fValidationDV))->compare(ob, this->fMaxInclusive);
		if (compare != -1 && compare != 0) {
			$throwNew($InvalidDatatypeValueException, "cvc-maxInclusive-valid"_s, $$new($ObjectArray, {
				$of(content),
				this->fMaxInclusive,
				$of(this->fTypeName)
			}));
		}
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0) {
		compare = $nc($nc(this->fDVs)->get(this->fValidationDV))->compare(ob, this->fMaxExclusive);
		if (compare != -1) {
			$throwNew($InvalidDatatypeValueException, "cvc-maxExclusive-valid"_s, $$new($ObjectArray, {
				$of(content),
				this->fMaxExclusive,
				$of(this->fTypeName)
			}));
		}
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0) {
		compare = $nc($nc(this->fDVs)->get(this->fValidationDV))->compare(ob, this->fMinInclusive);
		if (compare != 1 && compare != 0) {
			$throwNew($InvalidDatatypeValueException, "cvc-minInclusive-valid"_s, $$new($ObjectArray, {
				$of(content),
				this->fMinInclusive,
				$of(this->fTypeName)
			}));
		}
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0) {
		compare = $nc($nc(this->fDVs)->get(this->fValidationDV))->compare(ob, this->fMinExclusive);
		if (compare != 1) {
			$throwNew($InvalidDatatypeValueException, "cvc-minExclusive-valid"_s, $$new($ObjectArray, {
				$of(content),
				this->fMinExclusive,
				$of(this->fTypeName)
			}));
		}
	}
}

void XSSimpleTypeDecl::checkExtraRules($ValidationContext* context, $ValidatedInfo* validatedInfo) {
	$useLocalCurrentObjectStackCache();
	$var($Object, ob, $nc(validatedInfo)->actualValue);
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_ATOMIC) {
		$nc($nc(this->fDVs)->get(this->fValidationDV))->checkExtraRules(ob, context);
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_LIST) {
		$var($ListDV$ListData, values, $cast($ListDV$ListData, ob));
		$var($XSSimpleType, memberType, validatedInfo->memberType);
		int32_t len = $nc(values)->getLength();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if ($nc(this->fItemType)->fVariety == $XSSimpleTypeDefinition::VARIETY_UNION) {
					$var($XSSimpleTypeDeclArray, memberTypes, $fcast($XSSimpleTypeDeclArray, validatedInfo->memberTypes));
					for (int32_t i = len - 1; i >= 0; --i) {
						$set(validatedInfo, actualValue, values->item(i));
						$set(validatedInfo, memberType, $nc(memberTypes)->get(i));
						$nc(this->fItemType)->checkExtraRules(context, validatedInfo);
					}
				} else {
					for (int32_t i = len - 1; i >= 0; --i) {
						$set(validatedInfo, actualValue, values->item(i));
						$nc(this->fItemType)->checkExtraRules(context, validatedInfo);
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(validatedInfo, actualValue, values);
				$set(validatedInfo, memberType, memberType);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$nc(($cast(XSSimpleTypeDecl, validatedInfo->memberType)))->checkExtraRules(context, validatedInfo);
	}
}

$Object* XSSimpleTypeDecl::getActualValue(Object$* content, $ValidationContext* context, $ValidatedInfo* validatedInfo, bool needNormalize) {
	$useLocalCurrentObjectStackCache();
	$var($String, nvalue, nullptr);
	if (needNormalize) {
		$assign(nvalue, normalize(content, this->fWhiteSpace));
	} else {
		$assign(nvalue, $nc($of(content))->toString());
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_PATTERN)) != 0) {
		$var($RegularExpression, regex, nullptr);
		for (int32_t idx = $nc(this->fPattern)->size() - 1; idx >= 0; --idx) {
			$assign(regex, $cast($RegularExpression, $nc(this->fPattern)->get(idx)));
			if (!$nc(regex)->matches(nvalue)) {
				$throwNew($InvalidDatatypeValueException, "cvc-pattern-valid"_s, $$new($ObjectArray, {
					content,
					$($nc(this->fPatternStr)->get(idx)),
					$of(this->fTypeName)
				}));
			}
		}
	}
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_ATOMIC) {
		if (this->fPatternType != XSSimpleTypeDecl::SPECIAL_PATTERN_NONE) {
			bool seenErr = false;
			if (this->fPatternType == XSSimpleTypeDecl::SPECIAL_PATTERN_NMTOKEN) {
				seenErr = !$XMLChar::isValidNmtoken(nvalue);
			} else if (this->fPatternType == XSSimpleTypeDecl::SPECIAL_PATTERN_NAME) {
				seenErr = !$XMLChar::isValidName(nvalue);
			} else if (this->fPatternType == XSSimpleTypeDecl::SPECIAL_PATTERN_NCNAME) {
				seenErr = !$XMLChar::isValidNCName(nvalue);
			}
			if (seenErr) {
				$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
					$of(nvalue),
					$of($nc(XSSimpleTypeDecl::SPECIAL_PATTERN_STRING)->get(this->fPatternType))
				}));
			}
		}
		$set($nc(validatedInfo), normalizedValue, nvalue);
		$var($Object, avalue, $nc($nc(this->fDVs)->get(this->fValidationDV))->getActualValue(nvalue, context));
		$set(validatedInfo, actualValue, avalue);
		validatedInfo->actualValueType = this->fBuiltInKind;
		$set(validatedInfo, actualType, this);
		return $of(avalue);
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_LIST) {
		$var($StringTokenizer, parsedList, $new($StringTokenizer, nvalue, " "_s));
		int32_t countOfTokens = parsedList->countTokens();
		$var($ObjectArray, avalue, $new($ObjectArray, countOfTokens));
		bool isUnion = $nc(this->fItemType)->getVariety() == $XSSimpleTypeDefinition::VARIETY_UNION;
		$var($shorts, itemTypes, $new($shorts, isUnion ? countOfTokens : 1));
		if (!isUnion) {
			itemTypes->set(0, $nc(this->fItemType)->fBuiltInKind);
		}
		$var($XSSimpleTypeDeclArray, memberTypes, $new($XSSimpleTypeDeclArray, countOfTokens));
		for (int32_t i = 0; i < countOfTokens; ++i) {
			avalue->set(i, $($nc(this->fItemType)->getActualValue($(parsedList->nextToken()), context, validatedInfo, false)));
			if ($nc(context)->needFacetChecking() && ($nc(this->fItemType)->fFacetsDefined != 0 && $nc(this->fItemType)->fFacetsDefined != $XSSimpleTypeDefinition::FACET_WHITESPACE)) {
				$nc(this->fItemType)->checkFacets(validatedInfo);
			}
			memberTypes->set(i, $cast(XSSimpleTypeDecl, $nc(validatedInfo)->memberType));
			if (isUnion) {
				itemTypes->set(i, $nc(memberTypes->get(i))->fBuiltInKind);
			}
		}
		$var($ListDV$ListData, v, $new($ListDV$ListData, avalue));
		$set($nc(validatedInfo), actualValue, v);
		validatedInfo->actualValueType = isUnion ? $XSConstants::LISTOFUNION_DT : $XSConstants::LIST_DT;
		$set(validatedInfo, memberType, nullptr);
		$set(validatedInfo, memberTypes, $fcast($XSSimpleTypeArray, memberTypes));
		$set(validatedInfo, itemValueTypes, $new($ShortListImpl, itemTypes, itemTypes->length));
		$set(validatedInfo, normalizedValue, nvalue);
		$set(validatedInfo, actualType, this);
		return $of(v);
	} else {
		$var($Object, _content, ($nc(this->fMemberTypes)->length > 1 && content != nullptr) ? $of($nc($of(content))->toString()) : $of(content));
		for (int32_t i = 0; i < $nc(this->fMemberTypes)->length; ++i) {
			try {
				$var($Object, aValue, $nc($nc(this->fMemberTypes)->get(i))->getActualValue(_content, context, validatedInfo, true));
				if ($nc(context)->needFacetChecking() && ($nc($nc(this->fMemberTypes)->get(i))->fFacetsDefined != 0 && $nc($nc(this->fMemberTypes)->get(i))->fFacetsDefined != $XSSimpleTypeDefinition::FACET_WHITESPACE)) {
					$nc($nc(this->fMemberTypes)->get(i))->checkFacets(validatedInfo);
				}
				$set($nc(validatedInfo), memberType, $nc(this->fMemberTypes)->get(i));
				$set(validatedInfo, actualType, this);
				return $of(aValue);
			} catch ($InvalidDatatypeValueException& invalidValue) {
			}
		}
		$var($StringBuffer, typesBuffer, $new($StringBuffer));
		$var(XSSimpleTypeDecl, decl, nullptr);
		for (int32_t i = 0; i < $nc(this->fMemberTypes)->length; ++i) {
			if (i != 0) {
				typesBuffer->append(" | "_s);
			}
			$assign(decl, $nc(this->fMemberTypes)->get(i));
			if ($nc(decl)->fTargetNamespace != nullptr) {
				typesBuffer->append(u'{');
				typesBuffer->append(decl->fTargetNamespace);
				typesBuffer->append(u'}');
			}
			typesBuffer->append($nc(decl)->fTypeName);
			if ($nc(decl)->fEnumeration != nullptr) {
				typesBuffer->append(" : "_s);
				decl->appendEnumString(typesBuffer);
			}
		}
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.3"_s, $$new($ObjectArray, {
			content,
			$of(this->fTypeName),
			$($of(typesBuffer->toString()))
		}));
	}
	$shouldNotReachHere();
}

bool XSSimpleTypeDecl::isEqual(Object$* value1, Object$* value2) {
	if (value1 == nullptr) {
		return false;
	}
	return $nc($of(value1))->equals(value2);
}

bool XSSimpleTypeDecl::isIdentical(Object$* value1, Object$* value2) {
	if (value1 == nullptr) {
		return false;
	}
	return $nc($nc(this->fDVs)->get(this->fValidationDV))->isIdentical(value1, value2);
}

$String* XSSimpleTypeDecl::normalize($String* content, int16_t ws) {
	$init(XSSimpleTypeDecl);
	int32_t len = content == nullptr ? 0 : $nc(content)->length();
	if (len == 0 || ws == $XSSimpleType::WS_PRESERVE) {
		return content;
	}
	$var($StringBuffer, sb, $new($StringBuffer));
	if (ws == $XSSimpleType::WS_REPLACE) {
		char16_t ch = 0;
		for (int32_t i = 0; i < len; ++i) {
			ch = content->charAt(i);
			if (ch != 9 && ch != 10 && ch != 13) {
				sb->append(ch);
			} else {
				sb->append((char16_t)32);
			}
		}
	} else {
		char16_t ch = 0;
		int32_t i = 0;
		bool isLeading = true;
		for (i = 0; i < len; ++i) {
			ch = content->charAt(i);
			if (ch != 9 && ch != 10 && ch != 13 && ch != 32) {
				sb->append(ch);
				isLeading = false;
			} else {
				for (; i < len - 1; ++i) {
					ch = content->charAt(i + 1);
					if (ch != 9 && ch != 10 && ch != 13 && ch != 32) {
						break;
					}
				}
				if (i < len - 1 && !isLeading) {
					sb->append((char16_t)32);
				}
			}
		}
	}
	return sb->toString();
}

$String* XSSimpleTypeDecl::normalize(Object$* content, int16_t ws) {
	$useLocalCurrentObjectStackCache();
	if (content == nullptr) {
		return nullptr;
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_PATTERN)) == 0) {
		int16_t norm_type = $nc(XSSimpleTypeDecl::fDVNormalizeType)->get(this->fValidationDV);
		if (norm_type == XSSimpleTypeDecl::NORMALIZE_NONE) {
			return $nc($of(content))->toString();
		} else if (norm_type == XSSimpleTypeDecl::NORMALIZE_TRIM) {
			return $XMLChar::trim($($nc($of(content))->toString()));
		}
	}
	if (!($instanceOf($StringBuffer, content))) {
		$var($String, strContent, $nc($of(content))->toString());
		return normalize(strContent, ws);
	}
	$var($StringBuffer, sb, $cast($StringBuffer, content));
	int32_t len = $nc(sb)->length();
	if (len == 0) {
		return ""_s;
	}
	if (ws == $XSSimpleType::WS_PRESERVE) {
		return sb->toString();
	}
	if (ws == $XSSimpleType::WS_REPLACE) {
		char16_t ch = 0;
		for (int32_t i = 0; i < len; ++i) {
			ch = sb->charAt(i);
			if (ch == 9 || ch == 10 || ch == 13) {
				sb->setCharAt(i, (char16_t)32);
			}
		}
	} else {
		char16_t ch = 0;
		int32_t i = 0;
		int32_t j = 0;
		bool isLeading = true;
		for (i = 0; i < len; ++i) {
			ch = sb->charAt(i);
			if (ch != 9 && ch != 10 && ch != 13 && ch != 32) {
				sb->setCharAt(j++, ch);
				isLeading = false;
			} else {
				for (; i < len - 1; ++i) {
					ch = sb->charAt(i + 1);
					if (ch != 9 && ch != 10 && ch != 13 && ch != 32) {
						break;
					}
				}
				if (i < len - 1 && !isLeading) {
					sb->setCharAt(j++, (char16_t)32);
				}
			}
		}
		sb->setLength(j);
	}
	return sb->toString();
}

void XSSimpleTypeDecl::reportError($String* key, $ObjectArray* args) {
	$throwNew($InvalidDatatypeFacetException, key, args);
}

$String* XSSimpleTypeDecl::whiteSpaceValue(int16_t ws) {
	return $nc(XSSimpleTypeDecl::WS_FACET_STRING)->get(ws);
}

int16_t XSSimpleTypeDecl::getOrdered() {
	return this->fOrdered;
}

bool XSSimpleTypeDecl::getBounded() {
	return this->fBounded;
}

bool XSSimpleTypeDecl::getFinite() {
	return this->fFinite;
}

bool XSSimpleTypeDecl::getNumeric() {
	return this->fNumeric;
}

bool XSSimpleTypeDecl::isDefinedFacet(int16_t facetName) {
	if (this->fValidationDV == XSSimpleTypeDecl::DV_ANYSIMPLETYPE || this->fValidationDV == XSSimpleTypeDecl::DV_ANYATOMICTYPE) {
		return false;
	}
	if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)facetName)) != 0) {
		return true;
	}
	if (this->fPatternType != XSSimpleTypeDecl::SPECIAL_PATTERN_NONE) {
		return facetName == $XSSimpleTypeDefinition::FACET_PATTERN;
	}
	if (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER) {
		return facetName == $XSSimpleTypeDefinition::FACET_PATTERN || facetName == $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS;
	}
	return false;
}

int16_t XSSimpleTypeDecl::getDefinedFacets() {
	if (this->fValidationDV == XSSimpleTypeDecl::DV_ANYSIMPLETYPE || this->fValidationDV == XSSimpleTypeDecl::DV_ANYATOMICTYPE) {
		return $XSSimpleTypeDefinition::FACET_NONE;
	}
	if (this->fPatternType != XSSimpleTypeDecl::SPECIAL_PATTERN_NONE) {
		return (int16_t)(this->fFacetsDefined | $XSSimpleTypeDefinition::FACET_PATTERN);
	}
	if (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER) {
		return (int16_t)((this->fFacetsDefined | $XSSimpleTypeDefinition::FACET_PATTERN) | $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS);
	}
	return this->fFacetsDefined;
}

bool XSSimpleTypeDecl::isFixedFacet(int16_t facetName) {
	if (((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)facetName)) != 0) {
		return true;
	}
	if (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER) {
		return facetName == $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS;
	}
	return false;
}

int16_t XSSimpleTypeDecl::getFixedFacets() {
	if (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER) {
		return (int16_t)(this->fFixedFacet | $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS);
	}
	return this->fFixedFacet;
}

$String* XSSimpleTypeDecl::getLexicalFacetValue(int16_t facetName) {
	switch (facetName) {
	case $XSSimpleTypeDefinition::FACET_LENGTH:
		{
			return (this->fLength == -1) ? ($String*)nullptr : $Integer::toString(this->fLength);
		}
	case $XSSimpleTypeDefinition::FACET_MINLENGTH:
		{
			return (this->fMinLength == -1) ? ($String*)nullptr : $Integer::toString(this->fMinLength);
		}
	case $XSSimpleTypeDefinition::FACET_MAXLENGTH:
		{
			return (this->fMaxLength == -1) ? ($String*)nullptr : $Integer::toString(this->fMaxLength);
		}
	case $XSSimpleTypeDefinition::FACET_WHITESPACE:
		{
			if (this->fValidationDV == XSSimpleTypeDecl::DV_ANYSIMPLETYPE || this->fValidationDV == XSSimpleTypeDecl::DV_ANYATOMICTYPE) {
				return nullptr;
			}
			return $nc(XSSimpleTypeDecl::WS_FACET_STRING)->get(this->fWhiteSpace);
		}
	case $XSSimpleTypeDefinition::FACET_MAXINCLUSIVE:
		{
			return (this->fMaxInclusive == nullptr) ? ($String*)nullptr : $nc($of(this->fMaxInclusive))->toString();
		}
	case $XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE:
		{
			return (this->fMaxExclusive == nullptr) ? ($String*)nullptr : $nc($of(this->fMaxExclusive))->toString();
		}
	case $XSSimpleTypeDefinition::FACET_MINEXCLUSIVE:
		{
			return (this->fMinExclusive == nullptr) ? ($String*)nullptr : $nc($of(this->fMinExclusive))->toString();
		}
	case $XSSimpleTypeDefinition::FACET_MININCLUSIVE:
		{
			return (this->fMinInclusive == nullptr) ? ($String*)nullptr : $nc($of(this->fMinInclusive))->toString();
		}
	case $XSSimpleTypeDefinition::FACET_TOTALDIGITS:
		{
			return (this->fTotalDigits == -1) ? ($String*)nullptr : $Integer::toString(this->fTotalDigits);
		}
	case $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS:
		{
			if (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER) {
				return "0"_s;
			}
			return (this->fFractionDigits == -1) ? ($String*)nullptr : $Integer::toString(this->fFractionDigits);
		}
	}
	return nullptr;
}

$StringList* XSSimpleTypeDecl::getLexicalEnumeration() {
	if (this->fLexicalEnumeration == nullptr) {
		if (this->fEnumeration == nullptr) {
			$init($StringListImpl);
			return $StringListImpl::EMPTY_LIST;
		}
		int32_t size = this->fEnumerationSize;
		$var($StringArray, strs, $new($StringArray, size));
		for (int32_t i = 0; i < size; ++i) {
			strs->set(i, $nc($nc(this->fEnumeration)->get(i))->normalizedValue);
		}
		$set(this, fLexicalEnumeration, $new($StringListImpl, strs, size));
	}
	return this->fLexicalEnumeration;
}

$ObjectList* XSSimpleTypeDecl::getActualEnumeration() {
	if (this->fActualEnumeration == nullptr) {
		$set(this, fActualEnumeration, $new($XSSimpleTypeDecl$2, this));
	}
	return this->fActualEnumeration;
}

$ObjectList* XSSimpleTypeDecl::getEnumerationItemTypeList() {
	if (this->fEnumerationItemTypeList == nullptr) {
		if (this->fEnumeration == nullptr) {
			return nullptr;
		}
		$set(this, fEnumerationItemTypeList, $new($XSSimpleTypeDecl$3, this));
	}
	return this->fEnumerationItemTypeList;
}

$ShortList* XSSimpleTypeDecl::getEnumerationTypeList() {
	if (this->fEnumerationTypeList == nullptr) {
		if (this->fEnumeration == nullptr) {
			$init($ShortListImpl);
			return $ShortListImpl::EMPTY_LIST;
		}
		$var($shorts, list, $new($shorts, this->fEnumerationSize));
		for (int32_t i = 0; i < this->fEnumerationSize; ++i) {
			list->set(i, $nc($nc(this->fEnumeration)->get(i))->actualValueType);
		}
		$set(this, fEnumerationTypeList, $new($ShortListImpl, list, this->fEnumerationSize));
	}
	return this->fEnumerationTypeList;
}

$StringList* XSSimpleTypeDecl::getLexicalPattern() {
	$useLocalCurrentObjectStackCache();
	if (this->fPatternType == XSSimpleTypeDecl::SPECIAL_PATTERN_NONE && this->fValidationDV != XSSimpleTypeDecl::DV_INTEGER && this->fPatternStr == nullptr) {
		$init($StringListImpl);
		return $StringListImpl::EMPTY_LIST;
	}
	if (this->fLexicalPattern == nullptr) {
		int32_t size = this->fPatternStr == nullptr ? 0 : $nc(this->fPatternStr)->size();
		$var($StringArray, strs, nullptr);
		if (this->fPatternType == XSSimpleTypeDecl::SPECIAL_PATTERN_NMTOKEN) {
			$assign(strs, $new($StringArray, size + 1));
			strs->set(size, "\\c+"_s);
		} else if (this->fPatternType == XSSimpleTypeDecl::SPECIAL_PATTERN_NAME) {
			$assign(strs, $new($StringArray, size + 1));
			strs->set(size, "\\i\\c*"_s);
		} else if (this->fPatternType == XSSimpleTypeDecl::SPECIAL_PATTERN_NCNAME) {
			$assign(strs, $new($StringArray, size + 2));
			strs->set(size, "\\i\\c*"_s);
			strs->set(size + 1, "[\\i-[:]][\\c-[:]]*"_s);
		} else if (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER) {
			$assign(strs, $new($StringArray, size + 1));
			strs->set(size, "[\\-+]?[0-9]+"_s);
		} else {
			$assign(strs, $new($StringArray, size));
		}
		for (int32_t i = 0; i < size; ++i) {
			$nc(strs)->set(i, $cast($String, $($nc(this->fPatternStr)->get(i))));
		}
		$set(this, fLexicalPattern, $new($StringListImpl, strs, $nc(strs)->length));
	}
	return this->fLexicalPattern;
}

$XSObjectList* XSSimpleTypeDecl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

void XSSimpleTypeDecl::calcFundamentalFacets() {
	setOrdered();
	setNumeric();
	setBounded();
	setCardinality();
}

void XSSimpleTypeDecl::setOrdered() {
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_ATOMIC) {
		this->fOrdered = $nc(this->fBase)->fOrdered;
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_LIST) {
		this->fOrdered = $XSSimpleTypeDefinition::ORDERED_FALSE;
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_UNION) {
		int32_t length = $nc(this->fMemberTypes)->length;
		if (length == 0) {
			this->fOrdered = $XSSimpleTypeDefinition::ORDERED_PARTIAL;
			return;
		}
		int16_t ancestorId = getPrimitiveDV($nc($nc(this->fMemberTypes)->get(0))->fValidationDV);
		bool commonAnc = ancestorId != XSSimpleTypeDecl::DV_ANYSIMPLETYPE;
		bool allFalse = $nc($nc(this->fMemberTypes)->get(0))->fOrdered == $XSSimpleTypeDefinition::ORDERED_FALSE;
		for (int32_t i = 1; i < $nc(this->fMemberTypes)->length && (commonAnc || allFalse); ++i) {
			if (commonAnc) {
				commonAnc = ancestorId == getPrimitiveDV($nc($nc(this->fMemberTypes)->get(i))->fValidationDV);
			}
			if (allFalse) {
				allFalse = $nc($nc(this->fMemberTypes)->get(i))->fOrdered == $XSSimpleTypeDefinition::ORDERED_FALSE;
			}
		}
		if (commonAnc) {
			this->fOrdered = $nc($nc(this->fMemberTypes)->get(0))->fOrdered;
		} else if (allFalse) {
			this->fOrdered = $XSSimpleTypeDefinition::ORDERED_FALSE;
		} else {
			this->fOrdered = $XSSimpleTypeDefinition::ORDERED_PARTIAL;
		}
	}
}

void XSSimpleTypeDecl::setNumeric() {
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_ATOMIC) {
		this->fNumeric = $nc(this->fBase)->fNumeric;
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_LIST) {
		this->fNumeric = false;
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_UNION) {
		$var($XSSimpleTypeArray, memberTypes, $fcast($XSSimpleTypeArray, this->fMemberTypes));
		for (int32_t i = 0; i < $nc(memberTypes)->length; ++i) {
			if (!$nc(memberTypes->get(i))->getNumeric()) {
				this->fNumeric = false;
				return;
			}
		}
		this->fNumeric = true;
	}
}

void XSSimpleTypeDecl::setBounded() {
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_ATOMIC) {
		if (((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0) || (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0)) && ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) || (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0))) {
			this->fBounded = true;
		} else {
			this->fBounded = false;
		}
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_LIST) {
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) || ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0))) {
			this->fBounded = true;
		} else {
			this->fBounded = false;
		}
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_UNION) {
		$var($XSSimpleTypeDeclArray, memberTypes, this->fMemberTypes);
		int16_t ancestorId = (int16_t)0;
		if ($nc(memberTypes)->length > 0) {
			ancestorId = getPrimitiveDV($nc(memberTypes->get(0))->fValidationDV);
		}
		for (int32_t i = 0; i < $nc(memberTypes)->length; ++i) {
			bool var$0 = !$nc(memberTypes->get(i))->getBounded();
			if (var$0 || (ancestorId != getPrimitiveDV($nc(memberTypes->get(i))->fValidationDV))) {
				this->fBounded = false;
				return;
			}
		}
		this->fBounded = true;
	}
}

bool XSSimpleTypeDecl::specialCardinalityCheck() {
	if (($nc(this->fBase)->fValidationDV == XSSimpleTypeDecl::DV_DATE) || ($nc(this->fBase)->fValidationDV == XSSimpleTypeDecl::DV_GYEARMONTH) || ($nc(this->fBase)->fValidationDV == XSSimpleTypeDecl::DV_GYEAR) || ($nc(this->fBase)->fValidationDV == XSSimpleTypeDecl::DV_GMONTHDAY) || ($nc(this->fBase)->fValidationDV == XSSimpleTypeDecl::DV_GDAY) || ($nc(this->fBase)->fValidationDV == XSSimpleTypeDecl::DV_GMONTH)) {
		return true;
	}
	return false;
}

void XSSimpleTypeDecl::setCardinality() {
	if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_ATOMIC) {
		if ($nc(this->fBase)->fFinite) {
			this->fFinite = true;
		} else if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) || (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0) || (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0)) {
			this->fFinite = true;
		} else if (((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0) || (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0)) && ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0) || (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0))) {
			if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0) || specialCardinalityCheck()) {
				this->fFinite = true;
			} else {
				this->fFinite = false;
			}
		} else {
			this->fFinite = false;
		}
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_LIST) {
		if ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0) || ((((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0) && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0))) {
			this->fFinite = true;
		} else {
			this->fFinite = false;
		}
	} else if (this->fVariety == $XSSimpleTypeDefinition::VARIETY_UNION) {
		$var($XSSimpleTypeArray, memberTypes, $fcast($XSSimpleTypeArray, this->fMemberTypes));
		for (int32_t i = 0; i < $nc(memberTypes)->length; ++i) {
			if (!($nc(memberTypes->get(i))->getFinite())) {
				this->fFinite = false;
				return;
			}
		}
		this->fFinite = true;
	}
}

int16_t XSSimpleTypeDecl::getPrimitiveDV(int16_t validationDV) {
	if (validationDV == XSSimpleTypeDecl::DV_ID || validationDV == XSSimpleTypeDecl::DV_IDREF || validationDV == XSSimpleTypeDecl::DV_ENTITY) {
		return XSSimpleTypeDecl::DV_STRING;
	} else if (validationDV == XSSimpleTypeDecl::DV_INTEGER) {
		return XSSimpleTypeDecl::DV_DECIMAL;
	} else {
		return validationDV;
	}
}

bool XSSimpleTypeDecl::derivedFromType($XSTypeDefinition* ancestor$renamed, int16_t derivation) {
	$useLocalCurrentObjectStackCache();
	$var($XSTypeDefinition, ancestor, ancestor$renamed);
	if (ancestor == nullptr) {
		return false;
	}
	while ($instanceOf($XSSimpleTypeDelegate, ancestor)) {
		$assign(ancestor, $nc(($cast($XSSimpleTypeDelegate, ancestor)))->type);
	}
	if ($nc(ancestor)->getBaseType() == ancestor) {
		return true;
	}
	$var($XSTypeDefinition, type, this);
	while (type != ancestor && !$equals(type, XSSimpleTypeDecl::fAnySimpleType)) {
		$assign(type, $nc(type)->getBaseType());
	}
	return type == ancestor;
}

bool XSSimpleTypeDecl::derivedFrom($String* ancestorNS, $String* ancestorName, int16_t derivation) {
	$useLocalCurrentObjectStackCache();
	if (ancestorName == nullptr) {
		return false;
	}
	bool var$0 = $nc(XSSimpleTypeDecl::URI_SCHEMAFORSCHEMA)->equals(ancestorNS);
	if (var$0 && $nc(XSSimpleTypeDecl::ANY_TYPE)->equals(ancestorName)) {
		return true;
	}
	$var($XSTypeDefinition, type, this);
	while (true) {
		bool var$1 = $nc(ancestorName)->equals($($nc(type)->getName()));
		if (var$1) {
			bool var$2 = (ancestorNS == nullptr && $nc(type)->getNamespace() == nullptr);
			var$1 = (var$2 || (ancestorNS != nullptr && ancestorNS->equals($($nc(type)->getNamespace()))));
		}
		if (!(!(var$1) && !$equals(type, XSSimpleTypeDecl::fAnySimpleType))) {
			break;
		}
		{
			$assign(type, $nc(type)->getBaseType());
		}
	}
	return !$equals(type, XSSimpleTypeDecl::fAnySimpleType);
}

bool XSSimpleTypeDecl::isDOMDerivedFrom($String* ancestorNS, $String* ancestorName, int32_t derivationMethod) {
	if (ancestorName == nullptr) {
		return false;
	}
	$init($SchemaSymbols);
	bool var$0 = $nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals(ancestorNS);
	if (var$0 && $nc($SchemaSymbols::ATTVAL_ANYTYPE)->equals(ancestorName) && ((((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_RESTRICTION)) != 0) || (derivationMethod == XSSimpleTypeDecl::DERIVATION_ANY))) {
		return true;
	}
	if (((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_RESTRICTION)) != 0) {
		if (isDerivedByRestriction(ancestorNS, ancestorName, this)) {
			return true;
		}
	}
	if (((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_LIST)) != 0) {
		if (isDerivedByList(ancestorNS, ancestorName, this)) {
			return true;
		}
	}
	if (((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_UNION)) != 0) {
		if (isDerivedByUnion(ancestorNS, ancestorName, this)) {
			return true;
		}
	}
	if ((((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_EXTENSION)) != 0) && ((((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_RESTRICTION)) == 0) && (((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_LIST)) == 0) && (((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_UNION)) == 0))) {
		return false;
	}
	if ((((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_EXTENSION)) == 0) && ((((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_RESTRICTION)) == 0) && (((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_LIST)) == 0) && (((int32_t)(derivationMethod & (uint32_t)XSSimpleTypeDecl::DERIVATION_UNION)) == 0))) {
		return isDerivedByAny(ancestorNS, ancestorName, this);
	}
	return false;
}

bool XSSimpleTypeDecl::isDerivedByAny($String* ancestorNS, $String* ancestorName, $XSTypeDefinition* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($XSTypeDefinition, type, type$renamed);
	bool derivedFrom = false;
	$var($XSTypeDefinition, oldType, nullptr);
	while (type != nullptr && type != oldType) {
		bool var$0 = ($nc(ancestorName)->equals($(type->getName())));
		if (var$0) {
			bool var$1 = (ancestorNS == nullptr && type->getNamespace() == nullptr);
			var$0 = (var$1 || (ancestorNS != nullptr && ancestorNS->equals($(type->getNamespace()))));
		}
		if (var$0) {
			derivedFrom = true;
			break;
		}
		if (isDerivedByRestriction(ancestorNS, ancestorName, type)) {
			return true;
		} else if (isDerivedByList(ancestorNS, ancestorName, type)) {
			return true;
		} else if (isDerivedByUnion(ancestorNS, ancestorName, type)) {
			return true;
		}
		$assign(oldType, type);
		bool var$2 = $nc(($cast(XSSimpleTypeDecl, type)))->getVariety() == $XSSimpleTypeDefinition::VARIETY_ABSENT;
		if (var$2 || $nc(($cast(XSSimpleTypeDecl, type)))->getVariety() == $XSSimpleTypeDefinition::VARIETY_ATOMIC) {
			$assign(type, type->getBaseType());
		} else if (($cast(XSSimpleTypeDecl, type))->getVariety() == $XSSimpleTypeDefinition::VARIETY_UNION) {
			for (int32_t i = 0; i < $nc($(($cast(XSSimpleTypeDecl, type))->getMemberTypes()))->getLength(); i++) {
				return isDerivedByAny(ancestorNS, ancestorName, $cast($XSTypeDefinition, $($nc($(($cast(XSSimpleTypeDecl, type))->getMemberTypes()))->item(i))));
			}
		} else if (($cast(XSSimpleTypeDecl, type))->getVariety() == $XSSimpleTypeDefinition::VARIETY_LIST) {
			$assign(type, ($cast(XSSimpleTypeDecl, type))->getItemType());
		}
	}
	return derivedFrom;
}

bool XSSimpleTypeDecl::isDerivedByRestriction($String* ancestorNS, $String* ancestorName, $XSTypeDefinition* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($XSTypeDefinition, type, type$renamed);
	$var($XSTypeDefinition, oldType, nullptr);
	while (type != nullptr && type != oldType) {
		bool var$0 = ($nc(ancestorName)->equals($(type->getName())));
		if (var$0) {
			bool var$1 = (ancestorNS != nullptr && ancestorNS->equals($(type->getNamespace())));
			var$0 = (var$1 || (type->getNamespace() == nullptr && ancestorNS == nullptr));
		}
		if (var$0) {
			return true;
		}
		$assign(oldType, type);
		$assign(type, type->getBaseType());
	}
	return false;
}

bool XSSimpleTypeDecl::isDerivedByList($String* ancestorNS, $String* ancestorName, $XSTypeDefinition* type) {
	if (type != nullptr && $nc(($cast($XSSimpleTypeDefinition, type)))->getVariety() == $XSSimpleTypeDefinition::VARIETY_LIST) {
		$var($XSTypeDefinition, itemType, ($cast($XSSimpleTypeDefinition, type))->getItemType());
		if (itemType != nullptr) {
			if (isDerivedByRestriction(ancestorNS, ancestorName, itemType)) {
				return true;
			}
		}
	}
	return false;
}

bool XSSimpleTypeDecl::isDerivedByUnion($String* ancestorNS, $String* ancestorName, $XSTypeDefinition* type) {
	$useLocalCurrentObjectStackCache();
	if (type != nullptr && $nc(($cast($XSSimpleTypeDefinition, type)))->getVariety() == $XSSimpleTypeDefinition::VARIETY_UNION) {
		$var($XSObjectList, memberTypes, ($cast($XSSimpleTypeDefinition, type))->getMemberTypes());
		for (int32_t i = 0; i < $nc(memberTypes)->getLength(); ++i) {
			if (memberTypes->item(i) != nullptr) {
				if (isDerivedByRestriction(ancestorNS, ancestorName, $cast($XSSimpleTypeDefinition, $(memberTypes->item(i))))) {
					return true;
				}
			}
		}
	}
	return false;
}

void XSSimpleTypeDecl::reset() {
	if (this->fIsImmutable) {
		return;
	}
	$set(this, fItemType, nullptr);
	$set(this, fMemberTypes, nullptr);
	$set(this, fTypeName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	this->fFinalSet = (int16_t)0;
	$set(this, fBase, nullptr);
	this->fVariety = (int16_t)-1;
	this->fValidationDV = (int16_t)-1;
	this->fFacetsDefined = (int16_t)0;
	this->fFixedFacet = (int16_t)0;
	this->fWhiteSpace = (int16_t)0;
	this->fLength = -1;
	this->fMinLength = -1;
	this->fMaxLength = -1;
	this->fTotalDigits = -1;
	this->fFractionDigits = -1;
	$set(this, fPattern, nullptr);
	$set(this, fPatternStr, nullptr);
	$set(this, fEnumeration, nullptr);
	$set(this, fLexicalPattern, nullptr);
	$set(this, fLexicalEnumeration, nullptr);
	$set(this, fActualEnumeration, nullptr);
	$set(this, fEnumerationTypeList, nullptr);
	$set(this, fEnumerationItemTypeList, nullptr);
	$set(this, fMaxInclusive, nullptr);
	$set(this, fMaxExclusive, nullptr);
	$set(this, fMinExclusive, nullptr);
	$set(this, fMinInclusive, nullptr);
	$set(this, lengthAnnotation, nullptr);
	$set(this, minLengthAnnotation, nullptr);
	$set(this, maxLengthAnnotation, nullptr);
	$set(this, whiteSpaceAnnotation, nullptr);
	$set(this, totalDigitsAnnotation, nullptr);
	$set(this, fractionDigitsAnnotation, nullptr);
	$set(this, patternAnnotations, nullptr);
	$set(this, enumerationAnnotations, nullptr);
	$set(this, maxInclusiveAnnotation, nullptr);
	$set(this, maxExclusiveAnnotation, nullptr);
	$set(this, minInclusiveAnnotation, nullptr);
	$set(this, minExclusiveAnnotation, nullptr);
	this->fPatternType = XSSimpleTypeDecl::SPECIAL_PATTERN_NONE;
	$set(this, fAnnotations, nullptr);
	$set(this, fFacets, nullptr);
}

$XSNamespaceItem* XSSimpleTypeDecl::getNamespaceItem() {
	return this->fNamespaceItem;
}

void XSSimpleTypeDecl::setNamespaceItem($XSNamespaceItem* namespaceItem) {
	$set(this, fNamespaceItem, namespaceItem);
}

$String* XSSimpleTypeDecl::toString() {
	return $str({this->fTargetNamespace, ","_s, this->fTypeName});
}

$XSObjectList* XSSimpleTypeDecl::getFacets() {
	$useLocalCurrentObjectStackCache();
	if (this->fFacets == nullptr && (this->fFacetsDefined != 0 || this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER)) {
		$var($XSSimpleTypeDecl$XSFacetImplArray, facets, $new($XSSimpleTypeDecl$XSFacetImplArray, 10));
		int32_t count = 0;
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) != 0 && this->fValidationDV != XSSimpleTypeDecl::DV_ANYSIMPLETYPE && this->fValidationDV != XSSimpleTypeDecl::DV_ANYATOMICTYPE) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_WHITESPACE, $nc(XSSimpleTypeDecl::WS_FACET_STRING)->get(this->fWhiteSpace), 0, nullptr, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_WHITESPACE)) != 0, this->whiteSpaceAnnotation));
			++count;
		}
		if (this->fLength != -1) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_LENGTH, $($Integer::toString(this->fLength)), this->fLength, nullptr, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_LENGTH)) != 0, this->lengthAnnotation));
			++count;
		}
		if (this->fMinLength != -1) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_MINLENGTH, $($Integer::toString(this->fMinLength)), this->fMinLength, nullptr, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINLENGTH)) != 0, this->minLengthAnnotation));
			++count;
		}
		if (this->fMaxLength != -1) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_MAXLENGTH, $($Integer::toString(this->fMaxLength)), this->fMaxLength, nullptr, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXLENGTH)) != 0, this->maxLengthAnnotation));
			++count;
		}
		if (this->fTotalDigits != -1) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_TOTALDIGITS, $($Integer::toString(this->fTotalDigits)), this->fTotalDigits, nullptr, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_TOTALDIGITS)) != 0, this->totalDigitsAnnotation));
			++count;
		}
		if (this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS, "0"_s, 0, nullptr, true, this->fractionDigitsAnnotation));
			++count;
		} else if (this->fFractionDigits != -1) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_FRACTIONDIGITS, $($Integer::toString(this->fFractionDigits)), this->fFractionDigits, nullptr, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_FRACTIONDIGITS)) != 0, this->fractionDigitsAnnotation));
			++count;
		}
		if (this->fMaxInclusive != nullptr) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_MAXINCLUSIVE, $($nc($of(this->fMaxInclusive))->toString()), 0, this->fMaxInclusive, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXINCLUSIVE)) != 0, this->maxInclusiveAnnotation));
			++count;
		}
		if (this->fMaxExclusive != nullptr) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE, $($nc($of(this->fMaxExclusive))->toString()), 0, this->fMaxExclusive, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MAXEXCLUSIVE)) != 0, this->maxExclusiveAnnotation));
			++count;
		}
		if (this->fMinExclusive != nullptr) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_MINEXCLUSIVE, $($nc($of(this->fMinExclusive))->toString()), 0, this->fMinExclusive, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MINEXCLUSIVE)) != 0, this->minExclusiveAnnotation));
			++count;
		}
		if (this->fMinInclusive != nullptr) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSFacetImpl, $XSSimpleTypeDefinition::FACET_MININCLUSIVE, $($nc($of(this->fMinInclusive))->toString()), 0, this->fMinInclusive, ((int32_t)(this->fFixedFacet & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_MININCLUSIVE)) != 0, this->minInclusiveAnnotation));
			++count;
		}
		$init($XSObjectListImpl);
		$set(this, fFacets, (count > 0) ? $new($XSObjectListImpl, $fcast($XSObjectArray, facets), count) : $XSObjectListImpl::EMPTY_LIST);
	}
	$init($XSObjectListImpl);
	return (this->fFacets != nullptr) ? static_cast<$XSObjectList*>(this->fFacets) : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$XSObject* XSSimpleTypeDecl::getFacet(int32_t facetType) {
	$useLocalCurrentObjectStackCache();
	if (facetType == $XSSimpleTypeDefinition::FACET_ENUMERATION || facetType == $XSSimpleTypeDefinition::FACET_PATTERN) {
		$var($XSObjectList, list, getMultiValueFacets());
		for (int32_t i = 0; i < $nc(list)->getLength(); ++i) {
			$var($XSMultiValueFacet, f, $cast($XSMultiValueFacet, list->item(i)));
			if ($nc(f)->getFacetKind() == facetType) {
				return f;
			}
		}
	} else {
		$var($XSObjectList, list, getFacets());
		for (int32_t i = 0; i < $nc(list)->getLength(); ++i) {
			$var($XSFacet, f, $cast($XSFacet, list->item(i)));
			if ($nc(f)->getFacetKind() == facetType) {
				return f;
			}
		}
	}
	return nullptr;
}

$XSObjectList* XSSimpleTypeDecl::getMultiValueFacets() {
	$useLocalCurrentObjectStackCache();
	if (this->fMultiValueFacets == nullptr && (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_ENUMERATION)) != 0 || ((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_PATTERN)) != 0 || this->fPatternType != XSSimpleTypeDecl::SPECIAL_PATTERN_NONE || this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER)) {
		$var($XSSimpleTypeDecl$XSMVFacetImplArray, facets, $new($XSSimpleTypeDecl$XSMVFacetImplArray, 2));
		int32_t count = 0;
		if (((int32_t)(this->fFacetsDefined & (uint32_t)(int32_t)$XSSimpleTypeDefinition::FACET_PATTERN)) != 0 || this->fPatternType != XSSimpleTypeDecl::SPECIAL_PATTERN_NONE || this->fValidationDV == XSSimpleTypeDecl::DV_INTEGER) {
			facets->set(count, $$new($XSSimpleTypeDecl$XSMVFacetImpl, $XSSimpleTypeDefinition::FACET_PATTERN, $(this->getLexicalPattern()), nullptr, this->patternAnnotations));
			++count;
		}
		if (this->fEnumeration != nullptr) {
			int16_t var$0 = $XSSimpleTypeDefinition::FACET_ENUMERATION;
			$var($StringList, var$1, this->getLexicalEnumeration());
			facets->set(count, $$new($XSSimpleTypeDecl$XSMVFacetImpl, var$0, var$1, $$new($ObjectListImpl, this->fEnumeration, this->fEnumerationSize), this->enumerationAnnotations));
			++count;
		}
		$set(this, fMultiValueFacets, $new($XSObjectListImpl, $fcast($XSObjectArray, facets), count));
	}
	$init($XSObjectListImpl);
	return (this->fMultiValueFacets != nullptr) ? static_cast<$XSObjectList*>(this->fMultiValueFacets) : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$Object* XSSimpleTypeDecl::getMinInclusiveValue() {
	return $of(this->fMinInclusive);
}

$Object* XSSimpleTypeDecl::getMinExclusiveValue() {
	return $of(this->fMinExclusive);
}

$Object* XSSimpleTypeDecl::getMaxInclusiveValue() {
	return $of(this->fMaxInclusive);
}

$Object* XSSimpleTypeDecl::getMaxExclusiveValue() {
	return $of(this->fMaxExclusive);
}

void XSSimpleTypeDecl::setAnonymous(bool anon) {
	this->fAnonymous = anon;
}

$String* XSSimpleTypeDecl::getTypeNamespace() {
	return getNamespace();
}

bool XSSimpleTypeDecl::isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) {
	return isDOMDerivedFrom(typeNamespaceArg, typeNameArg, derivationMethod);
}

int16_t XSSimpleTypeDecl::convertToPrimitiveKind(int16_t valueType) {
	if (valueType <= $XSConstants::NOTATION_DT) {
		return valueType;
	}
	if (valueType <= $XSConstants::ENTITY_DT) {
		return $XSConstants::STRING_DT;
	}
	if (valueType <= $XSConstants::POSITIVEINTEGER_DT) {
		return $XSConstants::DECIMAL_DT;
	}
	return valueType;
}

void XSSimpleTypeDecl::appendEnumString($StringBuffer* sb) {
	$nc(sb)->append(u'[');
	for (int32_t i = 0; i < this->fEnumerationSize; ++i) {
		if (i != 0) {
			sb->append(", "_s);
		}
		sb->append($nc($nc(this->fEnumeration)->get(i))->actualValue);
	}
	sb->append(u']');
}

void clinit$XSSimpleTypeDecl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XSSimpleTypeDecl::URI_SCHEMAFORSCHEMA, "http://www.w3.org/2001/XMLSchema"_s);
	$assignStatic(XSSimpleTypeDecl::ANY_TYPE, "anyType"_s);
	$assignStatic(XSSimpleTypeDecl::gDVs, $new($TypeValidatorArray, {
		static_cast<$TypeValidator*>($$new($AnySimpleDV)),
		static_cast<$TypeValidator*>($$new($StringDV)),
		static_cast<$TypeValidator*>($$new($BooleanDV)),
		static_cast<$TypeValidator*>($$new($DecimalDV)),
		static_cast<$TypeValidator*>($$new($FloatDV)),
		static_cast<$TypeValidator*>($$new($DoubleDV)),
		static_cast<$TypeValidator*>($$new($DurationDV)),
		static_cast<$TypeValidator*>($$new($DateTimeDV)),
		static_cast<$TypeValidator*>($$new($TimeDV)),
		static_cast<$TypeValidator*>($$new($DateDV)),
		static_cast<$TypeValidator*>($$new($YearMonthDV)),
		static_cast<$TypeValidator*>($$new($YearDV)),
		static_cast<$TypeValidator*>($$new($MonthDayDV)),
		static_cast<$TypeValidator*>($$new($DayDV)),
		static_cast<$TypeValidator*>($$new($MonthDV)),
		static_cast<$TypeValidator*>($$new($HexBinaryDV)),
		static_cast<$TypeValidator*>($$new($Base64BinaryDV)),
		static_cast<$TypeValidator*>($$new($AnyURIDV)),
		static_cast<$TypeValidator*>($$new($QNameDV)),
		static_cast<$TypeValidator*>($$new($PrecisionDecimalDV)),
		static_cast<$TypeValidator*>($$new($QNameDV)),
		static_cast<$TypeValidator*>($$new($IDDV)),
		static_cast<$TypeValidator*>($$new($IDREFDV)),
		static_cast<$TypeValidator*>($$new($EntityDV)),
		static_cast<$TypeValidator*>($$new($IntegerDV)),
		static_cast<$TypeValidator*>($$new($ListDV)),
		static_cast<$TypeValidator*>($$new($UnionDV)),
		static_cast<$TypeValidator*>($$new($YearMonthDurationDV)),
		static_cast<$TypeValidator*>($$new($DayTimeDurationDV)),
		static_cast<$TypeValidator*>($$new($AnyAtomicDV))
	}));
	$assignStatic(XSSimpleTypeDecl::fDVNormalizeType, $new($shorts, {
		XSSimpleTypeDecl::NORMALIZE_NONE,
		XSSimpleTypeDecl::NORMALIZE_FULL,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_NONE,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_FULL,
		XSSimpleTypeDecl::NORMALIZE_NONE,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_TRIM,
		XSSimpleTypeDecl::NORMALIZE_NONE
	}));
	$assignStatic(XSSimpleTypeDecl::SPECIAL_PATTERN_STRING, $new($StringArray, {
		"NONE"_s,
		"NMTOKEN"_s,
		"Name"_s,
		"NCName"_s
	}));
	$assignStatic(XSSimpleTypeDecl::WS_FACET_STRING, $new($StringArray, {
		"preserve"_s,
		"replace"_s,
		"collapse"_s
	}));
	$assignStatic(XSSimpleTypeDecl::fEmptyContext, $new($XSSimpleTypeDecl$1));
	$assignStatic(XSSimpleTypeDecl::fAnySimpleType, $new(XSSimpleTypeDecl, nullptr, "anySimpleType"_s, XSSimpleTypeDecl::DV_ANYSIMPLETYPE, $XSSimpleTypeDefinition::ORDERED_FALSE, false, true, false, true, $XSConstants::ANYSIMPLETYPE_DT));
	$assignStatic(XSSimpleTypeDecl::fAnyAtomicType, $new(XSSimpleTypeDecl, XSSimpleTypeDecl::fAnySimpleType, "anyAtomicType"_s, XSSimpleTypeDecl::DV_ANYATOMICTYPE, $XSSimpleTypeDefinition::ORDERED_FALSE, false, true, false, true, XSSimpleTypeDecl::ANYATOMICTYPE_DT));
	$assignStatic(XSSimpleTypeDecl::fDummyContext, $new($XSSimpleTypeDecl$4));
}

XSSimpleTypeDecl::XSSimpleTypeDecl() {
}

$Class* XSSimpleTypeDecl::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDecl, name, initialize, &_XSSimpleTypeDecl_ClassInfo_, clinit$XSSimpleTypeDecl, allocate$XSSimpleTypeDecl);
	return class$;
}

$Class* XSSimpleTypeDecl::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com