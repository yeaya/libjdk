#include <com/sun/media/sound/SunFileWriter$NoCloseInputStream.h>
#include <com/sun/media/sound/SunFileWriter.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $SunFileWriter = ::com::sun::media::sound::SunFileWriter;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SunFileWriter$NoCloseInputStream::init$($SunFileWriter* this$0, $InputStream* in) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	$set(this, in, in);
}

int32_t SunFileWriter$NoCloseInputStream::read() {
	return $nc(this->in)->read();
}

int32_t SunFileWriter$NoCloseInputStream::read($bytes* b) {
	return $nc(this->in)->read(b);
}

int32_t SunFileWriter$NoCloseInputStream::read($bytes* b, int32_t off, int32_t len) {
	return $nc(this->in)->read(b, off, len);
}

int64_t SunFileWriter$NoCloseInputStream::skip(int64_t n) {
	return $nc(this->in)->skip(n);
}

int32_t SunFileWriter$NoCloseInputStream::available() {
	return $nc(this->in)->available();
}

void SunFileWriter$NoCloseInputStream::close() {
}

void SunFileWriter$NoCloseInputStream::mark(int32_t readlimit) {
	$nc(this->in)->mark(readlimit);
}

void SunFileWriter$NoCloseInputStream::reset() {
	$nc(this->in)->reset();
}

bool SunFileWriter$NoCloseInputStream::markSupported() {
	return $nc(this->in)->markSupported();
}

SunFileWriter$NoCloseInputStream::SunFileWriter$NoCloseInputStream() {
}

$Class* SunFileWriter$NoCloseInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SunFileWriter;", nullptr, $FINAL | $SYNTHETIC, $field(SunFileWriter$NoCloseInputStream, this$0)},
		{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(SunFileWriter$NoCloseInputStream, in)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SunFileWriter;Ljava/io/InputStream;)V", nullptr, 0, $method(SunFileWriter$NoCloseInputStream, init$, void, $SunFileWriter*, $InputStream*)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(SunFileWriter$NoCloseInputStream, available, int32_t), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SunFileWriter$NoCloseInputStream, close, void), "java.io.IOException"},
		{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(SunFileWriter$NoCloseInputStream, mark, void, int32_t)},
		{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(SunFileWriter$NoCloseInputStream, markSupported, bool)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(SunFileWriter$NoCloseInputStream, read, int32_t), "java.io.IOException"},
		{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(SunFileWriter$NoCloseInputStream, read, int32_t, $bytes*), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(SunFileWriter$NoCloseInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SunFileWriter$NoCloseInputStream, reset, void), "java.io.IOException"},
		{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(SunFileWriter$NoCloseInputStream, skip, int64_t, int64_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SunFileWriter$NoCloseInputStream", "com.sun.media.sound.SunFileWriter", "NoCloseInputStream", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.SunFileWriter$NoCloseInputStream",
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
		"com.sun.media.sound.SunFileWriter"
	};
	$loadClass(SunFileWriter$NoCloseInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFileWriter$NoCloseInputStream);
	});
	return class$;
}

$Class* SunFileWriter$NoCloseInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com