#include <TestPopupMenu$TestInternalFrame.h>
#include <TestPopupMenu.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef GRAY

using $TestPopupMenu = ::TestPopupMenu;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;

void TestPopupMenu$TestInternalFrame::init$($TestPopupMenu* this$0) {
	$set(this, this$0, this$0);
	$JInternalFrame::init$();
	jbInit();
}

void TestPopupMenu$TestInternalFrame::jbInit() {
	$useLocalObjectStack();
	setTitle("Test Internal Frame"_s);
	$init($Color);
	$$nc(getContentPane())->setBackground($Color::GRAY);
	setMaximizable(true);
	setClosable(true);
	setMinimumSize($$new($Dimension, 500, 300));
	setSize(500, 300);
}

TestPopupMenu$TestInternalFrame::TestPopupMenu$TestInternalFrame() {
}

$Class* TestPopupMenu$TestInternalFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(TestPopupMenu$TestInternalFrame, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestPopupMenu;)V", nullptr, $PUBLIC, $method(TestPopupMenu$TestInternalFrame, init$, void, $TestPopupMenu*)},
		{"jbInit", "()V", nullptr, $PRIVATE, $method(TestPopupMenu$TestInternalFrame, jbInit, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestPopupMenu$TestInternalFrame", "TestPopupMenu", "TestInternalFrame", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestPopupMenu$TestInternalFrame",
		"javax.swing.JInternalFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestPopupMenu"
	};
	$loadClass(TestPopupMenu$TestInternalFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestPopupMenu$TestInternalFrame));
	});
	return class$;
}

$Class* TestPopupMenu$TestInternalFrame::class$ = nullptr;