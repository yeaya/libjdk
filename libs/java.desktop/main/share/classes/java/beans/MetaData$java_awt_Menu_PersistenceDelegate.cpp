#include <java/beans/MetaData$java_awt_Menu_PersistenceDelegate.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuItem.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$java_awt_Menu_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_Menu_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($Menu, m, $cast($Menu, oldInstance));
	$var($Menu, n, $cast($Menu, newInstance));
	for (int32_t i = $nc(n)->getItemCount(); i < $nc(m)->getItemCount(); ++i) {
		invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {$(m->getItem(i))}), out);
	}
}

MetaData$java_awt_Menu_PersistenceDelegate::MetaData$java_awt_Menu_PersistenceDelegate() {
}

$Class* MetaData$java_awt_Menu_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_awt_Menu_PersistenceDelegate, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$java_awt_Menu_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_awt_Menu_PersistenceDelegate", "java.beans.MetaData", "java_awt_Menu_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_awt_Menu_PersistenceDelegate",
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
	$loadClass(MetaData$java_awt_Menu_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_awt_Menu_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_awt_Menu_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java