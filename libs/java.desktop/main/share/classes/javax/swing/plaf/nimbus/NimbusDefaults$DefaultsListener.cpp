#include <javax/swing/plaf/nimbus/NimbusDefaults$DefaultsListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$ColorTree.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NimbusDefaults = ::javax::swing::plaf::nimbus::NimbusDefaults;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void NimbusDefaults$DefaultsListener::init$($NimbusDefaults* this$0) {
	$set(this, this$0, this$0);
}

void NimbusDefaults$DefaultsListener::propertyChange($PropertyChangeEvent* evt) {
	if ("lookAndFeel"_s->equals($($nc(evt)->getPropertyName()))) {
		$nc(this->this$0->colorTree)->update();
	}
}

NimbusDefaults$DefaultsListener::NimbusDefaults$DefaultsListener() {
}

$Class* NimbusDefaults$DefaultsListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/nimbus/NimbusDefaults;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusDefaults$DefaultsListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusDefaults;)V", nullptr, $PRIVATE, $method(NimbusDefaults$DefaultsListener, init$, void, $NimbusDefaults*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(NimbusDefaults$DefaultsListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusDefaults$DefaultsListener", "javax.swing.plaf.nimbus.NimbusDefaults", "DefaultsListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusDefaults$DefaultsListener",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.NimbusDefaults"
	};
	$loadClass(NimbusDefaults$DefaultsListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusDefaults$DefaultsListener);
	});
	return class$;
}

$Class* NimbusDefaults$DefaultsListener::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax