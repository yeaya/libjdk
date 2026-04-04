#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <jcpp.h>

#undef COMPLEX_TYPE
#undef SIMPLE_TYPE

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

$Class* XSTypeDefinition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"COMPLEX_TYPE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSTypeDefinition, COMPLEX_TYPE)},
		{"SIMPLE_TYPE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSTypeDefinition, SIMPLE_TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"derivedFrom", "(Ljava/lang/String;Ljava/lang/String;S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSTypeDefinition, derivedFrom, bool, $String*, $String*, int16_t)},
		{"derivedFromType", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSTypeDefinition, derivedFromType, bool, XSTypeDefinition*, int16_t)},
		{"getAnonymous", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSTypeDefinition, getAnonymous, bool)},
		{"getBaseType", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSTypeDefinition, getBaseType, XSTypeDefinition*)},
		{"getFinal", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSTypeDefinition, getFinal, int16_t)},
		{"getTypeCategory", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSTypeDefinition, getTypeCategory, int16_t)},
		{"isFinal", "(S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSTypeDefinition, isFinal, bool, int16_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSTypeDefinition",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.XSObject",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSTypeDefinition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSTypeDefinition);
	});
	return class$;
}

$Class* XSTypeDefinition::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com