#include <sun/awt/windows/WPrinterJob$PrintToFileErrorDialog.h>
#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Label.h>
#include <java/awt/Panel.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <jcpp.h>

using $Button = ::java::awt::Button;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Label = ::java::awt::Label;
using $Panel = ::java::awt::Panel;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;

namespace sun {
	namespace awt {
		namespace windows {

$String* WPrinterJob$PrintToFileErrorDialog::toString() {
	return this->$Dialog::toString();
}

int32_t WPrinterJob$PrintToFileErrorDialog::hashCode() {
	return this->$Dialog::hashCode();
}

bool WPrinterJob$PrintToFileErrorDialog::equals(Object$* arg0) {
	return this->$Dialog::equals(arg0);
}

$Object* WPrinterJob$PrintToFileErrorDialog::clone() {
	return this->$Dialog::clone();
}

void WPrinterJob$PrintToFileErrorDialog::finalize() {
	this->$Dialog::finalize();
}

void WPrinterJob$PrintToFileErrorDialog::init$($WPrinterJob* this$0, $Frame* parent, $String* title, $String* message, $String* buttonText) {
	$set(this, this$0, this$0);
	$Dialog::init$(parent, title, true);
	init(parent, title, message, buttonText);
}

void WPrinterJob$PrintToFileErrorDialog::init$($WPrinterJob* this$0, $Dialog* parent, $String* title, $String* message, $String* buttonText) {
	$set(this, this$0, this$0);
	$Dialog::init$(parent, title, true);
	init(parent, title, message, buttonText);
}

void WPrinterJob$PrintToFileErrorDialog::init($Component* parent, $String* title, $String* message, $String* buttonText) {
	$useLocalObjectStack();
	$var($Panel, p, $new($Panel));
	add("Center"_s, $$new($Label, message));
	$var($Button, btn, $new($Button, buttonText));
	btn->addActionListener(this);
	p->add(btn);
	add("South"_s, p);
	pack();
	$var($Dimension, dDim, getSize());
	if (parent != nullptr) {
		$var($Rectangle, fRect, parent->getBounds());
		setLocation($nc(fRect)->x + (($nc(fRect)->width - $nc(dDim)->width) / 2), $nc(fRect)->y + (($nc(fRect)->height - $nc(dDim)->height) / 2));
	}
}

void WPrinterJob$PrintToFileErrorDialog::actionPerformed($ActionEvent* event) {
	setVisible(false);
	dispose();
	return;
}

WPrinterJob$PrintToFileErrorDialog::WPrinterJob$PrintToFileErrorDialog() {
}

$Class* WPrinterJob$PrintToFileErrorDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(WPrinterJob$PrintToFileErrorDialog, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/awt/windows/WPrinterJob;Ljava/awt/Frame;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(WPrinterJob$PrintToFileErrorDialog, init$, void, $WPrinterJob*, $Frame*, $String*, $String*, $String*)},
		{"<init>", "(Lsun/awt/windows/WPrinterJob;Ljava/awt/Dialog;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(WPrinterJob$PrintToFileErrorDialog, init$, void, $WPrinterJob*, $Dialog*, $String*, $String*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(WPrinterJob$PrintToFileErrorDialog, actionPerformed, void, $ActionEvent*)},
		{"init", "(Ljava/awt/Component;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(WPrinterJob$PrintToFileErrorDialog, init, void, $Component*, $String*, $String*, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WPrinterJob$PrintToFileErrorDialog", "sun.awt.windows.WPrinterJob", "PrintToFileErrorDialog", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WPrinterJob$PrintToFileErrorDialog",
		"java.awt.Dialog",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WPrinterJob"
	};
	$loadClass(WPrinterJob$PrintToFileErrorDialog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WPrinterJob$PrintToFileErrorDialog));
	});
	return class$;
}

$Class* WPrinterJob$PrintToFileErrorDialog::class$ = nullptr;

		} // windows
	} // awt
} // sun