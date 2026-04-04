#include <Test6256140$4.h>
#include <Test6256140.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JToolTip.h>
#include <jcpp.h>

using $Test6256140 = ::Test6256140;
using $BorderLayout = ::java::awt::BorderLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JToolTip = ::javax::swing::JToolTip;

void Test6256140$4::init$() {
	$JFormattedTextField::init$();
}

$JToolTip* Test6256140$4::createToolTip() {
	$useLocalObjectStack();
	$var($JToolTip, toolTip, $JFormattedTextField::createToolTip());
	$nc(toolTip)->setLayout($$new($BorderLayout));
	$init($Test6256140);
	toolTip->add($Test6256140::toolTipLabel);
	return toolTip;
}

Test6256140$4::Test6256140$4() {
}

$Class* Test6256140$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6256140$4, init$, void)},
		{"createToolTip", "()Ljavax/swing/JToolTip;", nullptr, $PUBLIC, $virtualMethod(Test6256140$4, createToolTip, $JToolTip*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6256140",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6256140$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6256140$4",
		"javax.swing.JFormattedTextField",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test6256140"
	};
	$loadClass(Test6256140$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6256140$4));
	});
	return class$;
}

$Class* Test6256140$4::class$ = nullptr;