#include <java/beans/MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <javax/swing/DefaultComboBoxModel.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;

namespace java {
	namespace beans {

void MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($DefaultComboBoxModel, m, $cast($DefaultComboBoxModel, oldInstance));
	for (int32_t i = 0; i < $nc(m)->getSize(); ++i) {
		invokeStatement(oldInstance, "addElement"_s, $$new($ObjectArray, {$(m->getElementAt(i))}), out);
	}
}

MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate", "java.beans.MetaData", "javax_swing_DefaultComboBoxModel_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate",
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
	$loadClass(MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java