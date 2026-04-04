#include <java/beans/MetaData$java_awt_MenuShortcut_PersistenceDelegate.h>
#include <java/awt/MenuShortcut.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <jcpp.h>

using $MenuShortcut = ::java::awt::MenuShortcut;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$java_awt_MenuShortcut_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_awt_MenuShortcut_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_awt_MenuShortcut_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($MenuShortcut, m, $cast($MenuShortcut, oldInstance));
	$var($Object, var$0, $nc(m)->getClass());
	$var($String, var$1, "new"_s);
	return $new($Expression, oldInstance, var$0, var$1, $$new($ObjectArray, {
		$($Integer::valueOf(m->getKey())),
		$($Boolean::valueOf(m->usesShiftModifier()))
	}));
}

MetaData$java_awt_MenuShortcut_PersistenceDelegate::MetaData$java_awt_MenuShortcut_PersistenceDelegate() {
}

$Class* MetaData$java_awt_MenuShortcut_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_awt_MenuShortcut_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$java_awt_MenuShortcut_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(MetaData$java_awt_MenuShortcut_PersistenceDelegate, mutatesTo, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_awt_MenuShortcut_PersistenceDelegate", "java.beans.MetaData", "java_awt_MenuShortcut_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_awt_MenuShortcut_PersistenceDelegate",
		"java.beans.PersistenceDelegate",
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
	$loadClass(MetaData$java_awt_MenuShortcut_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_awt_MenuShortcut_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_awt_MenuShortcut_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java