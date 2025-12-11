#include <jdk/nio/zipfs/ZipUtils.h>

#include <java/io/OutputStream.h>
#include <java/nio/file/attribute/PosixFilePermission.h>
#include <java/time/DateTimeException.h>
#include <java/time/Instant.h>
#include <java/time/LocalDateTime.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/time/zone/ZoneRules.h>
#include <java/util/Arrays.h>
#include <java/util/Date.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/regex/PatternSyntaxException.h>
#include <jdk/nio/zipfs/ZipUtils$1.h>
#include <jcpp.h>

#undef EOL
#undef MICROSECONDS
#undef MILLISECONDS
#undef POSIX_GROUP_EXECUTE
#undef POSIX_GROUP_READ
#undef POSIX_GROUP_WRITE
#undef POSIX_OTHER_EXECUTE
#undef POSIX_OTHER_READ
#undef POSIX_OTHER_WRITE
#undef POSIX_USER_EXECUTE
#undef POSIX_USER_READ
#undef POSIX_USER_WRITE
#undef SECONDS
#undef WINDOWS_EPOCH_IN_MICROSECONDS

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PosixFilePermission = ::java::nio::file::attribute::PosixFilePermission;
using $DateTimeException = ::java::time::DateTimeException;
using $Instant = ::java::time::Instant;
using $LocalDateTime = ::java::time::LocalDateTime;
using $ZoneId = ::java::time::ZoneId;
using $ZoneRules = ::java::time::zone::ZoneRules;
using $Arrays = ::java::util::Arrays;
using $Date = ::java::util::Date;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $PatternSyntaxException = ::java::util::regex::PatternSyntaxException;
using $ZipUtils$1 = ::jdk::nio::zipfs::ZipUtils$1;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipUtils_FieldInfo_[] = {
	{"POSIX_USER_READ", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, POSIX_USER_READ)},
	{"POSIX_USER_WRITE", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, POSIX_USER_WRITE)},
	{"POSIX_USER_EXECUTE", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, POSIX_USER_EXECUTE)},
	{"POSIX_GROUP_READ", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, POSIX_GROUP_READ)},
	{"POSIX_GROUP_WRITE", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, POSIX_GROUP_WRITE)},
	{"POSIX_GROUP_EXECUTE", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, POSIX_GROUP_EXECUTE)},
	{"POSIX_OTHER_READ", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, POSIX_OTHER_READ)},
	{"POSIX_OTHER_WRITE", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, POSIX_OTHER_WRITE)},
	{"POSIX_OTHER_EXECUTE", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, POSIX_OTHER_EXECUTE)},
	{"WINDOWS_EPOCH_IN_MICROSECONDS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZipUtils, WINDOWS_EPOCH_IN_MICROSECONDS)},
	{"regexMetaChars", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipUtils, regexMetaChars)},
	{"globMetaChars", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipUtils, globMetaChars)},
	{"EOL", "C", nullptr, $PRIVATE | $STATIC, $staticField(ZipUtils, EOL)},
	{}
};

