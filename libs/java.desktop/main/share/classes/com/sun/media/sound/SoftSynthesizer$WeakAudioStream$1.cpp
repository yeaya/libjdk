#include <com/sun/media/sound/SoftSynthesizer$WeakAudioStream$1.h>
#include <com/sun/media/sound/SoftAudioPusher.h>
#include <com/sun/media/sound/SoftSynthesizer$WeakAudioStream.h>
#include <java/io/IOException.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <jcpp.h>

using $SoftSynthesizer$WeakAudioStream = ::com::sun::media::sound::SoftSynthesizer$WeakAudioStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftSynthesizer$WeakAudioStream$1::init$($SoftSynthesizer$WeakAudioStream* this$0) {
	$set(this, this$0, this$0);
	$set(this, _pusher, this->this$0->pusher);
	$set(this, _jitter_stream, this->this$0->jitter_stream);
	$set(this, _sourceDataLine, this->this$0->sourceDataLine);
}

void SoftSynthesizer$WeakAudioStream$1::run() {
	$nc(this->_pusher)->stop();
	if (this->_jitter_stream != nullptr) {
		try {
			this->_jitter_stream->close();
		} catch ($IOException& e) {
			e->printStackTrace();
		}
	}
	if (this->_sourceDataLine != nullptr) {
		this->_sourceDataLine->close();
	}
}

SoftSynthesizer$WeakAudioStream$1::SoftSynthesizer$WeakAudioStream$1() {
}

$Class* SoftSynthesizer$WeakAudioStream$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftSynthesizer$WeakAudioStream;", nullptr, $FINAL | $SYNTHETIC, $field(SoftSynthesizer$WeakAudioStream$1, this$0)},
		{"_pusher", "Lcom/sun/media/sound/SoftAudioPusher;", nullptr, 0, $field(SoftSynthesizer$WeakAudioStream$1, _pusher)},
		{"_jitter_stream", "Ljavax/sound/sampled/AudioInputStream;", nullptr, 0, $field(SoftSynthesizer$WeakAudioStream$1, _jitter_stream)},
		{"_sourceDataLine", "Ljavax/sound/sampled/SourceDataLine;", nullptr, 0, $field(SoftSynthesizer$WeakAudioStream$1, _sourceDataLine)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer$WeakAudioStream;)V", nullptr, 0, $method(SoftSynthesizer$WeakAudioStream$1, init$, void, $SoftSynthesizer$WeakAudioStream*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SoftSynthesizer$WeakAudioStream$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftSynthesizer$WeakAudioStream",
		"read",
		"([BII)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftSynthesizer$WeakAudioStream", "com.sun.media.sound.SoftSynthesizer", "WeakAudioStream", $PROTECTED | $STATIC | $FINAL},
		{"com.sun.media.sound.SoftSynthesizer$WeakAudioStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftSynthesizer$WeakAudioStream$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftSynthesizer"
	};
	$loadClass(SoftSynthesizer$WeakAudioStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftSynthesizer$WeakAudioStream$1);
	});
	return class$;
}

$Class* SoftSynthesizer$WeakAudioStream$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com