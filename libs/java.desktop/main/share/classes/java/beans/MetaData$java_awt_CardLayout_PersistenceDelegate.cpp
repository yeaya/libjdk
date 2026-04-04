#include <java/beans/MetaData$java_awt_CardLayout_PersistenceDelegate.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;

namespace java {
	namespace beans {

void MetaData$java_awt_CardLayout_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_CardLayout_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	if ($$nc(getVector(newInstance))->isEmpty()) {
		$var($Iterator, i$, $$nc(getVector(oldInstance))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, card, i$->next());
			{
				$var($ObjectArray, args, $new($ObjectArray, {
					$($MetaData::getPrivateFieldValue(card, "java.awt.CardLayout$Card.name"_s)),
					$($MetaData::getPrivateFieldValue(card, "java.awt.CardLayout$Card.comp"_s))
				}));
				invokeStatement(oldInstance, "addLayoutComponent"_s, args, out);
			}
		}
	}
}

bool MetaData$java_awt_CardLayout_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	bool var$0 = $DefaultPersistenceDelegate::mutatesTo(oldInstance, newInstance);
	return var$0 && $$nc(getVector(newInstance))->isEmpty();
}

$Vector* MetaData$java_awt_CardLayout_PersistenceDelegate::getVector(Object$* instance) {
	$init(MetaData$java_awt_CardLayout_PersistenceDelegate);
	return $cast($Vector, $MetaData::getPrivateFieldValue(instance, "java.awt.CardLayout.vector"_s));
}

MetaData$java_awt_CardLayout_PersistenceDelegate::MetaData$java_awt_CardLayout_PersistenceDelegate() {
}

$Class* MetaData$java_awt_CardLayout_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_awt_CardLayout_PersistenceDelegate, init$, void)},
		{"getVector", "(Ljava/lang/Object;)Ljava/util/Vector;", "(Ljava/lang/Object;)Ljava/util/Vector<*>;", $PRIVATE | $STATIC, $staticMethod(MetaData$java_awt_CardLayout_PersistenceDelegate, getVector, $Vector*, Object$*)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$java_awt_CardLayout_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(MetaData$java_awt_CardLayout_PersistenceDelegate, mutatesTo, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_awt_CardLayout_PersistenceDelegate", "java.beans.MetaData", "java_awt_CardLayout_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_awt_CardLayout_PersistenceDelegate",
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
	$loadClass(MetaData$java_awt_CardLayout_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_awt_CardLayout_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_awt_CardLayout_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java