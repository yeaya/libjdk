#include <com/sun/media/sound/EventDispatcher$ClipInfo.h>
#include <com/sun/media/sound/AutoClosingClip.h>
#include <com/sun/media/sound/EventDispatcher.h>
#include <jcpp.h>

using $AutoClosingClip = ::com::sun::media::sound::AutoClosingClip;
using $EventDispatcher = ::com::sun::media::sound::EventDispatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void EventDispatcher$ClipInfo::init$($EventDispatcher* this$0, $AutoClosingClip* clip) {
	$set(this, this$0, this$0);
	$set(this, clip, clip);
	this->expiration = $System::currentTimeMillis() + 5000;
}

$AutoClosingClip* EventDispatcher$ClipInfo::getClip() {
	return this->clip;
}

bool EventDispatcher$ClipInfo::isExpired(int64_t currTime) {
	return currTime > this->expiration;
}

EventDispatcher$ClipInfo::EventDispatcher$ClipInfo() {
}

$Class* EventDispatcher$ClipInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/EventDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(EventDispatcher$ClipInfo, this$0)},
		{"clip", "Lcom/sun/media/sound/AutoClosingClip;", nullptr, $PRIVATE | $FINAL, $field(EventDispatcher$ClipInfo, clip)},
		{"expiration", "J", nullptr, $PRIVATE | $FINAL, $field(EventDispatcher$ClipInfo, expiration)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/EventDispatcher;Lcom/sun/media/sound/AutoClosingClip;)V", nullptr, 0, $method(EventDispatcher$ClipInfo, init$, void, $EventDispatcher*, $AutoClosingClip*)},
		{"getClip", "()Lcom/sun/media/sound/AutoClosingClip;", nullptr, 0, $virtualMethod(EventDispatcher$ClipInfo, getClip, $AutoClosingClip*)},
		{"isExpired", "(J)Z", nullptr, 0, $virtualMethod(EventDispatcher$ClipInfo, isExpired, bool, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.EventDispatcher$ClipInfo", "com.sun.media.sound.EventDispatcher", "ClipInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.EventDispatcher$ClipInfo",
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
	$loadClass(EventDispatcher$ClipInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventDispatcher$ClipInfo);
	});
	return class$;
}

$Class* EventDispatcher$ClipInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com