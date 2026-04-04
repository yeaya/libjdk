#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xUB.h>
#include <com/sun/media/sound/AudioFloatConverter.h>
#include <jcpp.h>

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void AudioFloatConverter$AudioFloatConversion32xUB::init$(int32_t xbytes) {
	$AudioFloatConverter::init$();
	this->xbytes = xbytes;
}

$floats* AudioFloatConverter$AudioFloatConversion32xUB::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$2 = ($nc(in_buff)->get(ix++) & 0xff) << 24;
		int32_t var$1 = var$2 | ((in_buff->get(ix++) & 0xff) << 16);
		int32_t var$0 = var$1 | ((in_buff->get(ix++) & 0xff) << 8);
		int32_t x = var$0 | (in_buff->get(ix++) & 0xff);
		ix += this->xbytes;
		x -= (int32_t)0x80000000;
		$nc(out_buff)->set(ox++, x * (1.0f / 2.14748365E9f));
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32xUB::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		int32_t x = $cast(int32_t, ($nc(in_buff)->get(ix++) * 2.14748365E9f));
		x += (int32_t)0x80000000;
		$nc(out_buff)->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 24)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)x);
		for (int32_t j = 0; j < this->xbytes; ++j) {
			out_buff->set(ox++, 0);
		}
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32xUB::AudioFloatConverter$AudioFloatConversion32xUB() {
}

$Class* AudioFloatConverter$AudioFloatConversion32xUB::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xbytes", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatConverter$AudioFloatConversion32xUB, xbytes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(AudioFloatConverter$AudioFloatConversion32xUB, init$, void, int32_t)},
		{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion32xUB, toByteArray, $bytes*, $floats*, int32_t, int32_t, $bytes*, int32_t)},
		{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion32xUB, toFloatArray, $floats*, $bytes*, int32_t, $floats*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32xUB", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUB",
		"com.sun.media.sound.AudioFloatConverter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.AudioFloatConverter"
	};
	$loadClass(AudioFloatConverter$AudioFloatConversion32xUB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFloatConverter$AudioFloatConversion32xUB);
	});
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32xUB::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com