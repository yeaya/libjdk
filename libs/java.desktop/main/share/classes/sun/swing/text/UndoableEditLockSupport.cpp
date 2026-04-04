#include <sun/swing/text/UndoableEditLockSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {
		namespace text {

$Class* UndoableEditLockSupport::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"lockEdit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEditLockSupport, lockEdit, void)},
		{"unlockEdit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UndoableEditLockSupport, unlockEdit, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.text.UndoableEditLockSupport",
		nullptr,
		"javax.swing.undo.UndoableEdit",
		nullptr,
		methodInfos$$
	};
	$loadClass(UndoableEditLockSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UndoableEditLockSupport);
	});
	return class$;
}

$Class* UndoableEditLockSupport::class$ = nullptr;

		} // text
	} // swing
} // sun