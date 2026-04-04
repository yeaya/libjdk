#include <TestCustomStyleFactory.h>
#include <TestCustomStyleFactory$1.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestCustomStyleFactory$1 = ::TestCustomStyleFactory$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;

$String* TestCustomStyleFactory::GTK_LAF_CLASS = nullptr;

void TestCustomStyleFactory::init$() {
}

void TestCustomStyleFactory::main($StringArray* args) {
	$init(TestCustomStyleFactory);
	$useLocalObjectStack();
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Linux"_s)) {
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			if ($$nc($nc(lookAndFeelInfo)->getClassName())->contains(TestCustomStyleFactory::GTK_LAF_CLASS)) {
				try {
					$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
					return;
				}
			}
		}
	}
	$var($SynthStyleFactory, original, $SynthLookAndFeel::getStyleFactory());
	$SynthLookAndFeel::setStyleFactory($$new($TestCustomStyleFactory$1, original));
	$new($JLabel, "test"_s);
}

TestCustomStyleFactory::TestCustomStyleFactory() {
}

void TestCustomStyleFactory::clinit$($Class* clazz) {
	$assignStatic(TestCustomStyleFactory::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
}

$Class* TestCustomStyleFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestCustomStyleFactory, GTK_LAF_CLASS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestCustomStyleFactory, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestCustomStyleFactory, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCustomStyleFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestCustomStyleFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestCustomStyleFactory$1"
	};
	$loadClass(TestCustomStyleFactory, name, initialize, &classInfo$$, TestCustomStyleFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestCustomStyleFactory);
	});
	return class$;
}

$Class* TestCustomStyleFactory::class$ = nullptr;