$MethodInfo _ZipUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ZipUtils::*)()>(&ZipUtils::init$))},
	{"dosToJavaTime", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&ZipUtils::dosToJavaTime))},
	{"isGlobMeta", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&ZipUtils::isGlobMeta))},
	{"isRegexMeta", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&ZipUtils::isRegexMeta))},
	{"javaToDosTime", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&ZipUtils::javaToDosTime))},
	{"javaToUnixTime", "(J)J", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t)>(&ZipUtils::javaToUnixTime))},
	{"javaToWinTime", "(J)J", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t)>(&ZipUtils::javaToWinTime))},
	{"next", "(Ljava/lang/String;I)C", nullptr, $PRIVATE | $STATIC, $method(static_cast<char16_t(*)($String*,int32_t)>(&ZipUtils::next))},
	{"overflowDosToJavaTime", "(IIIIII)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ZipUtils::overflowDosToJavaTime))},
	{"permToFlag", "(Ljava/nio/file/attribute/PosixFilePermission;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($PosixFilePermission*)>(&ZipUtils::permToFlag))},
	{"permsToFlags", "(Ljava/util/Set;)I", "(Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;)I", $STATIC, $method(static_cast<int32_t(*)($Set*)>(&ZipUtils::permsToFlags))},
	{"toDirectoryPath", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&ZipUtils::toDirectoryPath))},
	{"toRegexPattern", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ZipUtils::toRegexPattern))},
	{"unixToJavaTime", "(J)J", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t)>(&ZipUtils::unixToJavaTime))},
	{"winToJavaTime", "(J)J", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t)>(&ZipUtils::winToJavaTime))},
	{"writeBytes", "(Ljava/io/OutputStream;[B)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($OutputStream*,$bytes*)>(&ZipUtils::writeBytes)), "java.io.IOException"},
	{"writeBytes", "(Ljava/io/OutputStream;[BII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($OutputStream*,$bytes*,int32_t,int32_t)>(&ZipUtils::writeBytes)), "java.io.IOException"},
	{"writeInt", "(Ljava/io/OutputStream;J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($OutputStream*,int64_t)>(&ZipUtils::writeInt)), "java.io.IOException"},
	{"writeLong", "(Ljava/io/OutputStream;J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($OutputStream*,int64_t)>(&ZipUtils::writeLong)), "java.io.IOException"},
	{"writeShort", "(Ljava/io/OutputStream;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($OutputStream*,int32_t)>(&ZipUtils::writeShort)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipUtils_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipUtils$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ZipUtils_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipUtils",
	"java.lang.Object",
	nullptr,
	_ZipUtils_FieldInfo_,
	_ZipUtils_MethodInfo_,
	nullptr,
	nullptr,
	_ZipUtils_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipUtils$1"
};

$Object* allocate$ZipUtils($Class* clazz) {
	return $of($alloc(ZipUtils));
}

$String* ZipUtils::regexMetaChars = nullptr;
$String* ZipUtils::globMetaChars = nullptr;
char16_t ZipUtils::EOL = 0;

void ZipUtils::init$() {
}

int32_t ZipUtils::permToFlag($PosixFilePermission* perm) {
	$init(ZipUtils);
	$init($ZipUtils$1);
	switch ($nc($ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->get($nc((perm))->ordinal())) {
	case 1:
		{
			return ZipUtils::POSIX_USER_READ;
		}
	case 2:
		{
			return ZipUtils::POSIX_USER_WRITE;
		}
	case 3:
		{
			return ZipUtils::POSIX_USER_EXECUTE;
		}
	case 4:
		{
			return ZipUtils::POSIX_GROUP_READ;
		}
	case 5:
		{
			return ZipUtils::POSIX_GROUP_WRITE;
		}
	case 6:
		{
			return ZipUtils::POSIX_GROUP_EXECUTE;
		}
	case 7:
		{
			return ZipUtils::POSIX_OTHER_READ;
		}
	case 8:
		{
			return ZipUtils::POSIX_OTHER_WRITE;
		}
	case 9:
		{
			return ZipUtils::POSIX_OTHER_EXECUTE;
		}
	default:
		{
			return 0;
		}
	}
}

int32_t ZipUtils::permsToFlags($Set* perms) {
	$init(ZipUtils);
	if (perms == nullptr) {
		return -1;
	}
	int32_t flags = 0;
	{
		$var($Iterator, i$, $nc(perms)->iterator());
		for (; $nc(i$)->hasNext();) {
			$PosixFilePermission* perm = $cast($PosixFilePermission, i$->next());
			{
				flags |= permToFlag(perm);
			}
		}
	}
	return flags;
}

void ZipUtils::writeShort($OutputStream* os, int32_t v) {
	$init(ZipUtils);
	$nc(os)->write((int32_t)(v & (uint32_t)255));
	os->write((int32_t)(((int32_t)((uint32_t)v >> 8)) & (uint32_t)255));
}

void ZipUtils::writeInt($OutputStream* os, int64_t v) {
	$init(ZipUtils);
	$nc(os)->write((int32_t)((int64_t)(v & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 8)) & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 16)) & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 24)) & (uint64_t)(int64_t)255)));
}

void ZipUtils::writeLong($OutputStream* os, int64_t v) {
	$init(ZipUtils);
	$nc(os)->write((int32_t)((int64_t)(v & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 8)) & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 16)) & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 24)) & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 32)) & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 40)) & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 48)) & (uint64_t)(int64_t)255)));
	os->write((int32_t)((int64_t)(((int64_t)((uint64_t)v >> 56)) & (uint64_t)(int64_t)255)));
}

void ZipUtils::writeBytes($OutputStream* os, $bytes* b) {
	$init(ZipUtils);
	$nc(os)->write(b, 0, $nc(b)->length);
}

void ZipUtils::writeBytes($OutputStream* os, $bytes* b, int32_t off, int32_t len) {
	$init(ZipUtils);
	$nc(os)->write(b, off, len);
}

