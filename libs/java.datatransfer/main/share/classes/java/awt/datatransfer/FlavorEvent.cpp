#include <java/awt/datatransfer/FlavorEvent.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace awt {
		namespace datatransfer {

void FlavorEvent::init$($Clipboard* source) {
	$EventObject::init$(source);
}

FlavorEvent::FlavorEvent() {
}

$Class* FlavorEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FlavorEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/datatransfer/Clipboard;)V", nullptr, $PUBLIC, $method(FlavorEvent, init$, void, $Clipboard*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.datatransfer.FlavorEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FlavorEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlavorEvent);
	});
	return class$;
}

$Class* FlavorEvent::class$ = nullptr;

		} // datatransfer
	} // awt
} // java