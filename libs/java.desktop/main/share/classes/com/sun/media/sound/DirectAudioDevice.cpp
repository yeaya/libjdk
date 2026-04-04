#include <com/sun/media/sound/DirectAudioDevice.h>
#include <com/sun/media/sound/AbstractLine.h>
#include <com/sun/media/sound/AbstractMixer.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectClip.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDLI.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectSDL.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectTDL.h>
#include <com/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo.h>
#include <com/sun/media/sound/Printer.h>
#include <com/sun/media/sound/Toolkit.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Clip.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <javax/sound/sampled/TargetDataLine.h>
#include <jcpp.h>

#undef ALAW
#undef CLIP_BUFFER_TIME
#undef DEFAULT_LINE_BUFFER_TIME
#undef NOT_SPECIFIED
#undef PCM
#undef PCM_SIGNED
#undef PCM_UNSIGNED
#undef ULAW

using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $Line$InfoArray = $Array<::javax::sound::sampled::Line$Info>;
using $AbstractLine = ::com::sun::media::sound::AbstractLine;
using $AbstractMixer = ::com::sun::media::sound::AbstractMixer;
using $DirectAudioDevice$DirectClip = ::com::sun::media::sound::DirectAudioDevice$DirectClip;
using $DirectAudioDevice$DirectDLI = ::com::sun::media::sound::DirectAudioDevice$DirectDLI;
using $DirectAudioDevice$DirectSDL = ::com::sun::media::sound::DirectAudioDevice$DirectSDL;
using $DirectAudioDevice$DirectTDL = ::com::sun::media::sound::DirectAudioDevice$DirectTDL;
using $DirectAudioDeviceProvider$DirectAudioDeviceInfo = ::com::sun::media::sound::DirectAudioDeviceProvider$DirectAudioDeviceInfo;
using $Printer = ::com::sun::media::sound::Printer;
using $Toolkit = ::com::sun::media::sound::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Clip = ::javax::sound::sampled::Clip;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;
using $TargetDataLine = ::javax::sound::sampled::TargetDataLine;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void DirectAudioDevice::init$($DirectAudioDeviceProvider$DirectAudioDeviceInfo* portMixerInfo) {
	$useLocalObjectStack();
	$AbstractMixer::init$(portMixerInfo, nullptr, nullptr, nullptr);
	$var($DirectAudioDevice$DirectDLI, srcLineInfo, createDataLineInfo(true));
	if (srcLineInfo != nullptr) {
		$set(this, sourceLineInfo, $new($Line$InfoArray, 2));
		this->sourceLineInfo->set(0, srcLineInfo);
		$load($Clip);
		$Class* var$0 = $Clip::class$;
		$var($AudioFormatArray, var$1, srcLineInfo->getFormats());
		this->sourceLineInfo->set(1, $$new($DirectAudioDevice$DirectDLI, var$0, var$1, $(srcLineInfo->getHardwareFormats()), 32, $AudioSystem::NOT_SPECIFIED));
	} else {
		$set(this, sourceLineInfo, $new($Line$InfoArray, 0));
	}
	$var($DataLine$Info, dstLineInfo, createDataLineInfo(false));
	if (dstLineInfo != nullptr) {
		$set(this, targetLineInfo, $new($Line$InfoArray, 1));
		this->targetLineInfo->set(0, dstLineInfo);
	} else {
		$set(this, targetLineInfo, $new($Line$InfoArray, 0));
	}
}

$DirectAudioDevice$DirectDLI* DirectAudioDevice::createDataLineInfo(bool isSource) {
	$useLocalObjectStack();
	$var($Vector, formats, $new($Vector));
	$var($AudioFormatArray, hardwareFormatArray, nullptr);
	$var($AudioFormatArray, formatArray, nullptr);
	$synchronized(formats) {
		int32_t var$0 = getMixerIndex();
		nGetFormats(var$0, getDeviceID(), isSource, formats);
		if (formats->size() > 0) {
			int32_t size = formats->size();
			int32_t formatArraySize = size;
			$assign(hardwareFormatArray, $new($AudioFormatArray, size));
			for (int32_t i = 0; i < size; ++i) {
				$var($AudioFormat, format, $cast($AudioFormat, formats->elementAt(i)));
				hardwareFormatArray->set(i, format);
				int32_t bits = $nc(format)->getSampleSizeInBits();
				$init($AudioFormat$Encoding);
				bool isSigned = $$nc(format->getEncoding())->equals($AudioFormat$Encoding::PCM_SIGNED);
				bool isUnsigned = $$nc(format->getEncoding())->equals($AudioFormat$Encoding::PCM_UNSIGNED);
				if (isSigned || isUnsigned) {
					++formatArraySize;
				}
			}
			$assign(formatArray, $new($AudioFormatArray, formatArraySize));
			int32_t formatArrayIndex = 0;
			for (int32_t i = 0; i < size; ++i) {
				$var($AudioFormat, format, hardwareFormatArray->get(i));
				formatArray->set(formatArrayIndex++, format);
				int32_t bits = $nc(format)->getSampleSizeInBits();
				$init($AudioFormat$Encoding);
				bool isSigned = $$nc(format->getEncoding())->equals($AudioFormat$Encoding::PCM_SIGNED);
				bool isUnsigned = $$nc(format->getEncoding())->equals($AudioFormat$Encoding::PCM_UNSIGNED);
				if (bits == 8) {
					if (isSigned) {
						$var($AudioFormat$Encoding, var$1, $AudioFormat$Encoding::PCM_UNSIGNED);
						float var$2 = format->getSampleRate();
						int32_t var$3 = format->getChannels();
						int32_t var$4 = format->getFrameSize();
						float var$5 = format->getSampleRate();
						formatArray->set(formatArrayIndex++, $$new($AudioFormat, var$1, var$2, bits, var$3, var$4, var$5, format->isBigEndian()));
					} else if (isUnsigned) {
						$var($AudioFormat$Encoding, var$6, $AudioFormat$Encoding::PCM_SIGNED);
						float var$7 = format->getSampleRate();
						int32_t var$8 = format->getChannels();
						int32_t var$9 = format->getFrameSize();
						float var$10 = format->getSampleRate();
						formatArray->set(formatArrayIndex++, $$new($AudioFormat, var$6, var$7, bits, var$8, var$9, var$10, format->isBigEndian()));
					}
				} else if (bits > 8 && (isSigned || isUnsigned)) {
					$var($AudioFormat$Encoding, var$11, format->getEncoding());
					float var$12 = format->getSampleRate();
					int32_t var$13 = format->getChannels();
					int32_t var$14 = format->getFrameSize();
					float var$15 = format->getSampleRate();
					formatArray->set(formatArrayIndex++, $$new($AudioFormat, var$11, var$12, bits, var$13, var$14, var$15, !format->isBigEndian()));
				}
			}
		}
	}
	if (formatArray != nullptr) {
		$load($SourceDataLine);
		$load($TargetDataLine);
		return $new($DirectAudioDevice$DirectDLI, isSource ? $SourceDataLine::class$ : $TargetDataLine::class$, formatArray, hardwareFormatArray, 32, $AudioSystem::NOT_SPECIFIED);
	}
	return nullptr;
}

$Line* DirectAudioDevice::getLine($Line$Info* info) {
	$useLocalObjectStack();
	$var($Line$Info, fullInfo, getLineInfo(info));
	if (fullInfo == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Line unsupported: "_s, info}));
	}
	if ($instanceOf($DataLine$Info, fullInfo)) {
		$var($DataLine$Info, dataLineInfo, $cast($DataLine$Info, fullInfo));
		$var($AudioFormat, lineFormat, nullptr);
		int32_t lineBufferSize = $AudioSystem::NOT_SPECIFIED;
		$var($AudioFormatArray, supportedFormats, nullptr);
		if ($instanceOf($DataLine$Info, info)) {
			$assign(supportedFormats, $cast($DataLine$Info, info)->getFormats());
			lineBufferSize = $cast($DataLine$Info, info)->getMaxBufferSize();
		}
		if ((supportedFormats == nullptr) || (supportedFormats->length == 0)) {
			$assign(lineFormat, nullptr);
		} else {
			$assign(lineFormat, supportedFormats->get(supportedFormats->length - 1));
			if (!$Toolkit::isFullySpecifiedPCMFormat(lineFormat)) {
				$assign(lineFormat, nullptr);
			}
		}
		$load($DirectAudioDevice$DirectSDL);
		if ($nc(dataLineInfo->getLineClass())->isAssignableFrom($DirectAudioDevice$DirectSDL::class$)) {
			return $cast($AbstractLine, $new($DirectAudioDevice$DirectSDL, dataLineInfo, lineFormat, lineBufferSize, this));
		}
		$load($DirectAudioDevice$DirectClip);
		if ($nc(dataLineInfo->getLineClass())->isAssignableFrom($DirectAudioDevice$DirectClip::class$)) {
			return $cast($AbstractLine, $new($DirectAudioDevice$DirectClip, dataLineInfo, lineFormat, lineBufferSize, this));
		}
		$load($DirectAudioDevice$DirectTDL);
		if ($nc(dataLineInfo->getLineClass())->isAssignableFrom($DirectAudioDevice$DirectTDL::class$)) {
			return $cast($AbstractLine, $new($DirectAudioDevice$DirectTDL, dataLineInfo, lineFormat, lineBufferSize, this));
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Line unsupported: "_s, info}));
}

int32_t DirectAudioDevice::getMaxLines($Line$Info* info) {
	$var($Line$Info, fullInfo, getLineInfo(info));
	if (fullInfo == nullptr) {
		return 0;
	}
	if ($instanceOf($DataLine$Info, fullInfo)) {
		return getMaxSimulLines();
	}
	return 0;
}

void DirectAudioDevice::implOpen() {
}

void DirectAudioDevice::implClose() {
}

void DirectAudioDevice::implStart() {
}

void DirectAudioDevice::implStop() {
}

int32_t DirectAudioDevice::getMixerIndex() {
	return $$sure($DirectAudioDeviceProvider$DirectAudioDeviceInfo, getMixerInfo())->getIndex();
}

int32_t DirectAudioDevice::getDeviceID() {
	return $$sure($DirectAudioDeviceProvider$DirectAudioDeviceInfo, getMixerInfo())->getDeviceID();
}

int32_t DirectAudioDevice::getMaxSimulLines() {
	return $$sure($DirectAudioDeviceProvider$DirectAudioDeviceInfo, getMixerInfo())->getMaxSimulLines();
}

void DirectAudioDevice::addFormat($Vector* v, int32_t bits, int32_t frameSizeInBytes, int32_t channels, float sampleRate, int32_t encoding, bool signed$, bool bigEndian) {
	$init(DirectAudioDevice);
	$useLocalObjectStack();
	$var($AudioFormat$Encoding, enc, nullptr);
	switch (encoding) {
	case $AbstractMixer::PCM:
		$init($AudioFormat$Encoding);
		$assign(enc, signed$ ? $AudioFormat$Encoding::PCM_SIGNED : $AudioFormat$Encoding::PCM_UNSIGNED);
		break;
	case $AbstractMixer::ULAW:
		$init($AudioFormat$Encoding);
		$assign(enc, $AudioFormat$Encoding::ULAW);
		if (bits != 8) {
			$init($Printer);
			if ($Printer::err$) {
				$Printer::err($$str({"DirectAudioDevice.addFormat called with ULAW, but bitsPerSample="_s, $$str(bits)}));
			}
			bits = 8;
			frameSizeInBytes = channels;
		}
		break;
	case $AbstractMixer::ALAW:
		$init($AudioFormat$Encoding);
		$assign(enc, $AudioFormat$Encoding::ALAW);
		if (bits != 8) {
			$init($Printer);
			if ($Printer::err$) {
				$Printer::err($$str({"DirectAudioDevice.addFormat called with ALAW, but bitsPerSample="_s, $$str(bits)}));
			}
			bits = 8;
			frameSizeInBytes = channels;
		}
		break;
	}
	if (enc == nullptr) {
		$init($Printer);
		if ($Printer::err$) {
			$Printer::err($$str({"DirectAudioDevice.addFormat called with unknown encoding: "_s, $$str(encoding)}));
		}
		return;
	}
	if (frameSizeInBytes <= 0) {
		if (channels > 0) {
			frameSizeInBytes = ((bits + 7) / 8) * channels;
		} else {
			frameSizeInBytes = $AudioSystem::NOT_SPECIFIED;
		}
	}
	$nc(v)->add($$new($AudioFormat, enc, sampleRate, bits, channels, frameSizeInBytes, sampleRate, bigEndian));
}

$AudioFormat* DirectAudioDevice::getSignOrEndianChangedFormat($AudioFormat* format) {
	$init(DirectAudioDevice);
	$useLocalObjectStack();
	$init($AudioFormat$Encoding);
	bool isSigned = $$nc($nc(format)->getEncoding())->equals($AudioFormat$Encoding::PCM_SIGNED);
	bool isUnsigned = $$nc(format->getEncoding())->equals($AudioFormat$Encoding::PCM_UNSIGNED);
	if (format->getSampleSizeInBits() > 8 && isSigned) {
		$var($AudioFormat$Encoding, var$0, format->getEncoding());
		float var$1 = format->getSampleRate();
		int32_t var$2 = format->getSampleSizeInBits();
		int32_t var$3 = format->getChannels();
		int32_t var$4 = format->getFrameSize();
		float var$5 = format->getFrameRate();
		return $new($AudioFormat, var$0, var$1, var$2, var$3, var$4, var$5, !format->isBigEndian());
	} else if (format->getSampleSizeInBits() == 8 && (isSigned || isUnsigned)) {
		$var($AudioFormat$Encoding, var$6, isSigned ? $AudioFormat$Encoding::PCM_UNSIGNED : $AudioFormat$Encoding::PCM_SIGNED);
		float var$7 = format->getSampleRate();
		int32_t var$8 = format->getSampleSizeInBits();
		int32_t var$9 = format->getChannels();
		int32_t var$10 = format->getFrameSize();
		float var$11 = format->getFrameRate();
		return $new($AudioFormat, var$6, var$7, var$8, var$9, var$10, var$11, format->isBigEndian());
	}
	return nullptr;
}

void DirectAudioDevice::nGetFormats(int32_t mixerIndex, int32_t deviceID, bool isSource, $Vector* formats) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nGetFormats, void, int32_t mixerIndex, int32_t deviceID, bool isSource, $Vector* formats);
	$invokeNativeStatic(mixerIndex, deviceID, isSource, formats);
	$finishNativeStatic();
}

int64_t DirectAudioDevice::nOpen(int32_t mixerIndex, int32_t deviceID, bool isSource, int32_t encoding, float sampleRate, int32_t sampleSizeInBits, int32_t frameSize, int32_t channels, bool signed$, bool bigEndian, int32_t bufferSize) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nOpen, int64_t, int32_t mixerIndex, int32_t deviceID, bool isSource, int32_t encoding, float sampleRate, int32_t sampleSizeInBits, int32_t frameSize, int32_t channels, bool signed$, bool bigEndian, int32_t bufferSize);
	int64_t $ret = $invokeNativeStatic(mixerIndex, deviceID, isSource, encoding, sampleRate, sampleSizeInBits, frameSize, channels, signed$, bigEndian, bufferSize);
	$finishNativeStatic();
	return $ret;
}

void DirectAudioDevice::nStart(int64_t id, bool isSource) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nStart, void, int64_t id, bool isSource);
	$invokeNativeStatic(id, isSource);
	$finishNativeStatic();
}

void DirectAudioDevice::nStop(int64_t id, bool isSource) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nStop, void, int64_t id, bool isSource);
	$invokeNativeStatic(id, isSource);
	$finishNativeStatic();
}

void DirectAudioDevice::nClose(int64_t id, bool isSource) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nClose, void, int64_t id, bool isSource);
	$invokeNativeStatic(id, isSource);
	$finishNativeStatic();
}

int32_t DirectAudioDevice::nWrite(int64_t id, $bytes* b, int32_t off, int32_t len, int32_t conversionSize, float volLeft, float volRight) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nWrite, int32_t, int64_t id, $bytes* b, int32_t off, int32_t len, int32_t conversionSize, float volLeft, float volRight);
	int32_t $ret = $invokeNativeStatic(id, b, off, len, conversionSize, volLeft, volRight);
	$finishNativeStatic();
	return $ret;
}

int32_t DirectAudioDevice::nRead(int64_t id, $bytes* b, int32_t off, int32_t len, int32_t conversionSize) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nRead, int32_t, int64_t id, $bytes* b, int32_t off, int32_t len, int32_t conversionSize);
	int32_t $ret = $invokeNativeStatic(id, b, off, len, conversionSize);
	$finishNativeStatic();
	return $ret;
}

