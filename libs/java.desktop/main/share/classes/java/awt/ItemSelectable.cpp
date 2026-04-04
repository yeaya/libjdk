#include <java/awt/ItemSelectable.h>
#include <java/awt/event/ItemListener.h>
#include <jcpp.h>

using $ItemListener = ::java::awt::event::ItemListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* ItemSelectable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemSelectable, addItemListener, void, $ItemListener*)},
		{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemSelectable, getSelectedObjects, $ObjectArray*)},
		{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemSelectable, removeItemListener, void, $ItemListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.ItemSelectable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ItemSelectable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ItemSelectable);
	});
	return class$;
}

$Class* ItemSelectable::class$ = nullptr;

	} // awt
} // java