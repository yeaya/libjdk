#include <javax/xml/transform/SourceLocator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace transform {

$Class* SourceLocator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourceLocator, getColumnNumber, int32_t)},
		{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourceLocator, getLineNumber, int32_t)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourceLocator, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourceLocator, getSystemId, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.transform.SourceLocator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SourceLocator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SourceLocator);
	});
	return class$;
}

$Class* SourceLocator::class$ = nullptr;

		} // transform
	} // xml
} // javax