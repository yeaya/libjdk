#include <jdk/nio/zipfs/ZipFileSystem$EntryInputStream.h>

#include <java/io/InputStream.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Set.h>
#include <java/util/zip/ZipException.h>
#include <jdk/nio/zipfs/ZipConstants.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

#undef MAX_VALUE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Set = ::java::util::Set;
using $ZipException = ::java::util::zip::ZipException;
using $ZipConstants = ::jdk::nio::zipfs::ZipConstants;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$Entry = ::jdk::nio::zipfs::ZipFileSystem$Entry;
using $ZipFileSystem$IndexNode = ::jdk::nio::zipfs::ZipFileSystem$IndexNode;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$EntryInputStream_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$EntryInputStream, this$0)},
	{"pos", "J", nullptr, $PRIVATE, $field(ZipFileSystem$EntryInputStream, pos)},
	{"rem", "J", nullptr, $PRIVATE, $field(ZipFileSystem$EntryInputStream, rem)},
	{}
};

$MethodInfo _ZipFileSystem$EntryInputStream_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$Entry;)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$EntryInputStream::*)($ZipFileSystem*,$ZipFileSystem$Entry*)>(&ZipFileSystem$EntryInputStream::init$)), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"initDataPos", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem$EntryInputStream::*)()>(&ZipFileSystem$EntryInputStream::initDataPos)), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ZipFileSystem$EntryInputStream_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$EntryInputStream", "jdk.nio.zipfs.ZipFileSystem", "EntryInputStream", $PRIVATE},
	{}
};

$ClassInfo _ZipFileSystem$EntryInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$EntryInputStream",
	"java.io.InputStream",
	nullptr,
	_ZipFileSystem$EntryInputStream_FieldInfo_,
	_ZipFileSystem$EntryInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$EntryInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$EntryInputStream($Class* clazz) {
	return $of($alloc(ZipFileSystem$EntryInputStream));
}

void ZipFileSystem$EntryInputStream::init$($ZipFileSystem* this$0, $ZipFileSystem$Entry* e) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$InputStream::init$();
	this->rem = $nc(e)->csize;
	this->pos = e->locoff;
	if (this->pos == -1) {
		$var($ZipFileSystem$Entry, e2, this$0->getEntry(e->name$));
		if (e2 == nullptr) {
			$throwNew($ZipException, $$str({"invalid loc for entry <"_s, $(this$0->getString(e->name$)), ">"_s}));
		}
		this->pos = $nc(e2)->locoff;
	}
	this->pos = -this->pos;
}

int32_t ZipFileSystem$EntryInputStream::read($bytes* b, int32_t off, int32_t len) {
	this->this$0->ensureOpen();
	initDataPos();
	if (this->rem == 0) {
		return -1;
	}
	if (len <= 0) {
		return 0;
	}
	if (len > this->rem) {
		len = (int32_t)this->rem;
	}
	$var($ByteBuffer, bb, $ByteBuffer::wrap(b));
	$nc(bb)->position(off);
	bb->limit(off + len);
	int64_t n = this->this$0->readFullyAt(bb, this->pos);
	if (n > 0) {
		this->pos += n;
		this->rem -= n;
	}
	if (this->rem == 0) {
		close();
	}
	return (int32_t)n;
}

int32_t ZipFileSystem$EntryInputStream::read() {
	$var($bytes, b, $new($bytes, 1));
	if (read(b, 0, 1) == 1) {
		return (int32_t)(b->get(0) & (uint32_t)255);
	} else {
		return -1;
	}
}

int64_t ZipFileSystem$EntryInputStream::skip(int64_t n) {
	this->this$0->ensureOpen();
	if (n > this->rem) {
		n = this->rem;
	}
	this->pos += n;
	this->rem -= n;
	if (this->rem == 0) {
		close();
	}
	return n;
}

int32_t ZipFileSystem$EntryInputStream::available() {
	return this->rem > $Integer::MAX_VALUE ? $Integer::MAX_VALUE : (int32_t)this->rem;
}

void ZipFileSystem$EntryInputStream::close() {
	this->rem = 0;
	$nc(this->this$0->streams)->remove(this);
}

void ZipFileSystem$EntryInputStream::initDataPos() {
	$useLocalCurrentObjectStackCache();
	if (this->pos <= 0) {
		this->pos = -this->pos + this->this$0->locpos;
		$var($bytes, buf, $new($bytes, 30));
		if (this->this$0->readFullyAt(buf, 0, buf->length, this->pos) != 30) {
			$throwNew($ZipException, $$str({"invalid loc "_s, $$str(this->pos), " for entry reading"_s}));
		}
		int32_t var$0 = 30 + $ZipConstants::LOCNAM(buf);
		this->pos += var$0 + $ZipConstants::LOCEXT(buf);
	}
}

ZipFileSystem$EntryInputStream::ZipFileSystem$EntryInputStream() {
}

$Class* ZipFileSystem$EntryInputStream::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$EntryInputStream, name, initialize, &_ZipFileSystem$EntryInputStream_ClassInfo_, allocate$ZipFileSystem$EntryInputStream);
	return class$;
}

$Class* ZipFileSystem$EntryInputStream::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk