#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xUL.h>
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

void AudioFloatConverter$AudioFloatConversion32xUL::init$(int32_t xbytes) {
	$AudioFloatConverter::init$();
	this->xbytes = xbytes;
}

$floats* AudioFloatConverter$AudioFloatConversion32xUL::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		ix += this->xbytes;
		int32_t var$2 = $nc(in_buff)->get(ix++) & 0xff;
		int32_t var$1 = var$2 | ((in_buff->get(ix++) & 0xff) << 8);
		int32_t var$0 = var$1 | ((in_buff->get(ix++) & 0xff) << 16);
		int32_t x = var$0 | ((in_buff->get(ix++) & 0xff) << 24);
		x -= (int32_t)0x80000000;
		$nc(out_buff)->set(ox++, x * ($div(1.0f, (float)0x7fffffff)));
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32xUL::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		int32_t x = $cast(int32_t, ($nc(in_buff)->get(ix++) * (float)0x7fffffff));
		x += (int32_t)0x80000000;
		for (int32_t j = 0; j < this->xbytes; ++j) {
			$nc(out_buff)->set(ox++, 0);
		}
		$nc(out_buff)->set(ox++, (int8_t)x);
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 24)));
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32xUL::AudioFloatConverter$AudioFloatConversion32xUL() {
}

$Class* AudioFloatConverter$AudioFloatConversion32xUL::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xbytes", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatConverter$AudioFloatConversion32xUL, xbytes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(AudioFloatConverter$AudioFloatConversion32xUL, init$, void, int32_t)},
		{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion32xUL, toByteArray, $bytes*, $floats*, int32_t, int32_t, $bytes*, int32_t)},
		{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion32xUL, toFloatArray, $floats*, $bytes*, int32_t, $floats*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32xUL", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUL",
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
	$loadClass(AudioFloatConverter$AudioFloatConversion32xUL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFloatConverter$AudioFloatConversion32xUL);
	});
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32xUL::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com