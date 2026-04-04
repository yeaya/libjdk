#include <com/sun/beans/decoder/ShortElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void ShortElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* ShortElementHandler::getValue($String* argument) {
	return $of($Short::decode(argument));
}

ShortElementHandler::ShortElementHandler() {
}

$Class* ShortElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ShortElementHandler, init$, void)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ShortElementHandler, getValue, $Object*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.ShortElementHandler",
		"com.sun.beans.decoder.StringElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ShortElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortElementHandler);
	});
	return class$;
}

$Class* ShortElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com