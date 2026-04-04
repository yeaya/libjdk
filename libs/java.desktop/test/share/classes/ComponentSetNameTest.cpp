#include <ComponentSetNameTest.h>
#include <ComponentSetNameTest$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $ComponentSetNameTest$1 = ::ComponentSetNameTest$1;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void ComponentSetNameTest::init$() {
}

void ComponentSetNameTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($ComponentSetNameTest$1));
}

void ComponentSetNameTest::testSetName($JComponent* component, $String* looknFeelClassName) {
	$useLocalObjectStack();
	$var($Color, bg1, $nc(component)->getBackground());
	if (bg1 == nullptr) {
		printTestInfo(component, looknFeelClassName);
		$throwNew($RuntimeException, "background is null"_s);
	}
	component->setName("noname"_s);
	$var($Color, bg2, component->getBackground());
	if (bg2 != bg1) {
		printTestInfo(component, looknFeelClassName);
		$throwNew($RuntimeException, "background changed after setting name"_s);
	}
}

void ComponentSetNameTest::printTestInfo($JComponent* component, $String* looknFeelClassName) {
	$useLocalObjectStack();
	$nc($System::err)->println("Test fails"_s);
	$System::err->println($$str({"LookAndFeel "_s, looknFeelClassName}));
	$System::err->println($$str({"JComponent "_s, $nc($of(component))->getClass()}));
}

ComponentSetNameTest::ComponentSetNameTest() {
}

$Class* ComponentSetNameTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ComponentSetNameTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ComponentSetNameTest, main, void, $StringArray*), "java.lang.Exception"},
		{"printTestInfo", "(Ljavax/swing/JComponent;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ComponentSetNameTest, printTestInfo, void, $JComponent*, $String*)},
		{"testSetName", "(Ljavax/swing/JComponent;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ComponentSetNameTest, testSetName, void, $JComponent*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ComponentSetNameTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ComponentSetNameTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ComponentSetNameTest$1"
	};
	$loadClass(ComponentSetNameTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentSetNameTest);
	});
	return class$;
}

$Class* ComponentSetNameTest::class$ = nullptr;