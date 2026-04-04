#include <java/util/logging/FileHandler$MeteredStream.h>
#include <java/io/OutputStream.h>
#include <java/util/logging/FileHandler.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace logging {

void FileHandler$MeteredStream::init$($OutputStream* out, int64_t written) {
	$OutputStream::init$();
	$set(this, out, out);
	this->written = written;
}

void FileHandler$MeteredStream::write(int32_t b) {
	$nc(this->out)->write(b);
	++this->written;
}

void FileHandler$MeteredStream::write($bytes* buff) {
	$nc(this->out)->write(buff);
	this->written += $nc(buff)->length;
}

void FileHandler$MeteredStream::write($bytes* buff, int32_t off, int32_t len) {
	$nc(this->out)->write(buff, off, len);
	this->written += len;
}

void FileHandler$MeteredStream::flush() {
	$nc(this->out)->flush();
}

void FileHandler$MeteredStream::close() {
	$nc(this->out)->close();
}

FileHandler$MeteredStream::FileHandler$MeteredStream() {
}

$Class* FileHandler$MeteredStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"out", "Ljava/io/OutputStream;", nullptr, $FINAL, $field(FileHandler$MeteredStream, out)},
		{"written", "J", nullptr, 0, $field(FileHandler$MeteredStream, written)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;J)V", nullptr, 0, $method(FileHandler$MeteredStream, init$, void, $OutputStream*, int64_t)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FileHandler$MeteredStream, close, void), "java.io.IOException"},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(FileHandler$MeteredStream, flush, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(FileHandler$MeteredStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([B)V", nullptr, $PUBLIC, $virtualMethod(FileHandler$MeteredStream, write, void, $bytes*), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(FileHandler$MeteredStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.FileHandler$MeteredStream", "java.util.logging.FileHandler", "MeteredStream", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.logging.FileHandler$MeteredStream",
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
		"java.util.logging.FileHandler"
	};
	$loadClass(FileHandler$MeteredStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileHandler$MeteredStream));
	});
	return class$;
}

$Class* FileHandler$MeteredStream::class$ = nullptr;

		} // logging
	} // util
} // java