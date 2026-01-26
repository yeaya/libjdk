#include <jdk/nio/zipfs/ZipFileSystem$EntryOutputStreamDef.h>

#include <java/io/OutputStream.h>
#include <java/util/Objects.h>
#include <java/util/zip/CRC32.h>
#include <java/util/zip/Deflater.h>
#include <java/util/zip/DeflaterOutputStream.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $CRC32 = ::java::util::zip::CRC32;
using $Deflater = ::java::util::zip::Deflater;
using $DeflaterOutputStream = ::java::util::zip::DeflaterOutputStream;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$Entry = ::jdk::nio::zipfs::ZipFileSystem$Entry;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$EntryOutputStreamDef_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$EntryOutputStreamDef, this$0)},
	{"crc", "Ljava/util/zip/CRC32;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem$EntryOutputStreamDef, crc)},
	{"e", "Ljdk/nio/zipfs/ZipFileSystem$Entry;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem$EntryOutputStreamDef, e)},
	{"isClosed", "Z", nullptr, $PRIVATE, $field(ZipFileSystem$EntryOutputStreamDef, isClosed)},
	{}
};

$MethodInfo _ZipFileSystem$EntryOutputStreamDef_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$Entry;Ljava/io/OutputStream;)V", nullptr, 0, $method(ZipFileSystem$EntryOutputStreamDef, init$, void, $ZipFileSystem*, $ZipFileSystem$Entry*, $OutputStream*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ZipFileSystem$EntryOutputStreamDef, close, void), "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(ZipFileSystem$EntryOutputStreamDef, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFileSystem$EntryOutputStreamDef_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamDef", "jdk.nio.zipfs.ZipFileSystem", "EntryOutputStreamDef", $PRIVATE},
	{}
};

$ClassInfo _ZipFileSystem$EntryOutputStreamDef_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamDef",
	"java.util.zip.DeflaterOutputStream",
	nullptr,
	_ZipFileSystem$EntryOutputStreamDef_FieldInfo_,
	_ZipFileSystem$EntryOutputStreamDef_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$EntryOutputStreamDef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$EntryOutputStreamDef($Class* clazz) {
	return $of($alloc(ZipFileSystem$EntryOutputStreamDef));
}

void ZipFileSystem$EntryOutputStreamDef::init$($ZipFileSystem* this$0, $ZipFileSystem$Entry* e, $OutputStream* os) {
	$set(this, this$0, this$0);
	$DeflaterOutputStream::init$(os, $(this$0->getDeflater()));
	$set(this, e, $cast($ZipFileSystem$Entry, $Objects::requireNonNull($of(e), "Zip entry is null"_s)));
	$set(this, crc, $new($CRC32));
}

void ZipFileSystem$EntryOutputStreamDef::write($bytes* b, int32_t off, int32_t len) {
	$DeflaterOutputStream::write(b, off, len);
	$nc(this->crc)->update(b, off, len);
}

void ZipFileSystem$EntryOutputStreamDef::close() {
	if (this->isClosed) {
		return;
	}
	this->isClosed = true;
	finish();
	$nc(this->e)->size$ = $nc(this->def)->getBytesRead();
	$nc(this->e)->csize = $nc(this->def)->getBytesWritten();
	$nc(this->e)->crc$ = $nc(this->crc)->getValue();
	this->this$0->releaseDeflater(this->def);
}

ZipFileSystem$EntryOutputStreamDef::ZipFileSystem$EntryOutputStreamDef() {
}

$Class* ZipFileSystem$EntryOutputStreamDef::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$EntryOutputStreamDef, name, initialize, &_ZipFileSystem$EntryOutputStreamDef_ClassInfo_, allocate$ZipFileSystem$EntryOutputStreamDef);
	return class$;
}

$Class* ZipFileSystem$EntryOutputStreamDef::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk