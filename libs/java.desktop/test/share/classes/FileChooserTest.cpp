#include <FileChooserTest.h>
#include <FileChooserTest$1.h>
#include <Sysout4FileChooserTest.h>
#include <java/lang/InterruptedException.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $FileChooserTest$1 = ::FileChooserTest$1;
using $Sysout4FileChooserTest = ::Sysout4FileChooserTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;

bool FileChooserTest::theTestPassed = false;
bool FileChooserTest::testGeneratedInterrupt = false;
$Thread* FileChooserTest::mainThread = nullptr;
int32_t FileChooserTest::sleepTime = 0;
$JFileChooser* FileChooserTest::fileChooser = nullptr;

void FileChooserTest::init$() {
}

void FileChooserTest::init() {
	$init(FileChooserTest);
	$SwingUtilities::invokeAndWait($$new($FileChooserTest$1));
}

void FileChooserTest::main($StringArray* args) {
	$init(FileChooserTest);
	$assignStatic(FileChooserTest::mainThread, $Thread::currentThread());
	try {
		init();
	} catch ($Exception& ex) {
		return;
	}
	try {
		$nc(FileChooserTest::mainThread)->sleep(FileChooserTest::sleepTime);
	} catch ($InterruptedException& ex) {
		$Sysout4FileChooserTest::dispose();
		if (!FileChooserTest::theTestPassed && FileChooserTest::testGeneratedInterrupt) {
			$throwNew($RuntimeException, "Test Failed"_s);
		}
	}
	if (!FileChooserTest::testGeneratedInterrupt) {
		$Sysout4FileChooserTest::dispose();
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

void FileChooserTest::pass() {
	$init(FileChooserTest);
	$synchronized(class$) {
		FileChooserTest::theTestPassed = true;
		FileChooserTest::testGeneratedInterrupt = true;
		$nc(FileChooserTest::mainThread)->interrupt();
	}
}

void FileChooserTest::fail() {
	$init(FileChooserTest);
	$synchronized(class$) {
		FileChooserTest::theTestPassed = false;
		FileChooserTest::testGeneratedInterrupt = true;
		$nc(FileChooserTest::mainThread)->interrupt();
	}
}

void FileChooserTest::clinit$($Class* clazz) {
	FileChooserTest::sleepTime = 30000;
}

FileChooserTest::FileChooserTest() {
}

$Class* FileChooserTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theTestPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileChooserTest, theTestPassed)},
		{"testGeneratedInterrupt", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileChooserTest, testGeneratedInterrupt)},
		{"mainThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(FileChooserTest, mainThread)},
		{"sleepTime", "I", nullptr, $PRIVATE | $STATIC, $staticField(FileChooserTest, sleepTime)},
		{"fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $PUBLIC | $STATIC, $staticField(FileChooserTest, fileChooser)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileChooserTest, init$, void)},
		{"fail", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(FileChooserTest, fail, void)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(FileChooserTest, init, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FileChooserTest, main, void, $StringArray*), "java.lang.Exception"},
		{"pass", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(FileChooserTest, pass, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FileChooserTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FileChooserTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"FileChooserTest$1"
	};
	$loadClass(FileChooserTest, name, initialize, &classInfo$$, FileChooserTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileChooserTest);
	});
	return class$;
}

$Class* FileChooserTest::class$ = nullptr;