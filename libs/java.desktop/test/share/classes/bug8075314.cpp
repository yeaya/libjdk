#include <bug8075314.h>
#include <bug8075314$1.h>
#include <bug8075314$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug8075314$1 = ::bug8075314$1;
using $bug8075314$2 = ::bug8075314$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$JFrame* bug8075314::frame = nullptr;
$JInternalFrame* bug8075314::frame1 = nullptr;
$JInternalFrame* bug8075314::frame2 = nullptr;

void bug8075314::init$() {
}

void bug8075314::main($StringArray* args) {
	$useLocalObjectStack();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
				$var($Throwable, var$0, nullptr);
				try {
					$SwingUtilities::invokeAndWait($$new($bug8075314$1));
					$SwingUtilities::invokeAndWait($$new($bug8075314$2));
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$init(bug8075314);
					if (bug8075314::frame != nullptr) {
						bug8075314::frame->dispose();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	$nc($System::out)->println("ok"_s);
}

void bug8075314::setup($JFrame* frame) {
	$var($JDesktopPane, desktop, $new($JDesktopPane));
	$nc(frame)->setContentPane(desktop);
	$init(bug8075314);
	$assignStatic(bug8075314::frame1, $new($JInternalFrame, "1"_s, true, true, true, true));
	bug8075314::frame1->setBounds(40, 40, 300, 200);
	$nc(bug8075314::frame1)->setVisible(true);
	desktop->add(bug8075314::frame1);
	$assignStatic(bug8075314::frame2, $new($JInternalFrame, "2"_s, true, true, true, true));
	bug8075314::frame2->setBounds(20, 20, 300, 200);
	$nc(bug8075314::frame2)->setVisible(true);
	desktop->add(bug8075314::frame2);
	frame->setSize(500, 400);
	frame->setVisible(true);
}

bug8075314::bug8075314() {
}

$Class* bug8075314::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8075314, frame)},
		{"frame1", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8075314, frame1)},
		{"frame2", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8075314, frame2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8075314, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8075314, main, void, $StringArray*), "java.lang.Exception"},
		{"setup", "(Ljavax/swing/JFrame;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8075314, setup, void, $JFrame*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8075314$2", nullptr, nullptr, 0},
		{"bug8075314$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8075314",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8075314$2,bug8075314$1"
	};
	$loadClass(bug8075314, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8075314);
	});
	return class$;
}

$Class* bug8075314::class$ = nullptr;