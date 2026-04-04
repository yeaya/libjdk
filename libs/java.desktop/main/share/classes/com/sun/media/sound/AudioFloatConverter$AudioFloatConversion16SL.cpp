#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion16SL.h>
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

void AudioFloatConverter$AudioFloatConversion16SL::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion16SL::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t len = out_offset + out_len;
	for (int32_t ox = out_offset; ox < len; ++ox) {
		int32_t var$0 = $nc(in_buff)->get(ix++) & 0xff;
		int16_t x = (int16_t)(var$0 | (in_buff->get(ix++) << 8));
		$nc(out_buff)->set(ox, x > 0 ? x / 32767.0f : x / 32768.0f);
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion16SL::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ox = out_offset;
	int32_t len = in_offset + in_len;
	for (int32_t ix = in_offset; ix < len; ++ix) {
		float f = $nc(in_buff)->get(ix);
		int16_t x = $cast(int16_t, (f > 0 ? f * 32767 : f * 0x00008000));
		$nc(out_buff)->set(ox++, (int8_t)x);
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion16SL::AudioFloatConverter$AudioFloatConversion16SL() {
}

$Class* AudioFloatConverter$AudioFloatConversion16SL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AudioFloatConverter$AudioFloatConversion16SL, init$, void)},
		{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion16SL, toByteArray, $bytes*, $floats*, int32_t, int32_t, $bytes*, int32_t)},
		{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion16SL, toFloatArray, $floats*, $bytes*, int32_t, $floats*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion16SL", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SL",
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
	$loadClass(AudioFloatConverter$AudioFloatConversion16SL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFloatConverter$AudioFloatConversion16SL);
	});
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion16SL::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com