#include <javax/swing/undo/StateEditable.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

#undef RCSID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace javax {
	namespace swing {
		namespace undo {

$String* StateEditable::RCSID = nullptr;

void StateEditable::clinit$($Class* clazz) {
	$assignStatic(StateEditable::RCSID, "$Id: StateEditable.java,v 1.2 1997/09/08 19:39:08 marklin Exp $"_s);
}

$Class* StateEditable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RCSID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StateEditable, RCSID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"restoreState", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(StateEditable, restoreState, void, $Hashtable*)},
		{"storeState", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(StateEditable, storeState, void, $Hashtable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.undo.StateEditable",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StateEditable, name, initialize, &classInfo$$, StateEditable::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StateEditable);
	});
	return class$;
}

$Class* StateEditable::class$ = nullptr;

		} // undo
	} // swing
} // javax