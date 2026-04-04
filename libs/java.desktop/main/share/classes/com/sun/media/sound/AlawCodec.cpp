#include <com/sun/media/sound/AlawCodec.h>
#include <com/sun/media/sound/AlawCodec$AlawCodecStream.h>
#include <java/util/Objects.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>
#include <jcpp.h>

#undef ALAW
#undef ALAW_TABH
#undef ALAW_TABL
#undef PCM_SIGNED

using $AudioFormat$EncodingArray = $Array<::javax::sound::sampled::AudioFormat$Encoding>;
using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $AlawCodec$AlawCodecStream = ::com::sun::media::sound::AlawCodec$AlawCodecStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Vector = ::java::util::Vector;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $FormatConversionProvider = ::javax::sound::sampled::spi::FormatConversionProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$bytes* AlawCodec::ALAW_TABH = nullptr;
$bytes* AlawCodec::ALAW_TABL = nullptr;
$shorts* AlawCodec::seg_end = nullptr;

void AlawCodec::init$() {
	$FormatConversionProvider::init$();
}

$AudioFormat$EncodingArray* AlawCodec::getSourceEncodings() {
	$init($AudioFormat$Encoding);
	return $new($AudioFormat$EncodingArray, {
		$AudioFormat$Encoding::ALAW,
		$AudioFormat$Encoding::PCM_SIGNED
	});
}

$AudioFormat$EncodingArray* AlawCodec::getTargetEncodings() {
	return getSourceEncodings();
}

$AudioFormat$EncodingArray* AlawCodec::getTargetEncodings($AudioFormat* sourceFormat) {
	$useLocalObjectStack();
	$init($AudioFormat$Encoding);
	if ($$nc($nc(sourceFormat)->getEncoding())->equals($AudioFormat$Encoding::PCM_SIGNED)) {
		if (sourceFormat->getSampleSizeInBits() == 16) {
			$var($AudioFormat$EncodingArray, enc, $new($AudioFormat$EncodingArray, 1));
			enc->set(0, $AudioFormat$Encoding::ALAW);
			return enc;
		} else {
			return $new($AudioFormat$EncodingArray, 0);
		}
	} else if ($$nc(sourceFormat->getEncoding())->equals($AudioFormat$Encoding::ALAW)) {
		if (sourceFormat->getSampleSizeInBits() == 8) {
			$var($AudioFormat$EncodingArray, enc, $new($AudioFormat$EncodingArray, 1));
			enc->set(0, $AudioFormat$Encoding::PCM_SIGNED);
			return enc;
		} else {
			return $new($AudioFormat$EncodingArray, 0);
		}
	} else {
		return $new($AudioFormat$EncodingArray, 0);
	}
}

$AudioFormatArray* AlawCodec::getTargetFormats($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalObjectStack();
	$Objects::requireNonNull(sourceFormat);
	$init($AudioFormat$Encoding);
	bool var$1 = $nc(targetEncoding)->equals($AudioFormat$Encoding::PCM_SIGNED);
	bool var$0 = var$1 && $$nc(sourceFormat->getEncoding())->equals($AudioFormat$Encoding::ALAW);
	if (!var$0) {
		bool var$2 = targetEncoding->equals($AudioFormat$Encoding::ALAW);
		var$0 = var$2 && $$nc(sourceFormat->getEncoding())->equals($AudioFormat$Encoding::PCM_SIGNED);
	}
	if (var$0) {
		return getOutputFormats(sourceFormat);
	} else {
		return $new($AudioFormatArray, 0);
	}
}