$bytes* ZipUtils::toDirectoryPath($bytes* dir$renamed) {
	$init(ZipUtils);
	$var($bytes, dir, dir$renamed);
	if ($nc(dir)->length != 0 && dir->get(dir->length - 1) != u'/') {
		$assign(dir, $Arrays::copyOf(dir, dir->length + 1));
		dir->set(dir->length - 1, (int8_t)u'/');
	}
	return dir;
}

int64_t ZipUtils::dosToJavaTime(int64_t dtime) {
	$init(ZipUtils);
	$useLocalCurrentObjectStackCache();
	int32_t year = (int32_t)(((int64_t)((dtime >> 25) & (uint64_t)(int64_t)127)) + 1980);
	int32_t month = (int32_t)((int64_t)((dtime >> 21) & (uint64_t)(int64_t)15));
	int32_t day = (int32_t)((int64_t)((dtime >> 16) & (uint64_t)(int64_t)31));
	int32_t hour = (int32_t)((int64_t)((dtime >> 11) & (uint64_t)(int64_t)31));
	int32_t minute = (int32_t)((int64_t)((dtime >> 5) & (uint64_t)(int64_t)63));
	int32_t second = (int32_t)((int64_t)((dtime << 1) & (uint64_t)(int64_t)62));
	if (month > 0 && month < 13 && day > 0 && hour < 24 && minute < 60 && second < 60) {
		try {
			$var($LocalDateTime, ldt, $LocalDateTime::of(year, month, day, hour, minute, second));
			$init($TimeUnit);
			return $TimeUnit::MILLISECONDS->convert($nc(ldt)->toEpochSecond($($nc($($nc($($ZoneId::systemDefault()))->getRules()))->getOffset(ldt))), $TimeUnit::SECONDS);
		} catch ($DateTimeException& dte) {
		}
	}
	return overflowDosToJavaTime(year, month, day, hour, minute, second);
}

int64_t ZipUtils::overflowDosToJavaTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second) {
	$init(ZipUtils);
	return $$new($Date, year - 1900, month - 1, day, hour, minute, second)->getTime();
}

