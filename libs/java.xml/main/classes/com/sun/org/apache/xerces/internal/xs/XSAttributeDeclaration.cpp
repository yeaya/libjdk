#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>

#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$CompoundAttribute _XSAttributeDeclaration_MethodAnnotations_getActualVC0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeDeclaration_MethodAnnotations_getActualVCType1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeDeclaration_MethodAnnotations_getConstraintValue5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeDeclaration_MethodAnnotations_getItemValueTypes7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _XSAttributeDeclaration_MethodInfo_[] = {
	{"getActualVC", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSAttributeDeclaration, getActualVC, $Object*), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _XSAttributeDeclaration_MethodAnnotations_getActualVC0},
	{"getActualVCType", "()S", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSAttributeDeclaration, getActualVCType, int16_t), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _XSAttributeDeclaration_MethodAnnotations_getActualVCType1},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeDeclaration, getAnnotation, $XSAnnotation*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeDeclaration, getAnnotations, $XSObjectList*)},
	{"getConstraintType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeDeclaration, getConstraintType, int16_t)},
	{"getConstraintValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSAttributeDeclaration, getConstraintValue, $String*), nullptr, nullptr, _XSAttributeDeclaration_MethodAnnotations_getConstraintValue5},
	{"getEnclosingCTDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeDeclaration, getEnclosingCTDefinition, $XSComplexTypeDefinition*)},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSAttributeDeclaration, getItemValueTypes, $ShortList*), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _XSAttributeDeclaration_MethodAnnotations_getItemValueTypes7},
	{"getScope", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeDeclaration, getScope, int16_t)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeDeclaration, getTypeDefinition, $XSSimpleTypeDefinition*)},
	{"getValueConstraintValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeDeclaration, getValueConstraintValue, $XSValue*)},
	{}
};

$ClassInfo _XSAttributeDeclaration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSAttributeDeclaration",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	_XSAttributeDeclaration_MethodInfo_
};

$Object* allocate$XSAttributeDeclaration($Class* clazz) {
	return $of($alloc(XSAttributeDeclaration));
}

$Class* XSAttributeDeclaration::load$($String* name, bool initialize) {
	$loadClass(XSAttributeDeclaration, name, initialize, &_XSAttributeDeclaration_ClassInfo_, allocate$XSAttributeDeclaration);
	return class$;
}

$Class* XSAttributeDeclaration::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com