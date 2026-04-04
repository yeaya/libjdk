#include <com/sun/beans/decoder/ByteElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void ByteElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* ByteElementHandler::getValue($String* argument) {
	return $of($Byte::decode(argument));
}

ByteElementHandler::ByteElementHandler() {
}

$Class* ByteElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ByteElementHandler, init$, void)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ByteElementHandler, getValue, $Object*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.ByteElementHandler",
		"com.sun.beans.decoder.StringElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ByteElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteElementHandler);
	});
	return class$;
}

$Class* ByteElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com