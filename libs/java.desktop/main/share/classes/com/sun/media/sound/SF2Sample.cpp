#include <com/sun/media/sound/SF2Sample.h>

#include <com/sun/media/sound/ModelByteBuffer.h>
#include <java/io/InputStream.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2Sample_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(SF2Sample, name)},
	{"startLoop", "J", nullptr, 0, $field(SF2Sample, startLoop)},
	{"endLoop", "J", nullptr, 0, $field(SF2Sample, endLoop)},
	{"sampleRate", "J", nullptr, 0, $field(SF2Sample, sampleRate)},
	{"originalPitch", "I", nullptr, 0, $field(SF2Sample, originalPitch)},
	{"pitchCorrection", "B", nullptr, 0, $field(SF2Sample, pitchCorrection)},
	{"sampleLink", "I", nullptr, 0, $field(SF2Sample, sampleLink)},
	{"sampleType", "I", nullptr, 0, $field(SF2Sample, sampleType)},
	{"data", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, 0, $field(SF2Sample, data)},
	{"data24", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, 0, $field(SF2Sample, data24)},
	{}
};

$MethodInfo _SF2Sample_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC, $method(SF2Sample, init$, void, $Soundbank*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SF2Sample, init$, void)},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SF2Sample, getData, $Object*)},
	{"getData24Buffer", "()Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(SF2Sample, getData24Buffer, $ModelByteBuffer*)},
	{"getDataBuffer", "()Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(SF2Sample, getDataBuffer, $ModelByteBuffer*)},
	{"getEndLoop", "()J", nullptr, $PUBLIC, $method(SF2Sample, getEndLoop, int64_t)},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC, $method(SF2Sample, getFormat, $AudioFormat*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SF2Sample, getName, $String*)},
	{"getOriginalPitch", "()I", nullptr, $PUBLIC, $method(SF2Sample, getOriginalPitch, int32_t)},
	{"getPitchCorrection", "()B", nullptr, $PUBLIC, $method(SF2Sample, getPitchCorrection, int8_t)},
	{"getSampleLink", "()I", nullptr, $PUBLIC, $method(SF2Sample, getSampleLink, int32_t)},
	{"getSampleRate", "()J", nullptr, $PUBLIC, $method(SF2Sample, getSampleRate, int64_t)},
	{"getSampleType", "()I", nullptr, $PUBLIC, $method(SF2Sample, getSampleType, int32_t)},
	{"getStartLoop", "()J", nullptr, $PUBLIC, $method(SF2Sample, getStartLoop, int64_t)},
	{"setData", "(Lcom/sun/media/sound/ModelByteBuffer;)V", nullptr, $PUBLIC, $method(SF2Sample, setData, void, $ModelByteBuffer*)},
	{"setData", "([B)V", nullptr, $PUBLIC, $method(SF2Sample, setData, void, $bytes*)},
	{"setData", "([BII)V", nullptr, $PUBLIC, $method(SF2Sample, setData, void, $bytes*, int32_t, int32_t)},
	{"setData24", "(Lcom/sun/media/sound/ModelByteBuffer;)V", nullptr, $PUBLIC, $method(SF2Sample, setData24, void, $ModelByteBuffer*)},
	{"setData24", "([B)V", nullptr, $PUBLIC, $method(SF2Sample, setData24, void, $bytes*)},
	{"setData24", "([BII)V", nullptr, $PUBLIC, $method(SF2Sample, setData24, void, $bytes*, int32_t, int32_t)},
	{"setEndLoop", "(J)V", nullptr, $PUBLIC, $method(SF2Sample, setEndLoop, void, int64_t)},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SF2Sample, setName, void, $String*)},
	{"setOriginalPitch", "(I)V", nullptr, $PUBLIC, $method(SF2Sample, setOriginalPitch, void, int32_t)},
	{"setPitchCorrection", "(B)V", nullptr, $PUBLIC, $method(SF2Sample, setPitchCorrection, void, int8_t)},
	{"setSampleLink", "(I)V", nullptr, $PUBLIC, $method(SF2Sample, setSampleLink, void, int32_t)},
	{"setSampleRate", "(J)V", nullptr, $PUBLIC, $method(SF2Sample, setSampleRate, void, int64_t)},
	{"setSampleType", "(I)V", nullptr, $PUBLIC, $method(SF2Sample, setSampleType, void, int32_t)},
	{"setStartLoop", "(J)V", nullptr, $PUBLIC, $method(SF2Sample, setStartLoop, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SF2Sample, toString, $String*)},
	{}
};

