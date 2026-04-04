#include <bug6532833$1.h>
#include <bug6532833.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner.h>
#include <jcpp.h>

#undef RIGHT_TO_LEFT

using $JSpinnerArray = $Array<::javax::swing::JSpinner>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;

void bug6532833$1::init$() {
}

void bug6532833$1::run() {
	$useLocalObjectStack();
	$var($JSpinnerArray, spinners, $new($JSpinnerArray, 2));
	for (int32_t i = 0; i < spinners->length; ++i) {
		$var($JSpinner, spinner, $new($JSpinner));
		spinner->setValue($($Integer::valueOf(2010)));
		$var($Component, arrowUp, spinner->getComponent(0));
		$var($Component, arrowDown, spinner->getComponent(1));
		$var($LayoutManager, layout, spinner->getLayout());
		$nc(layout)->removeLayoutComponent(arrowUp);
		layout->removeLayoutComponent(arrowDown);
		if (i == 1) {
			$init($ComponentOrientation);
			spinner->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
		}
		spinners->set(i, spinner);
	}
	$var($JFrame, frame, $new($JFrame));
	{
		$var($JSpinnerArray, arr$, spinners);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($JSpinner, spinner, arr$->get(i$));
			{
				$$nc(frame->getContentPane())->add(spinner);
			}
		}
	}
	frame->pack();
	{
		$var($JSpinnerArray, arr$, spinners);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($JSpinner, spinner, arr$->get(i$));
			{
				$var($Insets, insets, $nc(spinner)->getInsets());
				int32_t var$0 = spinner->getWidth();
				if (var$0 != $nc(insets)->left + $nc(insets)->right + $$nc(spinner->getEditor())->getWidth()) {
					$throwNew($RuntimeException, "Spinner editor width is invalid"_s);
				}
			}
		}
	}
	frame->dispose();
}

bug6532833$1::bug6532833$1() {
}

$Class* bug6532833$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6532833$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6532833$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6532833",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6532833$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6532833$1",
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
		"bug6532833"
	};
	$loadClass(bug6532833$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6532833$1);
	});
	return class$;
}

$Class* bug6532833$1::class$ = nullptr;