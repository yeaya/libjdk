#include <com/sun/imageio/plugins/png/IDATOutputStream.h>
#include <com/sun/imageio/plugins/png/CRC.h>
#include <java/io/IOException.h>
#include <java/lang/Math.h>
#include <java/util/zip/Deflater.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <jcpp.h>

using $CRC = ::com::sun::imageio::plugins::png::CRC;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Deflater = ::java::util::zip::Deflater;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$bytes* IDATOutputStream::chunkType = nullptr;

void IDATOutputStream::init$($ImageOutputStream* stream, int32_t chunkLength, int32_t deflaterLevel) {
	$ImageOutputStreamImpl::init$();
	$set(this, crc, $new($CRC));
	$set(this, buf, $new($bytes, 512));
	$set(this, wbuf1, $new($bytes, 1));
	$set(this, stream, stream);
	this->chunkLength = chunkLength;
	$set(this, def, $new($Deflater, deflaterLevel));
	startChunk();
}

void IDATOutputStream::startChunk() {
	this->crc->reset();
	this->startPos = $nc(this->stream)->getStreamPosition();
	this->stream->writeInt(-1);
	this->crc->update(IDATOutputStream::chunkType, 0, 4);
	this->stream->write(IDATOutputStream::chunkType, 0, 4);
	this->bytesRemaining = this->chunkLength;
}

void IDATOutputStream::finishChunk() {
	$nc(this->stream)->writeInt(this->crc->getValue());
	int64_t pos = this->stream->getStreamPosition();
	this->stream->seek(this->startPos);
	this->stream->writeInt((int32_t)(pos - this->startPos) - 12);
	this->stream->seek(pos);
	try {
		this->stream->flushBefore(pos);
	} catch ($IOException& e) {
		this->startPos = this->stream->getStreamPosition();
		$throw(e);
	}
}

int32_t IDATOutputStream::read() {
	$throwNew($RuntimeException, "Method not available"_s);
	$shouldNotReachHere();
}

int32_t IDATOutputStream::read($bytes* b, int32_t off, int32_t len) {
	$throwNew($RuntimeException, "Method not available"_s);
	$shouldNotReachHere();
}

void IDATOutputStream::write($bytes* b, int32_t off, int32_t len) {
	if (len == 0) {
		return;
	}
	if (!$nc(this->def)->finished()) {
		this->def->setInput(b, off, len);
		while (!this->def->needsInput()) {
			deflate();
		}
	}
}

void IDATOutputStream::deflate() {
	int32_t len = $nc(this->def)->deflate(this->buf, 0, this->buf->length);
	int32_t off = 0;
	while (len > 0) {
		if (this->bytesRemaining == 0) {
			finishChunk();
			startChunk();
		}
		int32_t nbytes = $Math::min(len, this->bytesRemaining);
		this->crc->update(this->buf, off, nbytes);
		$nc(this->stream)->write(this->buf, off, nbytes);
		off += nbytes;
		len -= nbytes;
		this->bytesRemaining -= nbytes;
	}
}

void IDATOutputStream::write(int32_t b) {
	this->wbuf1->set(0, (int8_t)b);
	write(this->wbuf1, 0, 1);
}

void IDATOutputStream::finish() {
	$var($Throwable, var$0, nullptr);
	try {
		if (!$nc(this->def)->finished()) {
			this->def->finish();
			while (!this->def->finished()) {
				deflate();
			}
		}
		finishChunk();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(this->def)->end();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void IDATOutputStream::finalize() {
}

void IDATOutputStream::clinit$($Class* clazz) {
	$assignStatic(IDATOutputStream::chunkType, $new($bytes, {
		(int8_t)u'I',
		(int8_t)u'D',
		(int8_t)u'A',
		(int8_t)u'T'
	}));
}

IDATOutputStream::IDATOutputStream() {
}

$Class* IDATOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"chunkType", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IDATOutputStream, chunkType)},
		{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, stream)},
		{"chunkLength", "I", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, chunkLength)},
		{"startPos", "J", nullptr, $PRIVATE, $field(IDATOutputStream, startPos)},
		{"crc", "Lcom/sun/imageio/plugins/png/CRC;", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, crc)},
		{"def", "Ljava/util/zip/Deflater;", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, def)},
		{"buf", "[B", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, buf)},
		{"wbuf1", "[B", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, wbuf1)},
		{"bytesRemaining", "I", nullptr, $PRIVATE, $field(IDATOutputStream, bytesRemaining)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/stream/ImageOutputStream;II)V", nullptr, 0, $method(IDATOutputStream, init$, void, $ImageOutputStream*, int32_t, int32_t), "java.io.IOException"},
		{"deflate", "()V", nullptr, 0, $method(IDATOutputStream, deflate, void), "java.io.IOException"},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(IDATOutputStream, finalize, void), "java.lang.Throwable"},
		{"finish", "()V", nullptr, 0, $method(IDATOutputStream, finish, void), "java.io.IOException"},
		{"finishChunk", "()V", nullptr, $PRIVATE, $method(IDATOutputStream, finishChunk, void), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(IDATOutputStream, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(IDATOutputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"startChunk", "()V", nullptr, $PRIVATE, $method(IDATOutputStream, startChunk, void), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(IDATOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(IDATOutputStream, write, void, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.imageio.plugins.png.IDATOutputStream",
		"javax.imageio.stream.ImageOutputStreamImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IDATOutputStream, name, initialize, &classInfo$$, IDATOutputStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(IDATOutputStream));
	});
	return class$;
}

$Class* IDATOutputStream::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com