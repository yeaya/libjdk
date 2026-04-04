#include <ComponentTest.h>
#include <ComponentTest$1.h>
#include <ComponentTest$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $ComponentTest$1 = ::ComponentTest$1;
using $ComponentTest$2 = ::ComponentTest$2;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $FlowLayout = ::java::awt::FlowLayout;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$JFrame* ComponentTest::frame = nullptr;

void ComponentTest::init$() {
	$useLocalObjectStack();
	$JFrame::init$();
	setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	setLayout($$new($FlowLayout));
	add($$new($JButton, "JButton"_s));
	add($$new($JToggleButton, "JToggleButton"_s));
	add($$new($JCheckBox, "JCheckBox"_s));
	add($$new($JRadioButton, "JRadioButton"_s));
	add($$new($JLabel, "JLabel"_s));
	pack();
	setLocationRelativeTo(nullptr);
}

void ComponentTest::main($StringArray* args) {
	$init(ComponentTest);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($ComponentTest$1));
	robot->waitForIdle();
	$var($UIManager$LookAndFeelInfoArray, lafs, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lafs);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait($$new($ComponentTest$2, laf));
				robot->waitForIdle();
			}
		}
	}
}

ComponentTest::ComponentTest() {
}

$Class* ComponentTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ComponentTest, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ComponentTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ComponentTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ComponentTest$2", nullptr, nullptr, 0},
		{"ComponentTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ComponentTest",
		"javax.swing.JFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ComponentTest$2,ComponentTest$1"
	};
	$loadClass(ComponentTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ComponentTest));
	});
	return class$;
}

$Class* ComponentTest::class$ = nullptr;