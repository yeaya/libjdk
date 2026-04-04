#include <HangDuringStaticInitialization.h>
#include <HangDuringStaticInitialization$1.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/FileVisitor.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $HangDuringStaticInitialization$1 = ::HangDuringStaticInitialization$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

void HangDuringStaticInitialization::init$() {
}

void HangDuringStaticInitialization::main($StringArray* args) {
	$useLocalObjectStack();
	$var($FileSystem, fs, $FileSystems::getFileSystem($($URI::create("jrt:/"_s))));
	test(fs, "/modules/java.desktop"_s);
	test(fs, "/modules/java.datatransfer"_s);
}

void HangDuringStaticInitialization::test($FileSystem* fs, $String* s) {
	$useLocalObjectStack();
	$var($Path, var$0, $nc(fs)->getPath(s, $$new($StringArray, 0)));
	$Files::walkFileTree(var$0, $$new($HangDuringStaticInitialization$1));
}

HangDuringStaticInitialization::HangDuringStaticInitialization() {
}

$Class* HangDuringStaticInitialization::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HangDuringStaticInitialization, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HangDuringStaticInitialization, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/nio/file/FileSystem;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(HangDuringStaticInitialization, test, void, $FileSystem*, $String*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HangDuringStaticInitialization$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"HangDuringStaticInitialization",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HangDuringStaticInitialization$1"
	};
	$loadClass(HangDuringStaticInitialization, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HangDuringStaticInitialization);
	});
	return class$;
}

$Class* HangDuringStaticInitialization::class$ = nullptr;