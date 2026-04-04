#include <com/sun/beans/decoder/ClassElementHandler.h>
#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void ClassElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* ClassElementHandler::getValue($String* argument) {
	return $of($$nc(getOwner())->findClass(argument));
}

ClassElementHandler::ClassElementHandler() {
}

$Class* ClassElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClassElementHandler, init$, void)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ClassElementHandler, getValue, $Object*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.ClassElementHandler",
		"com.sun.beans.decoder.StringElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ClassElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassElementHandler);
	});
	return class$;
}

$Class* ClassElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com