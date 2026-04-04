#include <javax/swing/plaf/TableHeaderUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void TableHeaderUI::init$() {
	$ComponentUI::init$();
}

TableHeaderUI::TableHeaderUI() {
}

$Class* TableHeaderUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(TableHeaderUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.TableHeaderUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TableHeaderUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableHeaderUI);
	});
	return class$;
}

$Class* TableHeaderUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax