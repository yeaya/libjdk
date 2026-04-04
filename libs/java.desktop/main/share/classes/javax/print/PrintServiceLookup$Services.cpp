#include <javax/print/PrintServiceLookup$Services.h>
#include <java/util/ArrayList.h>
#include <javax/print/PrintServiceLookup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

void PrintServiceLookup$Services::init$() {
	$set(this, listOfLookupServices, nullptr);
	$set(this, registeredServices, nullptr);
}

PrintServiceLookup$Services::PrintServiceLookup$Services() {
}

$Class* PrintServiceLookup$Services::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listOfLookupServices", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/print/PrintServiceLookup;>;", $PRIVATE, $field(PrintServiceLookup$Services, listOfLookupServices)},
		{"registeredServices", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/print/PrintService;>;", $PRIVATE, $field(PrintServiceLookup$Services, registeredServices)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PrintServiceLookup$Services, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.PrintServiceLookup$Services", "javax.print.PrintServiceLookup", "Services", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.PrintServiceLookup$Services",
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
		"javax.print.PrintServiceLookup"
	};
	$loadClass(PrintServiceLookup$Services, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintServiceLookup$Services);
	});
	return class$;
}

$Class* PrintServiceLookup$Services::class$ = nullptr;

	} // print
} // javax