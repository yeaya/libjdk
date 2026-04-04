#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSNamedMap = ::com::sun::org::apache::xerces::internal::xs::XSNamedMap;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
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

$Class* XSElementDeclaration::load$($String* name, bool initialize) {
	$CompoundAttribute getActualVCmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getActualVCTypemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getConstraintValuemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getItemValueTypesmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getAbstract", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getAbstract, bool)},
		{"getActualVC", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSElementDeclaration, getActualVC, $Object*), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, getActualVCmethodAnnotations$$},
		{"getActualVCType", "()S", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSElementDeclaration, getActualVCType, int16_t), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, getActualVCTypemethodAnnotations$$},
		{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getAnnotation, $XSAnnotation*)},
		{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getAnnotations, $XSObjectList*)},
		{"getConstraintType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getConstraintType, int16_t)},
		{"getConstraintValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSElementDeclaration, getConstraintValue, $String*), nullptr, nullptr, getConstraintValuemethodAnnotations$$},
		{"getDisallowedSubstitutions", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getDisallowedSubstitutions, int16_t)},
		{"getEnclosingCTDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getEnclosingCTDefinition, $XSComplexTypeDefinition*)},
		{"getIdentityConstraints", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getIdentityConstraints, $XSNamedMap*)},
		{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSElementDeclaration, getItemValueTypes, $ShortList*), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, getItemValueTypesmethodAnnotations$$},
		{"getNillable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getNillable, bool)},
		{"getScope", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getScope, int16_t)},
		{"getSubstitutionGroupAffiliation", "()Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getSubstitutionGroupAffiliation, XSElementDeclaration*)},
		{"getSubstitutionGroupExclusions", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getSubstitutionGroupExclusions, int16_t)},
		{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getTypeDefinition, $XSTypeDefinition*)},
		{"getValueConstraintValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, getValueConstraintValue, $XSValue*)},
		{"isDisallowedSubstitution", "(S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, isDisallowedSubstitution, bool, int16_t)},
		{"isSubstitutionGroupExclusion", "(S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclaration, isSubstitutionGroupExclusion, bool, int16_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSElementDeclaration",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.XSTerm",
		nullptr,
		methodInfos$$
	};
	$loadClass(XSElementDeclaration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSElementDeclaration);
	});
	return class$;
}

$Class* XSElementDeclaration::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com