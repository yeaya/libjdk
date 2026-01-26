#include <jdk/nio/zipfs/ZipDirectoryStream.h>

#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/file/ClosedDirectoryStreamException.h>
#include <java/nio/file/DirectoryIteratorException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/NotDirectoryException.h>
#include <java/util/Iterator.h>
#include <jdk/nio/zipfs/ZipDirectoryStream$1.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jdk/nio/zipfs/ZipPath.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClosedDirectoryStreamException = ::java::nio::file::ClosedDirectoryStreamException;
using $DirectoryIteratorException = ::java::nio::file::DirectoryIteratorException;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $NotDirectoryException = ::java::nio::file::NotDirectoryException;
using $Iterator = ::java::util::Iterator;
using $ZipDirectoryStream$1 = ::jdk::nio::zipfs::ZipDirectoryStream$1;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipPath = ::jdk::nio::zipfs::ZipPath;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipDirectoryStream_FieldInfo_[] = {
	{"zipfs", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $PRIVATE | $FINAL, $field(ZipDirectoryStream, zipfs)},
	{"dir", "Ljdk/nio/zipfs/ZipPath;", nullptr, $PRIVATE | $FINAL, $field(ZipDirectoryStream, dir)},
	{"filter", "Ljava/nio/file/DirectoryStream$Filter;", "Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(ZipDirectoryStream, filter)},
	{"isClosed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ZipDirectoryStream, isClosed)},
	{"itr", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PRIVATE | $VOLATILE, $field(ZipDirectoryStream, itr)},
	{}
};

$MethodInfo _ZipDirectoryStream_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipPath;Ljava/nio/file/DirectoryStream$Filter;)V", "(Ljdk/nio/zipfs/ZipPath;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)V", 0, $method(ZipDirectoryStream, init$, void, $ZipPath*, $DirectoryStream$Filter*), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ZipDirectoryStream, close, void), "java.io.IOException"},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(ZipDirectoryStream, iterator, $Iterator*)},
	{}
};

$InnerClassInfo _ZipDirectoryStream_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipDirectoryStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ZipDirectoryStream_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipDirectoryStream",
	"java.lang.Object",
	"java.nio.file.DirectoryStream",
	_ZipDirectoryStream_FieldInfo_,
	_ZipDirectoryStream_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;",
	nullptr,
	_ZipDirectoryStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipDirectoryStream$1"
};

$Object* allocate$ZipDirectoryStream($Class* clazz) {
	return $of($alloc(ZipDirectoryStream));
}

void ZipDirectoryStream::init$($ZipPath* dir, $DirectoryStream$Filter* filter) {
	$useLocalCurrentObjectStackCache();
	$set(this, zipfs, $cast($ZipFileSystem, $nc(dir)->getFileSystem()));
	$set(this, dir, dir);
	$set(this, filter, filter);
	if (!$nc(this->zipfs)->isDirectory($(dir->getResolvedPath()))) {
		$throwNew($NotDirectoryException, $(dir->toString()));
	}
}

$Iterator* ZipDirectoryStream::iterator() {
	$synchronized(this) {
		if (this->isClosed) {
			$throwNew($ClosedDirectoryStreamException);
		}
		if (this->itr != nullptr) {
			$throwNew($IllegalStateException, "Iterator has already been returned"_s);
		}
		try {
			$set(this, itr, $nc(this->zipfs)->iteratorOf(this->dir, this->filter));
		} catch ($IOException& e) {
			$throwNew($DirectoryIteratorException, e);
		}
		return $new($ZipDirectoryStream$1, this);
	}
}

void ZipDirectoryStream::close() {
	$synchronized(this) {
		this->isClosed = true;
	}
}

ZipDirectoryStream::ZipDirectoryStream() {
}

$Class* ZipDirectoryStream::load$($String* name, bool initialize) {
	$loadClass(ZipDirectoryStream, name, initialize, &_ZipDirectoryStream_ClassInfo_, allocate$ZipDirectoryStream);
	return class$;
}

$Class* ZipDirectoryStream::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk