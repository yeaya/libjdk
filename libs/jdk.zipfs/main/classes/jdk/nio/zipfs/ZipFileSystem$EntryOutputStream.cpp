#include <jdk/nio/zipfs/ZipFileSystem$EntryOutputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/Objects.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$Entry = ::jdk::nio::zipfs::ZipFileSystem$Entry;

namespace jdk {
	namespace nio {
		namespace zipfs {

void ZipFileSystem$EntryOutputStream::init$($ZipFileSystem* this$0, $ZipFileSystem$Entry* e, $OutputStream* os) {
	$set(this, this$0, this$0);
	$FilterOutputStream::init$(os);
	$set(this, e, $cast($ZipFileSystem$Entry, $Objects::requireNonNull(e, "Zip entry is null"_s)));
}

void ZipFileSystem$EntryOutputStream::write(int32_t b) {
	$synchronized(this) {
		$nc(this->out)->write(b);
		this->written += 1;
	}
}

void ZipFileSystem$EntryOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		$nc(this->out)->write(b, off, len);
		this->written += len;
	}
}

void ZipFileSystem$EntryOutputStream::close() {
	$synchronized(this) {
		if (this->isClosed) {
			return;
		}
		this->isClosed = true;
		$nc(this->e)->size$ = this->written;
		if ($instanceOf($ByteArrayOutputStream, this->out)) {
			$set(this->e, bytes, $cast($ByteArrayOutputStream, this->out)->toByteArray());
		}
		$FilterOutputStream::close();
		this->this$0->update(this->e);
	}
}

ZipFileSystem$EntryOutputStream::ZipFileSystem$EntryOutputStream() {
}

$Class* ZipFileSystem$EntryOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$EntryOutputStream, this$0)},
		{"e", "Ljdk/nio/zipfs/ZipFileSystem$Entry;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem$EntryOutputStream, e)},
		{"written", "J", nullptr, $PRIVATE, $field(ZipFileSystem$EntryOutputStream, written)},
		{"isClosed", "Z", nullptr, $PRIVATE, $field(ZipFileSystem$EntryOutputStream, isClosed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$Entry;Ljava/io/OutputStream;)V", nullptr, 0, $method(ZipFileSystem$EntryOutputStream, init$, void, $ZipFileSystem*, $ZipFileSystem$Entry*, $OutputStream*)},
		{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ZipFileSystem$EntryOutputStream, close, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ZipFileSystem$EntryOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ZipFileSystem$EntryOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipFileSystem$EntryOutputStream", "jdk.nio.zipfs.ZipFileSystem", "EntryOutputStream", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.nio.zipfs.ZipFileSystem$EntryOutputStream",
		"java.io.FilterOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.nio.zipfs.ZipFileSystem"
	};
	$loadClass(ZipFileSystem$EntryOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ZipFileSystem$EntryOutputStream));
	});
	return class$;
}

$Class* ZipFileSystem$EntryOutputStream::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk