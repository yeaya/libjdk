#include <JTextPaneDocumentWrapping.h>
#include <JTextPaneDocumentWrapping$1.h>
#include <JTextPaneDocumentWrapping$2.h>
#include <JTextPaneDocumentWrapping$3.h>
#include <java/awt/Robot.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $JTextPaneDocumentWrapping$1 = ::JTextPaneDocumentWrapping$1;
using $JTextPaneDocumentWrapping$2 = ::JTextPaneDocumentWrapping$2;
using $JTextPaneDocumentWrapping$3 = ::JTextPaneDocumentWrapping$3;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JFrame* JTextPaneDocumentWrapping::frame = nullptr;
$JTextPane* JTextPaneDocumentWrapping::jTextPane = nullptr;
int32_t JTextPaneDocumentWrapping::position = 0;

void JTextPaneDocumentWrapping::init$() {
}

void JTextPaneDocumentWrapping::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentWrapping$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentWrapping$2));
	$init(JTextPaneDocumentWrapping);
	if (JTextPaneDocumentWrapping::position < 40) {
		$throwNew($RuntimeException, $$str({"Text is not wrapped "_s, $$str(JTextPaneDocumentWrapping::position)}));
	}
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentWrapping$3));
	if (JTextPaneDocumentWrapping::position > 20) {
		$throwNew($RuntimeException, $$str({"Text is wrapped "_s, $$str(JTextPaneDocumentWrapping::position)}));
	}
	$nc($System::out)->println("ok"_s);
}

JTextPaneDocumentWrapping::JTextPaneDocumentWrapping() {
}

$Class* JTextPaneDocumentWrapping::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentWrapping, frame)},
		{"jTextPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentWrapping, jTextPane)},
		{"position", "I", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentWrapping, position)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextPaneDocumentWrapping, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextPaneDocumentWrapping, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTextPaneDocumentWrapping$3", nullptr, nullptr, 0},
		{"JTextPaneDocumentWrapping$2", nullptr, nullptr, 0},
		{"JTextPaneDocumentWrapping$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JTextPaneDocumentWrapping",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JTextPaneDocumentWrapping$3,JTextPaneDocumentWrapping$2,JTextPaneDocumentWrapping$1"
	};
	$loadClass(JTextPaneDocumentWrapping, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextPaneDocumentWrapping);
	});
	return class$;
}

$Class* JTextPaneDocumentWrapping::class$ = nullptr;