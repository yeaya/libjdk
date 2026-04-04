#include <HeadlessMenuSelectionManager.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

void HeadlessMenuSelectionManager::init$() {
}

void HeadlessMenuSelectionManager::main($StringArray* args) {
	$var($MenuSelectionManager, msm, $new($MenuSelectionManager));
	$assign(msm, $MenuSelectionManager::defaultManager());
}

HeadlessMenuSelectionManager::HeadlessMenuSelectionManager() {
}

$Class* HeadlessMenuSelectionManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessMenuSelectionManager, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessMenuSelectionManager, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessMenuSelectionManager",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessMenuSelectionManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessMenuSelectionManager);
	});
	return class$;
}

$Class* HeadlessMenuSelectionManager::class$ = nullptr;