$ClassInfo _SF2Sample_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2Sample",
	"javax.sound.midi.SoundbankResource",
	nullptr,
	_SF2Sample_FieldInfo_,
	_SF2Sample_MethodInfo_
};

$Object* allocate$SF2Sample($Class* clazz) {
	return $of($alloc(SF2Sample));
}

void SF2Sample::init$($Soundbank* soundBank) {
	$load($AudioInputStream);
	$SoundbankResource::init$(soundBank, nullptr, $AudioInputStream::class$);
	$set(this, name, ""_s);
	this->startLoop = 0;
	this->endLoop = 0;
	this->sampleRate = 0x0000AC44;
	this->originalPitch = 60;
	this->pitchCorrection = (int8_t)0;
	this->sampleLink = 0;
	this->sampleType = 0;
}

void SF2Sample::init$() {
	$load($AudioInputStream);
	$SoundbankResource::init$(nullptr, nullptr, $AudioInputStream::class$);
	$set(this, name, ""_s);
	this->startLoop = 0;
	this->endLoop = 0;
	this->sampleRate = 0x0000AC44;
	this->originalPitch = 60;
	this->pitchCorrection = (int8_t)0;
	this->sampleLink = 0;
	this->sampleType = 0;
}

$Object* SF2Sample::getData() {
	$useLocalCurrentObjectStackCache();
	$var($AudioFormat, format, getFormat());
	$var($InputStream, is, $nc(this->data)->getInputStream());
	if (is == nullptr) {
		return $of(nullptr);
	}
	return $of($new($AudioInputStream, is, format, $nc(this->data)->capacity()));
}

$ModelByteBuffer* SF2Sample::getDataBuffer() {
	return this->data;
}

$ModelByteBuffer* SF2Sample::getData24Buffer() {
	return this->data24;
}

$AudioFormat* SF2Sample::getFormat() {
	return $new($AudioFormat, (float)this->sampleRate, 16, 1, true, false);
}

void SF2Sample::setData($ModelByteBuffer* data) {
	$set(this, data, data);
}

void SF2Sample::setData($bytes* data) {
	$set(this, data, $new($ModelByteBuffer, data));
}

void SF2Sample::setData($bytes* data, int32_t offset, int32_t length) {
	$set(this, data, $new($ModelByteBuffer, data, offset, length));
}

void SF2Sample::setData24($ModelByteBuffer* data24) {
	$set(this, data24, data24);
}

void SF2Sample::setData24($bytes* data24) {
	$set(this, data24, $new($ModelByteBuffer, data24));
}

void SF2Sample::setData24($bytes* data24, int32_t offset, int32_t length) {
	$set(this, data24, $new($ModelByteBuffer, data24, offset, length));
}

$String* SF2Sample::getName() {
	return this->name;
}

void SF2Sample::setName($String* name) {
	$set(this, name, name);
}

int64_t SF2Sample::getEndLoop() {
	return this->endLoop;
}

void SF2Sample::setEndLoop(int64_t endLoop) {
	this->endLoop = endLoop;
}

int32_t SF2Sample::getOriginalPitch() {
	return this->originalPitch;
}

void SF2Sample::setOriginalPitch(int32_t originalPitch) {
	this->originalPitch = originalPitch;
}

int8_t SF2Sample::getPitchCorrection() {
	return this->pitchCorrection;
}

void SF2Sample::setPitchCorrection(int8_t pitchCorrection) {
	this->pitchCorrection = pitchCorrection;
}

int32_t SF2Sample::getSampleLink() {
	return this->sampleLink;
}

void SF2Sample::setSampleLink(int32_t sampleLink) {
	this->sampleLink = sampleLink;
}

int64_t SF2Sample::getSampleRate() {
	return this->sampleRate;
}

void SF2Sample::setSampleRate(int64_t sampleRate) {
	this->sampleRate = sampleRate;
}

int32_t SF2Sample::getSampleType() {
	return this->sampleType;
}

void SF2Sample::setSampleType(int32_t sampleType) {
	this->sampleType = sampleType;
}

int64_t SF2Sample::getStartLoop() {
	return this->startLoop;
}

void SF2Sample::setStartLoop(int64_t startLoop) {
	this->startLoop = startLoop;
}

$String* SF2Sample::toString() {
	return $str({"Sample: "_s, this->name});
}

SF2Sample::SF2Sample() {
}

$Class* SF2Sample::load$($String* name, bool initialize) {
	$loadClass(SF2Sample, name, initialize, &_SF2Sample_ClassInfo_, allocate$SF2Sample);
	return class$;
}

$Class* SF2Sample::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com