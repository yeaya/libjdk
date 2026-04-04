#include <javax/print/ServiceUIFactory.h>
#include <jcpp.h>

#undef ABOUT_UIROLE
#undef ADMIN_UIROLE
#undef DIALOG_UI
#undef JCOMPONENT_UI
#undef JDIALOG_UI
#undef MAIN_UIROLE
#undef PANEL_UI
#undef RESERVED_UIROLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$String* ServiceUIFactory::JCOMPONENT_UI = nullptr;
$String* ServiceUIFactory::PANEL_UI = nullptr;
$String* ServiceUIFactory::DIALOG_UI = nullptr;
$String* ServiceUIFactory::JDIALOG_UI = nullptr;

void ServiceUIFactory::init$() {
}

ServiceUIFactory::ServiceUIFactory() {
}

void ServiceUIFactory::clinit$($Class* clazz) {
	$assignStatic(ServiceUIFactory::JCOMPONENT_UI, "javax.swing.JComponent"_s);
	$assignStatic(ServiceUIFactory::PANEL_UI, "java.awt.Panel"_s);
	$assignStatic(ServiceUIFactory::DIALOG_UI, "java.awt.Dialog"_s);
	$assignStatic(ServiceUIFactory::JDIALOG_UI, "javax.swing.JDialog"_s);
}

$Class* ServiceUIFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JCOMPONENT_UI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceUIFactory, JCOMPONENT_UI)},
		{"PANEL_UI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceUIFactory, PANEL_UI)},
		{"DIALOG_UI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceUIFactory, DIALOG_UI)},
		{"JDIALOG_UI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceUIFactory, JDIALOG_UI)},
		{"ABOUT_UIROLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceUIFactory, ABOUT_UIROLE)},
		{"ADMIN_UIROLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceUIFactory, ADMIN_UIROLE)},
		{"MAIN_UIROLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceUIFactory, MAIN_UIROLE)},
		{"RESERVED_UIROLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceUIFactory, RESERVED_UIROLE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ServiceUIFactory, init$, void)},
		{"getUI", "(ILjava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServiceUIFactory, getUI, $Object*, int32_t, $String*)},
		{"getUIClassNamesForRole", "(I)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServiceUIFactory, getUIClassNamesForRole, $StringArray*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.print.ServiceUIFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServiceUIFactory, name, initialize, &classInfo$$, ServiceUIFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceUIFactory);
	});
	return class$;
}

$Class* ServiceUIFactory::class$ = nullptr;

	} // print
} // javax