#include <com/sun/media/sound/StandardFileFormat.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef NOT_SPECIFIED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFileFormat = ::javax::sound::sampled::AudioFileFormat;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void StandardFileFormat::init$($AudioFileFormat$Type* type, $AudioFormat* format, int64_t frameLength) {
	StandardFileFormat::init$(type, $AudioSystem::NOT_SPECIFIED, format, frameLength);
}

void StandardFileFormat::init$($AudioFileFormat$Type* type, int64_t byteLength, $AudioFormat* format, int64_t frameLength) {
	int32_t var$0 = clip(byteLength);
	$AudioFileFormat::init$(type, var$0, format, clip(frameLength));
	this->byteLength = byteLength;
	this->frameLength = frameLength;
}

int32_t StandardFileFormat::clip(int64_t value) {
	$init(StandardFileFormat);
	if (value > $Integer::MAX_VALUE) {
		return $AudioSystem::NOT_SPECIFIED;
	}
	return (int32_t)value;
}

int64_t StandardFileFormat::getLongFrameLength() {
	return this->frameLength;
}

int64_t StandardFileFormat::getLongByteLength() {
	return this->byteLength;
}

StandardFileFormat::StandardFileFormat() {
}

$Class* StandardFileFormat::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"byteLength", "J", nullptr, $PRIVATE | $FINAL, $field(StandardFileFormat, byteLength)},
		{"frameLength", "J", nullptr, $PRIVATE | $FINAL, $field(StandardFileFormat, frameLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioFormat;J)V", nullptr, 0, $method(StandardFileFormat, init$, void, $AudioFileFormat$Type*, $AudioFormat*, int64_t)},
		{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;JLjavax/sound/sampled/AudioFormat;J)V", nullptr, 0, $method(StandardFileFormat, init$, void, $AudioFileFormat$Type*, int64_t, $AudioFormat*, int64_t)},
		{"clip", "(J)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StandardFileFormat, clip, int32_t, int64_t)},
		{"getLongByteLength", "()J", nullptr, $PUBLIC | $FINAL, $method(StandardFileFormat, getLongByteLength, int64_t)},
		{"getLongFrameLength", "()J", nullptr, $PUBLIC | $FINAL, $method(StandardFileFormat, getLongFrameLength, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.StandardFileFormat",
		"javax.sound.sampled.AudioFileFormat",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StandardFileFormat, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardFileFormat);
	});
	return class$;
}

$Class* StandardFileFormat::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com