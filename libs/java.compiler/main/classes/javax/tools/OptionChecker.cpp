#include <javax/tools/OptionChecker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace tools {

$Class* OptionChecker::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isSupportedOption", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionChecker, isSupportedOption, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.tools.OptionChecker",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OptionChecker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OptionChecker);
	});
	return class$;
}

$Class* OptionChecker::class$ = nullptr;

	} // tools
} // javax