#include <sun/awt/windows/WPrinterJob$DevModeValues.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace windows {

void WPrinterJob$DevModeValues::init$() {
}

WPrinterJob$DevModeValues::WPrinterJob$DevModeValues() {
}

$Class* WPrinterJob$DevModeValues::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dmFields", "I", nullptr, 0, $field(WPrinterJob$DevModeValues, dmFields)},
		{"copies", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, copies)},
		{"collate", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, collate)},
		{"color", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, color)},
		{"duplex", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, duplex)},
		{"orient", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, orient)},
		{"paper", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, paper)},
		{"bin", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, bin)},
		{"xres_quality", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, xres_quality)},
		{"yres", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, yres)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WPrinterJob$DevModeValues, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WPrinterJob$DevModeValues", "sun.awt.windows.WPrinterJob", "DevModeValues", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WPrinterJob$DevModeValues",
		"java.lang.Object",
		nullptr,
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
	$loadClass(WPrinterJob$DevModeValues, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WPrinterJob$DevModeValues);
	});
	return class$;
}

$Class* WPrinterJob$DevModeValues::class$ = nullptr;

		} // windows
	} // awt
} // sun