#include <bug6484091.h>
#include <java/io/File.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessControlException.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessControlException = ::java::security::AccessControlException;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

void bug6484091::init$() {
}

void bug6484091::main($StringArray* args) {
	$useLocalObjectStack();
	$load(bug6484091);
	$beforeCallerSensitive();
	$var($File, dir, $$nc($FileSystemView::getFileSystemView())->getDefaultDirectory());
	printDirContent(dir);
	$System::setSecurityManager($$new($SecurityManager));
	try {
		printDirContent(dir);
		$throwNew($RuntimeException, "Dir content was derived bypass SecurityManager"_s);
	} catch ($AccessControlException& e) {
	}
}

void bug6484091::printDirContent($File* dir) {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"Files in "_s, $($nc(dir)->getAbsolutePath()), ":"_s}));
	{
		$var($FileArray, arr$, dir->listFiles());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($File, file, arr$->get(i$));
			{
				$System::out->println($($nc(file)->getName()));
			}
		}
	}
}

bug6484091::bug6484091() {
}

$Class* bug6484091::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6484091, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6484091, main, void, $StringArray*)},
		{"printDirContent", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6484091, printDirContent, void, $File*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6484091",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6484091, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6484091);
	});
	return class$;
}

$Class* bug6484091::class$ = nullptr;