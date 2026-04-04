#include <sun/awt/www/content/audio/aiff.h>
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

void aiff::init$() {
	$ContentHandler::init$();
}

$Object* aiff::getContent($URLConnection* uc) {
	return $of($JavaSoundAudioClip::create(uc));
}

aiff::aiff() {
}

$Class* aiff::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(aiff, init$, void)},
		{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(aiff, getContent, $Object*, $URLConnection*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.www.content.audio.aiff",
		"java.net.ContentHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(aiff, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(aiff);
	});
	return class$;
}

$Class* aiff::class$ = nullptr;

				} // audio
			} // content
		} // www
	} // awt
} // sun