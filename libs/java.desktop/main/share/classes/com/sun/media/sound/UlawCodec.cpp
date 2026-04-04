#include <com/sun/media/sound/UlawCodec.h>
#include <com/sun/media/sound/UlawCodec$UlawCodecStream.h>
#include <java/util/Objects.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>
#include <jcpp.h>

#undef PCM_SIGNED
#undef ULAW
#undef ULAW_TABH
#undef ULAW_TABL

using $AudioFormat$EncodingArray = $Array<::javax::sound::sampled::AudioFormat$Encoding>;
using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $UlawCodec$UlawCodecStream = ::com::sun::media::sound::UlawCodec$UlawCodecStream;
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

$bytes* UlawCodec::ULAW_TABH = nullptr;
$bytes* UlawCodec::ULAW_TABL = nullptr;
$shorts* UlawCodec::seg_end = nullptr;

void UlawCodec::init$() {
	$FormatConversionProvider::init$();
}

$AudioFormat$EncodingArray* UlawCodec::getSourceEncodings() {
	$init($AudioFormat$Encoding);
	return $new($AudioFormat$EncodingArray, {
		$AudioFormat$Encoding::ULAW,
		$AudioFormat$Encoding::PCM_SIGNED
	});
}

$AudioFormat$EncodingArray* UlawCodec::getTargetEncodings() {
	return getSourceEncodings();
}

$AudioFormat$EncodingArray* UlawCodec::getTargetEncodings($AudioFormat* sourceFormat) {
	$useLocalObjectStack();
	$init($AudioFormat$Encoding);
	if ($nc($AudioFormat$Encoding::PCM_SIGNED)->equals($($nc(sourceFormat)->getEncoding()))) {
		if (sourceFormat->getSampleSizeInBits() == 16) {
			$var($AudioFormat$EncodingArray, enc, $new($AudioFormat$EncodingArray, 1));
			enc->set(0, $AudioFormat$Encoding::ULAW);
			return enc;
		} else {
			return $new($AudioFormat$EncodingArray, 0);
		}
	} else if ($nc($AudioFormat$Encoding::ULAW)->equals($(sourceFormat->getEncoding()))) {
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

$AudioFormatArray* UlawCodec::getTargetFormats($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalObjectStack();
	$Objects::requireNonNull(targetEncoding);
	$Objects::requireNonNull(sourceFormat);
	$init($AudioFormat$Encoding);
	bool var$1 = $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(targetEncoding);
	bool var$0 = var$1 && $nc($AudioFormat$Encoding::ULAW)->equals($(sourceFormat->getEncoding()));
	if (!var$0) {
		bool var$2 = $nc($AudioFormat$Encoding::ULAW)->equals(targetEncoding);
		var$0 = var$2 && $AudioFormat$Encoding::PCM_SIGNED->equals($(sourceFormat->getEncoding()));
	}
	if (var$0) {
		return getOutputFormats(sourceFormat);
	} else {
		return $new($AudioFormatArray, 0);
	}
}

$AudioInputStream* UlawCodec::getAudioInputStream($AudioFormat$Encoding* targetEncoding, $AudioInputStream* sourceStream) {
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
	bool var$1 = $nc($AudioFormat$Encoding::ULAW)->equals(sourceEncoding);
	if (var$1 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(targetEncoding)) {
		float var$2 = sourceFormat->getSampleRate();
		int32_t var$3 = sourceFormat->getChannels();
		int32_t var$4 = 2 * sourceFormat->getChannels();
		float var$5 = sourceFormat->getSampleRate();
		$assign(targetFormat, $new($AudioFormat, targetEncoding, var$2, 16, var$3, var$4, var$5, sourceFormat->isBigEndian()));
	} else {
		bool var$6 = $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(sourceEncoding);
		if (var$6 && $AudioFormat$Encoding::ULAW->equals(targetEncoding)) {
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

$AudioInputStream* UlawCodec::getAudioInputStream($AudioFormat* targetFormat, $AudioInputStream* sourceStream) {
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

$AudioInputStream* UlawCodec::getConvertedStream($AudioFormat* outputFormat, $AudioInputStream* stream) {
	$useLocalObjectStack();
	$var($AudioInputStream, cs, nullptr);
	$var($AudioFormat, inputFormat, $nc(stream)->getFormat());
	if ($nc(inputFormat)->matches(outputFormat)) {
		$assign(cs, stream);
	} else {
		$assign(cs, $new($UlawCodec$UlawCodecStream, this, stream, outputFormat));
	}
	return cs;
}

$AudioFormatArray* UlawCodec::getOutputFormats($AudioFormat* inputFormat) {
	$useLocalObjectStack();
	$var($Vector, formats, $new($Vector));
	$var($AudioFormat, format, nullptr);
	bool var$0 = $nc(inputFormat)->getSampleSizeInBits() == 16;
	$init($AudioFormat$Encoding);
	if (var$0 && $nc($AudioFormat$Encoding::PCM_SIGNED)->equals($(inputFormat->getEncoding()))) {
		$var($AudioFormat$Encoding, var$1, $AudioFormat$Encoding::ULAW);
		float var$2 = inputFormat->getSampleRate();
		int32_t var$3 = inputFormat->getChannels();
		int32_t var$4 = inputFormat->getChannels();
		$assign(format, $new($AudioFormat, var$1, var$2, 8, var$3, var$4, inputFormat->getSampleRate(), false));
		formats->addElement(format);
	}
	bool var$5 = inputFormat->getSampleSizeInBits() == 8;
	if (var$5 && $nc($AudioFormat$Encoding::ULAW)->equals($(inputFormat->getEncoding()))) {
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

void UlawCodec::clinit$($Class* clazz) {
	$assignStatic(UlawCodec::ULAW_TABH, $new($bytes, 256));
	$assignStatic(UlawCodec::ULAW_TABL, $new($bytes, 256));
	$assignStatic(UlawCodec::seg_end, $new($shorts, {
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
			int32_t ulaw = ~i;
			int32_t t = 0;
			ulaw &= (uint32_t)255;
			t = ((ulaw & 0x0f) << 3) + 132;
			t <<= ((ulaw & 0x70) >> 4);
			t = ((ulaw & 0x80) != 0) ? (132 - t) : (t - 132);
			UlawCodec::ULAW_TABL->set(i, (int8_t)(t & 0xff));
			UlawCodec::ULAW_TABH->set(i, (int8_t)((t >> 8) & 0xff));
		}
	}
}

UlawCodec::UlawCodec() {
}

$Class* UlawCodec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ULAW_TABH", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UlawCodec, ULAW_TABH)},
		{"ULAW_TABL", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UlawCodec, ULAW_TABL)},
		{"seg_end", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UlawCodec, seg_end)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UlawCodec, init$, void)},
		{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $virtualMethod(UlawCodec, getAudioInputStream, $AudioInputStream*, $AudioFormat$Encoding*, $AudioInputStream*)},
		{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $virtualMethod(UlawCodec, getAudioInputStream, $AudioInputStream*, $AudioFormat*, $AudioInputStream*)},
		{"getConvertedStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE, $method(UlawCodec, getConvertedStream, $AudioInputStream*, $AudioFormat*, $AudioInputStream*)},
		{"getOutputFormats", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $method(UlawCodec, getOutputFormats, $AudioFormatArray*, $AudioFormat*)},
		{"getSourceEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC, $virtualMethod(UlawCodec, getSourceEncodings, $AudioFormat$EncodingArray*)},
		{"getTargetEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC, $virtualMethod(UlawCodec, getTargetEncodings, $AudioFormat$EncodingArray*)},
		{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC, $virtualMethod(UlawCodec, getTargetEncodings, $AudioFormat$EncodingArray*, $AudioFormat*)},
		{"getTargetFormats", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC, $virtualMethod(UlawCodec, getTargetFormats, $AudioFormatArray*, $AudioFormat$Encoding*, $AudioFormat*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.UlawCodec$UlawCodecStream", "com.sun.media.sound.UlawCodec", "UlawCodecStream", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.UlawCodec",
		"javax.sound.sampled.spi.FormatConversionProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.UlawCodec$UlawCodecStream"
	};
	$loadClass(UlawCodec, name, initialize, &classInfo$$, UlawCodec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UlawCodec);
	});
	return class$;
}

$Class* UlawCodec::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com