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
using $Set = ::java::util::Set;
using $Inflater = ::java::util::zip::Inflater;
using $InflaterInputStream = ::java::util::zip::InflaterInputStream;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$2_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$2, this$0)},
	{"val$size", "J", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$2, val$size)},
	{"isClosed", "Z", nullptr, $PRIVATE, $field(ZipFileSystem$2, isClosed)},
	{"eof", "Z", nullptr, $PRIVATE, $field(ZipFileSystem$2, eof)},
	{}
};

$MethodInfo _ZipFileSystem$2_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljava/io/InputStream;Ljava/util/zip/Inflater;IJ)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$2::*)($ZipFileSystem*,$InputStream*,$Inflater*,int32_t,int64_t)>(&ZipFileSystem$2::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"fill", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _ZipFileSystem$2_EnclosingMethodInfo_ = {
	"jdk.nio.zipfs.ZipFileSystem",
	"getInputStream",
	"(Ljdk/nio/zipfs/ZipFileSystem$Entry;)Ljava/io/InputStream;"
};

$InnerClassInfo _ZipFileSystem$2_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$2", nullptr, nullptr, 0},
	{"jdk.nio.zipfs.ZipFileSystem$Entry", "jdk.nio.zipfs.ZipFileSystem", "Entry", $STATIC},
	{}
};

$ClassInfo _ZipFileSystem$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$2",
	"java.util.zip.InflaterInputStream",
	nullptr,
	_ZipFileSystem$2_FieldInfo_,
	_ZipFileSystem$2_MethodInfo_,
	nullptr,
	&_ZipFileSystem$2_EnclosingMethodInfo_,
	_ZipFileSystem$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$2($Class* clazz) {
	return $of($alloc(ZipFileSystem$2));
}

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
		$nc(this->buf)->set(0, (int8_t)0);
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
	$loadClass(ZipFileSystem$2, name, initialize, &_ZipFileSystem$2_ClassInfo_, allocate$ZipFileSystem$2);
	return class$;
}

$Class* ZipFileSystem$2::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk