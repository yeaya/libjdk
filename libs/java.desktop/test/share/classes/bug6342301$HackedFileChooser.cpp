#include <bug6342301$HackedFileChooser.h>
#include <bug6342301.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

void bug6342301$HackedFileChooser::init$() {
	$JFileChooser::init$();
}

void bug6342301$HackedFileChooser::setUI($ComponentUI* newUI) {
	$JFileChooser::setUI(newUI);
}

bug6342301$HackedFileChooser::bug6342301$HackedFileChooser() {
}

$Class* bug6342301$HackedFileChooser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(bug6342301$HackedFileChooser, init$, void)},
		{"setUI", "(Ljavax/swing/plaf/ComponentUI;)V", nullptr, $PUBLIC, $virtualMethod(bug6342301$HackedFileChooser, setUI, void, $ComponentUI*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6342301$HackedFileChooser", "bug6342301", "HackedFileChooser", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6342301$HackedFileChooser",
		"javax.swing.JFileChooser",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6342301"
	};
	$loadClass(bug6342301$HackedFileChooser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6342301$HackedFileChooser));
	});
	return class$;
}

$Class* bug6342301$HackedFileChooser::class$ = nullptr;