#include <com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>

#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
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

$MethodInfo _XSModelGroupDefinition_MethodInfo_[] = {
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModelGroupDefinition, getAnnotation, $XSAnnotation*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModelGroupDefinition, getAnnotations, $XSObjectList*)},
	{"getModelGroup", "()Lcom/sun/org/apache/xerces/internal/xs/XSModelGroup;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModelGroupDefinition, getModelGroup, $XSModelGroup*)},
	{}
};

$ClassInfo _XSModelGroupDefinition_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSModelGroupDefinition",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	_XSModelGroupDefinition_MethodInfo_
};

$Object* allocate$XSModelGroupDefinition($Class* clazz) {
	return $of($alloc(XSModelGroupDefinition));
}

$Class* XSModelGroupDefinition::load$($String* name, bool initialize) {
	$loadClass(XSModelGroupDefinition, name, initialize, &_XSModelGroupDefinition_ClassInfo_, allocate$XSModelGroupDefinition);
	return class$;
}

$Class* XSModelGroupDefinition::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com