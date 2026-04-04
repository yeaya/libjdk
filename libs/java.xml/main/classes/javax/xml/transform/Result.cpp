#include <javax/xml/transform/Result.h>
#include <jcpp.h>

#undef PI_DISABLE_OUTPUT_ESCAPING
#undef PI_ENABLE_OUTPUT_ESCAPING

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace transform {

$String* Result::PI_DISABLE_OUTPUT_ESCAPING = nullptr;
$String* Result::PI_ENABLE_OUTPUT_ESCAPING = nullptr;

void Result::clinit$($Class* clazz) {
	$assignStatic(Result::PI_DISABLE_OUTPUT_ESCAPING, "javax.xml.transform.disable-output-escaping"_s);
	$assignStatic(Result::PI_ENABLE_OUTPUT_ESCAPING, "javax.xml.transform.enable-output-escaping"_s);
}

$Class* Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PI_DISABLE_OUTPUT_ESCAPING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Result, PI_DISABLE_OUTPUT_ESCAPING)},
		{"PI_ENABLE_OUTPUT_ESCAPING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Result, PI_ENABLE_OUTPUT_ESCAPING)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Result, getSystemId, $String*)},
		{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Result, setSystemId, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.transform.Result",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Result, name, initialize, &classInfo$$, Result::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Result);
	});
	return class$;
}

$Class* Result::class$ = nullptr;

		} // transform
	} // xml
} // javax