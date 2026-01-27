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

$MethodInfo _XSMultiValueFacet_MethodInfo_[] = {
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSMultiValueFacet, getAnnotations, $XSObjectList*)},
	{"getEnumerationValues", "()Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSMultiValueFacet, getEnumerationValues, $ObjectList*)},
	{"getFacetKind", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSMultiValueFacet, getFacetKind, int16_t)},
	{"getLexicalFacetValues", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSMultiValueFacet, getLexicalFacetValues, $StringList*)},
	{}
};

$ClassInfo _XSMultiValueFacet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSMultiValueFacet",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	_XSMultiValueFacet_MethodInfo_
};

$Object* allocate$XSMultiValueFacet($Class* clazz) {
	return $of($alloc(XSMultiValueFacet));
}

$Class* XSMultiValueFacet::load$($String* name, bool initialize) {
	$loadClass(XSMultiValueFacet, name, initialize, &_XSMultiValueFacet_ClassInfo_, allocate$XSMultiValueFacet);
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