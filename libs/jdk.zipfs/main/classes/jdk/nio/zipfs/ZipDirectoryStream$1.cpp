#include <jdk/nio/zipfs/ZipDirectoryStream$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/nio/zipfs/ZipDirectoryStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ZipDirectoryStream = ::jdk::nio::zipfs::ZipDirectoryStream;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipDirectoryStream$1_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipDirectoryStream;", nullptr, $FINAL | $SYNTHETIC, $field(ZipDirectoryStream$1, this$0)},
	{}
};

$MethodInfo _ZipDirectoryStream$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipDirectoryStream;)V", nullptr, 0, $method(static_cast<void(ZipDirectoryStream$1::*)($ZipDirectoryStream*)>(&ZipDirectoryStream$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ZipDirectoryStream$1_EnclosingMethodInfo_ = {
	"jdk.nio.zipfs.ZipDirectoryStream",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ZipDirectoryStream$1_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipDirectoryStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ZipDirectoryStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipDirectoryStream$1",
	"java.lang.Object",
	"java.util.Iterator",
	_ZipDirectoryStream$1_FieldInfo_,
	_ZipDirectoryStream$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_ZipDirectoryStream$1_EnclosingMethodInfo_,
	_ZipDirectoryStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipDirectoryStream"
};

$Object* allocate$ZipDirectoryStream$1($Class* clazz) {
	return $of($alloc(ZipDirectoryStream$1));
}

void ZipDirectoryStream$1::init$($ZipDirectoryStream* this$0) {
	$set(this, this$0, this$0);
}

bool ZipDirectoryStream$1::hasNext() {
	if (this->this$0->isClosed) {
		return false;
	}
	return $nc(this->this$0->itr)->hasNext();
}

$Object* ZipDirectoryStream$1::next() {
	$synchronized(this) {
		if (this->this$0->isClosed) {
			$throwNew($NoSuchElementException);
		}
		return $of($cast($Path, $nc(this->this$0->itr)->next()));
	}
}

void ZipDirectoryStream$1::remove() {
	$throwNew($UnsupportedOperationException);
}

ZipDirectoryStream$1::ZipDirectoryStream$1() {
}

$Class* ZipDirectoryStream$1::load$($String* name, bool initialize) {
	$loadClass(ZipDirectoryStream$1, name, initialize, &_ZipDirectoryStream$1_ClassInfo_, allocate$ZipDirectoryStream$1);
	return class$;
}

$Class* ZipDirectoryStream$1::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk