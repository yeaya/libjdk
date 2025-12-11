#include <jdk/nio/zipfs/ZipInfo.h>

#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/zip/ZipException.h>
#include <jdk/nio/zipfs/ZipConstants.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jdk/nio/zipfs/ZipFileSystemProvider.h>
#include <jdk/nio/zipfs/ZipUtils.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Paths = ::java::nio::file::Paths;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $ZipException = ::java::util::zip::ZipException;
using $ZipConstants = ::jdk::nio::zipfs::ZipConstants;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystemProvider = ::jdk::nio::zipfs::ZipFileSystemProvider;
using $ZipUtils = ::jdk::nio::zipfs::ZipUtils;

namespace jdk {
	namespace nio {
		namespace zipfs {

$MethodInfo _ZipInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ZipInfo::*)()>(&ZipInfo::init$))},
	{"locoff", "([BI)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($bytes*,int32_t)>(&ZipInfo::locoff))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ZipInfo::main)), "java.lang.Throwable"},
	{"print", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&ZipInfo::print))},
	{"printCEN", "([BI)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t)>(&ZipInfo::printCEN))},
	{"printExtra", "([BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&ZipInfo::printExtra))},
	{"printLOC", "([B)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*)>(&ZipInfo::printLOC))},
	{}
};

$ClassInfo _ZipInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.nio.zipfs.ZipInfo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ZipInfo_MethodInfo_
};

$Object* allocate$ZipInfo($Class* clazz) {
	return $of($alloc(ZipInfo));
}

void ZipInfo::init$() {
}

void ZipInfo::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length < 1) {
		print("Usage: java ZipInfo zfname"_s, $$new($ObjectArray, 0));
	} else {
		$var($Map, env, $Collections::emptyMap());
		$var($ZipFileSystem, zfs, ($cast($ZipFileSystem, $$new($ZipFileSystemProvider)->newFileSystem($($Paths::get(args->get(0), $$new($StringArray, 0))), env))));
		$var($bytes, cen, $nc(zfs)->cen);
		if (cen == nullptr) {
			print("zip file is empty%n"_s, $$new($ObjectArray, 0));
			return;
		}
		int32_t pos = 0;
		$var($bytes, buf, $new($bytes, 1024));
		int32_t no = 1;
		while (pos + 46 < $nc(cen)->length) {
			print("----------------#%d--------------------%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(no++)))}));
			printCEN(cen, pos);
			int32_t var$0 = 30 + $ZipConstants::CENNAM(cen, pos);
			int64_t len = var$0 + $ZipConstants::CENEXT(cen, pos) + 46;
			if (zfs->readFullyAt(buf, 0, len, locoff(cen, pos)) != len) {
				$throwNew($ZipException, "read loc header failed"_s);
			}
			int32_t var$1 = $ZipConstants::LOCEXT(buf);
			if (var$1 > $ZipConstants::CENEXT(cen, pos) + 46) {
				int32_t var$2 = 30 + $ZipConstants::LOCNAM(buf);
				len = var$2 + $ZipConstants::LOCEXT(buf);
				if (zfs->readFullyAt(buf, 0, len, locoff(cen, pos)) != len) {
					$throwNew($ZipException, "read loc header failed"_s);
				}
			}
			printLOC(buf);
			int32_t var$4 = 46 + $ZipConstants::CENNAM(cen, pos);
			int32_t var$3 = var$4 + $ZipConstants::CENEXT(cen, pos);
			pos += var$3 + $ZipConstants::CENCOM(cen, pos);
		}
		zfs->close();
	}
}

void ZipInfo::print($String* fmt, $ObjectArray* objs) {
	$nc($System::out)->printf(fmt, objs);
}

void ZipInfo::printLOC($bytes* loc) {
	$useLocalCurrentObjectStackCache();
	print("%n"_s, $$new($ObjectArray, 0));
	print("[Local File Header]%n"_s, $$new($ObjectArray, 0));
	print("    Signature   :   %#010x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::LOCSIG(loc))))}));
	if ($ZipConstants::LOCSIG(loc) != $ZipConstants::LOCSIG$) {
		print("    Wrong signature!"_s, $$new($ObjectArray, 0));
		return;
	}
	print("    Version     :       %#6x    [%d.%d]%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($ZipConstants::LOCVER(loc)))),
		$($of($Integer::valueOf($ZipConstants::LOCVER(loc) / 10))),
		$($of($Integer::valueOf($ZipConstants::LOCVER(loc) % 10)))
	}));
	print("    Flag        :       %#6x%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($ZipConstants::LOCFLG(loc))))}));
	print("    Method      :       %#6x%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($ZipConstants::LOCHOW(loc))))}));
	print("    LastMTime   :   %#10x    [%tc]%n"_s, $$new($ObjectArray, {
		$($of($Long::valueOf($ZipConstants::LOCTIM(loc)))),
		$($of($Long::valueOf($ZipUtils::dosToJavaTime($ZipConstants::LOCTIM(loc)))))
	}));
	print("    CRC         :   %#10x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::LOCCRC(loc))))}));
	print("    CSize       :   %#10x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::LOCSIZ(loc))))}));
	print("    Size        :   %#10x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::LOCLEN(loc))))}));
	print("    NameLength  :       %#6x    [%s]%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($ZipConstants::LOCNAM(loc)))),
		$of($$new($String, loc, 30, $ZipConstants::LOCNAM(loc)))
	}));
	print("    ExtraLength :       %#6x%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($ZipConstants::LOCEXT(loc))))}));
	if ($ZipConstants::LOCEXT(loc) != 0) {
		$var($bytes, var$0, loc);
		int32_t var$1 = 30 + $ZipConstants::LOCNAM(loc);
		printExtra(var$0, var$1, $ZipConstants::LOCEXT(loc));
	}
}

void ZipInfo::printCEN($bytes* cen, int32_t off) {
	$useLocalCurrentObjectStackCache();
	print("[Central Directory Header]%n"_s, $$new($ObjectArray, 0));
	print("    Signature   :   %#010x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::CENSIG(cen, off))))}));
	if ($ZipConstants::CENSIG(cen, off) != $ZipConstants::CENSIG$) {
		print("    Wrong signature!"_s, $$new($ObjectArray, 0));
		return;
	}
	print("    VerMadeby   :       %#6x    [%d, %d.%d]%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($ZipConstants::CENVEM(cen, off)))),
		$($of($Integer::valueOf(($ZipConstants::CENVEM(cen, off) >> 8)))),
		$($of($Integer::valueOf(((int32_t)($ZipConstants::CENVEM(cen, off) & (uint32_t)255)) / 10))),
		$($of($Integer::valueOf(((int32_t)($ZipConstants::CENVEM(cen, off) & (uint32_t)255)) % 10)))
	}));
	print("    VerExtract  :       %#6x    [%d.%d]%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($ZipConstants::CENVER(cen, off)))),
		$($of($Integer::valueOf($ZipConstants::CENVER(cen, off) / 10))),
		$($of($Integer::valueOf($ZipConstants::CENVER(cen, off) % 10)))
	}));
	print("    Flag        :       %#6x%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($ZipConstants::CENFLG(cen, off))))}));
	print("    Method      :       %#6x%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($ZipConstants::CENHOW(cen, off))))}));
	print("    LastMTime   :   %#10x    [%tc]%n"_s, $$new($ObjectArray, {
		$($of($Long::valueOf($ZipConstants::CENTIM(cen, off)))),
		$($of($Long::valueOf($ZipUtils::dosToJavaTime($ZipConstants::CENTIM(cen, off)))))
	}));
	print("    CRC         :   %#10x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::CENCRC(cen, off))))}));
	print("    CSize       :   %#10x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::CENSIZ(cen, off))))}));
	print("    Size        :   %#10x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::CENLEN(cen, off))))}));
	print("    NameLen     :       %#6x    [%s]%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($ZipConstants::CENNAM(cen, off)))),
		$of($$new($String, cen, off + 46, $ZipConstants::CENNAM(cen, off)))
	}));
	print("    ExtraLen    :       %#6x%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($ZipConstants::CENEXT(cen, off))))}));
	if ($ZipConstants::CENEXT(cen, off) != 0) {
		$var($bytes, var$0, cen);
		int32_t var$1 = off + 46 + $ZipConstants::CENNAM(cen, off);
		printExtra(var$0, var$1, $ZipConstants::CENEXT(cen, off));
	}
	print("    CommentLen  :       %#6x%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($ZipConstants::CENCOM(cen, off))))}));
	print("    DiskStart   :       %#6x%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($ZipConstants::CENDSK(cen, off))))}));
	print("    Attrs       :       %#6x%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf($ZipConstants::CENATT(cen, off))))}));
	print("    AttrsEx     :   %#10x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::CENATX(cen, off))))}));
	print("    LocOff      :   %#10x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::CENOFF(cen, off))))}));
}

int64_t ZipInfo::locoff($bytes* cen, int32_t pos) {
	int64_t locoff = $ZipConstants::CENOFF(cen, pos);
	if (locoff == (int64_t)0x00000000FFFFFFFF) {
		int32_t off = pos + 46 + $ZipConstants::CENNAM(cen, pos);
		int32_t end = off + $ZipConstants::CENEXT(cen, pos);
		while (off + 4 < end) {
			int32_t tag = $ZipConstants::SH(cen, off);
			int32_t sz = $ZipConstants::SH(cen, off + 2);
			if (tag != 1) {
				off += 4 + sz;
				continue;
			}
			off += 4;
			if ($ZipConstants::CENLEN(cen, pos) == (int64_t)0x00000000FFFFFFFF) {
				off += 8;
			}
			if ($ZipConstants::CENSIZ(cen, pos) == (int64_t)0x00000000FFFFFFFF) {
				off += 8;
			}
			return $ZipConstants::LL(cen, off);
		}
	}
	return locoff;
}

void ZipInfo::printExtra($bytes* extra, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	int32_t end = off + len;
	while (off + 4 <= end) {
		int32_t tag = $ZipConstants::SH(extra, off);
		int32_t sz = $ZipConstants::SH(extra, off + 2);
		print("        [tag=0x%04x, sz=%d, data= "_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(tag))),
			$($of($Integer::valueOf(sz)))
		}));
		if (off + sz > end) {
			print("    Error: Invalid extra data, beyond extra length"_s, $$new($ObjectArray, 0));
			break;
		}
		off += 4;
		for (int32_t i = 0; i < sz; ++i) {
			print("%02x "_s, $$new($ObjectArray, {$($of($Byte::valueOf($nc(extra)->get(off + i))))}));
		}
		print("]%n"_s, $$new($ObjectArray, 0));
		{
			int32_t pos = 0;
			switch (tag) {
			case 1:
				{
					print("         ->ZIP64: "_s, $$new($ObjectArray, 0));
					pos = off;
					while (pos + 8 <= off + sz) {
						print(" *0x%x "_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipConstants::LL(extra, pos))))}));
						pos += 8;
					}
					print("%n"_s, $$new($ObjectArray, 0));
					break;
				}
			case 10:
				{
					print("         ->PKWare NTFS%n"_s, $$new($ObjectArray, 0));
					bool var$0 = $ZipConstants::SH(extra, off + 4) != 1;
					if (var$0 || $ZipConstants::SH(extra, off + 6) != 24) {
						print("    Error: Invalid NTFS sub-tag or subsz"_s, $$new($ObjectArray, 0));
					}
					print("            mtime:%tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipUtils::winToJavaTime($ZipConstants::LL(extra, off + 8)))))}));
					print("            atime:%tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipUtils::winToJavaTime($ZipConstants::LL(extra, off + 16)))))}));
					print("            ctime:%tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipUtils::winToJavaTime($ZipConstants::LL(extra, off + 24)))))}));
					break;
				}
			case 21589:
				{
					print("         ->Info-ZIP Extended Timestamp: flag=%x%n"_s, $$new($ObjectArray, {$($of($Byte::valueOf($nc(extra)->get(off))))}));
					pos = off + 1;
					while (pos + 4 <= off + sz) {
						print("            *%tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($ZipUtils::unixToJavaTime($ZipConstants::LG(extra, pos)))))}));
						pos += 4;
					}
					break;
				}
			default:
				{
					print("         ->[tag=%x, size=%d]%n"_s, $$new($ObjectArray, {
						$($of($Integer::valueOf(tag))),
						$($of($Integer::valueOf(sz)))
					}));
				}
			}
		}
		off += sz;
	}
}

ZipInfo::ZipInfo() {
}

$Class* ZipInfo::load$($String* name, bool initialize) {
	$loadClass(ZipInfo, name, initialize, &_ZipInfo_ClassInfo_, allocate$ZipInfo);
	return class$;
}

$Class* ZipInfo::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk