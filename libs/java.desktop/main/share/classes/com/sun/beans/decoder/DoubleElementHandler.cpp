#include <com/sun/beans/decoder/DoubleElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void DoubleElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* DoubleElementHandler::getValue($String* argument) {
	return $of($Double::valueOf(argument));
}

DoubleElementHandler::DoubleElementHandler() {
}

$Class* DoubleElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DoubleElementHandler, init$, void)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DoubleElementHandler, getValue, $Object*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.DoubleElementHandler",
		"com.sun.beans.decoder.StringElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DoubleElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleElementHandler);
	});
	return class$;
}

$Class* DoubleElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com