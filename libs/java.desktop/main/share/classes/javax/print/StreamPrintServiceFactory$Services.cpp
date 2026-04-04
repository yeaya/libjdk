#include <javax/print/StreamPrintServiceFactory$Services.h>
#include <java/util/ArrayList.h>
#include <javax/print/StreamPrintServiceFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

void StreamPrintServiceFactory$Services::init$() {
	$set(this, listOfFactories, nullptr);
}

StreamPrintServiceFactory$Services::StreamPrintServiceFactory$Services() {
}

$Class* StreamPrintServiceFactory$Services::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listOfFactories", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE, $field(StreamPrintServiceFactory$Services, listOfFactories)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StreamPrintServiceFactory$Services, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.StreamPrintServiceFactory$Services", "javax.print.StreamPrintServiceFactory", "Services", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.StreamPrintServiceFactory$Services",
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
		"javax.print.StreamPrintServiceFactory"
	};
	$loadClass(StreamPrintServiceFactory$Services, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamPrintServiceFactory$Services);
	});
	return class$;
}

$Class* StreamPrintServiceFactory$Services::class$ = nullptr;

	} // print
} // javax