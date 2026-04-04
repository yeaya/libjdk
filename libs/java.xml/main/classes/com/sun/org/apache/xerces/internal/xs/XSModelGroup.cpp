#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

#undef COMPOSITOR_ALL
#undef COMPOSITOR_CHOICE
#undef COMPOSITOR_SEQUENCE

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

$Class* XSModelGroup::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"COMPOSITOR_SEQUENCE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSModelGroup, COMPOSITOR_SEQUENCE)},
		{"COMPOSITOR_CHOICE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSModelGroup, COMPOSITOR_CHOICE)},
		{"COMPOSITOR_ALL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSModelGroup, COMPOSITOR_ALL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModelGroup, getAnnotation, $XSAnnotation*)},
		{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModelGroup, getAnnotations, $XSObjectList*)},
		{"getCompositor", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModelGroup, getCompositor, int16_t)},
		{"getParticles", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModelGroup, getParticles, $XSObjectList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSModelGroup",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.XSTerm",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSModelGroup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSModelGroup);
	});
	return class$;
}

$Class* XSModelGroup::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com