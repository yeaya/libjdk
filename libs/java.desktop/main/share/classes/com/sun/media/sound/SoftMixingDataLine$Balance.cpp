#include <com/sun/media/sound/SoftMixingDataLine$Balance.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef BALANCE

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

void SoftMixingDataLine$Balance::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$FloatControl::init$($FloatControl$Type::BALANCE, -1.0f, 1.0f, (1.0f / 128.0f), -1, 0.0f, ""_s, "Left"_s, "Center"_s, "Right"_s);
}

void SoftMixingDataLine$Balance::setValue(float newValue) {
	$FloatControl::setValue(newValue);
	this->this$0->calcVolume();
}

SoftMixingDataLine$Balance::SoftMixingDataLine$Balance() {
}

$Class* SoftMixingDataLine$Balance::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$Balance, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(SoftMixingDataLine$Balance, init$, void, $SoftMixingDataLine*)},
		{"setValue", "(F)V", nullptr, $PUBLIC, $virtualMethod(SoftMixingDataLine$Balance, setValue, void, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMixingDataLine$Balance", "com.sun.media.sound.SoftMixingDataLine", "Balance", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftMixingDataLine$Balance",
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
	$loadClass(SoftMixingDataLine$Balance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMixingDataLine$Balance);
	});
	return class$;
}

$Class* SoftMixingDataLine$Balance::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com