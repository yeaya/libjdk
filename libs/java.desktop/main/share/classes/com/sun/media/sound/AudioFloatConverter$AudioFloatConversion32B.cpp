#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32B.h>
#include <com/sun/media/sound/AudioFloatConverter.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void AudioFloatConverter$AudioFloatConversion32B::init$() {
	$AudioFloatConverter::init$();
	$set(this, bytebuffer, nullptr);
	$set(this, floatbuffer, nullptr);
}

$floats* AudioFloatConverter$AudioFloatConversion32B::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t in_len = out_len * 4;
	if (this->bytebuffer == nullptr || this->bytebuffer->capacity() < in_len) {
		$init($ByteOrder);
		$set(this, bytebuffer, $$nc($ByteBuffer::allocate(in_len))->order($ByteOrder::BIG_ENDIAN));
		$set(this, floatbuffer, $nc(this->bytebuffer)->asFloatBuffer());
	}
	$nc(this->bytebuffer)->position(0);
	$nc(this->floatbuffer)->position(0);
	$nc(this->bytebuffer)->put(in_buff, in_offset, in_len);
	$nc(this->floatbuffer)->get(out_buff, out_offset, out_len);
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32B::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t out_len = in_len * 4;
	if (this->bytebuffer == nullptr || this->bytebuffer->capacity() < out_len) {
		$init($ByteOrder);
		$set(this, bytebuffer, $$nc($ByteBuffer::allocate(out_len))->order($ByteOrder::BIG_ENDIAN));
		$set(this, floatbuffer, $nc(this->bytebuffer)->asFloatBuffer());
	}
	$nc(this->floatbuffer)->position(0);
	$nc(this->bytebuffer)->position(0);
	$nc(this->floatbuffer)->put(in_buff, in_offset, in_len);
	$nc(this->bytebuffer)->get(out_buff, out_offset, out_len);
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32B::AudioFloatConverter$AudioFloatConversion32B() {
}

$Class* AudioFloatConverter$AudioFloatConversion32B::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bytebuffer", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(AudioFloatConverter$AudioFloatConversion32B, bytebuffer)},
		{"floatbuffer", "Ljava/nio/FloatBuffer;", nullptr, 0, $field(AudioFloatConverter$AudioFloatConversion32B, floatbuffer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AudioFloatConverter$AudioFloatConversion32B, init$, void)},
		{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion32B, toByteArray, $bytes*, $floats*, int32_t, int32_t, $bytes*, int32_t)},
		{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC, $virtualMethod(AudioFloatConverter$AudioFloatConversion32B, toFloatArray, $floats*, $bytes*, int32_t, $floats*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32B", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32B", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32B",
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
	$loadClass(AudioFloatConverter$AudioFloatConversion32B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFloatConverter$AudioFloatConversion32B);
	});
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32B::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com