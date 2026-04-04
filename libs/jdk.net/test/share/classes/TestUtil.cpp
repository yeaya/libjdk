#include <TestUtil.h>
#include <java/io/BufferedWriter.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef CWD

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $Arrays = ::java::util::Arrays;

$Path* TestUtil::CWD = nullptr;
$String* TestUtil::fileContent = nullptr;

void TestUtil::init$() {
}

$Path* TestUtil::getAFile(int32_t size) {
	$init(TestUtil);
	$useLocalObjectStack();
	$var($Path, p, tempFile());
	$var($BufferedWriter, writer, $Files::newBufferedWriter(p, $$new($OpenOptionArray, 0)));
	int32_t len = TestUtil::fileContent->length();
	int32_t iterations = $div(size, len);
	int32_t remainder = size - (iterations * len);
	for (int32_t i = 0; i < iterations; ++i) {
		$nc(writer)->write(TestUtil::fileContent, 0, len);
	}
	$nc(writer)->write(TestUtil::fileContent, 0, remainder);
	writer->close();
	return p;
}

$Path* TestUtil::tempFile() {
	$init(TestUtil);
	$useLocalObjectStack();
	try {
		$var($Path, p, $Files::createTempFile(TestUtil::CWD, "TestUtil_tmp_"_s, "_HTTPClient"_s, $$new($FileAttributeArray, 0)));
		return p;
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

$Void* TestUtil::compareFiles($Path* path1, $Path* path2) {
	$init(TestUtil);
	$useLocalObjectStack();
	try {
		int64_t size1 = $Files::size(path1);
		int64_t size2 = $Files::size(path2);
		if (size1 != size2) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("File sizes do not match "_s);
			var$0->append($($Long::toString(size1)));
			var$0->append("/"_s);
			var$0->append($($Long::toString(size2)));
			$var($String, msg, $str(var$0));
			$throwNew($RuntimeException, msg);
		}
		compareContents(path1, path2);
		return nullptr;
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

void TestUtil::compareContents($Path* path1, $Path* path2) {
	$init(TestUtil);
	$useLocalObjectStack();
	try {
		$var($bytes, b1, $Files::readAllBytes(path1));
		$var($bytes, b2, $Files::readAllBytes(path2));
		if (!$Arrays::equals(b1, b2)) {
			$throwNew($RuntimeException, "Files do not match"_s);
		}
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
}

void TestUtil::clinit$($Class* clazz) {
	$assignStatic(TestUtil::fileContent, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"_s);
	$assignStatic(TestUtil::CWD, $Paths::get("."_s, $$new($StringArray, 0)));
}

TestUtil::TestUtil() {
}

$Class* TestUtil::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CWD", "Ljava/nio/file/Path;", nullptr, $STATIC | $FINAL, $staticField(TestUtil, CWD)},
		{"fileContent", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestUtil, fileContent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestUtil, init$, void)},
		{"compareContents", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)V", nullptr, $STATIC, $staticMethod(TestUtil, compareContents, void, $Path*, $Path*)},
		{"compareFiles", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljava/lang/Void;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUtil, compareFiles, $Void*, $Path*, $Path*)},
		{"getAFile", "(I)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUtil, getAFile, $Path*, int32_t), "java.io.IOException"},
		{"tempFile", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUtil, tempFile, $Path*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestUtil",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestUtil, name, initialize, &classInfo$$, TestUtil::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestUtil);
	});
	return class$;
}

$Class* TestUtil::class$ = nullptr;