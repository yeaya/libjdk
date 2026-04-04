#include <com/sun/media/sound/ModelChannelMixer.h>
#include <jcpp.h>

using $floatArray2 = $Array<float, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* ModelChannelMixer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"process", "([[FII)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelChannelMixer, process, bool, $floatArray2*, int32_t, int32_t)},
		{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelChannelMixer, stop, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.ModelChannelMixer",
		nullptr,
		"javax.sound.midi.MidiChannel",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModelChannelMixer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelChannelMixer);
	});
	return class$;
}

$Class* ModelChannelMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com