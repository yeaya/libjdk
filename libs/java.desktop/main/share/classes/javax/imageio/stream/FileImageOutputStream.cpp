#include <javax/imageio/stream/FileImageOutputStream.h>
#include <com/sun/imageio/stream/CloseableDisposerRecord.h>
#include <com/sun/imageio/stream/StreamFinalizer.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <sun/java2d/Disposer.h>
#include <jcpp.h>

using $CloseableDisposerRecord = ::com::sun::imageio::stream::CloseableDisposerRecord;
using $StreamFinalizer = ::com::sun::imageio::stream::StreamFinalizer;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;
using $Disposer = ::sun::java2d::Disposer;

namespace javax {
	namespace imageio {
		namespace stream {

void FileImageOutputStream::init$($File* f) {
	FileImageOutputStream::init$(f == nullptr ? ($RandomAccessFile*)nullptr : $$new($RandomAccessFile, f, "rw"_s));
}

void FileImageOutputStream::init$($RandomAccessFile* raf) {
	$ImageOutputStreamImpl::init$();
	if (raf == nullptr) {
		$throwNew($IllegalArgumentException, "raf == null!"_s);
	}
	$set(this, raf, raf);
	$set(this, disposerRecord, $new($CloseableDisposerRecord, raf));
	if ($of(this)->getClass() == FileImageOutputStream::class$) {
		$set(this, disposerReferent, $new($Object));
		$Disposer::addRecord(this->disposerReferent, this->disposerRecord);
	} else {
		$set(this, disposerReferent, $new($StreamFinalizer, $cast($ImageInputStreamImpl, this)));
	}
}

int32_t FileImageOutputStream::read() {
	checkClosed();
	this->bitOffset = 0;
	int32_t val = $nc(this->raf)->read();
	if (val != -1) {
		++this->streamPos;
	}
	return val;
}

int32_t FileImageOutputStream::read($bytes* b, int32_t off, int32_t len) {
	checkClosed();
	this->bitOffset = 0;
	int32_t nbytes = $nc(this->raf)->read(b, off, len);
	if (nbytes != -1) {
		this->streamPos += nbytes;
	}
	return nbytes;
}

void FileImageOutputStream::write(int32_t b) {
	flushBits();
	$nc(this->raf)->write(b);
	++this->streamPos;
}

void FileImageOutputStream::write($bytes* b, int32_t off, int32_t len) {
	flushBits();
	$nc(this->raf)->write(b, off, len);
	this->streamPos += len;
}

int64_t FileImageOutputStream::length() {
	try {
		checkClosed();
		return $nc(this->raf)->length();
	} catch ($IOException& e) {
		return -1;
	}
	$shouldNotReachHere();
}

void FileImageOutputStream::seek(int64_t pos) {
	checkClosed();
	if (pos < this->flushedPos) {
		$throwNew($IndexOutOfBoundsException, "pos < flushedPos!"_s);
	}
	this->bitOffset = 0;
	$nc(this->raf)->seek(pos);
	this->streamPos = this->raf->getFilePointer();
}

void FileImageOutputStream::close() {
	$ImageOutputStreamImpl::close();
	$nc(this->disposerRecord)->dispose();
	$set(this, raf, nullptr);
}

void FileImageOutputStream::finalize() {
}

FileImageOutputStream::FileImageOutputStream() {
}

$Class* FileImageOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"raf", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE, $field(FileImageOutputStream, raf)},
		{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(FileImageOutputStream, disposerReferent)},
		{"disposerRecord", "Lcom/sun/imageio/stream/CloseableDisposerRecord;", nullptr, $PRIVATE | $FINAL, $field(FileImageOutputStream, disposerRecord)},
		{}
	};
	$NamedAttribute finalizemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute finalizemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", finalizemethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(FileImageOutputStream, init$, void, $File*), "java.io.FileNotFoundException,java.io.IOException"},
		{"<init>", "(Ljava/io/RandomAccessFile;)V", nullptr, $PUBLIC, $method(FileImageOutputStream, init$, void, $RandomAccessFile*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FileImageOutputStream, close, void), "java.io.IOException"},
		{"finalize", "()V", nullptr, $PROTECTED | $DEPRECATED, $virtualMethod(FileImageOutputStream, finalize, void), "java.lang.Throwable", nullptr, finalizemethodAnnotations$$},
		{"length", "()J", nullptr, $PUBLIC, $virtualMethod(FileImageOutputStream, length, int64_t)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(FileImageOutputStream, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(FileImageOutputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"seek", "(J)V", nullptr, $PUBLIC, $virtualMethod(FileImageOutputStream, seek, void, int64_t), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(FileImageOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(FileImageOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.imageio.stream.FileImageOutputStream",
		"javax.imageio.stream.ImageOutputStreamImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileImageOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileImageOutputStream));
	});
	return class$;
}

$Class* FileImageOutputStream::class$ = nullptr;

		} // stream
	} // imageio
} // javax