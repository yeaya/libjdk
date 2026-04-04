#include <sun/awt/www/content/audio/x_aiff.h>
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

void x_aiff::init$() {
	$ContentHandler::init$();
}

$Object* x_aiff::getContent($URLConnection* uc) {
	return $of($JavaSoundAudioClip::create(uc));
}

x_aiff::x_aiff() {
}

$Class* x_aiff::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(x_aiff, init$, void)},
		{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(x_aiff, getContent, $Object*, $URLConnection*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.www.content.audio.x_aiff",
		"java.net.ContentHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(x_aiff, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(x_aiff);
	});
	return class$;
}

$Class* x_aiff::class$ = nullptr;

				} // audio
			} // content
		} // www
	} // awt
} // sun