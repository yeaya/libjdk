#include <sun/awt/www/content/audio/wav.h>
#include <com/sun/media/sound/JavaSoundAudioClip.h>
#include <java/net/ContentHandler.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $JavaSoundAudioClip = ::com::sun::media::sound::JavaSoundAudioClip;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;
using $URLConnection = ::java::net::URLConnection;

namespace sun {
	namespace awt {
		namespace www {
			namespace content {
				namespace audio {

void wav::init$() {
	$ContentHandler::init$();
}

$Object* wav::getContent($URLConnection* uc) {
	return $of($JavaSoundAudioClip::create(uc));
}

wav::wav() {
}

$Class* wav::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(wav, init$, void)},
		{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(wav, getContent, $Object*, $URLConnection*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.www.content.audio.wav",
		"java.net.ContentHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(wav, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(wav);
	});
	return class$;
}

$Class* wav::class$ = nullptr;

				} // audio
			} // content
		} // www
	} // awt
} // sun