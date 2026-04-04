#include <com/sun/org/apache/xerces/internal/xs/XSMultiValueFacet.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>
#include <jcpp.h>

using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ObjectList = ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* XSMultiValueFacet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSMultiValueFacet, getAnnotations, $XSObjectList*)},
		{"getEnumerationValues", "()Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSMultiValueFacet, getEnumerationValues, $ObjectList*)},
		{"getFacetKind", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSMultiValueFacet, getFacetKind, int16_t)},
		{"getLexicalFacetValues", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSMultiValueFacet, getLexicalFacetValues, $StringList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSMultiValueFacet",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.XSObject",
		nullptr,
		methodInfos$$
	};
	$loadClass(XSMultiValueFacet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSMultiValueFacet);
	});
	return class$;
}

$Class* XSMultiValueFacet::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com