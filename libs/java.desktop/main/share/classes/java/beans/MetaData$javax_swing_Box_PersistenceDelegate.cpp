#include <java/beans/MetaData$javax_swing_Box_PersistenceDelegate.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <javax/swing/Box.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Box = ::javax::swing::Box;

namespace java {
	namespace beans {

void MetaData$javax_swing_Box_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

bool MetaData$javax_swing_Box_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	$useLocalObjectStack();
	bool var$0 = $DefaultPersistenceDelegate::mutatesTo(oldInstance, newInstance);
	return var$0 && $$nc(getAxis(oldInstance))->equals($(getAxis(newInstance)));
}

$Expression* MetaData$javax_swing_Box_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($Object, var$0, $nc($of(oldInstance))->getClass());
	$var($String, var$1, "new"_s);
	return $new($Expression, oldInstance, var$0, var$1, $$new($ObjectArray, {$(getAxis(oldInstance))}));
}

$Integer* MetaData$javax_swing_Box_PersistenceDelegate::getAxis(Object$* object) {
	$useLocalObjectStack();
	$var($Box, box, $cast($Box, object));
	return $cast($Integer, $MetaData::getPrivateFieldValue($($nc(box)->getLayout()), "javax.swing.BoxLayout.axis"_s));
}

MetaData$javax_swing_Box_PersistenceDelegate::MetaData$javax_swing_Box_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_Box_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$javax_swing_Box_PersistenceDelegate, init$, void)},
		{"getAxis", "(Ljava/lang/Object;)Ljava/lang/Integer;", nullptr, $PRIVATE, $method(MetaData$javax_swing_Box_PersistenceDelegate, getAxis, $Integer*, Object$*)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$javax_swing_Box_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(MetaData$javax_swing_Box_PersistenceDelegate, mutatesTo, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$javax_swing_Box_PersistenceDelegate", "java.beans.MetaData", "javax_swing_Box_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$javax_swing_Box_PersistenceDelegate",
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
	$loadClass(MetaData$javax_swing_Box_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$javax_swing_Box_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$javax_swing_Box_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java