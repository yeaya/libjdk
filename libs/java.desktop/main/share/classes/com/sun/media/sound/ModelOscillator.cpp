#include <com/sun/media/sound/ModelOscillator.h>
#include <com/sun/media/sound/ModelOscillatorStream.h>
#include <jcpp.h>

using $ModelOscillatorStream = ::com::sun::media::sound::ModelOscillatorStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* ModelOscillator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAttenuation", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelOscillator, getAttenuation, float)},
		{"getChannels", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelOscillator, getChannels, int32_t)},
		{"open", "(F)Lcom/sun/media/sound/ModelOscillatorStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelOscillator, open, $ModelOscillatorStream*, float)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.ModelOscillator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ModelOscillator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelOscillator);
	});
	return class$;
}

$Class* ModelOscillator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com