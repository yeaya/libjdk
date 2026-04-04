#include <bug8078268.h>
#include <bug8078268$1.h>
#include <java/io/File.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug8078268$1 = ::bug8078268$1;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$volatile(bool) bug8078268::parsingDone = false;
$volatile($Exception*) bug8078268::exception = nullptr;

void bug8078268::init$() {
}

void bug8078268::main($StringArray* args) {
	$init(bug8078268);
	int64_t timeout = 10000;
	int64_t s = $System::currentTimeMillis();
	$SwingUtilities::invokeLater($$new($bug8078268$1));
	while (!bug8078268::parsingDone && bug8078268::exception == nullptr && $System::currentTimeMillis() - s < timeout) {
		$Thread::sleep(200);
	}
	int64_t took = $System::currentTimeMillis() - s;
	if (bug8078268::exception != nullptr) {
		$throw(bug8078268::exception);
	}
	if (took > timeout) {
		$throwNew($RuntimeException, "Parsing takes too long."_s);
	}
}

$String* bug8078268::getDirURL() {
	$init(bug8078268);
	$useLocalObjectStack();
	$init($File);
	return $str({$($$new($File, $($System::getProperty("test.src"_s, "."_s)))->getAbsolutePath()), $File::separator});
}

void bug8078268::clinit$($Class* clazz) {
	bug8078268::parsingDone = false;
}

bug8078268::bug8078268() {
}

$Class* bug8078268::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"parsingDone", "Z", nullptr, $STATIC | $VOLATILE, $staticField(bug8078268, parsingDone)},
		{"exception", "Ljava/lang/Exception;", nullptr, $STATIC | $VOLATILE, $staticField(bug8078268, exception)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8078268, init$, void)},
		{"getDirURL", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(bug8078268, getDirURL, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8078268, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8078268$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8078268",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8078268$1"
	};
	$loadClass(bug8078268, name, initialize, &classInfo$$, bug8078268::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8078268);
	});
	return class$;
}

$Class* bug8078268::class$ = nullptr;