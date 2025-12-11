#include <jdk/nio/zipfs/ZipFileSystem$END.h>

#include <java/io/OutputStream.h>
#include <jdk/nio/zipfs/ZipConstants.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jdk/nio/zipfs/ZipUtils.h>
#include <jcpp.h>

#undef ENDSIG

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZipConstants = ::jdk::nio::zipfs::ZipConstants;
using $ZipUtils = ::jdk::nio::zipfs::ZipUtils;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$END_FieldInfo_[] = {
	{"centot", "I", nullptr, 0, $field(ZipFileSystem$END, centot)},
	{"cenlen", "J", nullptr, 0, $field(ZipFileSystem$END, cenlen)},
	{"cenoff", "J", nullptr, 0, $field(ZipFileSystem$END, cenoff)},
	{"endpos", "J", nullptr, 0, $field(ZipFileSystem$END, endpos)},
	{}
};

$MethodInfo _ZipFileSystem$END_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ZipFileSystem$END::*)()>(&ZipFileSystem$END::init$))},
	{"write", "(Ljava/io/OutputStream;JZ)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFileSystem$END_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$END", "jdk.nio.zipfs.ZipFileSystem", "END", $STATIC},
	{}
};

$ClassInfo _ZipFileSystem$END_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$END",
	"java.lang.Object",
	nullptr,
	_ZipFileSystem$END_FieldInfo_,
	_ZipFileSystem$END_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$END_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$END($Class* clazz) {
	return $of($alloc(ZipFileSystem$END));
}

void ZipFileSystem$END::init$() {
}

void ZipFileSystem$END::write($OutputStream* os, int64_t offset, bool forceEnd64) {
	bool hasZip64 = forceEnd64;
	int64_t xlen = this->cenlen;
	int64_t xoff = this->cenoff;
	if (xlen >= (int64_t)0x00000000FFFFFFFF) {
		xlen = 0x00000000FFFFFFFF;
		hasZip64 = true;
	}
	if (xoff >= (int64_t)0x00000000FFFFFFFF) {
		xoff = 0x00000000FFFFFFFF;
		hasZip64 = true;
	}
	int32_t count = this->centot;
	if (count >= 0x0000FFFF) {
		count = 0x0000FFFF;
		hasZip64 = true;
	}
	if (hasZip64) {
		$ZipUtils::writeInt(os, 101075792);
		$ZipUtils::writeLong(os, 56 - 12);
		$ZipUtils::writeShort(os, 45);
		$ZipUtils::writeShort(os, 45);
		$ZipUtils::writeInt(os, 0);
		$ZipUtils::writeInt(os, 0);
		$ZipUtils::writeLong(os, this->centot);
		$ZipUtils::writeLong(os, this->centot);
		$ZipUtils::writeLong(os, this->cenlen);
		$ZipUtils::writeLong(os, this->cenoff);
		$ZipUtils::writeInt(os, 117853008);
		$ZipUtils::writeInt(os, 0);
		$ZipUtils::writeLong(os, offset);
		$ZipUtils::writeInt(os, 1);
	}
	$init($ZipConstants);
	$ZipUtils::writeInt(os, $ZipConstants::ENDSIG);
	$ZipUtils::writeShort(os, 0);
	$ZipUtils::writeShort(os, 0);
	$ZipUtils::writeShort(os, count);
	$ZipUtils::writeShort(os, count);
	$ZipUtils::writeInt(os, xlen);
	$ZipUtils::writeInt(os, xoff);
	$ZipUtils::writeShort(os, 0);
}

ZipFileSystem$END::ZipFileSystem$END() {
}

$Class* ZipFileSystem$END::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$END, name, initialize, &_ZipFileSystem$END_ClassInfo_, allocate$ZipFileSystem$END);
	return class$;
}

$Class* ZipFileSystem$END::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk