#include <bug6342301$1.h>
#include <bug6342301$HackedFileChooser.h>
#include <bug6342301.h>
#include <java/io/File.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $bug6342301 = ::bug6342301;
using $bug6342301$HackedFileChooser = ::bug6342301$HackedFileChooser;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

void bug6342301$1::init$() {
}

void bug6342301$1::run() {
	$useLocalObjectStack();
	$var($bug6342301$HackedFileChooser, openChooser, $new($bug6342301$HackedFileChooser));
	openChooser->setUI($$new($MetalFileChooserUI, openChooser));
	$init($bug6342301);
	openChooser->setCurrentDirectory($$new($File, $bug6342301::tempDir));
}

bug6342301$1::bug6342301$1() {
}

$Class* bug6342301$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6342301$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6342301$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6342301",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6342301$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6342301$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6342301"
	};
	$loadClass(bug6342301$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6342301$1);
	});
	return class$;
}

$Class* bug6342301$1::class$ = nullptr;