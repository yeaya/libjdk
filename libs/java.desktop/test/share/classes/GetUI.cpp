#include <GetUI.h>
#include <GetUI$1.h>
#include <GetUI$CustomJComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $GetUI$1 = ::GetUI$1;
using $GetUI$CustomJComponent = ::GetUI$CustomJComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

void GetUI::init$() {
}

void GetUI::main($StringArray* args) {
	$useLocalObjectStack();
	$var($GetUI$CustomJComponent, component, $new($GetUI$CustomJComponent));
	$var($ComponentUI, ui, $new($GetUI$1));
	component->setUI(ui);
	$var($ComponentUI, actual, component->getUI());
	if (actual != ui) {
		$nc($System::err)->println($$str({"Expected: "_s, ui}));
		$System::err->println($$str({"Actual: "_s, actual}));
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

GetUI::GetUI() {
}

$Class* GetUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetUI, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetUI, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetUI$CustomJComponent", "GetUI", "CustomJComponent", $PRIVATE | $STATIC},
		{"GetUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"GetUI",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetUI$CustomJComponent,GetUI$1"
	};
	$loadClass(GetUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetUI);
	});
	return class$;
}

$Class* GetUI::class$ = nullptr;