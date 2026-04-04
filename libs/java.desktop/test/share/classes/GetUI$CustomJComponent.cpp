#include <GetUI$CustomJComponent.h>
#include <GetUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

void GetUI$CustomJComponent::init$() {
	$JComponent::init$();
}

$ComponentUI* GetUI$CustomJComponent::getUI() {
	return $JComponent::getUI();
}

void GetUI$CustomJComponent::setUI($ComponentUI* ui) {
	$JComponent::setUI(ui);
}

GetUI$CustomJComponent::GetUI$CustomJComponent() {
}

$Class* GetUI$CustomJComponent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GetUI$CustomJComponent, init$, void)},
		{"getUI", "()Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC, $virtualMethod(GetUI$CustomJComponent, getUI, $ComponentUI*)},
		{"setUI", "(Ljavax/swing/plaf/ComponentUI;)V", nullptr, $PUBLIC, $virtualMethod(GetUI$CustomJComponent, setUI, void, $ComponentUI*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetUI$CustomJComponent", "GetUI", "CustomJComponent", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetUI$CustomJComponent",
		"javax.swing.JComponent",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetUI"
	};
	$loadClass(GetUI$CustomJComponent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GetUI$CustomJComponent));
	});
	return class$;
}

$Class* GetUI$CustomJComponent::class$ = nullptr;