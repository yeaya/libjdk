#include <jdk/nio/zipfs/ZipFileSystem$EntryOutputStreamCRC32.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/Objects.h>
#include <java/util/zip/CRC32.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $CRC32 = ::java::util::zip::CRC32;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$Entry = ::jdk::nio::zipfs::ZipFileSystem$Entry;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$EntryOutputStreamCRC32_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$EntryOutputStreamCRC32, this$0)},
	{"crc", "Ljava/util/zip/CRC32;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem$EntryOutputStreamCRC32, crc)},
	{"e", "Ljdk/nio/zipfs/ZipFileSystem$Entry;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem$EntryOutputStreamCRC32, e)},
	{"written", "J", nullptr, $PRIVATE, $field(ZipFileSystem$EntryOutputStreamCRC32, written)},
	{"isClosed", "Z", nullptr, $PRIVATE, $field(ZipFileSystem$EntryOutputStreamCRC32, isClosed)},
	{}
};

$MethodInfo _ZipFileSystem$EntryOutputStreamCRC32_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$Entry;Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$EntryOutputStreamCRC32::*)($ZipFileSystem*,$ZipFileSystem$Entry*,$OutputStream*)>(&ZipFileSystem$EntryOutputStreamCRC32::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFileSystem$EntryOutputStreamCRC32_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamCRC32", "jdk.nio.zipfs.ZipFileSystem", "EntryOutputStreamCRC32", $PRIVATE},
	{}
};

$ClassInfo _ZipFileSystem$EntryOutputStreamCRC32_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamCRC32",
	"java.io.FilterOutputStream",
	nullptr,
	_ZipFileSystem$EntryOutputStreamCRC32_FieldInfo_,
	_ZipFileSystem$EntryOutputStreamCRC32_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$EntryOutputStreamCRC32_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$EntryOutputStreamCRC32($Class* clazz) {
	return $of($alloc(ZipFileSystem$EntryOutputStreamCRC32));
}

void ZipFileSystem$EntryOutputStreamCRC32::init$($ZipFileSystem* this$0, $ZipFileSystem$Entry* e, $OutputStream* os) {
	$set(this, this$0, this$0);
	$FilterOutputStream::init$(os);
	$set(this, e, $cast($ZipFileSystem$Entry, $Objects::requireNonNull($of(e), "Zip entry is null"_s)));
	$set(this, crc, $new($CRC32));
}

void ZipFileSystem$EntryOutputStreamCRC32::write(int32_t b) {
	$nc(this->out)->write(b);
	$nc(this->crc)->update(b);
	this->written += 1;
}

void ZipFileSystem$EntryOutputStreamCRC32::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->out)->write(b, off, len);
	$nc(this->crc)->update(b, off, len);
	this->written += len;
}

void ZipFileSystem$EntryOutputStreamCRC32::close() {
	if (this->isClosed) {
		return;
	}
	this->isClosed = true;
	$nc(this->e)->size$ = ($nc(this->e)->csize = this->written);
	$nc(this->e)->crc$ = $nc(this->crc)->getValue();
}

ZipFileSystem$EntryOutputStreamCRC32::ZipFileSystem$EntryOutputStreamCRC32() {
}

$Class* ZipFileSystem$EntryOutputStreamCRC32::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$EntryOutputStreamCRC32, name, initialize, &_ZipFileSystem$EntryOutputStreamCRC32_ClassInfo_, allocate$ZipFileSystem$EntryOutputStreamCRC32);
	return class$;
}

$Class* ZipFileSystem$EntryOutputStreamCRC32::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk