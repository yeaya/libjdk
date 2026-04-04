#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <jcpp.h>

#undef CONTENTTYPE_ELEMENT
#undef CONTENTTYPE_EMPTY
#undef CONTENTTYPE_MIXED
#undef CONTENTTYPE_SIMPLE

using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSParticle = ::com::sun::org::apache::xerces::internal::xs::XSParticle;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSWildcard = ::com::sun::org::apache::xerces::internal::xs::XSWildcard;
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

$Class* XSComplexTypeDefinition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONTENTTYPE_EMPTY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSComplexTypeDefinition, CONTENTTYPE_EMPTY)},
		{"CONTENTTYPE_SIMPLE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSComplexTypeDefinition, CONTENTTYPE_SIMPLE)},
		{"CONTENTTYPE_ELEMENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSComplexTypeDefinition, CONTENTTYPE_ELEMENT)},
		{"CONTENTTYPE_MIXED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSComplexTypeDefinition, CONTENTTYPE_MIXED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getAbstract", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, getAbstract, bool)},
		{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, getAnnotations, $XSObjectList*)},
		{"getAttributeUses", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, getAttributeUses, $XSObjectList*)},
		{"getAttributeWildcard", "()Lcom/sun/org/apache/xerces/internal/xs/XSWildcard;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, getAttributeWildcard, $XSWildcard*)},
		{"getContentType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, getContentType, int16_t)},
		{"getDerivationMethod", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, getDerivationMethod, int16_t)},
		{"getParticle", "()Lcom/sun/org/apache/xerces/internal/xs/XSParticle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, getParticle, $XSParticle*)},
		{"getProhibitedSubstitutions", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, getProhibitedSubstitutions, int16_t)},
		{"getSimpleType", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, getSimpleType, $XSSimpleTypeDefinition*)},
		{"isProhibitedSubstitution", "(S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSComplexTypeDefinition, isProhibitedSubstitution, bool, int16_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSComplexTypeDefinition",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.XSTypeDefinition",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSComplexTypeDefinition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSComplexTypeDefinition);
	});
	return class$;
}

$Class* XSComplexTypeDefinition::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com