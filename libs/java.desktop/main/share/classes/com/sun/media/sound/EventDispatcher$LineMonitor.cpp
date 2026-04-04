#include <com/sun/media/sound/EventDispatcher$LineMonitor.h>
#include <com/sun/media/sound/EventDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* EventDispatcher$LineMonitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"checkLine", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventDispatcher$LineMonitor, checkLine, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.EventDispatcher$LineMonitor", "com.sun.media.sound.EventDispatcher", "LineMonitor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.media.sound.EventDispatcher$LineMonitor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.EventDispatcher"
	};
	$loadClass(EventDispatcher$LineMonitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventDispatcher$LineMonitor);
	});
	return class$;
}

$Class* EventDispatcher$LineMonitor::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com