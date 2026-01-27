#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>

#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

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
#undef ORDERED_FALSE
#undef ORDERED_PARTIAL
#undef ORDERED_TOTAL
#undef VARIETY_ABSENT
#undef VARIETY_ATOMIC
#undef VARIETY_LIST
#undef VARIETY_UNION

using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
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
						namespace xs {

$FieldInfo _XSSimpleTypeDefinition_FieldInfo_[] = {
	{"VARIETY_ABSENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, VARIETY_ABSENT)},
	{"VARIETY_ATOMIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, VARIETY_ATOMIC)},
	{"VARIETY_LIST", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, VARIETY_LIST)},
	{"VARIETY_UNION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, VARIETY_UNION)},
	{"FACET_NONE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_NONE)},
	{"FACET_LENGTH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_LENGTH)},
	{"FACET_MINLENGTH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_MINLENGTH)},
	{"FACET_MAXLENGTH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_MAXLENGTH)},
	{"FACET_PATTERN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_PATTERN)},
	{"FACET_WHITESPACE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_WHITESPACE)},
	{"FACET_MAXINCLUSIVE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_MAXINCLUSIVE)},
	{"FACET_MAXEXCLUSIVE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_MAXEXCLUSIVE)},
	{"FACET_MINEXCLUSIVE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_MINEXCLUSIVE)},
	{"FACET_MININCLUSIVE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_MININCLUSIVE)},
	{"FACET_TOTALDIGITS", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_TOTALDIGITS)},
	{"FACET_FRACTIONDIGITS", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_FRACTIONDIGITS)},
	{"FACET_ENUMERATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, FACET_ENUMERATION)},
	{"ORDERED_FALSE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, ORDERED_FALSE)},
	{"ORDERED_PARTIAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, ORDERED_PARTIAL)},
	{"ORDERED_TOTAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleTypeDefinition, ORDERED_TOTAL)},
	{}
};

$MethodInfo _XSSimpleTypeDefinition_MethodInfo_[] = {
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getAnnotations, $XSObjectList*)},
	{"getBounded", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getBounded, bool)},
	{"getBuiltInKind", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getBuiltInKind, int16_t)},
	{"getDefinedFacets", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getDefinedFacets, int16_t)},
	{"getFacet", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getFacet, $XSObject*, int32_t)},
	{"getFacets", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getFacets, $XSObjectList*)},
	{"getFinite", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getFinite, bool)},
	{"getFixedFacets", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getFixedFacets, int16_t)},
	{"getItemType", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getItemType, XSSimpleTypeDefinition*)},
	{"getLexicalEnumeration", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getLexicalEnumeration, $StringList*)},
	{"getLexicalFacetValue", "(S)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getLexicalFacetValue, $String*, int16_t)},
	{"getLexicalPattern", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getLexicalPattern, $StringList*)},
	{"getMemberTypes", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getMemberTypes, $XSObjectList*)},
	{"getMultiValueFacets", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getMultiValueFacets, $XSObjectList*)},
	{"getNumeric", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getNumeric, bool)},
	{"getOrdered", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getOrdered, int16_t)},
	{"getPrimitiveType", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getPrimitiveType, XSSimpleTypeDefinition*)},
	{"getVariety", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, getVariety, int16_t)},
	{"isDefinedFacet", "(S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, isDefinedFacet, bool, int16_t)},
	{"isFixedFacet", "(S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleTypeDefinition, isFixedFacet, bool, int16_t)},
	{}
};

$ClassInfo _XSSimpleTypeDefinition_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSSimpleTypeDefinition",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSTypeDefinition",
	_XSSimpleTypeDefinition_FieldInfo_,
	_XSSimpleTypeDefinition_MethodInfo_
};

$Object* allocate$XSSimpleTypeDefinition($Class* clazz) {
	return $of($alloc(XSSimpleTypeDefinition));
}

$Class* XSSimpleTypeDefinition::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDefinition, name, initialize, &_XSSimpleTypeDefinition_ClassInfo_, allocate$XSSimpleTypeDefinition);
	return class$;
}

$Class* XSSimpleTypeDefinition::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com