$AudioInputStream* AlawCodec::getAudioInputStream($AudioFormat$Encoding* targetEncoding, $AudioInputStream* sourceStream) {
	$useLocalObjectStack();
	$var($AudioFormat, sourceFormat, $nc(sourceStream)->getFormat());
	$var($AudioFormat$Encoding, sourceEncoding, $nc(sourceFormat)->getEncoding());
	if (!isConversionSupported(targetEncoding, $(sourceStream->getFormat()))) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Unsupported conversion: "_s);
		var$0->append($($$nc(sourceStream->getFormat())->toString()));
		var$0->append(" to "_s);
		var$0->append($($nc(targetEncoding)->toString()));
		$throwNew($IllegalArgumentException, $$str(var$0));
	}
	if ($nc(sourceEncoding)->equals(targetEncoding)) {
		return sourceStream;
	}
	$var($AudioFormat, targetFormat, nullptr);
	bool var$1 = sourceEncoding->equals($AudioFormat$Encoding::ALAW);
	if (var$1 && $nc(targetEncoding)->equals($AudioFormat$Encoding::PCM_SIGNED)) {
		float var$2 = sourceFormat->getSampleRate();
		int32_t var$3 = sourceFormat->getChannels();
		int32_t var$4 = 2 * sourceFormat->getChannels();
		float var$5 = sourceFormat->getSampleRate();
		$assign(targetFormat, $new($AudioFormat, targetEncoding, var$2, 16, var$3, var$4, var$5, sourceFormat->isBigEndian()));
	} else {
		bool var$6 = sourceEncoding->equals($AudioFormat$Encoding::PCM_SIGNED);
		if (var$6 && $nc(targetEncoding)->equals($AudioFormat$Encoding::ALAW)) {
			float var$7 = sourceFormat->getSampleRate();
			int32_t var$8 = sourceFormat->getChannels();
			int32_t var$9 = sourceFormat->getChannels();
			$assign(targetFormat, $new($AudioFormat, targetEncoding, var$7, 8, var$8, var$9, sourceFormat->getSampleRate(), false));
		} else {
			$var($StringBuilder, var$10, $new($StringBuilder));
			var$10->append("Unsupported conversion: "_s);
			var$10->append($($$nc(sourceStream->getFormat())->toString()));
			var$10->append(" to "_s);
			var$10->append($($nc(targetEncoding)->toString()));
			$throwNew($IllegalArgumentException, $$str(var$10));
		}
	}
	return getConvertedStream(targetFormat, sourceStream);
}

$AudioInputStream* AlawCodec::getAudioInputStream($AudioFormat* targetFormat, $AudioInputStream* sourceStream) {
	$useLocalObjectStack();
	if (!isConversionSupported(targetFormat, $($nc(sourceStream)->getFormat()))) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Unsupported conversion: "_s);
		var$0->append($($$nc(sourceStream->getFormat())->toString()));
		var$0->append(" to "_s);
		var$0->append($($nc(targetFormat)->toString()));
		$throwNew($IllegalArgumentException, $$str(var$0));
	}
	return getConvertedStream(targetFormat, sourceStream);
}

$AudioInputStream* AlawCodec::getConvertedStream($AudioFormat* outputFormat, $AudioInputStream* stream) {
	$useLocalObjectStack();
	$var($AudioInputStream, cs, nullptr);
	$var($AudioFormat, inputFormat, $nc(stream)->getFormat());
	if ($nc(inputFormat)->matches(outputFormat)) {
		$assign(cs, stream);
	} else {
		$assign(cs, $new($AlawCodec$AlawCodecStream, this, stream, outputFormat));
	}
	return cs;
}

$AudioFormatArray* AlawCodec::getOutputFormats($AudioFormat* inputFormat) {
	$useLocalObjectStack();
	$var($Vector, formats, $new($Vector));
	$var($AudioFormat, format, nullptr);
	bool var$0 = $nc(inputFormat)->getSampleSizeInBits() == 16;
	$init($AudioFormat$Encoding);
	if (var$0 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals($(inputFormat->getEncoding()))) {
		$var($AudioFormat$Encoding, var$1, $AudioFormat$Encoding::ALAW);
		float var$2 = inputFormat->getSampleRate();
		int32_t var$3 = inputFormat->getChannels();
		int32_t var$4 = inputFormat->getChannels();
		$assign(format, $new($AudioFormat, var$1, var$2, 8, var$3, var$4, inputFormat->getSampleRate(), false));
		formats->addElement(format);
	}
	bool var$5 = inputFormat->getSampleSizeInBits() == 8;
	if (var$5 && $nc($AudioFormat$Encoding::ALAW)->equals($(inputFormat->getEncoding()))) {
		$var($AudioFormat$Encoding, var$6, $AudioFormat$Encoding::PCM_SIGNED);
		float var$7 = inputFormat->getSampleRate();
		int32_t var$8 = inputFormat->getChannels();
		int32_t var$9 = inputFormat->getChannels() * 2;
		$assign(format, $new($AudioFormat, var$6, var$7, 16, var$8, var$9, inputFormat->getSampleRate(), false));
		formats->addElement(format);
		$var($AudioFormat$Encoding, var$10, $AudioFormat$Encoding::PCM_SIGNED);
		float var$11 = inputFormat->getSampleRate();
		int32_t var$12 = inputFormat->getChannels();
		int32_t var$13 = inputFormat->getChannels() * 2;
		$assign(format, $new($AudioFormat, var$10, var$11, 16, var$12, var$13, inputFormat->getSampleRate(), true));
		formats->addElement(format);
	}
	$var($AudioFormatArray, formatArray, $new($AudioFormatArray, formats->size()));
	for (int32_t i = 0; i < formatArray->length; ++i) {
		formatArray->set(i, $$cast($AudioFormat, formats->elementAt(i)));
	}
	return formatArray;
}

void AlawCodec::clinit$($Class* clazz) {
	$assignStatic(AlawCodec::ALAW_TABH, $new($bytes, 256));
	$assignStatic(AlawCodec::ALAW_TABL, $new($bytes, 256));
	$assignStatic(AlawCodec::seg_end, $new($shorts, {
		255,
		511,
		1023,
		2047,
		4095,
		8191,
		16383,
		32767
	}));
	{
		for (int32_t i = 0; i < 256; ++i) {
			int32_t input = i ^ 0x55;
			int32_t mantissa = (input & 0x0f) << 4;
			int32_t segment = (input & 0x70) >> 4;
			int32_t value = mantissa + 8;
			if (segment >= 1) {
				value += 256;
			}
			if (segment > 1) {
				value <<= (segment - 1);
			}
			if ((input & 0x80) == 0) {
				value = -value;
			}
			AlawCodec::ALAW_TABL->set(i, (int8_t)value);
			AlawCodec::ALAW_TABH->set(i, (int8_t)(value >> 8));
		}
	}
}

AlawCodec::AlawCodec() {
}

$Class* AlawCodec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ALAW_TABH", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AlawCodec, ALAW_TABH)},
		{"ALAW_TABL", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AlawCodec, ALAW_TABL)},
		{"seg_end", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AlawCodec, seg_end)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AlawCodec, init$, void)},
		{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $virtualMethod(AlawCodec, getAudioInputStream, $AudioInputStream*, $AudioFormat$Encoding*, $AudioInputStream*)},
		{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $virtualMethod(AlawCodec, getAudioInputStream, $AudioInputStream*, $AudioFormat*, $AudioInputStream*)},
		{"getConvertedStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE, $method(AlawCodec, getConvertedStream, $AudioInputStream*, $AudioFormat*, $AudioInputStream*)},
		{"getOutputFormats", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $method(AlawCodec, getOutputFormats, $AudioFormatArray*, $AudioFormat*)},
		{"getSourceEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC, $virtualMethod(AlawCodec, getSourceEncodings, $AudioFormat$EncodingArray*)},
		{"getTargetEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC, $virtualMethod(AlawCodec, getTargetEncodings, $AudioFormat$EncodingArray*)},
		{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC, $virtualMethod(AlawCodec, getTargetEncodings, $AudioFormat$EncodingArray*, $AudioFormat*)},
		{"getTargetFormats", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC, $virtualMethod(AlawCodec, getTargetFormats, $AudioFormatArray*, $AudioFormat$Encoding*, $AudioFormat*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.AlawCodec$AlawCodecStream", "com.sun.media.sound.AlawCodec", "AlawCodecStream", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.AlawCodec",
		"javax.sound.sampled.spi.FormatConversionProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.AlawCodec$AlawCodecStream"
	};
	$loadClass(AlawCodec, name, initialize, &classInfo$$, AlawCodec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AlawCodec);
	});
	return class$;
}

$Class* AlawCodec::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com