int32_t DirectAudioDevice::nGetBufferSize(int64_t id, bool isSource) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nGetBufferSize, int32_t, int64_t id, bool isSource);
	int32_t $ret = $invokeNativeStatic(id, isSource);
	$finishNativeStatic();
	return $ret;
}

bool DirectAudioDevice::nIsStillDraining(int64_t id, bool isSource) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nIsStillDraining, bool, int64_t id, bool isSource);
	bool $ret = $invokeNativeStatic(id, isSource);
	$finishNativeStatic();
	return $ret;
}

void DirectAudioDevice::nFlush(int64_t id, bool isSource) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nFlush, void, int64_t id, bool isSource);
	$invokeNativeStatic(id, isSource);
	$finishNativeStatic();
}

int32_t DirectAudioDevice::nAvailable(int64_t id, bool isSource) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nAvailable, int32_t, int64_t id, bool isSource);
	int32_t $ret = $invokeNativeStatic(id, isSource);
	$finishNativeStatic();
	return $ret;
}

int64_t DirectAudioDevice::nGetBytePosition(int64_t id, bool isSource, int64_t javaPos) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nGetBytePosition, int64_t, int64_t id, bool isSource, int64_t javaPos);
	int64_t $ret = $invokeNativeStatic(id, isSource, javaPos);
	$finishNativeStatic();
	return $ret;
}

void DirectAudioDevice::nSetBytePosition(int64_t id, bool isSource, int64_t pos) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nSetBytePosition, void, int64_t id, bool isSource, int64_t pos);
	$invokeNativeStatic(id, isSource, pos);
	$finishNativeStatic();
}

bool DirectAudioDevice::nRequiresServicing(int64_t id, bool isSource) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nRequiresServicing, bool, int64_t id, bool isSource);
	bool $ret = $invokeNativeStatic(id, isSource);
	$finishNativeStatic();
	return $ret;
}

void DirectAudioDevice::nService(int64_t id, bool isSource) {
	$init(DirectAudioDevice);
	$prepareNativeStatic(nService, void, int64_t id, bool isSource);
	$invokeNativeStatic(id, isSource);
	$finishNativeStatic();
}

DirectAudioDevice::DirectAudioDevice() {
}

