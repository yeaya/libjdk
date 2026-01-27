#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl
//$ extends com.sun.org.apache.xerces.internal.impl.dv.XSSimpleType
//$ implements org.w3c.dom.TypeInfo

#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <java/lang/Array.h>
#include <org/w3c/dom/TypeInfo.h>

#pragma push_macro("ANYATOMICTYPE_DT")
#undef ANYATOMICTYPE_DT
#pragma push_macro("ANY_TYPE")
#undef ANY_TYPE
#pragma push_macro("DAYTIMEDURATION_DT")
#undef DAYTIMEDURATION_DT
#pragma push_macro("DERIVATION_ANY")
#undef DERIVATION_ANY
#pragma push_macro("DERIVATION_EXTENSION")
#undef DERIVATION_EXTENSION
#pragma push_macro("DERIVATION_LIST")
#undef DERIVATION_LIST
#pragma push_macro("DERIVATION_RESTRICTION")
#undef DERIVATION_RESTRICTION
#pragma push_macro("DERIVATION_UNION")
#undef DERIVATION_UNION
#pragma push_macro("DV_ANYATOMICTYPE")
#undef DV_ANYATOMICTYPE
#pragma push_macro("DV_ANYSIMPLETYPE")
#undef DV_ANYSIMPLETYPE
#pragma push_macro("DV_ANYURI")
#undef DV_ANYURI
#pragma push_macro("DV_BASE64BINARY")
#undef DV_BASE64BINARY
#pragma push_macro("DV_BOOLEAN")
#undef DV_BOOLEAN
#pragma push_macro("DV_DATE")
#undef DV_DATE
#pragma push_macro("DV_DATETIME")
#undef DV_DATETIME
#pragma push_macro("DV_DAYTIMEDURATION")
#undef DV_DAYTIMEDURATION
#pragma push_macro("DV_DECIMAL")
#undef DV_DECIMAL
#pragma push_macro("DV_DOUBLE")
#undef DV_DOUBLE
#pragma push_macro("DV_DURATION")
#undef DV_DURATION
#pragma push_macro("DV_ENTITY")
#undef DV_ENTITY
#pragma push_macro("DV_FLOAT")
#undef DV_FLOAT
#pragma push_macro("DV_GDAY")
#undef DV_GDAY
#pragma push_macro("DV_GMONTH")
#undef DV_GMONTH
#pragma push_macro("DV_GMONTHDAY")
#undef DV_GMONTHDAY
#pragma push_macro("DV_GYEAR")
#undef DV_GYEAR
#pragma push_macro("DV_GYEARMONTH")
#undef DV_GYEARMONTH
#pragma push_macro("DV_HEXBINARY")
#undef DV_HEXBINARY
#pragma push_macro("DV_ID")
#undef DV_ID
#pragma push_macro("DV_IDREF")
#undef DV_IDREF
#pragma push_macro("DV_INTEGER")
#undef DV_INTEGER
#pragma push_macro("DV_LIST")
#undef DV_LIST
#pragma push_macro("DV_NOTATION")
#undef DV_NOTATION
#pragma push_macro("DV_PRECISIONDECIMAL")
#undef DV_PRECISIONDECIMAL
#pragma push_macro("DV_QNAME")
#undef DV_QNAME
#pragma push_macro("DV_STRING")
#undef DV_STRING
#pragma push_macro("DV_TIME")
#undef DV_TIME
#pragma push_macro("DV_UNION")
#undef DV_UNION
#pragma push_macro("DV_YEARMONTHDURATION")
#undef DV_YEARMONTHDURATION
#pragma push_macro("NORMALIZE_FULL")
#undef NORMALIZE_FULL
#pragma push_macro("NORMALIZE_NONE")
#undef NORMALIZE_NONE
#pragma push_macro("NORMALIZE_TRIM")
#undef NORMALIZE_TRIM
#pragma push_macro("PRECISIONDECIMAL_DT")
#undef PRECISIONDECIMAL_DT
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
#pragma push_macro("SPECIAL_PATTERN_NAME")
#undef SPECIAL_PATTERN_NAME
#pragma push_macro("SPECIAL_PATTERN_NCNAME")
#undef SPECIAL_PATTERN_NCNAME
#pragma push_macro("SPECIAL_PATTERN_NMTOKEN")
#undef SPECIAL_PATTERN_NMTOKEN
#pragma push_macro("SPECIAL_PATTERN_NONE")
#undef SPECIAL_PATTERN_NONE
#pragma push_macro("SPECIAL_PATTERN_STRING")
#undef SPECIAL_PATTERN_STRING
#pragma push_macro("URI_SCHEMAFORSCHEMA")
#undef URI_SCHEMAFORSCHEMA
#pragma push_macro("WS_FACET_STRING")
#undef WS_FACET_STRING
#pragma push_macro("YEARMONTHDURATION_DT")
#undef YEARMONTHDURATION_DT

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
								namespace xs {
									class TypeValidator;
								}
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
							namespace xs {
								namespace util {
									class XSObjectListImpl;
								}
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
						namespace xs {
							class ShortList;
							class StringList;
							class XSAnnotation;
							class XSNamespaceItem;
							class XSObject;
							class XSObjectList;
							class XSSimpleTypeDefinition;
							class XSTypeDefinition;
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
						namespace xs {
							namespace datatypes {
								class ObjectList;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class List;
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

class XSSimpleTypeDecl : public ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType, public ::org::w3c::dom::TypeInfo {
	$class(XSSimpleTypeDecl, 0, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType, ::org::w3c::dom::TypeInfo)
public:
	XSSimpleTypeDecl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* base, $String* name, int16_t validateDV, int16_t ordered, bool bounded, bool finite, bool numeric, bool isImmutable, int16_t builtInKind);
	void init$(::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* base, $String* name, $String* uri, int16_t finalSet, bool isImmutable, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations, int16_t builtInKind);
	void init$(::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* base, $String* name, $String* uri, int16_t finalSet, bool isImmutable, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations);
	void init$($String* name, $String* uri, int16_t finalSet, ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* itemType, bool isImmutable, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations);
	void init$($String* name, $String* uri, int16_t finalSet, $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl>* memberTypes, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations);
	void appendEnumString(::java::lang::StringBuffer* sb);
	virtual void applyFacets(::com::sun::org::apache::xerces::internal::impl::dv::XSFacets* facets, int16_t presentFacet, int16_t fixedFacet, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual void applyFacets(::com::sun::org::apache::xerces::internal::impl::dv::XSFacets* facets, int16_t presentFacet, int16_t fixedFacet, int16_t patternType, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context);
	virtual void applyFacets1(::com::sun::org::apache::xerces::internal::impl::dv::XSFacets* facets, int16_t presentFacet, int16_t fixedFacet);
	virtual void applyFacets1(::com::sun::org::apache::xerces::internal::impl::dv::XSFacets* facets, int16_t presentFacet, int16_t fixedFacet, int16_t patternType);
	void calcFundamentalFacets();
	void checkExtraRules(::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo);
	void checkFacets(::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo);
	int16_t convertToPrimitiveKind(int16_t valueType);
	virtual bool derivedFrom($String* ancestorNS, $String* ancestorName, int16_t derivation) override;
	virtual bool derivedFromType(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* ancestor, int16_t derivation) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* getActualEnumValue($String* lexical, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* ctx, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* info);
	virtual ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList* getActualEnumeration();
	$Object* getActualValue(Object$* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo, bool needNormalize);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual bool getAnonymous() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getBaseType() override;
	virtual bool getBounded() override;
	virtual int16_t getBuiltInKind() override;
	virtual int16_t getDefinedFacets() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList* getEnumerationItemTypeList();
	virtual ::com::sun::org::apache::xerces::internal::xs::ShortList* getEnumerationTypeList();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* getFacet(int32_t facetType) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getFacets() override;
	virtual int16_t getFinal() override;
	virtual bool getFinite() override;
	virtual int16_t getFixedFacets() override;
	static $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator>* getGDVs();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getItemType() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getLexicalEnumeration() override;
	virtual $String* getLexicalFacetValue(int16_t facetName) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getLexicalPattern() override;
	virtual $Object* getMaxExclusiveValue();
	virtual $Object* getMaxInclusiveValue();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getMemberTypes() override;
	virtual $Object* getMinExclusiveValue();
	virtual $Object* getMinInclusiveValue();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getMultiValueFacets() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual bool getNumeric() override;
	virtual int16_t getOrdered() override;
	int16_t getPrimitiveDV(int16_t validationDV);
	virtual int16_t getPrimitiveKind() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getPrimitiveType() override;
	virtual int16_t getType() override;
	virtual int16_t getTypeCategory() override;
	virtual $String* getTypeName() override;
	virtual $String* getTypeNamespace() override;
	virtual int16_t getVariety() override;
	virtual int16_t getWhitespace() override;
	virtual bool isDOMDerivedFrom($String* ancestorNS, $String* ancestorName, int32_t derivationMethod);
	virtual bool isDefinedFacet(int16_t facetName) override;
	bool isDerivedByAny($String* ancestorNS, $String* ancestorName, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type);
	bool isDerivedByList($String* ancestorNS, $String* ancestorName, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type);
	bool isDerivedByRestriction($String* ancestorNS, $String* ancestorName, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type);
	bool isDerivedByUnion($String* ancestorNS, $String* ancestorName, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type);
	virtual bool isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) override;
	virtual bool isEqual(Object$* value1, Object$* value2) override;
	virtual bool isFinal(int16_t derivation) override;
	virtual bool isFixedFacet(int16_t facetName) override;
	virtual bool isIDType() override;
	virtual bool isIdentical(Object$* value1, Object$* value2);
	static $String* normalize($String* content, int16_t ws);
	virtual $String* normalize(Object$* content, int16_t ws);
	virtual void reportError($String* key, $ObjectArray* args);
	virtual void reset();
	virtual void setAnonymous(bool anon);
	void setBounded();
	void setCardinality();
	virtual void setDVs($Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator>* dvs);
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* setListValues($String* name, $String* uri, int16_t finalSet, ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* itemType, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations);
	virtual void setNamespaceItem(::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* namespaceItem);
	void setNumeric();
	void setOrdered();
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* setRestrictionValues(::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* base, $String* name, $String* uri, int16_t finalSet, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations);
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* setUnionValues($String* name, $String* uri, int16_t finalSet, $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl>* memberTypes, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations);
	bool specialCardinalityCheck();
	virtual $String* toString() override;
	virtual $Object* validate($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo) override;
	virtual $Object* validate(Object$* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo) override;
	virtual void validate(::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validateWithInfo($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context, ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo* validatedInfo);
	$String* whiteSpaceValue(int16_t ws);
	static const int16_t DV_STRING = PRIMITIVE_STRING;
	static const int16_t DV_BOOLEAN = PRIMITIVE_BOOLEAN;
	static const int16_t DV_DECIMAL = PRIMITIVE_DECIMAL;
	static const int16_t DV_FLOAT = PRIMITIVE_FLOAT;
	static const int16_t DV_DOUBLE = PRIMITIVE_DOUBLE;
	static const int16_t DV_DURATION = PRIMITIVE_DURATION;
	static const int16_t DV_DATETIME = PRIMITIVE_DATETIME;
	static const int16_t DV_TIME = PRIMITIVE_TIME;
	static const int16_t DV_DATE = PRIMITIVE_DATE;
	static const int16_t DV_GYEARMONTH = PRIMITIVE_GYEARMONTH;
	static const int16_t DV_GYEAR = PRIMITIVE_GYEAR;
	static const int16_t DV_GMONTHDAY = PRIMITIVE_GMONTHDAY;
	static const int16_t DV_GDAY = PRIMITIVE_GDAY;
	static const int16_t DV_GMONTH = PRIMITIVE_GMONTH;
	static const int16_t DV_HEXBINARY = PRIMITIVE_HEXBINARY;
	static const int16_t DV_BASE64BINARY = PRIMITIVE_BASE64BINARY;
	static const int16_t DV_ANYURI = PRIMITIVE_ANYURI;
	static const int16_t DV_QNAME = PRIMITIVE_QNAME;
	static const int16_t DV_PRECISIONDECIMAL = PRIMITIVE_PRECISIONDECIMAL;
	static const int16_t DV_NOTATION = PRIMITIVE_NOTATION;
	static const int16_t DV_ANYSIMPLETYPE = 0;
	static const int16_t DV_ID = 21; // DV_NOTATION + 1
	static const int16_t DV_IDREF = 22; // DV_NOTATION + 2
	static const int16_t DV_ENTITY = 23; // DV_NOTATION + 3
	static const int16_t DV_INTEGER = 24; // DV_NOTATION + 4
	static const int16_t DV_LIST = 25; // DV_NOTATION + 5
	static const int16_t DV_UNION = 26; // DV_NOTATION + 6
	static const int16_t DV_YEARMONTHDURATION = 27; // DV_NOTATION + 7
	static const int16_t DV_DAYTIMEDURATION = 28; // DV_NOTATION + 8
	static const int16_t DV_ANYATOMICTYPE = 29; // DV_NOTATION + 9
	static $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator>* gDVs;
	static const int16_t NORMALIZE_NONE = 0;
	static const int16_t NORMALIZE_TRIM = 1;
	static const int16_t NORMALIZE_FULL = 2;
	static $shorts* fDVNormalizeType;
	static const int16_t SPECIAL_PATTERN_NONE = 0;
	static const int16_t SPECIAL_PATTERN_NMTOKEN = 1;
	static const int16_t SPECIAL_PATTERN_NAME = 2;
	static const int16_t SPECIAL_PATTERN_NCNAME = 3;
	static $StringArray* SPECIAL_PATTERN_STRING;
	static $StringArray* WS_FACET_STRING;
	static $String* URI_SCHEMAFORSCHEMA;
	static $String* ANY_TYPE;
	static const int16_t YEARMONTHDURATION_DT = 46;
	static const int16_t DAYTIMEDURATION_DT = 47;
	static const int16_t PRECISIONDECIMAL_DT = 48;
	static const int16_t ANYATOMICTYPE_DT = 49;
	static const int32_t DERIVATION_ANY = 0;
	static const int32_t DERIVATION_RESTRICTION = 1;
	static const int32_t DERIVATION_EXTENSION = 2;
	static const int32_t DERIVATION_UNION = 4;
	static const int32_t DERIVATION_LIST = 8;
	static ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* fEmptyContext;
	$Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator>* fDVs = nullptr;
	bool fIsImmutable = false;
	::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* fItemType = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl>* fMemberTypes = nullptr;
	int16_t fBuiltInKind = 0;
	$String* fTypeName = nullptr;
	$String* fTargetNamespace = nullptr;
	int16_t fFinalSet = 0;
	::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* fBase = nullptr;
	int16_t fVariety = 0;
	int16_t fValidationDV = 0;
	int16_t fFacetsDefined = 0;
	int16_t fFixedFacet = 0;
	int16_t fWhiteSpace = 0;
	int32_t fLength = 0;
	int32_t fMinLength = 0;
	int32_t fMaxLength = 0;
	int32_t fTotalDigits = 0;
	int32_t fFractionDigits = 0;
	::java::util::List* fPattern = nullptr;
	::java::util::List* fPatternStr = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo>* fEnumeration = nullptr;
	int32_t fEnumerationSize = 0;
	::com::sun::org::apache::xerces::internal::xs::ShortList* fEnumerationTypeList = nullptr;
	::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList* fEnumerationItemTypeList = nullptr;
	::com::sun::org::apache::xerces::internal::xs::StringList* fLexicalPattern = nullptr;
	::com::sun::org::apache::xerces::internal::xs::StringList* fLexicalEnumeration = nullptr;
	::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList* fActualEnumeration = nullptr;
	$Object* fMaxInclusive = nullptr;
	$Object* fMaxExclusive = nullptr;
	$Object* fMinExclusive = nullptr;
	$Object* fMinInclusive = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* lengthAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* minLengthAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* maxLengthAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* whiteSpaceAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* totalDigitsAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* fractionDigitsAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* patternAnnotations = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* enumerationAnnotations = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* maxInclusiveAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* maxExclusiveAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* minInclusiveAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSAnnotation* minExclusiveAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* fFacets = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* fMultiValueFacets = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* fAnnotations = nullptr;
	int16_t fPatternType = 0;
	int16_t fOrdered = 0;
	bool fFinite = false;
	bool fBounded = false;
	bool fNumeric = false;
	::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* fNamespaceItem = nullptr;
	static ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* fAnySimpleType;
	static ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* fAnyAtomicType;
	static ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* fDummyContext;
	bool fAnonymous = false;
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

#pragma pop_macro("ANYATOMICTYPE_DT")
#pragma pop_macro("ANY_TYPE")
#pragma pop_macro("DAYTIMEDURATION_DT")
#pragma pop_macro("DERIVATION_ANY")
#pragma pop_macro("DERIVATION_EXTENSION")
#pragma pop_macro("DERIVATION_LIST")
#pragma pop_macro("DERIVATION_RESTRICTION")
#pragma pop_macro("DERIVATION_UNION")
#pragma pop_macro("DV_ANYATOMICTYPE")
#pragma pop_macro("DV_ANYSIMPLETYPE")
#pragma pop_macro("DV_ANYURI")
#pragma pop_macro("DV_BASE64BINARY")
#pragma pop_macro("DV_BOOLEAN")
#pragma pop_macro("DV_DATE")
#pragma pop_macro("DV_DATETIME")
#pragma pop_macro("DV_DAYTIMEDURATION")
#pragma pop_macro("DV_DECIMAL")
#pragma pop_macro("DV_DOUBLE")
#pragma pop_macro("DV_DURATION")
#pragma pop_macro("DV_ENTITY")
#pragma pop_macro("DV_FLOAT")
#pragma pop_macro("DV_GDAY")
#pragma pop_macro("DV_GMONTH")
#pragma pop_macro("DV_GMONTHDAY")
#pragma pop_macro("DV_GYEAR")
#pragma pop_macro("DV_GYEARMONTH")
#pragma pop_macro("DV_HEXBINARY")
#pragma pop_macro("DV_ID")
#pragma pop_macro("DV_IDREF")
#pragma pop_macro("DV_INTEGER")
#pragma pop_macro("DV_LIST")
#pragma pop_macro("DV_NOTATION")
#pragma pop_macro("DV_PRECISIONDECIMAL")
#pragma pop_macro("DV_QNAME")
#pragma pop_macro("DV_STRING")
#pragma pop_macro("DV_TIME")
#pragma pop_macro("DV_UNION")
#pragma pop_macro("DV_YEARMONTHDURATION")
#pragma pop_macro("NORMALIZE_FULL")
#pragma pop_macro("NORMALIZE_NONE")
#pragma pop_macro("NORMALIZE_TRIM")
#pragma pop_macro("PRECISIONDECIMAL_DT")
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
#pragma pop_macro("SPECIAL_PATTERN_NAME")
#pragma pop_macro("SPECIAL_PATTERN_NCNAME")
#pragma pop_macro("SPECIAL_PATTERN_NMTOKEN")
#pragma pop_macro("SPECIAL_PATTERN_NONE")
#pragma pop_macro("SPECIAL_PATTERN_STRING")
#pragma pop_macro("URI_SCHEMAFORSCHEMA")
#pragma pop_macro("WS_FACET_STRING")
#pragma pop_macro("YEARMONTHDURATION_DT")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl_h_