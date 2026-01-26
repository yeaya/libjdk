#include <jdk/nio/zipfs/ZipPath$1.h>

#include <java/nio/file/Path.h>
#include <java/nio/file/ReadOnlyFileSystemException.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/nio/zipfs/ZipPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $ReadOnlyFileSystemException = ::java::nio::file::ReadOnlyFileSystemException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ZipPath = ::jdk::nio::zipfs::ZipPath;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipPath$1_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipPath;", nullptr, $FINAL | $SYNTHETIC, $field(ZipPath$1, this$0)},
	{"i", "I", nullptr, $PRIVATE, $field(ZipPath$1, i)},
	{}
};

$MethodInfo _ZipPath$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipPath;)V", nullptr, 0, $method(ZipPath$1, init$, void, $ZipPath*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ZipPath$1, hasNext, bool)},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(ZipPath$1, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ZipPath$1, remove, void)},
	{}
};

$EnclosingMethodInfo _ZipPath$1_EnclosingMethodInfo_ = {
	"jdk.nio.zipfs.ZipPath",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ZipPath$1_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ZipPath$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipPath$1",
	"java.lang.Object",
	"java.util.Iterator",
	_ZipPath$1_FieldInfo_,
	_ZipPath$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_ZipPath$1_EnclosingMethodInfo_,
	_ZipPath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipPath"
};

$Object* allocate$ZipPath$1($Class* clazz) {
	return $of($alloc(ZipPath$1));
}

void ZipPath$1::init$($ZipPath* this$0) {
	$set(this, this$0, this$0);
	this->i = 0;
}

bool ZipPath$1::hasNext() {
	return (this->i < this->this$0->getNameCount());
}

$Object* ZipPath$1::next() {
	if (this->i < this->this$0->getNameCount()) {
		$var($Path, result, this->this$0->getName(this->i));
		++this->i;
		return $of(result);
	} else {
		$throwNew($NoSuchElementException);
	}
}

void ZipPath$1::remove() {
	$throwNew($ReadOnlyFileSystemException);
}

ZipPath$1::ZipPath$1() {
}

$Class* ZipPath$1::load$($String* name, bool initialize) {
	$loadClass(ZipPath$1, name, initialize, &_ZipPath$1_ClassInfo_, allocate$ZipPath$1);
	return class$;
}

$Class* ZipPath$1::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk