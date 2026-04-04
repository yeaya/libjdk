#include <bug6738668.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

void bug6738668::init$() {
}

void bug6738668::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
		{
			$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
			$var($String, tmpdir, $System::getProperty("java.io.tmpdir"_s));
			$nc($System::out)->println($$str({"tmp dir "_s, tmpdir}));
			$new($JFileChooser, $$new($File, $$str({tmpdir, "/temp"_s})));
			$System::out->println($$str({"Test passed for LookAndFeel "_s, $(lookAndFeelInfo->getClassName())}));
		}
	}
}

bug6738668::bug6738668() {
}

$Class* bug6738668::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6738668, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6738668, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6738668",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6738668, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6738668);
	});
	return class$;
}

$Class* bug6738668::class$ = nullptr;