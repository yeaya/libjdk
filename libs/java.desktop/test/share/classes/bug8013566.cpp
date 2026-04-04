#include <bug8013566.h>
#include <bug8013566$1.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/GroupLayout$ParallelGroup.h>
#include <javax/swing/GroupLayout$SequentialGroup.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef RELATED

using $bug8013566$1 = ::bug8013566$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $GroupLayout = ::javax::swing::GroupLayout;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug8013566::init$() {
}

void bug8013566::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug8013566$1));
	$nc($System::out)->println("ok"_s);
}

void bug8013566::test($JFrame* frame) {
	$useLocalObjectStack();
	$var($JComponent, c1, $new($JButton, "Label1"_s));
	$var($JComponent, c2, $new($JButton, "Label22"_s));
	$var($JComponent, c3, $new($JButton, "Label333"_s));
	$var($JPanel, panel, $new($JPanel));
	$var($GroupLayout, layout, $new($GroupLayout, panel));
	layout->setAutoCreateContainerGaps(true);
	layout->setAutoCreateGaps(true);
	panel->setLayout(layout);
	$init($LayoutStyle$ComponentPlacement);
	layout->setHorizontalGroup($($$nc($$nc(layout->createSequentialGroup())->addGroup($($$nc($$nc(layout->createParallelGroup())->addGroup($($$nc($$nc(layout->createSequentialGroup())->addComponent(c1))->addPreferredGap($LayoutStyle$ComponentPlacement::RELATED, 50, 200))))->addComponent(c2))))->addComponent(c3)));
	layout->setVerticalGroup($($$nc($$nc($$nc(layout->createSequentialGroup())->addComponent(c1))->addComponent(c2))->addComponent(c3)));
	$nc(frame)->setContentPane(panel);
	frame->pack();
	frame->setVisible(true);
	int32_t var$0 = c3->getX();
	int32_t var$2 = c1->getX();
	int32_t var$1 = var$2 + c1->getWidth() + 50;
	if (var$0 != var$1) {
		$throwNew($RuntimeException, "Gap between 1st and 3rd component is wrong"_s);
	}
}

bug8013566::bug8013566() {
}

$Class* bug8013566::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8013566, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8013566, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljavax/swing/JFrame;)V", nullptr, $STATIC, $staticMethod(bug8013566, test, void, $JFrame*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8013566$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8013566",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8013566$1"
	};
	$loadClass(bug8013566, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8013566);
	});
	return class$;
}

$Class* bug8013566::class$ = nullptr;