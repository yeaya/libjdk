#include <com/sun/media/sound/JavaSoundAudioClip$DirectBAOS.h>
#include <com/sun/media/sound/JavaSoundAudioClip.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void JavaSoundAudioClip$DirectBAOS::init$() {
	$ByteArrayOutputStream::init$();
}

$bytes* JavaSoundAudioClip$DirectBAOS::getInternalBuffer() {
	return this->buf;
}

JavaSoundAudioClip$DirectBAOS::JavaSoundAudioClip$DirectBAOS() {
}

$Class* JavaSoundAudioClip$DirectBAOS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JavaSoundAudioClip$DirectBAOS, init$, void)},
		{"getInternalBuffer", "()[B", nullptr, $PUBLIC, $virtualMethod(JavaSoundAudioClip$DirectBAOS, getInternalBuffer, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.JavaSoundAudioClip$DirectBAOS", "com.sun.media.sound.JavaSoundAudioClip", "DirectBAOS", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.JavaSoundAudioClip$DirectBAOS",
		"java.io.ByteArrayOutputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.JavaSoundAudioClip"
	};
	$loadClass(JavaSoundAudioClip$DirectBAOS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavaSoundAudioClip$DirectBAOS));
	});
	return class$;
}

$Class* JavaSoundAudioClip$DirectBAOS::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com