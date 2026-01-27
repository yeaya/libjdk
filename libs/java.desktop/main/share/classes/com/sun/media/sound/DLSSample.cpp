#include <com/sun/media/sound/DLSSample.h>

#include <com/sun/media/sound/DLSInfo.h>
#include <com/sun/media/sound/DLSSampleOptions.h>
#include <com/sun/media/sound/ModelByteBuffer.h>
#include <java/io/InputStream.h>
#include <java/util/Arrays.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $DLSInfo = ::com::sun::media::sound::DLSInfo;
using $DLSSampleOptions = ::com::sun::media::sound::DLSSampleOptions;
using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DLSSample_FieldInfo_[] = {
	{"guid", "[B", nullptr, 0, $field(DLSSample, guid)},
	{"info", "Lcom/sun/media/sound/DLSInfo;", nullptr, 0, $field(DLSSample, info)},
	{"sampleoptions", "Lcom/sun/media/sound/DLSSampleOptions;", nullptr, 0, $field(DLSSample, sampleoptions)},
	{"data", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, 0, $field(DLSSample, data)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, 0, $field(DLSSample, format)},
	{}
};

$MethodInfo _DLSSample_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC, $method(DLSSample, init$, void, $Soundbank*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DLSSample, init$, void)},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DLSSample, getData, $Object*)},
	{"getDataBuffer", "()Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(DLSSample, getDataBuffer, $ModelByteBuffer*)},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC, $method(DLSSample, getFormat, $AudioFormat*)},
	{"getGuid", "()[B", nullptr, $PUBLIC, $method(DLSSample, getGuid, $bytes*)},
	{"getInfo", "()Lcom/sun/media/sound/DLSInfo;", nullptr, $PUBLIC, $method(DLSSample, getInfo, $DLSInfo*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DLSSample, getName, $String*)},
	{"getSampleoptions", "()Lcom/sun/media/sound/DLSSampleOptions;", nullptr, $PUBLIC, $method(DLSSample, getSampleoptions, $DLSSampleOptions*)},
	{"setData", "(Lcom/sun/media/sound/ModelByteBuffer;)V", nullptr, $PUBLIC, $method(DLSSample, setData, void, $ModelByteBuffer*)},
	{"setData", "([B)V", nullptr, $PUBLIC, $method(DLSSample, setData, void, $bytes*)},
	{"setData", "([BII)V", nullptr, $PUBLIC, $method(DLSSample, setData, void, $bytes*, int32_t, int32_t)},
	{"setFormat", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC, $method(DLSSample, setFormat, void, $AudioFormat*)},
	{"setGuid", "([B)V", nullptr, $PUBLIC, $method(DLSSample, setGuid, void, $bytes*)},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DLSSample, setName, void, $String*)},
	{"setSampleoptions", "(Lcom/sun/media/sound/DLSSampleOptions;)V", nullptr, $PUBLIC, $method(DLSSample, setSampleoptions, void, $DLSSampleOptions*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DLSSample, toString, $String*)},
	{}
};

$ClassInfo _DLSSample_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSSample",
	"javax.sound.midi.SoundbankResource",
	nullptr,
	_DLSSample_FieldInfo_,
	_DLSSample_MethodInfo_
};

$Object* allocate$DLSSample($Class* clazz) {
	return $of($alloc(DLSSample));
}

void DLSSample::init$($Soundbank* soundBank) {
	$load($AudioInputStream);
	$SoundbankResource::init$(soundBank, nullptr, $AudioInputStream::class$);
	$set(this, guid, nullptr);
	$set(this, info, $new($DLSInfo));
}

void DLSSample::init$() {
	$load($AudioInputStream);
	$SoundbankResource::init$(nullptr, nullptr, $AudioInputStream::class$);
	$set(this, guid, nullptr);
	$set(this, info, $new($DLSInfo));
}

$DLSInfo* DLSSample::getInfo() {
	return this->info;
}

$Object* DLSSample::getData() {
	$useLocalCurrentObjectStackCache();
	$var($AudioFormat, format, getFormat());
	$var($InputStream, is, $nc(this->data)->getInputStream());
	if (is == nullptr) {
		return $of(nullptr);
	}
	return $of($new($AudioInputStream, is, format, $nc(this->data)->capacity()));
}

$ModelByteBuffer* DLSSample::getDataBuffer() {
	return this->data;
}

$AudioFormat* DLSSample::getFormat() {
	return this->format;
}

void DLSSample::setFormat($AudioFormat* format) {
	$set(this, format, format);
}

void DLSSample::setData($ModelByteBuffer* data) {
	$set(this, data, data);
}

void DLSSample::setData($bytes* data) {
	$set(this, data, $new($ModelByteBuffer, data));
}

void DLSSample::setData($bytes* data, int32_t offset, int32_t length) {
	$set(this, data, $new($ModelByteBuffer, data, offset, length));
}

$String* DLSSample::getName() {
	return $nc(this->info)->name;
}

void DLSSample::setName($String* name) {
	$set($nc(this->info), name, name);
}

$DLSSampleOptions* DLSSample::getSampleoptions() {
	return this->sampleoptions;
}

void DLSSample::setSampleoptions($DLSSampleOptions* sampleOptions) {
	$set(this, sampleoptions, sampleOptions);
}

$String* DLSSample::toString() {
	return $str({"Sample: "_s, $nc(this->info)->name});
}

$bytes* DLSSample::getGuid() {
	return this->guid == nullptr ? ($bytes*)nullptr : $Arrays::copyOf(this->guid, $nc(this->guid)->length);
}

void DLSSample::setGuid($bytes* guid) {
	$set(this, guid, guid == nullptr ? ($bytes*)nullptr : $Arrays::copyOf(guid, $nc(guid)->length));
}

DLSSample::DLSSample() {
}

$Class* DLSSample::load$($String* name, bool initialize) {
	$loadClass(DLSSample, name, initialize, &_DLSSample_ClassInfo_, allocate$DLSSample);
	return class$;
}

$Class* DLSSample::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com