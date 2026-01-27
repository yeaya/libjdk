#include <com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>

#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <jcpp.h>

using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSWildcard = ::com::sun::org::apache::xerces::internal::xs::XSWildcard;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSAttributeGroupDefinition_MethodInfo_[] = {
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeGroupDefinition, getAnnotation, $XSAnnotation*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeGroupDefinition, getAnnotations, $XSObjectList*)},
	{"getAttributeUses", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeGroupDefinition, getAttributeUses, $XSObjectList*)},
	{"getAttributeWildcard", "()Lcom/sun/org/apache/xerces/internal/xs/XSWildcard;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeGroupDefinition, getAttributeWildcard, $XSWildcard*)},
	{}
};

$ClassInfo _XSAttributeGroupDefinition_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSAttributeGroupDefinition",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	_XSAttributeGroupDefinition_MethodInfo_
};

$Object* allocate$XSAttributeGroupDefinition($Class* clazz) {
	return $of($alloc(XSAttributeGroupDefinition));
}

$Class* XSAttributeGroupDefinition::load$($String* name, bool initialize) {
	$loadClass(XSAttributeGroupDefinition, name, initialize, &_XSAttributeGroupDefinition_ClassInfo_, allocate$XSAttributeGroupDefinition);
	return class$;
}

$Class* XSAttributeGroupDefinition::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com