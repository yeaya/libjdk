#include <SwingContainerIsForContainerOnly.h>
#include <SwingContainerIsForContainerOnly$1.h>
#include <java/lang/Iterable.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/FileVisitor.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $SwingContainerIsForContainerOnly$1 = ::SwingContainerIsForContainerOnly$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

void SwingContainerIsForContainerOnly::init$() {
}

void SwingContainerIsForContainerOnly::main($StringArray* args) {
	$useLocalObjectStack();
	$var($FileSystem, fs, $FileSystems::getFileSystem($($URI::create("jrt:/"_s))));
	$nc(fs)->getFileStores();
	$var($Path, var$0, fs->getPath("/modules/java.desktop"_s, $$new($StringArray, 0)));
	$Files::walkFileTree(var$0, $$new($SwingContainerIsForContainerOnly$1));
}

SwingContainerIsForContainerOnly::SwingContainerIsForContainerOnly() {
}

$Class* SwingContainerIsForContainerOnly::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SwingContainerIsForContainerOnly, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingContainerIsForContainerOnly, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SwingContainerIsForContainerOnly$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"SwingContainerIsForContainerOnly",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SwingContainerIsForContainerOnly$1"
	};
	$loadClass(SwingContainerIsForContainerOnly, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingContainerIsForContainerOnly);
	});
	return class$;
}

$Class* SwingContainerIsForContainerOnly::class$ = nullptr;