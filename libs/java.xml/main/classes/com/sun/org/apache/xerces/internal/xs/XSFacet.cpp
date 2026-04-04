#include <com/sun/org/apache/xerces/internal/xs/XSFacet.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* XSFacet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getActualFacetValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSFacet, getActualFacetValue, $Object*)},
		{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSFacet, getAnnotation, $XSAnnotation*)},
		{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSFacet, getAnnotations, $XSObjectList*)},
		{"getFacetKind", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSFacet, getFacetKind, int16_t)},
		{"getFixed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSFacet, getFixed, bool)},
		{"getIntFacetValue", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSFacet, getIntFacetValue, int32_t)},
		{"getLexicalFacetValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSFacet, getLexicalFacetValue, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSFacet",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.XSObject",
		nullptr,
		methodInfos$$
	};
	$loadClass(XSFacet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSFacet);
	});
	return class$;
}

$Class* XSFacet::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com