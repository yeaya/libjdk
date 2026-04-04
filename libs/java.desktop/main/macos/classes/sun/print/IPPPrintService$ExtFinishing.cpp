#include <sun/print/IPPPrintService$ExtFinishing.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/standard/Finishings.h>
#include <sun/print/IPPPrintService.h>
#include <jcpp.h>

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Finishings = ::javax::print::attribute::standard::Finishings;
using $IPPPrintService = ::sun::print::IPPPrintService;

namespace sun {
	namespace print {

void IPPPrintService$ExtFinishing::init$($IPPPrintService* this$0, int32_t value) {
	$set(this, this$0, this$0);
	$Finishings::init$(100);
}

$EnumSyntaxArray* IPPPrintService$ExtFinishing::getAll() {
	$var($EnumSyntaxArray, es, $Finishings::getEnumValueTable());
	return es;
}

IPPPrintService$ExtFinishing::IPPPrintService$ExtFinishing() {
}

$Class* IPPPrintService$ExtFinishing::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/IPPPrintService;", nullptr, $FINAL | $SYNTHETIC, $field(IPPPrintService$ExtFinishing, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/IPPPrintService;I)V", nullptr, 0, $method(IPPPrintService$ExtFinishing, init$, void, $IPPPrintService*, int32_t)},
		{"getAll", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, 0, $virtualMethod(IPPPrintService$ExtFinishing, getAll, $EnumSyntaxArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.IPPPrintService$ExtFinishing", "sun.print.IPPPrintService", "ExtFinishing", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.IPPPrintService$ExtFinishing",
		"javax.print.attribute.standard.Finishings",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.IPPPrintService"
	};
	$loadClass(IPPPrintService$ExtFinishing, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IPPPrintService$ExtFinishing));
	});
	return class$;
}

$Class* IPPPrintService$ExtFinishing::class$ = nullptr;

	} // print
} // sun