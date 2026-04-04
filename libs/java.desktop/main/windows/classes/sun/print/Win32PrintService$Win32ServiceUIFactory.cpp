#include <sun/print/Win32PrintService$Win32ServiceUIFactory.h>
#include <javax/print/ServiceUIFactory.h>
#include <sun/print/DocumentPropertiesUI.h>
#include <sun/print/Win32PrintService.h>
#include <jcpp.h>

#undef DOCPROPERTIESCLASSNAME
#undef DOCUMENTPROPERTIES_ROLE
#undef MAIN_UIROLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServiceUIFactory = ::javax::print::ServiceUIFactory;
using $DocumentPropertiesUI = ::sun::print::DocumentPropertiesUI;
using $Win32PrintService = ::sun::print::Win32PrintService;

namespace sun {
	namespace print {

void Win32PrintService$Win32ServiceUIFactory::init$($Win32PrintService* s) {
	$ServiceUIFactory::init$();
	$set(this, service, s);
}

$Object* Win32PrintService$Win32ServiceUIFactory::getUI(int32_t role, $String* ui) {
	if (role <= $ServiceUIFactory::MAIN_UIROLE) {
		return nullptr;
	}
	$init($DocumentPropertiesUI);
	if (role == $DocumentPropertiesUI::DOCUMENTPROPERTIES_ROLE && $nc($DocumentPropertiesUI::DOCPROPERTIESCLASSNAME)->equals(ui)) {
		return $nc(this->service)->getDocumentPropertiesUI();
	}
	$throwNew($IllegalArgumentException, "Unsupported role"_s);
}

$StringArray* Win32PrintService$Win32ServiceUIFactory::getUIClassNamesForRole(int32_t role) {
	if (role <= $ServiceUIFactory::MAIN_UIROLE) {
		return nullptr;
	}
	if (role == $DocumentPropertiesUI::DOCUMENTPROPERTIES_ROLE) {
		$var($StringArray, names, $new($StringArray, 0));
		$init($DocumentPropertiesUI);
		names->set(0, $DocumentPropertiesUI::DOCPROPERTIESCLASSNAME);
		return names;
	}
	$throwNew($IllegalArgumentException, "Unsupported role"_s);
}

Win32PrintService$Win32ServiceUIFactory::Win32PrintService$Win32ServiceUIFactory() {
}

$Class* Win32PrintService$Win32ServiceUIFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"service", "Lsun/print/Win32PrintService;", nullptr, 0, $field(Win32PrintService$Win32ServiceUIFactory, service)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/Win32PrintService;)V", nullptr, 0, $method(Win32PrintService$Win32ServiceUIFactory, init$, void, $Win32PrintService*)},
		{"getUI", "(ILjava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Win32PrintService$Win32ServiceUIFactory, getUI, $Object*, int32_t, $String*)},
		{"getUIClassNamesForRole", "(I)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Win32PrintService$Win32ServiceUIFactory, getUIClassNamesForRole, $StringArray*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.Win32PrintService$Win32ServiceUIFactory", "sun.print.Win32PrintService", "Win32ServiceUIFactory", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.Win32PrintService$Win32ServiceUIFactory",
		"javax.print.ServiceUIFactory",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.Win32PrintService"
	};
	$loadClass(Win32PrintService$Win32ServiceUIFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32PrintService$Win32ServiceUIFactory);
	});
	return class$;
}

$Class* Win32PrintService$Win32ServiceUIFactory::class$ = nullptr;

	} // print
} // sun