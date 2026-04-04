#include <IconCoord.h>
#include <IconCoord$1.h>
#include <IconCoord$Test.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef CENTER
#undef NORTH

using $IconCoord$1 = ::IconCoord$1;
using $IconCoord$Test = ::IconCoord$Test;
using $BorderLayout = ::java::awt::BorderLayout;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$IconCoord$Test* IconCoord::test = nullptr;

void IconCoord::init$() {
}

void IconCoord::main($StringArray* args) {
	$init(IconCoord);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($($UIManager::getCrossPlatformLookAndFeelClassName()));
	$SwingUtilities::invokeAndWait($$new($IconCoord$1));
	$nc(IconCoord::test)->waitTestResult();
}

void IconCoord::createAndShowGUI() {
	$useLocalObjectStack();
	$var($StringBuilder, instrText, $new($StringBuilder));
	instrText->append("First, iconify internal frame \"Frame 1\" by clicking on its iconify button.\n"_s);
	instrText->append("Now, maximize the top-level window \"IconCoord\".\n"_s);
	instrText->append("The \"Frame 1\" icon should stay in the lower left corner of the desktop; "_s);
	instrText->append("if it doesn\'t, press \"Fail\".\n"_s);
	instrText->append("Now move the icon to the middle of the desktop by dragging it by its "_s);
	instrText->append("bumpy left side. Then iconify \"Frame 2\" by clicking on its iconify button.\n"_s);
	instrText->append("If the icon for frame two gets placed in the lower left corner of the "_s);
	instrText->append("desktop (where the icon for \"Frame 1\" used to be before you moved it), "_s);
	instrText->append("press \"Pass\". Otherwise, press \"Fail\".\n"_s);
	$var($JDesktopPane, dt, $new($JDesktopPane));
	$var($JButton, tf, nullptr);
	$var($JInternalFrame, if1, $new($JInternalFrame, "Frame 1"_s, false, false, false, true));
	$var($JComponent, c, $cast($JComponent, if1->getContentPane()));
	$nc(c)->setLayout($$new($BorderLayout));
	$assign(tf, $new($JButton, "ignore"_s));
	c->add(tf, $BorderLayout::NORTH);
	$assign(tf, $new($JButton, "ignore"_s));
	c->add(tf, $BorderLayout::CENTER);
	$var($JInternalFrame, if2, $new($JInternalFrame, "Frame 2"_s, false, false, false, true));
	$assign(c, $cast($JComponent, if2->getContentPane()));
	$nc(c)->setLayout($$new($BorderLayout));
	$assign(tf, $new($JButton, "ignore"_s));
	c->add(tf, $BorderLayout::NORTH);
	$assign(tf, $new($JButton, "ignore"_s));
	c->add(tf, $BorderLayout::CENTER);
	if1->pack();
	if1->setBounds(300, 0, 300, 80);
	if2->pack();
	if2->setBounds(0, 0, 300, 80);
	dt->add(if1);
	dt->add(if2);
	if1->setVisible(true);
	if2->setVisible(true);
	int32_t frameHeight = 500;
	$var($JScrollPane, dtScrollPane, $new($JScrollPane, dt));
	$var($JFrame, frame, $nc(IconCoord::test)->createTestFrame("IconCoord"_s, dtScrollPane, $(instrText->toString()), 250));
	dt->setPreferredSize($$new($Dimension, 650, frameHeight - 250));
	$nc(frame)->setSize(600, 500);
	frame->setVisible(true);
}

void IconCoord::clinit$($Class* clazz) {
	$assignStatic(IconCoord::test, $new($IconCoord$Test));
}

IconCoord::IconCoord() {
}

$Class* IconCoord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"test", "LIconCoord$Test;", nullptr, $STATIC, $staticField(IconCoord, test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IconCoord, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE, $method(IconCoord, createAndShowGUI, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IconCoord, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IconCoord$Test", "IconCoord", "Test", $STATIC},
		{"IconCoord$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IconCoord",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"IconCoord$Test,IconCoord$Test$1,IconCoord$1"
	};
	$loadClass(IconCoord, name, initialize, &classInfo$$, IconCoord::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IconCoord);
	});
	return class$;
}

$Class* IconCoord::class$ = nullptr;