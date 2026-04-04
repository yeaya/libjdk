#include <com/sun/media/sound/EventDispatcher$EventInfo.h>
#include <com/sun/media/sound/EventDispatcher.h>
#include <java/util/List.h>
#include <jcpp.h>

using $EventDispatcher = ::com::sun::media::sound::EventDispatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void EventDispatcher$EventInfo::init$($EventDispatcher* this$0, Object$* event, $List* listeners) {
	$set(this, this$0, this$0);
	$set(this, event, event);
	$set(this, listeners, $nc(listeners)->toArray());
}

$Object* EventDispatcher$EventInfo::getEvent() {
	return this->event;
}

int32_t EventDispatcher$EventInfo::getListenerCount() {
	return $nc(this->listeners)->length;
}

$Object* EventDispatcher$EventInfo::getListener(int32_t index) {
	return $nc(this->listeners)->get(index);
}

EventDispatcher$EventInfo::EventDispatcher$EventInfo() {
}

$Class* EventDispatcher$EventInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/EventDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(EventDispatcher$EventInfo, this$0)},
		{"event", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(EventDispatcher$EventInfo, event)},
		{"listeners", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(EventDispatcher$EventInfo, listeners)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/EventDispatcher;Ljava/lang/Object;Ljava/util/List;)V", "(Ljava/lang/Object;Ljava/util/List<Ljava/lang/Object;>;)V", 0, $method(EventDispatcher$EventInfo, init$, void, $EventDispatcher*, Object$*, $List*)},
		{"getEvent", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(EventDispatcher$EventInfo, getEvent, $Object*)},
		{"getListener", "(I)Ljava/lang/Object;", nullptr, 0, $virtualMethod(EventDispatcher$EventInfo, getListener, $Object*, int32_t)},
		{"getListenerCount", "()I", nullptr, 0, $virtualMethod(EventDispatcher$EventInfo, getListenerCount, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.EventDispatcher$EventInfo", "com.sun.media.sound.EventDispatcher", "EventInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.EventDispatcher$EventInfo",
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
		"com.sun.media.sound.EventDispatcher"
	};
	$loadClass(EventDispatcher$EventInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventDispatcher$EventInfo);
	});
	return class$;
}

$Class* EventDispatcher$EventInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com