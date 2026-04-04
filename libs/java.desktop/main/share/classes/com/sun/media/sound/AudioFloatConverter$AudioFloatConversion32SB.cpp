#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32SB.h>
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

void AudioFloatConverter$AudioFloatConversion32SB::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion32SB::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$2 = ($nc(in_buff)->get(ix++) & 0xff) << 24;
		int32_t var$1 = var$2 | ((in_buff->get(ix++) & 0xff) << 16);
		int32_t var$0 = var$1 | ((in_buff->get(ix++) & 0xff) << 8);
		int32_t x = var$0 | (in_buff->get(ix++) & 0xff);
		$nc(out_buff)->set(ox++, x * ($div(1.0f, (float)0x7fffffff)));
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32SB::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		int32_t x = $cast(int32_t, ($nc(in_buff)->get(ix++) * (float)0x7fffffff));
		$nc(out_buff)->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 24)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)x);
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32SB::AudioFloatConverter$AudioFloatConversion32SB() {
}

$Class* AudioFloatConverter$AudioFloatConversion32SB::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AudioFloatConverter$AudioFloatConversion32SB, init$, void)},
		{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion32SB, toByteArray, $bytes*, $floats*, int32_t, int32_t, $bytes*, int32_t)},
		{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion32SB, toFloatArray, $floats*, $bytes*, int32_t, $floats*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32SB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32SB", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32SB",
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
	$loadClass(AudioFloatConverter$AudioFloatConversion32SB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFloatConverter$AudioFloatConversion32SB);
	});
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32SB::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com