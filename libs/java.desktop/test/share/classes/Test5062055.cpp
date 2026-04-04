#include <Test5062055.h>
#include <java/awt/Dimension.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void Test5062055::init$() {
}

void Test5062055::main($StringArray* argv) {
	$init(Test5062055);
	$SwingUtilities::invokeLater($$new(Test5062055));
	try {
		$Thread::sleep(5000);
	} catch ($InterruptedException& ex) {
		$throwNew($Error, "Wait interrupted"_s);
	}
}

void Test5062055::run() {
	$useLocalObjectStack();
	$var($JEditorPane, jep, $new($JEditorPane));
	jep->setContentType("text/html"_s);
	jep->setEditable(false);
	jep->setText("<HTML><BODY><HR size=\'5px\'></BODY></HTML>"_s);
	jep->setPreferredSize($$new($Dimension, 640, 480));
}

Test5062055::Test5062055() {
}

$Class* Test5062055::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test5062055, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test5062055, main, void, $StringArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test5062055, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test5062055",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test5062055, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test5062055);
	});
	return class$;
}

$Class* Test5062055::class$ = nullptr;