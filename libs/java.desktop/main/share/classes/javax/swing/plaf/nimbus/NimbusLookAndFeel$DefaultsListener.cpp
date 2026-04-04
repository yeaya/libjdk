#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$DefaultsListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/util/Map.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void NimbusLookAndFeel$DefaultsListener::init$($NimbusLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

void NimbusLookAndFeel$DefaultsListener::propertyChange($PropertyChangeEvent* ev) {
	$useLocalObjectStack();
	$var($String, key, $nc(ev)->getPropertyName());
	if ("UIDefaults"_s->equals(key)) {
		$set(this->this$0, compiledDefaults, nullptr);
	} else {
		this->this$0->addDefault(key, $(ev->getNewValue()));
	}
}

NimbusLookAndFeel$DefaultsListener::NimbusLookAndFeel$DefaultsListener() {
}

$Class* NimbusLookAndFeel$DefaultsListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusLookAndFeel$DefaultsListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;)V", nullptr, $PRIVATE, $method(NimbusLookAndFeel$DefaultsListener, init$, void, $NimbusLookAndFeel*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(NimbusLookAndFeel$DefaultsListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusLookAndFeel$DefaultsListener", "javax.swing.plaf.nimbus.NimbusLookAndFeel", "DefaultsListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusLookAndFeel$DefaultsListener",
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
		"javax.swing.plaf.nimbus.NimbusLookAndFeel"
	};
	$loadClass(NimbusLookAndFeel$DefaultsListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusLookAndFeel$DefaultsListener);
	});
	return class$;
}

$Class* NimbusLookAndFeel$DefaultsListener::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax