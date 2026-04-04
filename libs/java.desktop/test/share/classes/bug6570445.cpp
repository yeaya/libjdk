#include <bug6570445.h>
#include <java/io/File.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

void bug6570445::init$() {
}

void bug6570445::main($StringArray* args) {
	$useLocalObjectStack();
	$load(bug6570445);
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$$nc($FileSystemView::getFileSystemView())->getRoots();
	$nc($System::out)->println("Passed."_s);
}

bug6570445::bug6570445() {
}

$Class* bug6570445::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6570445, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6570445, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6570445",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6570445, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6570445);
	});
	return class$;
}

$Class* bug6570445::class$ = nullptr;