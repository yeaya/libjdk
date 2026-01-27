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

$FieldInfo _Result_FieldInfo_[] = {
	{"PI_DISABLE_OUTPUT_ESCAPING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Result, PI_DISABLE_OUTPUT_ESCAPING)},
	{"PI_ENABLE_OUTPUT_ESCAPING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Result, PI_ENABLE_OUTPUT_ESCAPING)},
	{}
};

$MethodInfo _Result_MethodInfo_[] = {
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Result, getSystemId, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Result, setSystemId, void, $String*)},
	{}
};

$ClassInfo _Result_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.Result",
	nullptr,
	nullptr,
	_Result_FieldInfo_,
	_Result_MethodInfo_
};

$Object* allocate$Result($Class* clazz) {
	return $of($alloc(Result));
}

$String* Result::PI_DISABLE_OUTPUT_ESCAPING = nullptr;
$String* Result::PI_ENABLE_OUTPUT_ESCAPING = nullptr;

void clinit$Result($Class* class$) {
	$assignStatic(Result::PI_DISABLE_OUTPUT_ESCAPING, "javax.xml.transform.disable-output-escaping"_s);
	$assignStatic(Result::PI_ENABLE_OUTPUT_ESCAPING, "javax.xml.transform.enable-output-escaping"_s);
}

$Class* Result::load$($String* name, bool initialize) {
	$loadClass(Result, name, initialize, &_Result_ClassInfo_, clinit$Result, allocate$Result);
	return class$;
}

$Class* Result::class$ = nullptr;

		} // transform
	} // xml
} // javax