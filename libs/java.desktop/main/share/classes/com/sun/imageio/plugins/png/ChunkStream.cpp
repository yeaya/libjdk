#include <com/sun/imageio/plugins/png/ChunkStream.h>
#include <com/sun/imageio/plugins/png/CRC.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <jcpp.h>

using $CRC = ::com::sun::imageio::plugins::png::CRC;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

void ChunkStream::init$(int32_t type, $ImageOutputStream* stream) {
	$ImageOutputStreamImpl::init$();
	$set(this, crc, $new($CRC));
	$set(this, stream, stream);
	this->startPos = $nc(stream)->getStreamPosition();
	stream->writeInt(-1);
	writeInt(type);
}

int32_t ChunkStream::read() {
	$throwNew($RuntimeException, "Method not available"_s);
	$shouldNotReachHere();
}

int32_t ChunkStream::read($bytes* b, int32_t off, int32_t len) {
	$throwNew($RuntimeException, "Method not available"_s);
	$shouldNotReachHere();
}

void ChunkStream::write($bytes* b, int32_t off, int32_t len) {
	this->crc->update(b, off, len);
	$nc(this->stream)->write(b, off, len);
}

void ChunkStream::write(int32_t b) {
	this->crc->update(b);
	$nc(this->stream)->write(b);
}

void ChunkStream::finish() {
	$nc(this->stream)->writeInt(this->crc->getValue());
	int64_t pos = this->stream->getStreamPosition();
	this->stream->seek(this->startPos);
	this->stream->writeInt((int32_t)(pos - this->startPos) - 12);
	this->stream->seek(pos);
	this->stream->flushBefore(pos);
}

void ChunkStream::finalize() {
}

ChunkStream::ChunkStream() {
}

$Class* ChunkStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PRIVATE | $FINAL, $field(ChunkStream, stream)},
		{"startPos", "J", nullptr, $PRIVATE | $FINAL, $field(ChunkStream, startPos)},
		{"crc", "Lcom/sun/imageio/plugins/png/CRC;", nullptr, $PRIVATE | $FINAL, $field(ChunkStream, crc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, $method(ChunkStream, init$, void, int32_t, $ImageOutputStream*), "java.io.IOException"},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(ChunkStream, finalize, void), "java.lang.Throwable"},
		{"finish", "()V", nullptr, 0, $method(ChunkStream, finish, void), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ChunkStream, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(ChunkStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(ChunkStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(ChunkStream, write, void, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.imageio.plugins.png.ChunkStream",
		"javax.imageio.stream.ImageOutputStreamImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ChunkStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ChunkStream));
	});
	return class$;
}

$Class* ChunkStream::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com