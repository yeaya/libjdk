#include <Test6559154.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JDialog = ::javax::swing::JDialog;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

int32_t Test6559154::hashCode() {
	return this->$ActionListener::hashCode();
}

bool Test6559154::equals(Object$* arg0) {
	return this->$ActionListener::equals(arg0);
}

$Object* Test6559154::clone() {
	return this->$ActionListener::clone();
}

$String* Test6559154::toString() {
	return this->$ActionListener::toString();
}

void Test6559154::finalize() {
	this->$ActionListener::finalize();
}

void Test6559154::init$() {
}

void Test6559154::actionPerformed($ActionEvent* event) {
	if (this->dialog != nullptr) {
		this->dialog->dispose();
	}
}

void Test6559154::run() {
	$useLocalObjectStack();
	$var($Timer, timer, $new($Timer, 1000, this));
	timer->setRepeats(false);
	timer->start();
	$var($JColorChooser, chooser, $new($JColorChooser));
	setEnabledRecursive(chooser, false);
	$set(this, dialog, $new($JDialog));
	this->dialog->add(chooser);
	$nc(this->dialog)->setVisible(true);
}

void Test6559154::setEnabledRecursive($Container* container, bool enabled) {
	$init(Test6559154);
	$useLocalObjectStack();
	$var($ComponentArray, arr$, $nc(container)->getComponents());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Component, component, arr$->get(i$));
		{
			$nc(component)->setEnabled(enabled);
			if ($instanceOf($Container, component)) {
				setEnabledRecursive($cast($Container, component), enabled);
			}
		}
	}
}

void Test6559154::main($StringArray* args) {
	$init(Test6559154);
	$SwingUtilities::invokeAndWait($$new(Test6559154));
}

Test6559154::Test6559154() {
}

$Class* Test6559154::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE, $field(Test6559154, dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6559154, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test6559154, actionPerformed, void, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6559154, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6559154, run, void)},
		{"setEnabledRecursive", "(Ljava/awt/Container;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test6559154, setEnabledRecursive, void, $Container*, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6559154",
		"java.lang.Object",
		"java.awt.event.ActionListener,java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6559154, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6559154));
	});
	return class$;
}

$Class* Test6559154::class$ = nullptr;