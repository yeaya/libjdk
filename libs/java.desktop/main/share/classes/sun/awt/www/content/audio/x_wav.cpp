#include <sun/awt/www/content/audio/x_wav.h>
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

void x_wav::init$() {
	$ContentHandler::init$();
}

$Object* x_wav::getContent($URLConnection* uc) {
	return $of($JavaSoundAudioClip::create(uc));
}

x_wav::x_wav() {
}

$Class* x_wav::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(x_wav, init$, void)},
		{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(x_wav, getContent, $Object*, $URLConnection*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.www.content.audio.x_wav",
		"java.net.ContentHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(x_wav, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(x_wav);
	});
	return class$;
}

$Class* x_wav::class$ = nullptr;

				} // audio
			} // content
		} // www
	} // awt
} // sun