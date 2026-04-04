#include <sun/print/PrintServiceLookupProvider.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/MultiDocPrintService.h>
#include <javax/print/PrintService.h>
#include <javax/print/PrintServiceLookup.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/HashPrintServiceAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/attribute/standard/PrinterName.h>
#include <sun/print/PrintServiceLookupProvider$1.h>
#include <sun/print/PrintServiceLookupProvider$PrinterChangeListener.h>
#include <sun/print/PrintServiceLookupProvider$RemotePrinterChangeListener.h>
#include <sun/print/Win32PrintService.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $MultiDocPrintServiceArray = $Array<::javax::print::MultiDocPrintService>;
using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $HashPrintServiceAttributeSet = ::javax::print::attribute::HashPrintServiceAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $PrinterName = ::javax::print::attribute::standard::PrinterName;
using $PrintServiceLookupProvider$1 = ::sun::print::PrintServiceLookupProvider$1;
using $PrintServiceLookupProvider$PrinterChangeListener = ::sun::print::PrintServiceLookupProvider$PrinterChangeListener;
using $PrintServiceLookupProvider$RemotePrinterChangeListener = ::sun::print::PrintServiceLookupProvider$RemotePrinterChangeListener;
using $Win32PrintService = ::sun::print::Win32PrintService;

namespace sun {
	namespace print {

PrintServiceLookupProvider* PrintServiceLookupProvider::win32PrintLUS = nullptr;

PrintServiceLookupProvider* PrintServiceLookupProvider::getWin32PrintLUS() {
	$init(PrintServiceLookupProvider);
	if (PrintServiceLookupProvider::win32PrintLUS == nullptr) {
		$PrintServiceLookup::lookupDefaultPrintService();
	}
	return PrintServiceLookupProvider::win32PrintLUS;
}

void PrintServiceLookupProvider::init$() {
	$useLocalObjectStack();
	$PrintServiceLookup::init$();
	if (PrintServiceLookupProvider::win32PrintLUS == nullptr) {
		$assignStatic(PrintServiceLookupProvider::win32PrintLUS, this);
		$var($Thread, thr, $new($Thread, nullptr, $$new($PrintServiceLookupProvider$PrinterChangeListener, this), "PrinterListener"_s, 0, false));
		thr->setDaemon(true);
		thr->start();
		$var($Thread, remThr, $new($Thread, nullptr, $$new($PrintServiceLookupProvider$RemotePrinterChangeListener, this), "RemotePrinterListener"_s, 0, false));
		remThr->setDaemon(true);
		remThr->start();
	}
}

$PrintServiceArray* PrintServiceLookupProvider::getPrintServices() {
	$synchronized(this) {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkPrintJobAccess();
		}
		if (this->printServices == nullptr) {
			refreshServices();
		}
		return this->printServices;
	}
}

void PrintServiceLookupProvider::refreshServices() {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($StringArray, printers, getAllPrinterNames());
		if (printers == nullptr) {
			invalidateServices();
			$set(this, printServices, $new($PrintServiceArray, 0));
			return;
		}
		$var($PrintServiceArray, newServices, $new($PrintServiceArray, $nc(printers)->length));
		$var($PrintService, defService, getDefaultPrintService());
		for (int32_t p = 0; p < printers->length; ++p) {
			if (defService != nullptr && $nc(printers->get(p))->equals($(defService->getName()))) {
				newServices->set(p, defService);
			} else if (this->printServices == nullptr) {
				newServices->set(p, $$new($Win32PrintService, printers->get(p)));
			} else {
				int32_t j = 0;
				for (j = 0; j < $nc(this->printServices)->length; ++j) {
					if ((this->printServices->get(j) != nullptr) && ($nc(printers->get(p))->equals($($nc(this->printServices->get(j))->getName())))) {
						newServices->set(p, $nc(this->printServices)->get(j));
						this->printServices->set(j, nullptr);
						break;
					}
				}
				if (j == $nc(this->printServices)->length) {
					newServices->set(p, $$new($Win32PrintService, printers->get(p)));
				}
			}
		}
		invalidateServices();
		$set(this, printServices, newServices);
	}
}

void PrintServiceLookupProvider::invalidateServices() {
	if (this->printServices != nullptr) {
		for (int32_t j = 0; j < $nc(this->printServices)->length; ++j) {
			if (($instanceOf($Win32PrintService, this->printServices->get(j))) && (!$nc(this->printServices->get(j))->equals(this->defaultPrintService))) {
				$nc($cast($Win32PrintService, $nc(this->printServices)->get(j)))->invalidateService();
			}
		}
	}
}

