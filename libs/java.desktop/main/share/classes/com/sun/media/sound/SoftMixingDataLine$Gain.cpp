#include <com/sun/media/sound/SoftMixingDataLine$Gain.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef MASTER_GAIN

using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl = ::javax::sound::sampled::FloatControl;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftMixingDataLine$Gain::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$FloatControl::init$($FloatControl$Type::MASTER_GAIN, -80.0f, 6.0206f, 80.0f / 128.0f, -1, 0.0f, "dB"_s, "Minimum"_s, ""_s, "Maximum"_s);
}

void SoftMixingDataLine$Gain::setValue(float newValue) {
	$FloatControl::setValue(newValue);
	this->this$0->calcVolume();
}

SoftMixingDataLine$Gain::SoftMixingDataLine$Gain() {
}

$Class* SoftMixingDataLine$Gain::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$Gain, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(SoftMixingDataLine$Gain, init$, void, $SoftMixingDataLine*)},
		{"setValue", "(F)V", nullptr, $PUBLIC, $virtualMethod(SoftMixingDataLine$Gain, setValue, void, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMixingDataLine$Gain", "com.sun.media.sound.SoftMixingDataLine", "Gain", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftMixingDataLine$Gain",
		"javax.sound.sampled.FloatControl",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftMixingDataLine"
	};
	$loadClass(SoftMixingDataLine$Gain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMixingDataLine$Gain);
	});
	return class$;
}

$Class* SoftMixingDataLine$Gain::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com