#include <Test4222508.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ItemEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JColorChooser.h>
#include <jcpp.h>

#undef CENTER
#undef NORTH

using $BorderLayout = ::java::awt::BorderLayout;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JColorChooser = ::javax::swing::JColorChooser;

$String* Test4222508::toString() {
	 return this->$JApplet::toString();
}

int32_t Test4222508::hashCode() {
	 return this->$JApplet::hashCode();
}

bool Test4222508::equals(Object$* arg0) {
	 return this->$JApplet::equals(arg0);
}

$Object* Test4222508::clone() {
	 return this->$JApplet::clone();
}

void Test4222508::finalize() {
	this->$JApplet::finalize();
}

void Test4222508::init$() {
	$JApplet::init$();
}

void Test4222508::init() {
	$set(this, chooser, $new($JColorChooser));
	$set(this, checkbox, $new($JCheckBox, "Enable the color chooser below"_s, true));
	this->checkbox->addItemListener(this);
	$init($BorderLayout);
	add($BorderLayout::NORTH, this->checkbox);
	add($BorderLayout::CENTER, this->chooser);
}

void Test4222508::itemStateChanged($ItemEvent* event) {
	$nc(this->chooser)->setEnabled($nc(this->checkbox)->isSelected());
}

Test4222508::Test4222508() {
}

$Class* Test4222508::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"checkbox", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE, $field(Test4222508, checkbox)},
		{"chooser", "Ljavax/swing/JColorChooser;", nullptr, $PRIVATE, $field(Test4222508, chooser)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4222508, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Test4222508, init, void)},
		{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test4222508, itemStateChanged, void, $ItemEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"Test4222508",
		"javax.swing.JApplet",
		"java.awt.event.ItemListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test4222508, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test4222508));
	});
	return class$;
}

$Class* Test4222508::class$ = nullptr;