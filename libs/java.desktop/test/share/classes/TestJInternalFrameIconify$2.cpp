#include <TestJInternalFrameIconify$2.h>
#include <TestJInternalFrameIconify.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $TestJInternalFrameIconify = ::TestJInternalFrameIconify;
using $JInternalFrameArray = $Array<::javax::swing::JInternalFrame>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestJInternalFrameIconify$2::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void TestJInternalFrameIconify$2::run() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$init($TestJInternalFrameIconify);
		$var($JInternalFrameArray, internalFrames, $nc($TestJInternalFrameIconify::desktopPane)->getAllFrames());
		if ($nc($nc(internalFrames)->get(0))->isShowing()) {
			$plusAssignStatic($TestJInternalFrameIconify::errorMessage, $$str({"Test Failed for "_s, this->val$lookAndFeelString, " look and feel\n"_s}));
			$nc($System::err)->println($TestJInternalFrameIconify::errorMessage);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init($TestJInternalFrameIconify);
		$nc($TestJInternalFrameIconify::frame)->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

TestJInternalFrameIconify$2::TestJInternalFrameIconify$2() {
}

$Class* TestJInternalFrameIconify$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(TestJInternalFrameIconify$2, val$lookAndFeelString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(TestJInternalFrameIconify$2, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJInternalFrameIconify$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestJInternalFrameIconify",
		"executeTest",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJInternalFrameIconify$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestJInternalFrameIconify$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestJInternalFrameIconify"
	};
	$loadClass(TestJInternalFrameIconify$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJInternalFrameIconify$2);
	});
	return class$;
}

$Class* TestJInternalFrameIconify$2::class$ = nullptr;