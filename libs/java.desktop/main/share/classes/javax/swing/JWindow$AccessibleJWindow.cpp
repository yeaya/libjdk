#include <javax/swing/JWindow$AccessibleJWindow.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <javax/swing/JWindow.h>
#include <jcpp.h>

using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JWindow = ::javax::swing::JWindow;

namespace javax {
	namespace swing {

void JWindow$AccessibleJWindow::init$($JWindow* this$0) {
	$set(this, this$0, this$0);
	$Window$AccessibleAWTWindow::init$(this$0);
}

JWindow$AccessibleJWindow::JWindow$AccessibleJWindow() {
}

$Class* JWindow$AccessibleJWindow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JWindow;", nullptr, $FINAL | $SYNTHETIC, $field(JWindow$AccessibleJWindow, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JWindow;)V", nullptr, $PROTECTED, $method(JWindow$AccessibleJWindow, init$, void, $JWindow*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JWindow$AccessibleJWindow", "javax.swing.JWindow", "AccessibleJWindow", $PROTECTED},
		{"java.awt.Window$AccessibleAWTWindow", "java.awt.Window", "AccessibleAWTWindow", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JWindow$AccessibleJWindow",
		"java.awt.Window$AccessibleAWTWindow",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JWindow"
	};
	$loadClass(JWindow$AccessibleJWindow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JWindow$AccessibleJWindow));
	});
	return class$;
}

$Class* JWindow$AccessibleJWindow::class$ = nullptr;

	} // swing
} // javax