#include <javax/swing/JComponent$ActionStandin.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef NAME

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

void JComponent$ActionStandin::init$($JComponent* this$0, $ActionListener* actionListener, $String* command) {
	$set(this, this$0, this$0);
	$set(this, actionListener, actionListener);
	if ($instanceOf($Action, actionListener)) {
		$set(this, action, $cast($Action, actionListener));
	} else {
		$set(this, action, nullptr);
	}
	$set(this, command, command);
}

$Object* JComponent$ActionStandin::getValue($String* key) {
	if (key != nullptr) {
		$init($Action);
		if (key->equals($Action::ACTION_COMMAND_KEY)) {
			return $of(this->command);
		}
		if (this->action != nullptr) {
			return this->action->getValue(key);
		}
		if (key->equals($Action::NAME)) {
			return $of("ActionStandin"_s);
		}
	}
	return nullptr;
}

bool JComponent$ActionStandin::isEnabled() {
	if (this->actionListener == nullptr) {
		return false;
	}
	if (this->action == nullptr) {
		return true;
	}
	return $nc(this->action)->isEnabled();
}

void JComponent$ActionStandin::actionPerformed($ActionEvent* ae) {
	if (this->actionListener != nullptr) {
		this->actionListener->actionPerformed(ae);
	}
}

void JComponent$ActionStandin::putValue($String* key, Object$* value) {
}

void JComponent$ActionStandin::setEnabled(bool b) {
}

void JComponent$ActionStandin::addPropertyChangeListener($PropertyChangeListener* listener) {
}

void JComponent$ActionStandin::removePropertyChangeListener($PropertyChangeListener* listener) {
}

JComponent$ActionStandin::JComponent$ActionStandin() {
}

$Class* JComponent$ActionStandin::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JComponent$ActionStandin, this$0)},
		{"actionListener", "Ljava/awt/event/ActionListener;", nullptr, $PRIVATE | $FINAL, $field(JComponent$ActionStandin, actionListener)},
		{"command", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JComponent$ActionStandin, command)},
		{"action", "Ljavax/swing/Action;", nullptr, $PRIVATE | $FINAL, $field(JComponent$ActionStandin, action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;Ljava/awt/event/ActionListener;Ljava/lang/String;)V", nullptr, 0, $method(JComponent$ActionStandin, init$, void, $JComponent*, $ActionListener*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$ActionStandin, actionPerformed, void, $ActionEvent*)},
		{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$ActionStandin, addPropertyChangeListener, void, $PropertyChangeListener*)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JComponent$ActionStandin, getValue, $Object*, $String*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JComponent$ActionStandin, isEnabled, bool)},
		{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$ActionStandin, putValue, void, $String*, Object$*)},
		{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$ActionStandin, removePropertyChangeListener, void, $PropertyChangeListener*)},
		{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JComponent$ActionStandin, setEnabled, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComponent$ActionStandin", "javax.swing.JComponent", "ActionStandin", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.JComponent$ActionStandin",
		"java.lang.Object",
		"javax.swing.Action",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComponent"
	};
	$loadClass(JComponent$ActionStandin, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComponent$ActionStandin);
	});
	return class$;
}

$Class* JComponent$ActionStandin::class$ = nullptr;

	} // swing
} // javax