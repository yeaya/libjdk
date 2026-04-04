#include <java/beans/MetaData$javax_swing_JMenu_PersistenceDelegate.h>
#include <java/awt/Component.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <javax/swing/JMenu.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;

namespace java {
	namespace beans {

void MetaData$javax_swing_JMenu_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$javax_swing_JMenu_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($JMenu, m, $cast($JMenu, oldInstance));
	$var($ComponentArray, c, $nc(m)->getMenuComponents());
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {c->get(i)}), out);
	}
}

MetaData$javax_swing_JMenu_PersistenceDelegate::MetaData$javax_swing_JMenu_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_JMenu_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$javax_swing_JMenu_PersistenceDelegate, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$javax_swing_JMenu_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$javax_swing_JMenu_PersistenceDelegate", "java.beans.MetaData", "javax_swing_JMenu_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$javax_swing_JMenu_PersistenceDelegate",
		"java.beans.DefaultPersistenceDelegate",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.MetaData"
	};
	$loadClass(MetaData$javax_swing_JMenu_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$javax_swing_JMenu_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$javax_swing_JMenu_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java