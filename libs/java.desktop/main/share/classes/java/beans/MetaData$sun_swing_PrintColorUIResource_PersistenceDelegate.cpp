#include <java/beans/MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate.h>
#include <java/awt/Color.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

namespace java {
	namespace beans {

void MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($Color, color, $cast($Color, oldInstance));
	$var($ObjectArray, args, $new($ObjectArray, {$($Integer::valueOf($nc(color)->getRGB()))}));
	$load($ColorUIResource);
	return $new($Expression, color, $ColorUIResource::class$, "new"_s, args);
}

MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate() {
}

$Class* MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate, mutatesTo, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate", "java.beans.MetaData", "sun_swing_PrintColorUIResource_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate",
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
	$loadClass(MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java