$PrintService* PrintServiceLookupProvider::getPrintServiceByName($String* name) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (name == nullptr || name->isEmpty()) {
			return nullptr;
		} else {
			$var($PrintServiceArray, printServices, getPrintServices());
			for (int32_t i = 0; i < $nc(printServices)->length; ++i) {
				if ($$nc($nc(printServices->get(i))->getName())->equals(name)) {
					return printServices->get(i);
				}
			}
			return nullptr;
		}
	}
}

bool PrintServiceLookupProvider::matchingService($PrintService* service, $PrintServiceAttributeSet* serviceSet) {
	$useLocalObjectStack();
	if (serviceSet != nullptr) {
		$var($AttributeArray, attrs, serviceSet->toArray());
		$var($Attribute, serviceAttr, nullptr);
		for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
			$assign(serviceAttr, $nc(service)->getAttribute($nc(attrs->get(i))->getCategory()));
			if (serviceAttr == nullptr || !serviceAttr->equals(attrs->get(i))) {
				return false;
			}
		}
	}
	return true;
}

$PrintServiceArray* PrintServiceLookupProvider::getPrintServices($DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalObjectStack();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	$var($PrintRequestAttributeSet, requestSet, nullptr);
	$var($PrintServiceAttributeSet, serviceSet, nullptr);
	if (attributes != nullptr && !attributes->isEmpty()) {
		$assign(requestSet, $new($HashPrintRequestAttributeSet));
		$assign(serviceSet, $new($HashPrintServiceAttributeSet));
		$var($AttributeArray, attrs, attributes->toArray());
		for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
			if ($instanceOf($PrintRequestAttribute, attrs->get(i))) {
				requestSet->add(attrs->get(i));
			} else if ($instanceOf($PrintServiceAttribute, attrs->get(i))) {
				serviceSet->add(attrs->get(i));
			}
		}
	}
	$var($PrintServiceArray, services, nullptr);
	$load($PrinterName);
	if (serviceSet != nullptr && serviceSet->get($PrinterName::class$) != nullptr) {
		$var($PrinterName, name, $cast($PrinterName, serviceSet->get($PrinterName::class$)));
		$var($PrintService, service, getPrintServiceByName($($nc(name)->getValue())));
		if (service == nullptr || !matchingService(service, serviceSet)) {
			$assign(services, $new($PrintServiceArray, 0));
		} else {
			$assign(services, $new($PrintServiceArray, 1));
			services->set(0, service);
		}
	} else {
		$assign(services, getPrintServices());
	}
	if ($nc(services)->length == 0) {
		return services;
	} else {
		$var($ArrayList, matchingServices, $new($ArrayList));
		for (int32_t i = 0; i < services->length; ++i) {
			try {
				if ($nc(services->get(i))->getUnsupportedAttributes(flavor, requestSet) == nullptr) {
					matchingServices->add(services->get(i));
				}
			} catch ($IllegalArgumentException& e) {
			}
		}
		$assign(services, $new($PrintServiceArray, matchingServices->size()));
		return $cast($PrintServiceArray, matchingServices->toArray(services));
	}
}

$MultiDocPrintServiceArray* PrintServiceLookupProvider::getMultiDocPrintServices($DocFlavorArray* flavors, $AttributeSet* attributes) {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	return $new($MultiDocPrintServiceArray, 0);
}

$PrintService* PrintServiceLookupProvider::getDefaultPrintService() {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkPrintJobAccess();
		}
		$var($String, defaultPrinter, getDefaultPrinterName());
		if (defaultPrinter == nullptr) {
			return nullptr;
		}
		if ((this->defaultPrintService != nullptr) && $$nc(this->defaultPrintService->getName())->equals(defaultPrinter)) {
			return this->defaultPrintService;
		}
		$set(this, defaultPrintService, nullptr);
		if (this->printServices != nullptr) {
			for (int32_t j = 0; j < $nc(this->printServices)->length; ++j) {
				if ($nc(defaultPrinter)->equals($($nc(this->printServices->get(j))->getName()))) {
					$set(this, defaultPrintService, $nc(this->printServices)->get(j));
					break;
				}
			}
		}
		if (this->defaultPrintService == nullptr) {
			$set(this, defaultPrintService, $new($Win32PrintService, defaultPrinter));
		}
		return this->defaultPrintService;
	}
}

