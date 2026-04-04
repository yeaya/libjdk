#include <com/sun/media/sound/SoftResamplerStreamer.h>
#include <com/sun/media/sound/ModelWavetable.h>
#include <jcpp.h>

using $ModelWavetable = ::com::sun::media::sound::ModelWavetable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* SoftResamplerStreamer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"open", "(Lcom/sun/media/sound/ModelWavetable;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftResamplerStreamer, open, void, $ModelWavetable*, float), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.SoftResamplerStreamer",
		nullptr,
		"com.sun.media.sound.ModelOscillatorStream",
		nullptr,
		methodInfos$$
	};
	$loadClass(SoftResamplerStreamer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftResamplerStreamer);
	});
	return class$;
}

$Class* SoftResamplerStreamer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com