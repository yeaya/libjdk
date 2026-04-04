#include <javax/sound/sampled/TargetDataLine.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace javax {
	namespace sound {
		namespace sampled {

$Class* TargetDataLine::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"open", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TargetDataLine, open, void, $AudioFormat*, int32_t), "javax.sound.sampled.LineUnavailableException"},
		{"open", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TargetDataLine, open, void, $AudioFormat*), "javax.sound.sampled.LineUnavailableException"},
		{"read", "([BII)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TargetDataLine, read, int32_t, $bytes*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.sampled.TargetDataLine",
		nullptr,
		"javax.sound.sampled.DataLine",
		nullptr,
		methodInfos$$
	};
	$loadClass(TargetDataLine, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TargetDataLine);
	});
	return class$;
}

$Class* TargetDataLine::class$ = nullptr;

		} // sampled
	} // sound
} // javax