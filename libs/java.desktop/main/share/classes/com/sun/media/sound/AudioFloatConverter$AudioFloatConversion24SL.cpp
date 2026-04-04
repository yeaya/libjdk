#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion24SL.h>
#include <com/sun/media/sound/AudioFloatConverter.h>
#include <jcpp.h>

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void AudioFloatConverter$AudioFloatConversion24SL::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion24SL::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$1 = $nc(in_buff)->get(ix++) & 0xff;
		int32_t var$0 = var$1 | ((in_buff->get(ix++) & 0xff) << 8);
		int32_t x = var$0 | ((in_buff->get(ix++) & 0xff) << 16);
		if (x > 0x007fffff) {
			x -= 0x01000000;
		}
		$nc(out_buff)->set(ox++, x > 0 ? x / 8388607.0f : x / 8388608.0f);
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion24SL::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		float f = $nc(in_buff)->get(ix++);
		int32_t x = $cast(int32_t, (f > 0 ? f * 8388607.0f : f * 8388608.0f));
		if (x < 0) {
			x += 0x01000000;
		}
		$nc(out_buff)->set(ox++, (int8_t)x);
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion24SL::AudioFloatConverter$AudioFloatConversion24SL() {
}

$Class* AudioFloatConverter$AudioFloatConversion24SL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AudioFloatConverter$AudioFloatConversion24SL, init$, void)},
		{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion24SL, toByteArray, $bytes*, $floats*, int32_t, int32_t, $bytes*, int32_t)},
		{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion24SL, toFloatArray, $floats*, $bytes*, int32_t, $floats*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24SL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion24SL", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24SL",
		"com.sun.media.sound.AudioFloatConverter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.AudioFloatConverter"
	};
	$loadClass(AudioFloatConverter$AudioFloatConversion24SL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFloatConverter$AudioFloatConversion24SL);
	});
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion24SL::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com