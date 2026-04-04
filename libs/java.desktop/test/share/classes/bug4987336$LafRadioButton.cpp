#include <bug4987336$LafRadioButton.h>
#include <bug4987336$LafRadioButton$1.h>
#include <bug4987336.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug4987336 = ::bug4987336;
using $bug4987336$LafRadioButton$1 = ::bug4987336$LafRadioButton$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRadioButton = ::javax::swing::JRadioButton;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

void bug4987336$LafRadioButton::init$($bug4987336* this$0, $UIManager$LookAndFeelInfo* lafInfo) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$var($String, var$0, $nc(lafInfo)->getName());
	$JRadioButton::init$(var$0, $$nc(lafInfo->getName())->equals($($$nc($UIManager::getLookAndFeel())->getName())));
	addActionListener($$new($bug4987336$LafRadioButton$1, this, this$0, lafInfo));
}

bug4987336$LafRadioButton::bug4987336$LafRadioButton() {
}

$Class* bug4987336$LafRadioButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4987336;", nullptr, $FINAL | $SYNTHETIC, $field(bug4987336$LafRadioButton, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4987336;Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(bug4987336$LafRadioButton, init$, void, $bug4987336*, $UIManager$LookAndFeelInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4987336$LafRadioButton", "bug4987336", "LafRadioButton", $PRIVATE},
		{"bug4987336$LafRadioButton$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4987336$LafRadioButton",
		"javax.swing.JRadioButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4987336"
	};
	$loadClass(bug4987336$LafRadioButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4987336$LafRadioButton));
	});
	return class$;
}

$Class* bug4987336$LafRadioButton::class$ = nullptr;