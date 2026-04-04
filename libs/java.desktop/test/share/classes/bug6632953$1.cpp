#include <bug6632953$1.h>
#include <bug6632953.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComboBox = ::javax::swing::JComboBox;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;

void bug6632953$1::init$() {
}

void bug6632953$1::run() {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, lafInfo, arr$->get(i$));
		{
			try {
				$UIManager::setLookAndFeel($($nc(lafInfo)->getClassName()));
			} catch ($UnsupportedLookAndFeelException& ignored) {
				continue;
			} catch ($Exception& e) {
				$throwNew($RuntimeException, e);
			}
			$var($MetalComboBoxUI, ui, $new($MetalComboBoxUI));
			ui->installUI($$new($JComboBox));
			ui->getBaseline($$new($JComboBox), 0, 0);
			ui->getBaseline($$new($JComboBox), 1, 1);
			ui->getBaseline($$new($JComboBox), 2, 2);
			ui->getBaseline($$new($JComboBox), 3, 3);
			ui->getBaseline($$new($JComboBox), 4, 4);
		}
	}
}

bug6632953$1::bug6632953$1() {
}

$Class* bug6632953$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6632953$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6632953$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6632953",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6632953$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6632953$1",
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
		"bug6632953"
	};
	$loadClass(bug6632953$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6632953$1);
	});
	return class$;
}

$Class* bug6632953$1::class$ = nullptr;