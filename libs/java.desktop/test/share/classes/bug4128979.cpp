#include <bug4128979.h>
#include <bug4128979$1.h>
#include <java/applet/Applet.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef CENTER
#undef ERROR_MESSAGE
#undef EXIT_ON_CLOSE
#undef RIGHT_TO_LEFT
#undef Y_AXIS

using $bug4128979$1 = ::bug4128979$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BorderFactory = ::javax::swing::BorderFactory;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JApplet = ::javax::swing::JApplet;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $WindowConstants = ::javax::swing::WindowConstants;
using $Border = ::javax::swing::border::Border;

void bug4128979::init$() {
	$JApplet::init$();
}

void bug4128979::main($StringArray* args) {
	$init(bug4128979);
	$useLocalObjectStack();
	$var($JApplet, applet, $new(bug4128979));
	applet->init();
	applet->start();
	$var($JFrame, frame, $new($JFrame, "Test window"_s));
	frame->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	frame->setLayout($$new($BorderLayout));
	frame->add(applet, $BorderLayout::CENTER);
	frame->setSize(600, 240);
	frame->setVisible(true);
}

void bug4128979::init() {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsClassicLookAndFeel"_s);
	} catch ($UnsupportedLookAndFeelException& e) {
		$JOptionPane::showMessageDialog(this, "This test requires Windows look and feel, so just press Pass\n as  this look and feel is unsupported on this platform."_s, "Unsupported LF"_s, $JOptionPane::ERROR_MESSAGE);
		return;
	} catch ($Exception& e) {
		$throwNew($RuntimeException, "Couldn\'t set look and feel"_s);
	}
	setLayout($$new($FlowLayout));
	$var($JPanel, p, $new($JPanel));
	p->setLayout($$new($BoxLayout, p, $BoxLayout::Y_AXIS));
	$var($JPanel, p1, $new($JPanel));
	addButtons(p1);
	p->add(p1);
	$var($JToolBar, tb1, $new($JToolBar));
	addButtons(tb1);
	p->add(tb1);
	$var($JToolBar, tb2, $new($JToolBar));
	tb2->setRollover(true);
	addButtons(tb2);
	p->add(tb2);
	$var($JLabel, label, $new($JLabel, "ToggleButton.highlight color: "_s));
	$init($ComponentOrientation);
	label->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	label->setIcon($$new($bug4128979$1, this));
	add(p);
	add(label);
}

void bug4128979::addButtons($Container* c) {
	$init(bug4128979);
	$useLocalObjectStack();
	$nc(c)->setLayout($$new($FlowLayout));
	c->add($$new($JToggleButton, "DefaultBorder"_s));
	$var($JToggleButton, cbut, $new($JToggleButton, "DefaultBorder"_s));
	$init($Color);
	cbut->setBackground($Color::red);
	c->add(cbut);
	$assign(cbut, $new($JToggleButton, "DefaultBorder"_s));
	cbut->setBackground($Color::green);
	c->add(cbut);
	$assign(cbut, $new($JToggleButton, "DefaultBorder"_s));
	cbut->setBackground($Color::blue);
	c->add(cbut);
	$var($JToggleButton, but3, $new($JToggleButton, "LineBorder"_s));
	but3->setBorder($($BorderFactory::createLineBorder($Color::red)));
	c->add(but3);
	$var($JToggleButton, but4, $new($JToggleButton, "null border"_s));
	but4->setBorder(nullptr);
	c->add(but4);
}

bug4128979::bug4128979() {
}

$Class* bug4128979::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4128979, init$, void)},
		{"addButtons", "(Ljava/awt/Container;)V", nullptr, $STATIC, $staticMethod(bug4128979, addButtons, void, $Container*)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug4128979, init, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4128979, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4128979$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4128979",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4128979$1"
	};
	$loadClass(bug4128979, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4128979));
	});
	return class$;
}

$Class* bug4128979::class$ = nullptr;