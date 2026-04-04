#include <java/awt/FocusManager.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void FocusManager::init$() {
}

FocusManager::FocusManager() {
}

$Class* FocusManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"focusRoot", "Ljava/awt/Container;", nullptr, 0, $field(FocusManager, focusRoot)},
		{"focusOwner", "Ljava/awt/Component;", nullptr, 0, $field(FocusManager, focusOwner)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FocusManager, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FocusManager, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.FocusManager",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FocusManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FocusManager);
	});
	return class$;
}

$Class* FocusManager::class$ = nullptr;

	} // awt
} // java