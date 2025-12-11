#include <jdk/nio/zipfs/ZipFileSystem$EntryOutputChannel.h>

#include <java/io/OutputStream.h>
#include <jdk/nio/zipfs/ByteArrayChannel.h>
#include <jdk/nio/zipfs/ZipCoder.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteArrayChannel = ::jdk::nio::zipfs::ByteArrayChannel;
using $ZipCoder = ::jdk::nio::zipfs::ZipCoder;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$Entry = ::jdk::nio::zipfs::ZipFileSystem$Entry;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$EntryOutputChannel_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$EntryOutputChannel, this$0)},
	{"e", "Ljdk/nio/zipfs/ZipFileSystem$Entry;", nullptr, $FINAL, $field(ZipFileSystem$EntryOutputChannel, e)},
	{}
};

$MethodInfo _ZipFileSystem$EntryOutputChannel_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$Entry;)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$EntryOutputChannel::*)($ZipFileSystem*,$ZipFileSystem$Entry*)>(&ZipFileSystem$EntryOutputChannel::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFileSystem$EntryOutputChannel_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$EntryOutputChannel", "jdk.nio.zipfs.ZipFileSystem", "EntryOutputChannel", $PRIVATE},
	{}
};

$ClassInfo _ZipFileSystem$EntryOutputChannel_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$EntryOutputChannel",
	"jdk.nio.zipfs.ByteArrayChannel",
	nullptr,
	_ZipFileSystem$EntryOutputChannel_FieldInfo_,
	_ZipFileSystem$EntryOutputChannel_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$EntryOutputChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$EntryOutputChannel($Class* clazz) {
	return $of($alloc(ZipFileSystem$EntryOutputChannel));
}

void ZipFileSystem$EntryOutputChannel::init$($ZipFileSystem* this$0, $ZipFileSystem$Entry* e) {
	$set(this, this$0, this$0);
	$ByteArrayChannel::init$($nc(e)->size$ > 0 ? (int32_t)$nc(e)->size$ : 8192, false);
	$set(this, e, e);
	if ($nc(e)->mtime == -1) {
		e->mtime = $System::currentTimeMillis();
	}
	if ($nc(e)->method$ == -1) {
		e->method$ = this$0->defaultCompressionMethod;
	}
	$nc(e)->flag = 8;
	if ($nc(this$0->zc)->isUTF8()) {
		e->flag |= 2048;
	}
}

void ZipFileSystem$EntryOutputChannel::close() {
	$useLocalCurrentObjectStackCache();
	$ByteArrayChannel::beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (!isOpen()) {
				return$1 = true;
				goto $finally;
			}
			{
				$var($OutputStream, os, this->this$0->getOutputStream(this->e));
				{
					$var($Throwable, var$2, nullptr);
					try {
						try {
							$nc(os)->write($(toByteArray()));
						} catch ($Throwable& t$) {
							if (os != nullptr) {
								try {
									os->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$3) {
						$assign(var$2, var$3);
					} /*finally*/ {
						if (os != nullptr) {
							os->close();
						}
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				}
			}
			$ByteArrayChannel::close();
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$ByteArrayChannel::endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

ZipFileSystem$EntryOutputChannel::ZipFileSystem$EntryOutputChannel() {
}

$Class* ZipFileSystem$EntryOutputChannel::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$EntryOutputChannel, name, initialize, &_ZipFileSystem$EntryOutputChannel_ClassInfo_, allocate$ZipFileSystem$EntryOutputChannel);
	return class$;
}

$Class* ZipFileSystem$EntryOutputChannel::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk