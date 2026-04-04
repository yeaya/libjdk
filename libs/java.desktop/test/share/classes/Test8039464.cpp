#include <Test8039464.h>
#include <Test8039464$1.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/lang/Error.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BOTH
#undef HORIZONTAL
#undef VERTICAL

using $Test8039464$1 = ::Test8039464$1;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JLabel = ::javax::swing::JLabel;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

void Test8039464::init$() {
	$JApplet::init$();
}

void Test8039464::init() {
	init(this);
}

void Test8039464::init($Container* container) {
	$init(Test8039464);
	$useLocalObjectStack();
	$nc(container)->setLayout($$new($GridBagLayout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	gbc->fill = $GridBagConstraints::BOTH;
	gbc->gridx = 0;
	gbc->gridy = 1;
	$var($JLabel, label, $new($JLabel));
	$var($Dimension, size, $new($Dimension, 111, 0));
	label->setPreferredSize(size);
	label->setMinimumSize(size);
	container->add(label, gbc);
	gbc->gridx = 1;
	gbc->weightx = 1;
	container->add($$new($JScrollBar, $JScrollBar::HORIZONTAL, 1, 111, 1, 1111), gbc);
	gbc->gridx = 2;
	gbc->gridy = 0;
	gbc->weightx = 0;
	gbc->weighty = 1;
	container->add($$new($JScrollBar, $JScrollBar::VERTICAL, 1, 111, 1, 1111), gbc);
}

void Test8039464::main($StringArray* args) {
	$init(Test8039464);
	$SwingUtilities::invokeLater($$new($Test8039464$1));
}

void Test8039464::clinit$($Class* clazz) {
	{
		try {
			$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
		} catch ($Exception& exception) {
			$throwNew($Error, "unexpected"_s, exception);
		}
	}
}

Test8039464::Test8039464() {
}

$Class* Test8039464::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8039464, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Test8039464, init, void)},
		{"init", "(Ljava/awt/Container;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test8039464, init, void, $Container*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8039464, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8039464$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8039464",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test8039464$1"
	};
	$loadClass(Test8039464, name, initialize, &classInfo$$, Test8039464::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test8039464));
	});
	return class$;
}

$Class* Test8039464::class$ = nullptr;