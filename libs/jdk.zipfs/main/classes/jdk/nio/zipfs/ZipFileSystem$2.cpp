#include <jdk/nio/zipfs/ZipFileSystem$2.h>
#include <java/io/EOFException.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/util/Set.h>
#include <java/util/zip/Inflater.h>
#include <java/util/zip/InflaterInputStream.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

#undef MAX_VALUE

using $EOFException = ::java::io::EOFException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inflater = ::java::util::zip::Inflater;
using $InflaterInputStream = ::java::util::zip::InflaterInputStream;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;

namespace jdk {
	namespace nio {
		namespace zipfs {

void ZipFileSystem$2::init$($ZipFileSystem* this$0, $InputStream* arg0, $Inflater* arg1, int32_t arg2, int64_t val$size) {
	$set(this, this$0, this$0);
	this->val$size = val$size;
	$InflaterInputStream::init$(arg0, arg1, arg2);
	this->isClosed = false;
}

void ZipFileSystem$2::close() {
	if (!this->isClosed) {
		this->this$0->releaseInflater(this->inf);
		$nc(this->in)->close();
		this->isClosed = true;
		$nc(this->this$0->streams)->remove(this);
	}
}

void ZipFileSystem$2::fill() {
	if (this->eof) {
		$throwNew($EOFException, "Unexpected end of ZLIB input stream"_s);
	}
	this->len = $nc(this->in)->read(this->buf, 0, $nc(this->buf)->length);
	if (this->len == -1) {
		this->buf->set(0, 0);
		this->len = 1;
		this->eof = true;
	}
	$nc(this->inf)->setInput(this->buf, 0, this->len);
}

int32_t ZipFileSystem$2::available() {
	if (this->isClosed) {
		return 0;
	}
	int64_t avail = this->val$size - $nc(this->inf)->getBytesWritten();
	return avail > (int64_t)$Integer::MAX_VALUE ? $Integer::MAX_VALUE : (int32_t)avail;
}

ZipFileSystem$2::ZipFileSystem$2() {
}

$Class* ZipFileSystem$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$2, this$0)},
		{"val$size", "J", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$2, val$size)},
		{"isClosed", "Z", nullptr, $PRIVATE, $field(ZipFileSystem$2, isClosed)},
		{"eof", "Z", nullptr, $PRIVATE, $field(ZipFileSystem$2, eof)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljava/io/InputStream;Ljava/util/zip/Inflater;IJ)V", nullptr, 0, $method(ZipFileSystem$2, init$, void, $ZipFileSystem*, $InputStream*, $Inflater*, int32_t, int64_t)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(ZipFileSystem$2, available, int32_t)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ZipFileSystem$2, close, void), "java.io.IOException"},
		{"fill", "()V", nullptr, $PROTECTED, $virtualMethod(ZipFileSystem$2, fill, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.nio.zipfs.ZipFileSystem",
		"getInputStream",
		"(Ljdk/nio/zipfs/ZipFileSystem$Entry;)Ljava/io/InputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipFileSystem$2", nullptr, nullptr, 0},
		{"jdk.nio.zipfs.ZipFileSystem$Entry", "jdk.nio.zipfs.ZipFileSystem", "Entry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.nio.zipfs.ZipFileSystem$2",
		"java.util.zip.InflaterInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.nio.zipfs.ZipFileSystem"
	};
	$loadClass(ZipFileSystem$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFileSystem$2);
	});
	return class$;
}

$Class* ZipFileSystem$2::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk