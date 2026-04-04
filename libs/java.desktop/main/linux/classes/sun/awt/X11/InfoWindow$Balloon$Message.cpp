#include <sun/awt/X11/InfoWindow$Balloon$Message.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

void InfoWindow$Balloon$Message::init$($String* caption, $String* text, $String* messageType) {
	$set(this, caption, caption);
	$set(this, text, text);
	$set(this, messageType, messageType);
}

InfoWindow$Balloon$Message::InfoWindow$Balloon$Message() {
}

$Class* InfoWindow$Balloon$Message::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"caption", "Ljava/lang/String;", nullptr, 0, $field(InfoWindow$Balloon$Message, caption)},
		{"text", "Ljava/lang/String;", nullptr, 0, $field(InfoWindow$Balloon$Message, text)},
		{"messageType", "Ljava/lang/String;", nullptr, 0, $field(InfoWindow$Balloon$Message, messageType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(InfoWindow$Balloon$Message, init$, void, $String*, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Balloon$Message", "sun.awt.X11.InfoWindow$Balloon", "Message", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.InfoWindow$Balloon$Message",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.InfoWindow"
	};
	$loadClass(InfoWindow$Balloon$Message, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InfoWindow$Balloon$Message);
	});
	return class$;
}

$Class* InfoWindow$Balloon$Message::class$ = nullptr;

		} // X11
	} // awt
} // sun