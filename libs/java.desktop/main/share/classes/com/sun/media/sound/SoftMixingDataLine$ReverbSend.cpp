#include <com/sun/media/sound/SoftMixingDataLine$ReverbSend.h>
#include <com/sun/media/sound/SoftMixingDataLine$Balance.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef REVERB_SEND

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

void SoftMixingDataLine$ReverbSend::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$FloatControl::init$($FloatControl$Type::REVERB_SEND, -80.0f, 6.0206f, 80.0f / 128.0f, -1, -80.0f, "dB"_s, "Minimum"_s, ""_s, "Maximum"_s);
}

void SoftMixingDataLine$ReverbSend::setValue(float newValue) {
	$FloatControl::setValue(newValue);
	$nc(this->this$0->balance_control)->setValue(newValue);
}

SoftMixingDataLine$ReverbSend::SoftMixingDataLine$ReverbSend() {
}

$Class* SoftMixingDataLine$ReverbSend::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$ReverbSend, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(SoftMixingDataLine$ReverbSend, init$, void, $SoftMixingDataLine*)},
		{"setValue", "(F)V", nullptr, $PUBLIC, $virtualMethod(SoftMixingDataLine$ReverbSend, setValue, void, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMixingDataLine$ReverbSend", "com.sun.media.sound.SoftMixingDataLine", "ReverbSend", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftMixingDataLine$ReverbSend",
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
	$loadClass(SoftMixingDataLine$ReverbSend, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMixingDataLine$ReverbSend);
	});
	return class$;
}

$Class* SoftMixingDataLine$ReverbSend::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com