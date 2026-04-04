#include <java/beans/MetaData$java_awt_Choice_PersistenceDelegate.h>
#include <java/awt/Choice.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <jcpp.h>

using $Choice = ::java::awt::Choice;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$java_awt_Choice_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_Choice_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($Choice, m, $cast($Choice, oldInstance));
	$var($Choice, n, $cast($Choice, newInstance));
	for (int32_t i = $nc(n)->getItemCount(); i < $nc(m)->getItemCount(); ++i) {
		invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {$(m->getItem(i))}), out);
	}
}

MetaData$java_awt_Choice_PersistenceDelegate::MetaData$java_awt_Choice_PersistenceDelegate() {
}

$Class* MetaData$java_awt_Choice_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_awt_Choice_PersistenceDelegate, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$java_awt_Choice_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_awt_Choice_PersistenceDelegate", "java.beans.MetaData", "java_awt_Choice_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_awt_Choice_PersistenceDelegate",
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
	$loadClass(MetaData$java_awt_Choice_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_awt_Choice_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_awt_Choice_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java