#include <JColorChooserDnDTest$1.h>
#include <JColorChooserDnDTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;

void JColorChooserDnDTest$1::init$() {
}

void JColorChooserDnDTest$1::run() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel));
	$var($JColorChooser, colorChooser, $new($JColorChooser));
	colorChooser->setDragEnabled(true);
	panel->setBorder($($BorderFactory::createTitledBorder("JColorChoosers"_s)));
	panel->add(colorChooser);
	frame->setContentPane(panel);
	frame->pack();
	frame->setVisible(true);
}

JColorChooserDnDTest$1::JColorChooserDnDTest$1() {
}

$Class* JColorChooserDnDTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JColorChooserDnDTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JColorChooserDnDTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JColorChooserDnDTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JColorChooserDnDTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JColorChooserDnDTest$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JColorChooserDnDTest"
	};
	$loadClass(JColorChooserDnDTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JColorChooserDnDTest$1);
	});
	return class$;
}

$Class* JColorChooserDnDTest$1::class$ = nullptr;