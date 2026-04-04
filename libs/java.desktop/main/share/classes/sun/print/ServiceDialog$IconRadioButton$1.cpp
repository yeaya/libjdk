#include <sun/print/ServiceDialog$IconRadioButton$1.h>
#include <java/net/URL.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <sun/print/ServiceDialog$IconRadioButton.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $ServiceDialog$IconRadioButton = ::sun::print::ServiceDialog$IconRadioButton;

namespace sun {
	namespace print {

void ServiceDialog$IconRadioButton$1::init$($ServiceDialog$IconRadioButton* this$1, $ServiceDialog* val$this$0, $URL* val$imgURL) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$set(this, val$imgURL, val$imgURL);
}

$Object* ServiceDialog$IconRadioButton$1::run() {
	$var($Icon, icon, $new($ImageIcon, this->val$imgURL));
	return icon;
}

ServiceDialog$IconRadioButton$1::ServiceDialog$IconRadioButton$1() {
}

$Class* ServiceDialog$IconRadioButton$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/print/ServiceDialog$IconRadioButton;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$IconRadioButton$1, this$1)},
		{"val$imgURL", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$IconRadioButton$1, val$imgURL)},
		{"val$this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$IconRadioButton$1, val$this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/ServiceDialog$IconRadioButton;Lsun/print/ServiceDialog;Ljava/net/URL;)V", "()V", 0, $method(ServiceDialog$IconRadioButton$1, init$, void, $ServiceDialog$IconRadioButton*, $ServiceDialog*, $URL*)},
		{"run", "()Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$IconRadioButton$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.ServiceDialog$IconRadioButton",
		"<init>",
		"(Lsun/print/ServiceDialog;Ljava/lang/String;Ljava/lang/String;ZLjavax/swing/ButtonGroup;Ljava/awt/event/ActionListener;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.ServiceDialog$IconRadioButton", "sun.print.ServiceDialog", "IconRadioButton", $PRIVATE},
		{"sun.print.ServiceDialog$IconRadioButton$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.ServiceDialog$IconRadioButton$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/swing/Icon;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.ServiceDialog"
	};
	$loadClass(ServiceDialog$IconRadioButton$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceDialog$IconRadioButton$1);
	});
	return class$;
}

$Class* ServiceDialog$IconRadioButton$1::class$ = nullptr;

	} // print
} // sun