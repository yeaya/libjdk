#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

#undef NSCONSTRAINT_ANY
#undef NSCONSTRAINT_LIST
#undef NSCONSTRAINT_NOT
#undef PC_LAX
#undef PC_SKIP
#undef PC_STRICT

using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
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

$Class* XSWildcard::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NSCONSTRAINT_ANY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSWildcard, NSCONSTRAINT_ANY)},
		{"NSCONSTRAINT_NOT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSWildcard, NSCONSTRAINT_NOT)},
		{"NSCONSTRAINT_LIST", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSWildcard, NSCONSTRAINT_LIST)},
		{"PC_STRICT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSWildcard, PC_STRICT)},
		{"PC_SKIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSWildcard, PC_SKIP)},
		{"PC_LAX", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSWildcard, PC_LAX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSWildcard, getAnnotation, $XSAnnotation*)},
		{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSWildcard, getAnnotations, $XSObjectList*)},
		{"getConstraintType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSWildcard, getConstraintType, int16_t)},
		{"getNsConstraintList", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSWildcard, getNsConstraintList, $StringList*)},
		{"getProcessContents", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSWildcard, getProcessContents, int16_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSWildcard",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.XSTerm",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSWildcard, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSWildcard);
	});
	return class$;
}

$Class* XSWildcard::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com