int64_t ZipUtils::javaToDosTime(int64_t time) {
	$init(ZipUtils);
	$useLocalCurrentObjectStackCache();
	$var($Instant, instant, $Instant::ofEpochMilli(time));
	$var($LocalDateTime, ldt, $LocalDateTime::ofInstant(instant, $($ZoneId::systemDefault())));
	int32_t year = $nc(ldt)->getYear() - 1980;
	if (year < 0) {
		return (1 << 21) | (1 << 16);
	}
	int32_t var$3 = (year << 25) | (ldt->getMonthValue() << 21);
	int32_t var$2 = var$3 | (ldt->getDayOfMonth() << 16);
	int32_t var$1 = var$2 | (ldt->getHour() << 11);
	int32_t var$0 = var$1 | (ldt->getMinute() << 5);
	return (int64_t)((var$0 | (ldt->getSecond() >> 1)) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

int64_t ZipUtils::winToJavaTime(int64_t wtime) {
	$init(ZipUtils);
	$init($TimeUnit);
	return $TimeUnit::MILLISECONDS->convert(wtime / 10 + ZipUtils::WINDOWS_EPOCH_IN_MICROSECONDS, $TimeUnit::MICROSECONDS);
}

int64_t ZipUtils::javaToWinTime(int64_t time) {
	$init(ZipUtils);
	$init($TimeUnit);
	return ($TimeUnit::MICROSECONDS->convert(time, $TimeUnit::MILLISECONDS) - ZipUtils::WINDOWS_EPOCH_IN_MICROSECONDS) * 10;
}

int64_t ZipUtils::unixToJavaTime(int64_t utime) {
	$init(ZipUtils);
	$init($TimeUnit);
	return $TimeUnit::MILLISECONDS->convert(utime, $TimeUnit::SECONDS);
}

int64_t ZipUtils::javaToUnixTime(int64_t time) {
	$init(ZipUtils);
	$init($TimeUnit);
	return $TimeUnit::SECONDS->convert(time, $TimeUnit::MILLISECONDS);
}

bool ZipUtils::isRegexMeta(char16_t c) {
	$init(ZipUtils);
	return $nc(ZipUtils::regexMetaChars)->indexOf((int32_t)c) != -1;
}

bool ZipUtils::isGlobMeta(char16_t c) {
	$init(ZipUtils);
	return $nc(ZipUtils::globMetaChars)->indexOf((int32_t)c) != -1;
}

char16_t ZipUtils::next($String* glob, int32_t i) {
	$init(ZipUtils);
	if (i < $nc(glob)->length()) {
		return glob->charAt(i);
	}
	return ZipUtils::EOL;
}

$String* ZipUtils::toRegexPattern($String* globPattern) {
	$init(ZipUtils);
	bool inGroup = false;
	$var($StringBuilder, regex, $new($StringBuilder, "^"_s));
	int32_t i = 0;
	while (i < $nc(globPattern)->length()) {
		char16_t c = globPattern->charAt(i++);
		{
			char16_t next = 0;
			bool hasRangeStart = false;
			char16_t last = 0;
			switch (c) {
			case u'\\':
				{
					if (i == globPattern->length()) {
						$throwNew($PatternSyntaxException, "No character to escape"_s, globPattern, i - 1);
					}
					next = globPattern->charAt(i++);
					bool var$0 = isGlobMeta(next);
					if (var$0 || isRegexMeta(next)) {
						regex->append(u'\\');
					}
					regex->append(next);
					break;
				}
			case u'/':
				{
					regex->append(c);
					break;
				}
			case u'[':
				{
					regex->append("[[^/]&&["_s);
					if (ZipUtils::next(globPattern, i) == u'^') {
						regex->append("\\^"_s);
						++i;
					} else {
						if (ZipUtils::next(globPattern, i) == u'!') {
							regex->append(u'^');
							++i;
						}
						if (ZipUtils::next(globPattern, i) == u'-') {
							regex->append(u'-');
							++i;
						}
					}
					hasRangeStart = false;
					last = (char16_t)0;
					while (i < globPattern->length()) {
						c = globPattern->charAt(i++);
						if (c == u']') {
							break;
						}
						if (c == u'/') {
							$throwNew($PatternSyntaxException, "Explicit \'name separator\' in class"_s, globPattern, i - 1);
						}
						if (c == u'\\' || c == u'[' || c == u'&' && ZipUtils::next(globPattern, i) == u'&') {
							regex->append(u'\\');
						}
						regex->append(c);
						if (c == u'-') {
							if (!hasRangeStart) {
								$throwNew($PatternSyntaxException, "Invalid range"_s, globPattern, i - 1);
							}
							if ((c = ZipUtils::next(globPattern, i++)) == ZipUtils::EOL || c == u']') {
								break;
							}
							if (c < last) {
								$throwNew($PatternSyntaxException, "Invalid range"_s, globPattern, i - 3);
							}
							regex->append(c);
							hasRangeStart = false;
						} else {
							hasRangeStart = true;
							last = c;
						}
					}
					if (c != u']') {
						$throwNew($PatternSyntaxException, "Missing \']"_s, globPattern, i - 1);
					}
					regex->append("]]"_s);
					break;
				}
			case u'{':
				{
					if (inGroup) {
						$throwNew($PatternSyntaxException, "Cannot nest groups"_s, globPattern, i - 1);
					}
					regex->append("(?:(?:"_s);
					inGroup = true;
					break;
				}
			case u'}':
				{
					if (inGroup) {
						regex->append("))"_s);
						inGroup = false;
					} else {
						regex->append(u'}');
					}
					break;
				}
			case u',':
				{
					if (inGroup) {
						regex->append(")|(?:"_s);
					} else {
						regex->append(u',');
					}
					break;
				}
			case u'*':
				{
					if (ZipUtils::next(globPattern, i) == u'*') {
						regex->append(".*"_s);
						++i;
					} else {
						regex->append("[^/]*"_s);
					}
					break;
				}
			case u'?':
				{
					regex->append("[^/]"_s);
					break;
				}
			default:
				{
					if (isRegexMeta(c)) {
						regex->append(u'\\');
					}
					regex->append(c);
				}
			}
		}
	}
	if (inGroup) {
		$throwNew($PatternSyntaxException, "Missing \'}"_s, globPattern, i - 1);
	}
	return regex->append(u'$')->toString();
}

void clinit$ZipUtils($Class* class$) {
	$assignStatic(ZipUtils::regexMetaChars, ".^$+{[]|()"_s);
	$assignStatic(ZipUtils::globMetaChars, "\\*?[{"_s);
	ZipUtils::EOL = (char16_t)0;
}

ZipUtils::ZipUtils() {
}

$Class* ZipUtils::load$($String* name, bool initialize) {
	$loadClass(ZipUtils, name, initialize, &_ZipUtils_ClassInfo_, clinit$ZipUtils, allocate$ZipUtils);
	return class$;
}

$Class* ZipUtils::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk