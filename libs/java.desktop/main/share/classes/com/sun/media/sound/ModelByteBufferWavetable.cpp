#include <com/sun/media/sound/ModelByteBufferWavetable.h>

#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <com/sun/media/sound/ModelByteBuffer.h>
#include <com/sun/media/sound/ModelByteBufferWavetable$Buffer8PlusInputStream.h>
#include <com/sun/media/sound/ModelOscillatorStream.h>
#include <com/sun/media/sound/ModelWavetable.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef LOOP_TYPE_OFF
#undef PCM_SIGNED
#undef PCM_UNSIGNED

using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $ModelByteBufferWavetable$Buffer8PlusInputStream = ::com::sun::media::sound::ModelByteBufferWavetable$Buffer8PlusInputStream;
using $ModelOscillatorStream = ::com::sun::media::sound::ModelOscillatorStream;
using $ModelWavetable = ::com::sun::media::sound::ModelWavetable;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFileFormat = ::javax::sound::sampled::AudioFileFormat;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelByteBufferWavetable_FieldInfo_[] = {
	{"loopStart", "F", nullptr, $PRIVATE, $field(ModelByteBufferWavetable, loopStart)},
	{"loopLength", "F", nullptr, $PRIVATE, $field(ModelByteBufferWavetable, loopLength)},
	{"buffer", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(ModelByteBufferWavetable, buffer)},
	{"buffer8", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PRIVATE, $field(ModelByteBufferWavetable, buffer8)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(ModelByteBufferWavetable, format)},
	{"pitchcorrection", "F", nullptr, $PRIVATE, $field(ModelByteBufferWavetable, pitchcorrection)},
	{"attenuation", "F", nullptr, $PRIVATE, $field(ModelByteBufferWavetable, attenuation)},
	{"loopType", "I", nullptr, $PRIVATE, $field(ModelByteBufferWavetable, loopType)},
	{}
};

