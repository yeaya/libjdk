#include <bug6342301.h>
#include <bug6342301$1.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug6342301$1 = ::bug6342301$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$String* bug6342301::tempDir = nullptr;

void bug6342301::init$() {
}

void bug6342301::main($StringArray* args) {
	$useLocalObjectStack();
	$init(bug6342301);
	$assignStatic(bug6342301::tempDir, $System::getProperty("java.io.tmpdir"_s));
	if ($nc(bug6342301::tempDir)->length() == 0) {
		$assignStatic(bug6342301::tempDir, $System::getProperty("user.home"_s));
	}
	$nc($System::out)->println($$str({"Temp directory: "_s, bug6342301::tempDir}));
	$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug6342301$1));
}

bug6342301::bug6342301() {
}

$Class* bug6342301::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tempDir", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug6342301, tempDir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6342301, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6342301, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6342301$HackedFileChooser", "bug6342301", "HackedFileChooser", $PRIVATE | $STATIC},
		{"bug6342301$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6342301",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6342301$HackedFileChooser,bug6342301$1"
	};
	$loadClass(bug6342301, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6342301);
	});
	return class$;
}

$Class* bug6342301::class$ = nullptr;