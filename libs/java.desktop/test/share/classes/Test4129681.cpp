#include <Test4129681.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ItemEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef CENTER
#undef DESELECTED
#undef NORTH

using $BorderLayout = ::java::awt::BorderLayout;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JApplet = ::javax::swing::JApplet;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JLabel = ::javax::swing::JLabel;

$String* Test4129681::toString() {
	return this->$JApplet::toString();
}

int32_t Test4129681::hashCode() {
	return this->$JApplet::hashCode();
}

bool Test4129681::equals(Object$* arg0) {
	return this->$JApplet::equals(arg0);
}

$Object* Test4129681::clone() {
	return this->$JApplet::clone();
}

void Test4129681::finalize() {
	this->$JApplet::finalize();
}

void Test4129681::init$() {
	$JApplet::init$();
}

void Test4129681::init() {
	$useLocalObjectStack();
	$var($JCheckBox, check, $new($JCheckBox, "disable"_s));
	check->addItemListener(this);
	$set(this, label, $new($JLabel, "message"_s));
	this->label->setBorder($($BorderFactory::createTitledBorder("label"_s)));
	$nc(this->label)->setEnabled(!check->isSelected());
	$init($BorderLayout);
	add($BorderLayout::NORTH, check);
	add($BorderLayout::CENTER, this->label);
}

void Test4129681::itemStateChanged($ItemEvent* event) {
	$nc(this->label)->setEnabled($ItemEvent::DESELECTED == $nc(event)->getStateChange());
}

Test4129681::Test4129681() {
}

$Class* Test4129681::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(Test4129681, label)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4129681, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Test4129681, init, void)},
		{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test4129681, itemStateChanged, void, $ItemEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4129681",
		"javax.swing.JApplet",
		"java.awt.event.ItemListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test4129681, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test4129681));
	});
	return class$;
}

$Class* Test4129681::class$ = nullptr;