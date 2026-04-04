#include <Test6348456.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/colorchooser/DefaultColorSelectionModel.h>
#include <jcpp.h>

#undef BLACK
#undef CENTER
#undef NORTH
#undef RED
#undef WHITE

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;
using $DefaultColorSelectionModel = ::javax::swing::colorchooser::DefaultColorSelectionModel;

$String* Test6348456::toString() {
	 return this->$JApplet::toString();
}

int32_t Test6348456::hashCode() {
	 return this->$JApplet::hashCode();
}

bool Test6348456::equals(Object$* arg0) {
	 return this->$JApplet::equals(arg0);
}

$Object* Test6348456::clone() {
	 return this->$JApplet::clone();
}

void Test6348456::finalize() {
	this->$JApplet::finalize();
}

$DefaultColorSelectionModel* Test6348456::WHITE = nullptr;
$DefaultColorSelectionModel* Test6348456::BLACK = nullptr;

void Test6348456::init$() {
	$JApplet::init$();
}

void Test6348456::init() {
	$var($JButton, button, $new($JButton, "Swap models"_s));
	button->addActionListener(this);
	$init($Color);
	$set(this, chooser, $new($JColorChooser, $Color::RED));
	this->chooser->setSelectionModel(Test6348456::WHITE);
	$init($BorderLayout);
	add($BorderLayout::NORTH, button);
	add($BorderLayout::CENTER, this->chooser);
}

void Test6348456::actionPerformed($ActionEvent* event) {
	$nc(this->chooser)->setSelectionModel($equals($nc(this->chooser)->getSelectionModel(), Test6348456::BLACK) ? Test6348456::WHITE : Test6348456::BLACK);
}

void Test6348456::clinit$($Class* clazz) {
	$init($Color);
	$assignStatic(Test6348456::WHITE, $new($DefaultColorSelectionModel, $Color::WHITE));
	$assignStatic(Test6348456::BLACK, $new($DefaultColorSelectionModel, $Color::BLACK));
}

Test6348456::Test6348456() {
}

$Class* Test6348456::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WHITE", "Ljavax/swing/colorchooser/DefaultColorSelectionModel;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6348456, WHITE)},
		{"BLACK", "Ljavax/swing/colorchooser/DefaultColorSelectionModel;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6348456, BLACK)},
		{"chooser", "Ljavax/swing/JColorChooser;", nullptr, $PRIVATE, $field(Test6348456, chooser)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6348456, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test6348456, actionPerformed, void, $ActionEvent*)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Test6348456, init, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"Test6348456",
		"javax.swing.JApplet",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6348456, name, initialize, &classInfo$$, Test6348456::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6348456));
	});
	return class$;
}

$Class* Test6348456::class$ = nullptr;