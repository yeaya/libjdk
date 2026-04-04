#include <com/sun/media/sound/DirectAudioDevice$DirectBAOS.h>
#include <com/sun/media/sound/DirectAudioDevice.h>
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

void DirectAudioDevice$DirectBAOS::init$() {
	$ByteArrayOutputStream::init$();
}

$bytes* DirectAudioDevice$DirectBAOS::getInternalBuffer() {
	return this->buf;
}

DirectAudioDevice$DirectBAOS::DirectAudioDevice$DirectBAOS() {
}

$Class* DirectAudioDevice$DirectBAOS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DirectAudioDevice$DirectBAOS, init$, void)},
		{"getInternalBuffer", "()[B", nullptr, $PUBLIC, $virtualMethod(DirectAudioDevice$DirectBAOS, getInternalBuffer, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.DirectAudioDevice$DirectBAOS", "com.sun.media.sound.DirectAudioDevice", "DirectBAOS", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.DirectAudioDevice$DirectBAOS",
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
		"com.sun.media.sound.DirectAudioDevice"
	};
	$loadClass(DirectAudioDevice$DirectBAOS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DirectAudioDevice$DirectBAOS));
	});
	return class$;
}

$Class* DirectAudioDevice$DirectBAOS::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com