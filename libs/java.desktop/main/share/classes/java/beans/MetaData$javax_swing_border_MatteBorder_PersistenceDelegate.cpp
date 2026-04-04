#include <java/beans/MetaData$javax_swing_border_MatteBorder_PersistenceDelegate.h>
#include <java/awt/Color.h>
#include <java/awt/Insets.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <javax/swing/Icon.h>
#include <javax/swing/border/MatteBorder.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MatteBorder = ::javax::swing::border::MatteBorder;

namespace java {
	namespace beans {

void MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

$Expression* MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($MatteBorder, border, $cast($MatteBorder, oldInstance));
	$var($Insets, insets, $nc(border)->getBorderInsets());
	$var($Object, object, border->getTileIcon());
	if (object == nullptr) {
		$assign(object, border->getMatteColor());
	}
	$var($ObjectArray, args, $new($ObjectArray, {
		$($Integer::valueOf($nc(insets)->top)),
		$($Integer::valueOf($nc(insets)->left)),
		$($Integer::valueOf($nc(insets)->bottom)),
		$($Integer::valueOf($nc(insets)->right)),
		object
	}));
	return $new($Expression, border, $of(border)->getClass(), "new"_s, args);
}

MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::MetaData$javax_swing_border_MatteBorder_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$javax_swing_border_MatteBorder_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$javax_swing_border_MatteBorder_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$javax_swing_border_MatteBorder_PersistenceDelegate", "java.beans.MetaData", "javax_swing_border_MatteBorder_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$javax_swing_border_MatteBorder_PersistenceDelegate",
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
	$loadClass(MetaData$javax_swing_border_MatteBorder_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$javax_swing_border_MatteBorder_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$javax_swing_border_MatteBorder_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java