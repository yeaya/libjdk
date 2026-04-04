#include <javax/swing/colorchooser/AbstractColorChooserPanel$1.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

void AbstractColorChooserPanel$1::init$($AbstractColorChooserPanel* this$0) {
	$set(this, this$0, this$0);
}

void AbstractColorChooserPanel$1::propertyChange($PropertyChangeEvent* event) {
	$var($Object, value, $nc(event)->getNewValue());
	if ($instanceOf($Boolean, value)) {
		this->this$0->setEnabled($cast($Boolean, value)->booleanValue());
	}
}

AbstractColorChooserPanel$1::AbstractColorChooserPanel$1() {
}

$Class* AbstractColorChooserPanel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractColorChooserPanel$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/colorchooser/AbstractColorChooserPanel;)V", nullptr, 0, $method(AbstractColorChooserPanel$1, init$, void, $AbstractColorChooserPanel*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AbstractColorChooserPanel$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.colorchooser.AbstractColorChooserPanel",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.colorchooser.AbstractColorChooserPanel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.colorchooser.AbstractColorChooserPanel$1",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.colorchooser.AbstractColorChooserPanel"
	};
	$loadClass(AbstractColorChooserPanel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractColorChooserPanel$1);
	});
	return class$;
}

$Class* AbstractColorChooserPanel$1::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax