#include <javax/swing/plaf/nimbus/TableHeaderRendererSortedState.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void TableHeaderRendererSortedState::init$() {
	$State::init$("Sorted"_s);
}

bool TableHeaderRendererSortedState::isInState($JComponent* c) {
	$var($String, sortOrder, $cast($String, $nc(c)->getClientProperty("Table.sortOrder"_s)));
	bool var$0 = sortOrder != nullptr;
	if (var$0) {
		bool var$1 = "ASCENDING"_s->equals(sortOrder);
		var$0 = var$1 || "DESCENDING"_s->equals(sortOrder);
	}
	return var$0;
}

TableHeaderRendererSortedState::TableHeaderRendererSortedState() {
}

$Class* TableHeaderRendererSortedState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TableHeaderRendererSortedState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(TableHeaderRendererSortedState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.TableHeaderRendererSortedState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(TableHeaderRendererSortedState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableHeaderRendererSortedState);
	});
	return class$;
}

$Class* TableHeaderRendererSortedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax