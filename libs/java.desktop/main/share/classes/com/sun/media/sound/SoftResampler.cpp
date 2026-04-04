#include <com/sun/media/sound/SoftResampler.h>
#include <com/sun/media/sound/SoftResamplerStreamer.h>
#include <jcpp.h>

using $SoftResamplerStreamer = ::com::sun::media::sound::SoftResamplerStreamer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* SoftResampler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"openStreamer", "()Lcom/sun/media/sound/SoftResamplerStreamer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftResampler, openStreamer, $SoftResamplerStreamer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.SoftResampler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SoftResampler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftResampler);
	});
	return class$;
}

$Class* SoftResampler::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com