$MethodInfo _ModelByteBufferWavetable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/ModelByteBuffer;)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, init$, void, $ModelByteBuffer*)},
	{"<init>", "(Lcom/sun/media/sound/ModelByteBuffer;F)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, init$, void, $ModelByteBuffer*, float)},
	{"<init>", "(Lcom/sun/media/sound/ModelByteBuffer;Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, init$, void, $ModelByteBuffer*, $AudioFormat*)},
	{"<init>", "(Lcom/sun/media/sound/ModelByteBuffer;Ljavax/sound/sampled/AudioFormat;F)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, init$, void, $ModelByteBuffer*, $AudioFormat*, float)},
	{"get8BitExtensionBuffer", "()Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, get8BitExtensionBuffer, $ModelByteBuffer*)},
	{"getAttenuation", "()F", nullptr, $PUBLIC, $virtualMethod(ModelByteBufferWavetable, getAttenuation, float)},
	{"getBuffer", "()Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, getBuffer, $ModelByteBuffer*)},
	{"getChannels", "()I", nullptr, $PUBLIC, $virtualMethod(ModelByteBufferWavetable, getChannels, int32_t)},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, getFormat, $AudioFormat*)},
	{"getLoopLength", "()F", nullptr, $PUBLIC, $virtualMethod(ModelByteBufferWavetable, getLoopLength, float)},
	{"getLoopStart", "()F", nullptr, $PUBLIC, $virtualMethod(ModelByteBufferWavetable, getLoopStart, float)},
	{"getLoopType", "()I", nullptr, $PUBLIC, $virtualMethod(ModelByteBufferWavetable, getLoopType, int32_t)},
	{"getPitchcorrection", "()F", nullptr, $PUBLIC, $virtualMethod(ModelByteBufferWavetable, getPitchcorrection, float)},
	{"open", "(F)Lcom/sun/media/sound/ModelOscillatorStream;", nullptr, $PUBLIC, $virtualMethod(ModelByteBufferWavetable, open, $ModelOscillatorStream*, float)},
	{"openStream", "()Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PUBLIC, $virtualMethod(ModelByteBufferWavetable, openStream, $AudioFloatInputStream*)},
	{"set8BitExtensionBuffer", "(Lcom/sun/media/sound/ModelByteBuffer;)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, set8BitExtensionBuffer, void, $ModelByteBuffer*)},
	{"setAttenuation", "(F)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, setAttenuation, void, float)},
	{"setLoopLength", "(F)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, setLoopLength, void, float)},
	{"setLoopStart", "(F)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, setLoopStart, void, float)},
	{"setLoopType", "(I)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, setLoopType, void, int32_t)},
	{"setPitchcorrection", "(F)V", nullptr, $PUBLIC, $method(ModelByteBufferWavetable, setPitchcorrection, void, float)},
	{}
};

$InnerClassInfo _ModelByteBufferWavetable_InnerClassesInfo_[] = {
	{"com.sun.media.sound.ModelByteBufferWavetable$Buffer8PlusInputStream", "com.sun.media.sound.ModelByteBufferWavetable", "Buffer8PlusInputStream", $PRIVATE},
	{}
};

$ClassInfo _ModelByteBufferWavetable_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelByteBufferWavetable",
	"java.lang.Object",
	"com.sun.media.sound.ModelWavetable",
	_ModelByteBufferWavetable_FieldInfo_,
	_ModelByteBufferWavetable_MethodInfo_,
	nullptr,
	nullptr,
	_ModelByteBufferWavetable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.ModelByteBufferWavetable$Buffer8PlusInputStream"
};

$Object* allocate$ModelByteBufferWavetable($Class* clazz) {
	return $of($alloc(ModelByteBufferWavetable));
}

void ModelByteBufferWavetable::init$($ModelByteBuffer* buffer) {
	this->loopStart = (float)-1;
	this->loopLength = (float)-1;
	$set(this, buffer8, nullptr);
	$set(this, format, nullptr);
	this->pitchcorrection = (float)0;
	this->attenuation = (float)0;
	this->loopType = $ModelWavetable::LOOP_TYPE_OFF;
	$set(this, buffer, buffer);
}

void ModelByteBufferWavetable::init$($ModelByteBuffer* buffer, float pitchcorrection) {
	this->loopStart = (float)-1;
	this->loopLength = (float)-1;
	$set(this, buffer8, nullptr);
	$set(this, format, nullptr);
	this->pitchcorrection = (float)0;
	this->attenuation = (float)0;
	this->loopType = $ModelWavetable::LOOP_TYPE_OFF;
	$set(this, buffer, buffer);
	this->pitchcorrection = pitchcorrection;
}

void ModelByteBufferWavetable::init$($ModelByteBuffer* buffer, $AudioFormat* format) {
	this->loopStart = (float)-1;
	this->loopLength = (float)-1;
	$set(this, buffer8, nullptr);
	$set(this, format, nullptr);
	this->pitchcorrection = (float)0;
	this->attenuation = (float)0;
	this->loopType = $ModelWavetable::LOOP_TYPE_OFF;
	$set(this, format, format);
	$set(this, buffer, buffer);
}

void ModelByteBufferWavetable::init$($ModelByteBuffer* buffer, $AudioFormat* format, float pitchcorrection) {
	this->loopStart = (float)-1;
	this->loopLength = (float)-1;
	$set(this, buffer8, nullptr);
	$set(this, format, nullptr);
	this->pitchcorrection = (float)0;
	this->attenuation = (float)0;
	this->loopType = $ModelWavetable::LOOP_TYPE_OFF;
	$set(this, format, format);
	$set(this, buffer, buffer);
	this->pitchcorrection = pitchcorrection;
}

void ModelByteBufferWavetable::set8BitExtensionBuffer($ModelByteBuffer* buffer) {
	$set(this, buffer8, buffer);
}

$ModelByteBuffer* ModelByteBufferWavetable::get8BitExtensionBuffer() {
	return this->buffer8;
}

$ModelByteBuffer* ModelByteBufferWavetable::getBuffer() {
	return this->buffer;
}

$AudioFormat* ModelByteBufferWavetable::getFormat() {
	$useLocalCurrentObjectStackCache();
	if (this->format == nullptr) {
		if (this->buffer == nullptr) {
			return nullptr;
		}
		$var($InputStream, is, $nc(this->buffer)->getInputStream());
		$var($AudioFormat, format, nullptr);
		try {
			$assign(format, $nc($($AudioSystem::getAudioFileFormat(is)))->getFormat());
		} catch ($Exception& e) {
		}
		try {
			$nc(is)->close();
		} catch ($IOException& e) {
		}
		return format;
	}
	return this->format;
}

$AudioFloatInputStream* ModelByteBufferWavetable::openStream() {
	$useLocalCurrentObjectStackCache();
	if (this->buffer == nullptr) {
		return nullptr;
	}
	if (this->format == nullptr) {
		$var($InputStream, is, $nc(this->buffer)->getInputStream());
		$var($AudioInputStream, ais, nullptr);
		try {
			$assign(ais, $AudioSystem::getAudioInputStream(is));
		} catch ($Exception& e) {
			return nullptr;
		}
		return $AudioFloatInputStream::getInputStream(ais);
	}
	if ($nc(this->buffer)->array() == nullptr) {
		$var($InputStream, var$0, $nc(this->buffer)->getInputStream());
		$var($AudioFormat, var$1, this->format);
		int64_t var$2 = $nc(this->buffer)->capacity();
		return $AudioFloatInputStream::getInputStream($$new($AudioInputStream, var$0, var$1, $div(var$2, $nc(this->format)->getFrameSize())));
	}
	if (this->buffer8 != nullptr) {
		$init($AudioFormat$Encoding);
		bool var$3 = $nc($($nc(this->format)->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED);
		if (var$3 || $nc($($nc(this->format)->getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
			$var($InputStream, is, $new($ModelByteBufferWavetable$Buffer8PlusInputStream, this));
			$var($AudioFormat$Encoding, var$4, $nc(this->format)->getEncoding());
			float var$5 = $nc(this->format)->getSampleRate();
			int32_t var$6 = $nc(this->format)->getSampleSizeInBits() + 8;
			int32_t var$7 = $nc(this->format)->getChannels();
			int32_t var$9 = $nc(this->format)->getFrameSize();
			int32_t var$8 = var$9 + (1 * $nc(this->format)->getChannels());
			float var$10 = $nc(this->format)->getFrameRate();
			$var($AudioFormat, format2, $new($AudioFormat, var$4, var$5, var$6, var$7, var$8, var$10, $nc(this->format)->isBigEndian()));
			int64_t var$11 = $nc(this->buffer)->capacity();
			$var($AudioInputStream, ais, $new($AudioInputStream, is, format2, $div(var$11, $nc(this->format)->getFrameSize())));
			return $AudioFloatInputStream::getInputStream(ais);
		}
	}
	$var($AudioFormat, var$12, this->format);
	$var($bytes, var$13, $nc(this->buffer)->array());
	int32_t var$14 = (int32_t)$nc(this->buffer)->arrayOffset();
	return $AudioFloatInputStream::getInputStream(var$12, var$13, var$14, (int32_t)$nc(this->buffer)->capacity());
}

int32_t ModelByteBufferWavetable::getChannels() {
	return $nc($(getFormat()))->getChannels();
}

$ModelOscillatorStream* ModelByteBufferWavetable::open(float samplerate) {
	return nullptr;
}

float ModelByteBufferWavetable::getAttenuation() {
	return this->attenuation;
}

void ModelByteBufferWavetable::setAttenuation(float attenuation) {
	this->attenuation = attenuation;
}

float ModelByteBufferWavetable::getLoopLength() {
	return this->loopLength;
}

void ModelByteBufferWavetable::setLoopLength(float loopLength) {
	this->loopLength = loopLength;
}

float ModelByteBufferWavetable::getLoopStart() {
	return this->loopStart;
}

void ModelByteBufferWavetable::setLoopStart(float loopStart) {
	this->loopStart = loopStart;
}

void ModelByteBufferWavetable::setLoopType(int32_t loopType) {
	this->loopType = loopType;
}

int32_t ModelByteBufferWavetable::getLoopType() {
	return this->loopType;
}

float ModelByteBufferWavetable::getPitchcorrection() {
	return this->pitchcorrection;
}

void ModelByteBufferWavetable::setPitchcorrection(float pitchcorrection) {
	this->pitchcorrection = pitchcorrection;
}

ModelByteBufferWavetable::ModelByteBufferWavetable() {
}

$Class* ModelByteBufferWavetable::load$($String* name, bool initialize) {
	$loadClass(ModelByteBufferWavetable, name, initialize, &_ModelByteBufferWavetable_ClassInfo_, allocate$ModelByteBufferWavetable);
	return class$;
}

$Class* ModelByteBufferWavetable::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com