$String* PrintServiceLookupProvider::getDefaultPrinterName() {
	$prepareNative(getDefaultPrinterName, $String*);
	$var($String, $ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

$StringArray* PrintServiceLookupProvider::getAllPrinterNames() {
	$prepareNative(getAllPrinterNames, $StringArray*);
	$var($StringArray, $ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

void PrintServiceLookupProvider::notifyLocalPrinterChange() {
	$prepareNative(notifyLocalPrinterChange, void);
	$invokeNative();
	$finishNative();
}

void PrintServiceLookupProvider::notifyRemotePrinterChange() {
	$prepareNative(notifyRemotePrinterChange, void);
	$invokeNative();
	$finishNative();
}

void PrintServiceLookupProvider::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged($$new($PrintServiceLookupProvider$1));
	}
}

PrintServiceLookupProvider::PrintServiceLookupProvider() {
}

$Class* PrintServiceLookupProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultPrintService", "Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(PrintServiceLookupProvider, defaultPrintService)},
		{"printServices", "[Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(PrintServiceLookupProvider, printServices)},
		{"win32PrintLUS", "Lsun/print/PrintServiceLookupProvider;", nullptr, $PRIVATE | $STATIC, $staticField(PrintServiceLookupProvider, win32PrintLUS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrintServiceLookupProvider, init$, void)},
		{"getAllPrinterNames", "()[Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(PrintServiceLookupProvider, getAllPrinterNames, $StringArray*)},
		{"getDefaultPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PrintServiceLookupProvider, getDefaultPrintService, $PrintService*)},
		{"getDefaultPrinterName", "()Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(PrintServiceLookupProvider, getDefaultPrinterName, $String*)},
		{"getMultiDocPrintServices", "([Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/MultiDocPrintService;", nullptr, $PUBLIC, $virtualMethod(PrintServiceLookupProvider, getMultiDocPrintServices, $MultiDocPrintServiceArray*, $DocFlavorArray*, $AttributeSet*)},
		{"getPrintServiceByName", "(Ljava/lang/String;)Ljavax/print/PrintService;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PrintServiceLookupProvider, getPrintServiceByName, $PrintService*, $String*)},
		{"getPrintServices", "()[Ljavax/print/PrintService;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PrintServiceLookupProvider, getPrintServices, $PrintServiceArray*)},
		{"getPrintServices", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/PrintService;", nullptr, $PUBLIC, $virtualMethod(PrintServiceLookupProvider, getPrintServices, $PrintServiceArray*, $DocFlavor*, $AttributeSet*)},
		{"getWin32PrintLUS", "()Lsun/print/PrintServiceLookupProvider;", nullptr, $PUBLIC | $STATIC, $staticMethod(PrintServiceLookupProvider, getWin32PrintLUS, PrintServiceLookupProvider*)},
		{"invalidateServices", "()V", nullptr, $PRIVATE, $method(PrintServiceLookupProvider, invalidateServices, void)},
		{"matchingService", "(Ljavax/print/PrintService;Ljavax/print/attribute/PrintServiceAttributeSet;)Z", nullptr, 0, $virtualMethod(PrintServiceLookupProvider, matchingService, bool, $PrintService*, $PrintServiceAttributeSet*)},
		{"notifyLocalPrinterChange", "()V", nullptr, $PRIVATE | $NATIVE, $method(PrintServiceLookupProvider, notifyLocalPrinterChange, void)},
		{"notifyRemotePrinterChange", "()V", nullptr, $PRIVATE | $NATIVE, $method(PrintServiceLookupProvider, notifyRemotePrinterChange, void)},
		{"refreshServices", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(PrintServiceLookupProvider, refreshServices, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PrintServiceLookupProvider$RemotePrinterChangeListener", "sun.print.PrintServiceLookupProvider", "RemotePrinterChangeListener", $PRIVATE | $FINAL},
		{"sun.print.PrintServiceLookupProvider$PrinterChangeListener", "sun.print.PrintServiceLookupProvider", "PrinterChangeListener", $PRIVATE | $FINAL},
		{"sun.print.PrintServiceLookupProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.print.PrintServiceLookupProvider",
		"javax.print.PrintServiceLookup",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.print.PrintServiceLookupProvider$RemotePrinterChangeListener,sun.print.PrintServiceLookupProvider$PrinterChangeListener,sun.print.PrintServiceLookupProvider$1"
	};
	$loadClass(PrintServiceLookupProvider, name, initialize, &classInfo$$, PrintServiceLookupProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PrintServiceLookupProvider);
	});
	return class$;
}

$Class* PrintServiceLookupProvider::class$ = nullptr;

	} // print
} // sun