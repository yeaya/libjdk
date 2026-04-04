#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMLocator.h>
#include <jcpp.h>

#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMLocator = ::org::w3c::dom::DOMLocator;

namespace org {
	namespace w3c {
		namespace dom {

$Class* DOMError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SEVERITY_WARNING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMError, SEVERITY_WARNING)},
		{"SEVERITY_ERROR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMError, SEVERITY_ERROR)},
		{"SEVERITY_FATAL_ERROR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMError, SEVERITY_FATAL_ERROR)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getLocation", "()Lorg/w3c/dom/DOMLocator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMError, getLocation, $DOMLocator*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMError, getMessage, $String*)},
		{"getRelatedData", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMError, getRelatedData, $Object*)},
		{"getRelatedException", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMError, getRelatedException, $Object*)},
		{"getSeverity", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMError, getSeverity, int16_t)},
		{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMError, getType, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.DOMError",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DOMError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMError);
	});
	return class$;
}

$Class* DOMError::class$ = nullptr;

		} // dom
	} // w3c
} // org