$Class* DirectAudioDevice::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CLIP_BUFFER_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DirectAudioDevice, CLIP_BUFFER_TIME)},
		{"DEFAULT_LINE_BUFFER_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DirectAudioDevice, DEFAULT_LINE_BUFFER_TIME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo;)V", nullptr, 0, $method(DirectAudioDevice, init$, void, $DirectAudioDeviceProvider$DirectAudioDeviceInfo*)},
		{"addFormat", "(Ljava/util/Vector;IIIFIZZ)V", "(Ljava/util/Vector<Ljavax/sound/sampled/AudioFormat;>;IIIFIZZ)V", $PRIVATE | $STATIC, $staticMethod(DirectAudioDevice, addFormat, void, $Vector*, int32_t, int32_t, int32_t, float, int32_t, bool, bool)},
		{"createDataLineInfo", "(Z)Lcom/sun/media/sound/DirectAudioDevice$DirectDLI;", nullptr, $PRIVATE, $method(DirectAudioDevice, createDataLineInfo, $DirectAudioDevice$DirectDLI*, bool)},
		{"getDeviceID", "()I", nullptr, 0, $method(DirectAudioDevice, getDeviceID, int32_t)},
		{"getLine", "(Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Line;", nullptr, $PUBLIC, $virtualMethod(DirectAudioDevice, getLine, $Line*, $Line$Info*), "javax.sound.sampled.LineUnavailableException"},
		{"getMaxLines", "(Ljavax/sound/sampled/Line$Info;)I", nullptr, $PUBLIC, $virtualMethod(DirectAudioDevice, getMaxLines, int32_t, $Line$Info*)},
		{"getMaxSimulLines", "()I", nullptr, 0, $method(DirectAudioDevice, getMaxSimulLines, int32_t)},
		{"getMixerIndex", "()I", nullptr, 0, $method(DirectAudioDevice, getMixerIndex, int32_t)},
		{"getSignOrEndianChangedFormat", "(Ljavax/sound/sampled/AudioFormat;)Ljavax/sound/sampled/AudioFormat;", nullptr, $PROTECTED | $STATIC, $staticMethod(DirectAudioDevice, getSignOrEndianChangedFormat, $AudioFormat*, $AudioFormat*)},
		{"implClose", "()V", nullptr, $PROTECTED, $virtualMethod(DirectAudioDevice, implClose, void)},
		{"implOpen", "()V", nullptr, $PROTECTED, $virtualMethod(DirectAudioDevice, implOpen, void), "javax.sound.sampled.LineUnavailableException"},
		{"implStart", "()V", nullptr, $PROTECTED, $virtualMethod(DirectAudioDevice, implStart, void)},
		{"implStop", "()V", nullptr, $PROTECTED, $virtualMethod(DirectAudioDevice, implStop, void)},
		{"nAvailable", "(JZ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nAvailable, int32_t, int64_t, bool)},
		{"nClose", "(JZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nClose, void, int64_t, bool)},
		{"nFlush", "(JZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nFlush, void, int64_t, bool)},
		{"nGetBufferSize", "(JZ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nGetBufferSize, int32_t, int64_t, bool)},
		{"nGetBytePosition", "(JZJ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nGetBytePosition, int64_t, int64_t, bool, int64_t)},
		{"nGetFormats", "(IIZLjava/util/Vector;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nGetFormats, void, int32_t, int32_t, bool, $Vector*)},
		{"nIsStillDraining", "(JZ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nIsStillDraining, bool, int64_t, bool)},
		{"nOpen", "(IIZIFIIIZZI)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nOpen, int64_t, int32_t, int32_t, bool, int32_t, float, int32_t, int32_t, int32_t, bool, bool, int32_t), "javax.sound.sampled.LineUnavailableException"},
		{"nRead", "(J[BIII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nRead, int32_t, int64_t, $bytes*, int32_t, int32_t, int32_t)},
		{"nRequiresServicing", "(JZ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nRequiresServicing, bool, int64_t, bool)},
		{"nService", "(JZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nService, void, int64_t, bool)},
		{"nSetBytePosition", "(JZJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nSetBytePosition, void, int64_t, bool, int64_t)},
		{"nStart", "(JZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nStart, void, int64_t, bool)},
		{"nStop", "(JZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nStop, void, int64_t, bool)},
		{"nWrite", "(J[BIIIFF)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDevice, nWrite, int32_t, int64_t, $bytes*, int32_t, int32_t, int32_t, float, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.DirectAudioDevice$DirectBAOS", "com.sun.media.sound.DirectAudioDevice", "DirectBAOS", $PRIVATE | $STATIC},
		{"com.sun.media.sound.DirectAudioDevice$DirectClip", "com.sun.media.sound.DirectAudioDevice", "DirectClip", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.media.sound.DirectAudioDevice$DirectTDL", "com.sun.media.sound.DirectAudioDevice", "DirectTDL", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.media.sound.DirectAudioDevice$DirectSDL", "com.sun.media.sound.DirectAudioDevice", "DirectSDL", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
		{"com.sun.media.sound.DirectAudioDevice$DirectDLI", "com.sun.media.sound.DirectAudioDevice", "DirectDLI", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.DirectAudioDevice",
		"com.sun.media.sound.AbstractMixer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.DirectAudioDevice$DirectBAOS,com.sun.media.sound.DirectAudioDevice$DirectClip,com.sun.media.sound.DirectAudioDevice$DirectTDL,com.sun.media.sound.DirectAudioDevice$DirectSDL,com.sun.media.sound.DirectAudioDevice$DirectDL,com.sun.media.sound.DirectAudioDevice$DirectDL$Pan,com.sun.media.sound.DirectAudioDevice$DirectDL$Balance,com.sun.media.sound.DirectAudioDevice$DirectDL$Mute,com.sun.media.sound.DirectAudioDevice$DirectDL$Gain,com.sun.media.sound.DirectAudioDevice$DirectDLI"
	};
	$loadClass(DirectAudioDevice, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DirectAudioDevice));
	});
	return class$;
}

$Class* DirectAudioDevice::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com