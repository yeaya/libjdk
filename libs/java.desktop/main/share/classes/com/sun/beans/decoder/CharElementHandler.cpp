#include <com/sun/beans/decoder/CharElementHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void CharElementHandler::init$() {
	$StringElementHandler::init$();
}

void CharElementHandler::addAttribute($String* name, $String* value) {
	$useLocalObjectStack();
	if ($nc(name)->equals("code"_s)) {
		int32_t code = $($Integer::decode(value))->intValue();
		{
			$var($chars, arr$, $Character::toChars(code));
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				char16_t ch = arr$->get(i$);
				{
					addCharacter(ch);
				}
			}
		}
	} else {
		$StringElementHandler::addAttribute(name, value);
	}
}

$Object* CharElementHandler::getValue($String* argument) {
	if ($nc(argument)->length() != 1) {
		$throwNew($IllegalArgumentException, "Wrong characters count"_s);
	}
	return $of($Character::valueOf(argument->charAt(0)));
}

CharElementHandler::CharElementHandler() {
}

$Class* CharElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CharElementHandler, init$, void)},
		{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CharElementHandler, addAttribute, void, $String*, $String*)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CharElementHandler, getValue, $Object*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.CharElementHandler",
		"com.sun.beans.decoder.StringElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CharElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharElementHandler);
	});
	return class$;
}

$Class* CharElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com