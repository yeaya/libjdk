#include <bug6868611.h>
#include <bug6868611$1.h>
#include <bug6868611$MyThread.h>
#include <java/io/File.h>
#include <java/lang/Math.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef COUNT

using $FileArray = $Array<::java::io::File>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $bug6868611$1 = ::bug6868611$1;
using $bug6868611$MyThread = ::bug6868611$MyThread;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$File* bug6868611::tempFolder = nullptr;
$FileArray* bug6868611::files = nullptr;

void bug6868611::init$() {
}

void bug6868611::main($StringArray* args) {
	$init(bug6868611);
	$useLocalObjectStack();
	int32_t fileCount = 0;
	$var($Throwable, var$0, nullptr);
	try {
		$assignStatic(bug6868611::tempFolder, $$nc($Files::createTempDirectory("temp_folder"_s, $$new($FileAttributeArray, 0)))->toFile());
		for (fileCount = 0; fileCount < bug6868611::COUNT; ++fileCount) {
			$nc(bug6868611::files)->set(fileCount, $$new($File, bug6868611::tempFolder, $$str({"temp"_s, $$str(fileCount), ".txt"_s})));
			$nc(bug6868611::files->get(fileCount))->createNewFile();
		}
		$SwingUtilities::invokeAndWait($$new($bug6868611$1));
		for (int32_t i = 0; i < bug6868611::COUNT; ++i) {
			$var($Thread, thread, $new($bug6868611$MyThread, bug6868611::tempFolder));
			thread->start();
			$Thread::sleep($cast(int64_t, ($Math::random() * 100)));
			thread->interrupt();
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		for (int32_t i = 0; i < fileCount; ++i) {
			$Files::delete$($($nc($nc(bug6868611::files)->get(i))->toPath()));
		}
		$Files::delete$($($nc(bug6868611::tempFolder)->toPath()));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug6868611::clinit$($Class* clazz) {
	$assignStatic(bug6868611::files, $new($FileArray, bug6868611::COUNT));
}

bug6868611::bug6868611() {
}

$Class* bug6868611::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6868611, COUNT)},
		{"tempFolder", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(bug6868611, tempFolder)},
		{"files", "[Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(bug6868611, files)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6868611, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6868611, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6868611$MyThread", "bug6868611", "MyThread", $PRIVATE | $STATIC},
		{"bug6868611$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6868611",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6868611$MyThread,bug6868611$1"
	};
	$loadClass(bug6868611, name, initialize, &classInfo$$, bug6868611::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug6868611);
	});
	return class$;
}

$Class* bug6868611::class$ = nullptr;