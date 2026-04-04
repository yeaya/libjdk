#include <javax/swing/plaf/TableUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void TableUI::init$() {
	$ComponentUI::init$();
}

TableUI::TableUI() {
}

$Class* TableUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(TableUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.TableUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TableUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableUI);
	});
	return class$;
}

$Class* TableUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax