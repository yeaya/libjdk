#include <jdk/nio/zipfs/ZipFileSystem$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $FileLock = ::java::nio::channels::FileLock;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$Entry = ::jdk::nio::zipfs::ZipFileSystem$Entry;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$1_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$1, this$0)},
	{"val$tmpfile", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$1, val$tmpfile)},
	{"val$isFCH", "Z", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$1, val$isFCH)},
	{"val$u", "Ljdk/nio/zipfs/ZipFileSystem$Entry;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$1, val$u)},
	{"val$forWrite", "Z", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$1, val$forWrite)},
	{"val$fch", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$1, val$fch)},
	{}
};

$MethodInfo _ZipFileSystem$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljava/nio/channels/FileChannel;ZLjdk/nio/zipfs/ZipFileSystem$Entry;ZLjava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$1::*)($ZipFileSystem*,$FileChannel*,bool,$ZipFileSystem$Entry*,bool,$Path*)>(&ZipFileSystem$1::init$))},
	{"force", "(Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"implCloseChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"lock", "(JJZ)Ljava/nio/channels/FileLock;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"map", "(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC},
	{"position", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"position", "(J)Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;J)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"size", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"transferFrom", "(Ljava/nio/channels/ReadableByteChannel;JJ)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"transferTo", "(JJLjava/nio/channels/WritableByteChannel;)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"truncate", "(J)Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"tryLock", "(JJZ)Ljava/nio/channels/FileLock;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/nio/ByteBuffer;J)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _ZipFileSystem$1_EnclosingMethodInfo_ = {
	"jdk.nio.zipfs.ZipFileSystem",
	"newFileChannel",
	"([BLjava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;"
};

$InnerClassInfo _ZipFileSystem$1_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ZipFileSystem$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$1",
	"java.nio.channels.FileChannel",
	nullptr,
	_ZipFileSystem$1_FieldInfo_,
	_ZipFileSystem$1_MethodInfo_,
	nullptr,
	&_ZipFileSystem$1_EnclosingMethodInfo_,
	_ZipFileSystem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$1($Class* clazz) {
	return $of($alloc(ZipFileSystem$1));
}

void ZipFileSystem$1::init$($ZipFileSystem* this$0, $FileChannel* val$fch, bool val$forWrite, $ZipFileSystem$Entry* val$u, bool val$isFCH, $Path* val$tmpfile) {
	$set(this, this$0, this$0);
	$set(this, val$fch, val$fch);
	this->val$forWrite = val$forWrite;
	$set(this, val$u, val$u);
	this->val$isFCH = val$isFCH;
	$set(this, val$tmpfile, val$tmpfile);
	$FileChannel::init$();
}

int32_t ZipFileSystem$1::write($ByteBuffer* src) {
	return $nc(this->val$fch)->write(src);
}

int64_t ZipFileSystem$1::write($ByteBufferArray* srcs, int32_t offset, int32_t length) {
	return $nc(this->val$fch)->write(srcs, offset, length);
}

int64_t ZipFileSystem$1::position() {
	return $nc(this->val$fch)->position();
}

$SeekableByteChannel* ZipFileSystem$1::position(int64_t newPosition) {
	$nc(this->val$fch)->position(newPosition);
	return this;
}

int64_t ZipFileSystem$1::size() {
	return $nc(this->val$fch)->size();
}

$SeekableByteChannel* ZipFileSystem$1::truncate(int64_t size) {
	$nc(this->val$fch)->truncate(size);
	return this;
}

void ZipFileSystem$1::force(bool metaData) {
	$nc(this->val$fch)->force(metaData);
}

int64_t ZipFileSystem$1::transferTo(int64_t position, int64_t count, $WritableByteChannel* target) {
	return $nc(this->val$fch)->transferTo(position, count, target);
}

int64_t ZipFileSystem$1::transferFrom($ReadableByteChannel* src, int64_t position, int64_t count) {
	return $nc(this->val$fch)->transferFrom(src, position, count);
}

int32_t ZipFileSystem$1::read($ByteBuffer* dst) {
	return $nc(this->val$fch)->read(dst);
}

int32_t ZipFileSystem$1::read($ByteBuffer* dst, int64_t position) {
	return $nc(this->val$fch)->read(dst, position);
}

int64_t ZipFileSystem$1::read($ByteBufferArray* dsts, int32_t offset, int32_t length) {
	return $nc(this->val$fch)->read(dsts, offset, length);
}

int32_t ZipFileSystem$1::write($ByteBuffer* src, int64_t position) {
	return $nc(this->val$fch)->write(src, position);
}

$MappedByteBuffer* ZipFileSystem$1::map($FileChannel$MapMode* mode, int64_t position, int64_t size) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$FileLock* ZipFileSystem$1::lock(int64_t position, int64_t size, bool shared) {
	return $nc(this->val$fch)->lock(position, size, shared);
}

$FileLock* ZipFileSystem$1::tryLock(int64_t position, int64_t size, bool shared) {
	return $nc(this->val$fch)->tryLock(position, size, shared);
}

void ZipFileSystem$1::implCloseChannel() {
	$nc(this->val$fch)->close();
	if (this->val$forWrite) {
		$nc(this->val$u)->mtime = $System::currentTimeMillis();
		$nc(this->val$u)->size$ = $Files::size($nc(this->val$u)->file);
		this->this$0->update(this->val$u);
	} else if (!this->val$isFCH) {
		this->this$0->removeTempPathForEntry(this->val$tmpfile);
	}
}

ZipFileSystem$1::ZipFileSystem$1() {
}

$Class* ZipFileSystem$1::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$1, name, initialize, &_ZipFileSystem$1_ClassInfo_, allocate$ZipFileSystem$1);
	return class$;
}

$Class* ZipFileSystem$1::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk