#include <bug8001470.h>
#include <bug8001470$1.h>
#include <bug8001470$2.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug8001470$1 = ::bug8001470$1;
using $bug8001470$2 = ::bug8001470$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JFrame* bug8001470::frame = nullptr;
$JTextField* bug8001470::textField1 = nullptr;
$JTextField* bug8001470::textField2 = nullptr;

void bug8001470::init$() {
}

void bug8001470::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($bug8001470$1));
	$init(bug8001470);
	bool var$0 = $nc(bug8001470::textField1)->getHeight() < 10;
	if (var$0 || $nc(bug8001470::textField2)->getHeight() < 10) {
		$throwNew($Exception, "Wrong field height"_s);
	}
	$nc($System::out)->println("ok"_s);
	$SwingUtilities::invokeLater($$new($bug8001470$2));
}

bug8001470::bug8001470() {
}

$Class* bug8001470::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8001470, frame)},
		{"textField1", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(bug8001470, textField1)},
		{"textField2", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(bug8001470, textField2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8001470, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8001470, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8001470$2", nullptr, nullptr, 0},
		{"bug8001470$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8001470",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8001470$2,bug8001470$1"
	};
	$loadClass(bug8001470, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8001470);
	});
	return class$;
}

$Class* bug8001470::class$ = nullptr;