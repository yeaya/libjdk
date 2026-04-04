#include <javax/annotation/processing/Completion.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace annotation {
		namespace processing {

$Class* Completion::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Completion, getMessage, $String*)},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Completion, getValue, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.annotation.processing.Completion",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Completion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Completion);
	});
	return class$;
}

$Class* Completion::class$ = nullptr;

		} // processing
	} // annotation
} // javax