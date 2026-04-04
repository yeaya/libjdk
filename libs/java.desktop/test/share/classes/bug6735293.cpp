#include <bug6735293.h>
#include <bug6735293$1.h>
#include <bug6735293$2.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/NavigationFilter.h>
#include <jcpp.h>

using $bug6735293$1 = ::bug6735293$1;
using $bug6735293$2 = ::bug6735293$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;

$volatile($JFormattedTextField*) bug6735293::jtf = nullptr;
$volatile($NavigationFilter*) bug6735293::nf = nullptr;
$volatile($JFrame*) bug6735293::jFrame = nullptr;

void bug6735293::init$() {
}

void bug6735293::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($bug6735293$1));
	$Thread::sleep(1000);
	$SwingUtilities::invokeAndWait($$new($bug6735293$2));
}

bug6735293::bug6735293() {
}

$Class* bug6735293::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"jtf", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug6735293, jtf)},
		{"nf", "Ljavax/swing/text/NavigationFilter;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug6735293, nf)},
		{"jFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug6735293, jFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6735293, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6735293, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6735293$2", nullptr, nullptr, 0},
		{"bug6735293$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6735293",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6735293$2,bug6735293$1"
	};
	$loadClass(bug6735293, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6735293);
	});
	return class$;
}

$Class* bug6735293::class$ = nullptr;