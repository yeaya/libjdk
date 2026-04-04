#include <javax/sound/sampled/AudioInputStream$TargetDataLineInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/TargetDataLine.h>
#include <jcpp.h>

#undef PCM_SIGNED

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $TargetDataLine = ::javax::sound::sampled::TargetDataLine;

namespace javax {
	namespace sound {
		namespace sampled {

void AudioInputStream$TargetDataLineInputStream::init$($AudioInputStream* this$0, $TargetDataLine* line) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	$set(this, line, line);
}

int32_t AudioInputStream$TargetDataLineInputStream::available() {
	return $nc(this->line)->available();
}

void AudioInputStream$TargetDataLineInputStream::close() {
	if ($nc(this->line)->isActive()) {
		$nc(this->line)->flush();
		$nc(this->line)->stop();
	}
	$nc(this->line)->close();
}

int32_t AudioInputStream$TargetDataLineInputStream::read() {
	$useLocalObjectStack();
	$var($bytes, b, $new($bytes, 1));
	int32_t value = read(b, 0, 1);
	if (value == -1) {
		return -1;
	}
	value = (int32_t)b->get(0);
	$init($AudioFormat$Encoding);
	if ($$nc($$nc($nc(this->line)->getFormat())->getEncoding())->equals($AudioFormat$Encoding::PCM_SIGNED)) {
		value += 128;
	}
	return value;
}

int32_t AudioInputStream$TargetDataLineInputStream::read($bytes* b, int32_t off, int32_t len) {
	try {
		return $nc(this->line)->read(b, off, len);
	} catch ($IllegalArgumentException& e) {
		$throwNew($IOException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

AudioInputStream$TargetDataLineInputStream::AudioInputStream$TargetDataLineInputStream() {
}

$Class* AudioInputStream$TargetDataLineInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/sound/sampled/AudioInputStream;", nullptr, $FINAL | $SYNTHETIC, $field(AudioInputStream$TargetDataLineInputStream, this$0)},
		{"line", "Ljavax/sound/sampled/TargetDataLine;", nullptr, 0, $field(AudioInputStream$TargetDataLineInputStream, line)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/TargetDataLine;)V", nullptr, 0, $method(AudioInputStream$TargetDataLineInputStream, init$, void, $AudioInputStream*, $TargetDataLine*)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(AudioInputStream$TargetDataLineInputStream, available, int32_t), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(AudioInputStream$TargetDataLineInputStream, close, void), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(AudioInputStream$TargetDataLineInputStream, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(AudioInputStream$TargetDataLineInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.AudioInputStream$TargetDataLineInputStream", "javax.sound.sampled.AudioInputStream", "TargetDataLineInputStream", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.sound.sampled.AudioInputStream$TargetDataLineInputStream",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.sampled.AudioInputStream"
	};
	$loadClass(AudioInputStream$TargetDataLineInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioInputStream$TargetDataLineInputStream);
	});
	return class$;
}

$Class* AudioInputStream$TargetDataLineInputStream::class$ = nullptr;

		} // sampled
	} // sound
} // javax