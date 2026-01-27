#ifndef _com_sun_org_apache_xerces_internal_xs_XSSimpleTypeDefinition_h_
#define _com_sun_org_apache_xerces_internal_xs_XSSimpleTypeDefinition_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSSimpleTypeDefinition
//$ extends com.sun.org.apache.xerces.internal.xs.XSTypeDefinition

#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>

#pragma push_macro("FACET_ENUMERATION")
#undef FACET_ENUMERATION
#pragma push_macro("FACET_FRACTIONDIGITS")
#undef FACET_FRACTIONDIGITS
#pragma push_macro("FACET_LENGTH")
#undef FACET_LENGTH
#pragma push_macro("FACET_MAXEXCLUSIVE")
#undef FACET_MAXEXCLUSIVE
#pragma push_macro("FACET_MAXINCLUSIVE")
#undef FACET_MAXINCLUSIVE
#pragma push_macro("FACET_MAXLENGTH")
#undef FACET_MAXLENGTH
#pragma push_macro("FACET_MINEXCLUSIVE")
#undef FACET_MINEXCLUSIVE
#pragma push_macro("FACET_MININCLUSIVE")
#undef FACET_MININCLUSIVE
#pragma push_macro("FACET_MINLENGTH")
#undef FACET_MINLENGTH
#pragma push_macro("FACET_NONE")
#undef FACET_NONE
#pragma push_macro("FACET_PATTERN")
#undef FACET_PATTERN
#pragma push_macro("FACET_TOTALDIGITS")
#undef FACET_TOTALDIGITS
#pragma push_macro("FACET_WHITESPACE")
#undef FACET_WHITESPACE
#pragma push_macro("ORDERED_FALSE")
#undef ORDERED_FALSE
#pragma push_macro("ORDERED_PARTIAL")
#undef ORDERED_PARTIAL
#pragma push_macro("ORDERED_TOTAL")
#undef ORDERED_TOTAL
#pragma push_macro("VARIETY_ABSENT")
#undef VARIETY_ABSENT
#pragma push_macro("VARIETY_ATOMIC")
#undef VARIETY_ATOMIC
#pragma push_macro("VARIETY_LIST")
#undef VARIETY_LIST
#pragma push_macro("VARIETY_UNION")
#undef VARIETY_UNION

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class StringList;
							class XSObject;
							class XSObjectList;
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

class XSSimpleTypeDefinition : public ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition {
	$interface(XSSimpleTypeDefinition, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual bool getBounded() {return false;}
	virtual int16_t getBuiltInKind() {return 0;}
	virtual int16_t getDefinedFacets() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* getFacet(int32_t facetType) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getFacets() {return nullptr;}
	virtual bool getFinite() {return false;}
	virtual int16_t getFixedFacets() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getItemType() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getLexicalEnumeration() {return nullptr;}
	virtual $String* getLexicalFacetValue(int16_t facetName) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getLexicalPattern() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getMemberTypes() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getMultiValueFacets() {return nullptr;}
	virtual bool getNumeric() {return false;}
	virtual int16_t getOrdered() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition* getPrimitiveType() {return nullptr;}
	virtual int16_t getVariety() {return 0;}
	virtual bool isDefinedFacet(int16_t facetName) {return false;}
	virtual bool isFixedFacet(int16_t facetName) {return false;}
	static const int16_t VARIETY_ABSENT = 0;
	static const int16_t VARIETY_ATOMIC = 1;
	static const int16_t VARIETY_LIST = 2;
	static const int16_t VARIETY_UNION = 3;
	static const int16_t FACET_NONE = 0;
	static const int16_t FACET_LENGTH = 1;
	static const int16_t FACET_MINLENGTH = 2;
	static const int16_t FACET_MAXLENGTH = 4;
	static const int16_t FACET_PATTERN = 8;
	static const int16_t FACET_WHITESPACE = 16;
	static const int16_t FACET_MAXINCLUSIVE = 32;
	static const int16_t FACET_MAXEXCLUSIVE = 64;
	static const int16_t FACET_MINEXCLUSIVE = 128;
	static const int16_t FACET_MININCLUSIVE = 256;
	static const int16_t FACET_TOTALDIGITS = 512;
	static const int16_t FACET_FRACTIONDIGITS = 1024;
	static const int16_t FACET_ENUMERATION = 2048;
	static const int16_t ORDERED_FALSE = 0;
	static const int16_t ORDERED_PARTIAL = 1;
	static const int16_t ORDERED_TOTAL = 2;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("FACET_ENUMERATION")
#pragma pop_macro("FACET_FRACTIONDIGITS")
#pragma pop_macro("FACET_LENGTH")
#pragma pop_macro("FACET_MAXEXCLUSIVE")
#pragma pop_macro("FACET_MAXINCLUSIVE")
#pragma pop_macro("FACET_MAXLENGTH")
#pragma pop_macro("FACET_MINEXCLUSIVE")
#pragma pop_macro("FACET_MININCLUSIVE")
#pragma pop_macro("FACET_MINLENGTH")
#pragma pop_macro("FACET_NONE")
#pragma pop_macro("FACET_PATTERN")
#pragma pop_macro("FACET_TOTALDIGITS")
#pragma pop_macro("FACET_WHITESPACE")
#pragma pop_macro("ORDERED_FALSE")
#pragma pop_macro("ORDERED_PARTIAL")
#pragma pop_macro("ORDERED_TOTAL")
#pragma pop_macro("VARIETY_ABSENT")
#pragma pop_macro("VARIETY_ATOMIC")
#pragma pop_macro("VARIETY_LIST")
#pragma pop_macro("VARIETY_UNION")

#endif // _com_sun_org_apache_xerces_internal_xs_XSSimpleTypeDefinition_h_