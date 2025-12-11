#include <jdk/nio/zipfs/ZipFileSystem$DeflatingEntryOutputStream.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/Objects.h>
#include <java/util/zip/CRC32.h>
#include <java/util/zip/Deflater.h>
#include <java/util/zip/DeflaterOutputStream.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
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

$FieldInfo _ZipFileSystem$DeflatingEntryOutputStream_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$DeflatingEntryOutputStream, this$0)},
	{"crc", "Ljava/util/zip/CRC32;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem$DeflatingEntryOutputStream, crc)},
	{"e", "Ljdk/nio/zipfs/ZipFileSystem$Entry;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem$DeflatingEntryOutputStream, e)},
	{"isClosed", "Z", nullptr, $PRIVATE, $field(ZipFileSystem$DeflatingEntryOutputStream, isClosed)},
	{}
};

$MethodInfo _ZipFileSystem$DeflatingEntryOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$Entry;Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$DeflatingEntryOutputStream::*)($ZipFileSystem*,$ZipFileSystem$Entry*,$OutputStream*)>(&ZipFileSystem$DeflatingEntryOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFileSystem$DeflatingEntryOutputStream_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$DeflatingEntryOutputStream", "jdk.nio.zipfs.ZipFileSystem", "DeflatingEntryOutputStream", $PRIVATE},
	{}
};

$ClassInfo _ZipFileSystem$DeflatingEntryOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$DeflatingEntryOutputStream",
	"java.util.zip.DeflaterOutputStream",
	nullptr,
	_ZipFileSystem$DeflatingEntryOutputStream_FieldInfo_,
	_ZipFileSystem$DeflatingEntryOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$DeflatingEntryOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$DeflatingEntryOutputStream($Class* clazz) {
	return $of($alloc(ZipFileSystem$DeflatingEntryOutputStream));
}

void ZipFileSystem$DeflatingEntryOutputStream::init$($ZipFileSystem* this$0, $ZipFileSystem$Entry* e, $OutputStream* os) {
	$set(this, this$0, this$0);
	$DeflaterOutputStream::init$(os, $(this$0->getDeflater()));
	$set(this, e, $cast($ZipFileSystem$Entry, $Objects::requireNonNull($of(e), "Zip entry is null"_s)));
	$set(this, crc, $new($CRC32));
}

void ZipFileSystem$DeflatingEntryOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		$DeflaterOutputStream::write(b, off, len);
		$nc(this->crc)->update(b, off, len);
	}
}

void ZipFileSystem$DeflatingEntryOutputStream::close() {
	$synchronized(this) {
		if (this->isClosed) {
			return;
		}
		this->isClosed = true;
		finish();
		$nc(this->e)->size$ = $nc(this->def)->getBytesRead();
		$nc(this->e)->csize = $nc(this->def)->getBytesWritten();
		$nc(this->e)->crc$ = $nc(this->crc)->getValue();
		if ($instanceOf($ByteArrayOutputStream, this->out)) {
			$set($nc(this->e), bytes, $nc(($cast($ByteArrayOutputStream, this->out)))->toByteArray());
		}
		$DeflaterOutputStream::close();
		this->this$0->update(this->e);
		this->this$0->releaseDeflater(this->def);
	}
}

ZipFileSystem$DeflatingEntryOutputStream::ZipFileSystem$DeflatingEntryOutputStream() {
}

$Class* ZipFileSystem$DeflatingEntryOutputStream::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$DeflatingEntryOutputStream, name, initialize, &_ZipFileSystem$DeflatingEntryOutputStream_ClassInfo_, allocate$ZipFileSystem$DeflatingEntryOutputStream);
	return class$;
}

$Class* ZipFileSystem$DeflatingEntryOutputStream::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk