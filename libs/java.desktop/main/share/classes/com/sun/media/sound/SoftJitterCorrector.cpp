#include <com/sun/media/sound/SoftJitterCorrector.h>
#include <com/sun/media/sound/SoftJitterCorrector$JitterStream.h>
#include <java/io/InputStream.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $SoftJitterCorrector$JitterStream = ::com::sun::media::sound::SoftJitterCorrector$JitterStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftJitterCorrector::init$($AudioInputStream* stream, int32_t buffersize, int32_t smallbuffersize) {
	$useLocalObjectStack();
	$var($InputStream, var$0, $new($SoftJitterCorrector$JitterStream, stream, buffersize, smallbuffersize));
	$var($AudioFormat, var$1, $nc(stream)->getFormat());
	$AudioInputStream::init$(var$0, var$1, stream->getFrameLength());
}

SoftJitterCorrector::SoftJitterCorrector() {
}

$Class* SoftJitterCorrector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/AudioInputStream;II)V", nullptr, $PUBLIC, $method(SoftJitterCorrector, init$, void, $AudioInputStream*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftJitterCorrector$JitterStream", "com.sun.media.sound.SoftJitterCorrector", "JitterStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftJitterCorrector",
		"javax.sound.sampled.AudioInputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftJitterCorrector$JitterStream,com.sun.media.sound.SoftJitterCorrector$JitterStream$1"
	};
	$loadClass(SoftJitterCorrector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftJitterCorrector);
	});
	return class$;
}

$Class* SoftJitterCorrector::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com