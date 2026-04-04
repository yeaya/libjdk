#include <com/sun/media/sound/WaveFloatFileWriter$NoCloseOutputStream.h>
#include <com/sun/media/sound/WaveFloatFileWriter.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void WaveFloatFileWriter$NoCloseOutputStream::init$($OutputStream* out) {
	$OutputStream::init$();
	$set(this, out, out);
}

void WaveFloatFileWriter$NoCloseOutputStream::write(int32_t b) {
	$nc(this->out)->write(b);
}

void WaveFloatFileWriter$NoCloseOutputStream::flush() {
	$nc(this->out)->flush();
}

void WaveFloatFileWriter$NoCloseOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->out)->write(b, off, len);
}

void WaveFloatFileWriter$NoCloseOutputStream::write($bytes* b) {
	$nc(this->out)->write(b);
}

WaveFloatFileWriter$NoCloseOutputStream::WaveFloatFileWriter$NoCloseOutputStream() {
}

$Class* WaveFloatFileWriter$NoCloseOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"out", "Ljava/io/OutputStream;", nullptr, $FINAL, $field(WaveFloatFileWriter$NoCloseOutputStream, out)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(WaveFloatFileWriter$NoCloseOutputStream, init$, void, $OutputStream*)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(WaveFloatFileWriter$NoCloseOutputStream, flush, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(WaveFloatFileWriter$NoCloseOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(WaveFloatFileWriter$NoCloseOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"write", "([B)V", nullptr, $PUBLIC, $virtualMethod(WaveFloatFileWriter$NoCloseOutputStream, write, void, $bytes*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.WaveFloatFileWriter$NoCloseOutputStream", "com.sun.media.sound.WaveFloatFileWriter", "NoCloseOutputStream", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.WaveFloatFileWriter$NoCloseOutputStream",
		"java.io.OutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.WaveFloatFileWriter"
	};
	$loadClass(WaveFloatFileWriter$NoCloseOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WaveFloatFileWriter$NoCloseOutputStream));
	});
	return class$;
}

$Class* WaveFloatFileWriter$NoCloseOutputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com