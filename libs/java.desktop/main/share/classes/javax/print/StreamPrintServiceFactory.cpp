#include <javax/print/StreamPrintServiceFactory.h>
#include <java/io/OutputStream.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/StreamPrintServiceFactory$1.h>
#include <javax/print/StreamPrintServiceFactory$Services.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $StreamPrintServiceFactoryArray = $Array<::javax::print::StreamPrintServiceFactory>;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $DocFlavor = ::javax::print::DocFlavor;
using $StreamPrintService = ::javax::print::StreamPrintService;
using $StreamPrintServiceFactory$1 = ::javax::print::StreamPrintServiceFactory$1;
using $StreamPrintServiceFactory$Services = ::javax::print::StreamPrintServiceFactory$Services;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace print {

void StreamPrintServiceFactory::init$() {
}

$StreamPrintServiceFactory$Services* StreamPrintServiceFactory::getServices() {
	$useLocalObjectStack();
	$load($StreamPrintServiceFactory$Services);
	$var($StreamPrintServiceFactory$Services, services, $cast($StreamPrintServiceFactory$Services, $$nc($AppContext::getAppContext())->get($StreamPrintServiceFactory$Services::class$)));
	if (services == nullptr) {
		$assign(services, $new($StreamPrintServiceFactory$Services));
		$$nc($AppContext::getAppContext())->put($StreamPrintServiceFactory$Services::class$, services);
	}
	return services;
}

$ArrayList* StreamPrintServiceFactory::getListOfFactories() {
	return $nc($(getServices()))->listOfFactories;
}

$ArrayList* StreamPrintServiceFactory::initListOfFactories() {
	$useLocalObjectStack();
	$var($ArrayList, listOfFactories, $new($ArrayList));
	$set($nc($(getServices())), listOfFactories, listOfFactories);
	return listOfFactories;
}

$StreamPrintServiceFactoryArray* StreamPrintServiceFactory::lookupStreamPrintServiceFactories($DocFlavor* flavor, $String* outputMimeType) {
	$useLocalObjectStack();
	$var($ArrayList, list, getFactories(flavor, outputMimeType));
	return $cast($StreamPrintServiceFactoryArray, $nc(list)->toArray($$new($StreamPrintServiceFactoryArray, $nc(list)->size())));
}

$ArrayList* StreamPrintServiceFactory::getAllFactories() {
	$useLocalObjectStack();
	$load(StreamPrintServiceFactory);
	$beforeCallerSensitive();
	$synchronized(StreamPrintServiceFactory::class$) {
		$var($ArrayList, listOfFactories, getListOfFactories());
		if (listOfFactories != nullptr) {
			return listOfFactories;
		} else {
			$assign(listOfFactories, initListOfFactories());
		}
		try {
			$AccessController::doPrivileged($$new($StreamPrintServiceFactory$1));
		} catch ($PrivilegedActionException& e) {
		}
		return listOfFactories;
	}
}

bool StreamPrintServiceFactory::isMember($DocFlavor* flavor, $DocFlavorArray* flavors) {
	for (int32_t f = 0; f < $nc(flavors)->length; ++f) {
		if ($nc(flavor)->equals(flavors->get(f))) {
			return true;
		}
	}
	return false;
}

$ArrayList* StreamPrintServiceFactory::getFactories($DocFlavor* flavor, $String* outType) {
	$useLocalObjectStack();
	if (flavor == nullptr && outType == nullptr) {
		return getAllFactories();
	}
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($Iterator, i$, $$nc(getAllFactories())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(StreamPrintServiceFactory, factory, $cast(StreamPrintServiceFactory, i$->next()));
			{
				bool var$0 = outType == nullptr || outType->equalsIgnoreCase($($nc(factory)->getOutputFormat()));
				if (var$0 && (flavor == nullptr || isMember(flavor, $($nc(factory)->getSupportedDocFlavors())))) {
					list->add(factory);
				}
			}
		}
	}
	return list;
}

StreamPrintServiceFactory::StreamPrintServiceFactory() {
}

$Class* StreamPrintServiceFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(StreamPrintServiceFactory, init$, void)},
		{"getAllFactories", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE | $STATIC, $staticMethod(StreamPrintServiceFactory, getAllFactories, $ArrayList*)},
		{"getFactories", "(Ljavax/print/DocFlavor;Ljava/lang/String;)Ljava/util/ArrayList;", "(Ljavax/print/DocFlavor;Ljava/lang/String;)Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE | $STATIC, $staticMethod(StreamPrintServiceFactory, getFactories, $ArrayList*, $DocFlavor*, $String*)},
		{"getListOfFactories", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE | $STATIC, $staticMethod(StreamPrintServiceFactory, getListOfFactories, $ArrayList*)},
		{"getOutputFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StreamPrintServiceFactory, getOutputFormat, $String*)},
		{"getPrintService", "(Ljava/io/OutputStream;)Ljavax/print/StreamPrintService;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StreamPrintServiceFactory, getPrintService, $StreamPrintService*, $OutputStream*)},
		{"getServices", "()Ljavax/print/StreamPrintServiceFactory$Services;", nullptr, $PRIVATE | $STATIC, $staticMethod(StreamPrintServiceFactory, getServices, $StreamPrintServiceFactory$Services*)},
		{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StreamPrintServiceFactory, getSupportedDocFlavors, $DocFlavorArray*)},
		{"initListOfFactories", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE | $STATIC, $staticMethod(StreamPrintServiceFactory, initListOfFactories, $ArrayList*)},
		{"isMember", "(Ljavax/print/DocFlavor;[Ljavax/print/DocFlavor;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(StreamPrintServiceFactory, isMember, bool, $DocFlavor*, $DocFlavorArray*)},
		{"lookupStreamPrintServiceFactories", "(Ljavax/print/DocFlavor;Ljava/lang/String;)[Ljavax/print/StreamPrintServiceFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(StreamPrintServiceFactory, lookupStreamPrintServiceFactories, $StreamPrintServiceFactoryArray*, $DocFlavor*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.StreamPrintServiceFactory$Services", "javax.print.StreamPrintServiceFactory", "Services", $STATIC},
		{"javax.print.StreamPrintServiceFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.print.StreamPrintServiceFactory",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.print.StreamPrintServiceFactory$Services,javax.print.StreamPrintServiceFactory$1"
	};
	$loadClass(StreamPrintServiceFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamPrintServiceFactory);
	});
	return class$;
}

$Class* StreamPrintServiceFactory::class$ = nullptr;

	} // print
} // javax