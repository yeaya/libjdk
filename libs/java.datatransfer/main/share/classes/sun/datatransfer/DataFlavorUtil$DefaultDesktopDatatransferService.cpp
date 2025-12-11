#include <sun/datatransfer/DataFlavorUtil$DefaultDesktopDatatransferService.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/ServiceLoader.h>
#include <java/util/function/Supplier.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <sun/datatransfer/DesktopDatatransferService.h>
#include <jcpp.h>

#undef INSTANCE
#undef UTF_8

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Supplier = ::java::util::function::Supplier;
using $DesktopDatatransferService = ::sun::datatransfer::DesktopDatatransferService;

namespace sun {
	namespace datatransfer {

$FieldInfo _DataFlavorUtil$DefaultDesktopDatatransferService_FieldInfo_[] = {
	{"INSTANCE", "Lsun/datatransfer/DesktopDatatransferService;", nullptr, $STATIC | $FINAL, $staticField(DataFlavorUtil$DefaultDesktopDatatransferService, INSTANCE)},
	{"flavorMap", "Ljava/awt/datatransfer/FlavorMap;", nullptr, $PRIVATE | $VOLATILE, $field(DataFlavorUtil$DefaultDesktopDatatransferService, flavorMap)},
	{}
};

$MethodInfo _DataFlavorUtil$DefaultDesktopDatatransferService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DataFlavorUtil$DefaultDesktopDatatransferService::*)()>(&DataFlavorUtil$DefaultDesktopDatatransferService::init$))},
	{"getDefaultUnicodeEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDesktopService", "()Lsun/datatransfer/DesktopDatatransferService;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$DesktopDatatransferService*(*)()>(&DataFlavorUtil$DefaultDesktopDatatransferService::getDesktopService))},
	{"getFlavorMap", "(Ljava/util/function/Supplier;)Ljava/awt/datatransfer/FlavorMap;", "(Ljava/util/function/Supplier<Ljava/awt/datatransfer/FlavorMap;>;)Ljava/awt/datatransfer/FlavorMap;", $PUBLIC},
	{"getPlatformMappingsForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet<Ljava/lang/String;>;", $PUBLIC},
	{"getPlatformMappingsForNative", "(Ljava/lang/String;)Ljava/util/LinkedHashSet;", "(Ljava/lang/String;)Ljava/util/LinkedHashSet<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"invokeOnEventThread", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"isDesktopPresent", "()Z", nullptr, $PUBLIC},
	{"registerTextFlavorProperties", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DataFlavorUtil$DefaultDesktopDatatransferService_InnerClassesInfo_[] = {
	{"sun.datatransfer.DataFlavorUtil$DefaultDesktopDatatransferService", "sun.datatransfer.DataFlavorUtil", "DefaultDesktopDatatransferService", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DataFlavorUtil$DefaultDesktopDatatransferService_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.datatransfer.DataFlavorUtil$DefaultDesktopDatatransferService",
	"java.lang.Object",
	"sun.datatransfer.DesktopDatatransferService",
	_DataFlavorUtil$DefaultDesktopDatatransferService_FieldInfo_,
	_DataFlavorUtil$DefaultDesktopDatatransferService_MethodInfo_,
	nullptr,
	nullptr,
	_DataFlavorUtil$DefaultDesktopDatatransferService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.datatransfer.DataFlavorUtil"
};

$Object* allocate$DataFlavorUtil$DefaultDesktopDatatransferService($Class* clazz) {
	return $of($alloc(DataFlavorUtil$DefaultDesktopDatatransferService));
}

$DesktopDatatransferService* DataFlavorUtil$DefaultDesktopDatatransferService::INSTANCE = nullptr;

void DataFlavorUtil$DefaultDesktopDatatransferService::init$() {
}

$DesktopDatatransferService* DataFlavorUtil$DefaultDesktopDatatransferService::getDesktopService() {
	$init(DataFlavorUtil$DefaultDesktopDatatransferService);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($DesktopDatatransferService);
	$var($ServiceLoader, loader, $ServiceLoader::load($DesktopDatatransferService::class$, ($ClassLoader*)nullptr));
	$var($Iterator, iterator, $nc(loader)->iterator());
	if ($nc(iterator)->hasNext()) {
		return $cast($DesktopDatatransferService, iterator->next());
	} else {
		return $new(DataFlavorUtil$DefaultDesktopDatatransferService);
	}
}

void DataFlavorUtil$DefaultDesktopDatatransferService::invokeOnEventThread($Runnable* r) {
	$nc(r)->run();
}

$String* DataFlavorUtil$DefaultDesktopDatatransferService::getDefaultUnicodeEncoding() {
	$init($StandardCharsets);
	return $nc($StandardCharsets::UTF_8)->name();
}

$FlavorMap* DataFlavorUtil$DefaultDesktopDatatransferService::getFlavorMap($Supplier* supplier) {
	$var($FlavorMap, map, this->flavorMap);
	if (map == nullptr) {
		$synchronized(this) {
			$assign(map, this->flavorMap);
			if (map == nullptr) {
				$set(this, flavorMap, ($assign(map, $cast($FlavorMap, $nc(supplier)->get()))));
			}
		}
	}
	return map;
}

bool DataFlavorUtil$DefaultDesktopDatatransferService::isDesktopPresent() {
	return false;
}

$LinkedHashSet* DataFlavorUtil$DefaultDesktopDatatransferService::getPlatformMappingsForNative($String* nat) {
	return $new($LinkedHashSet);
}

$LinkedHashSet* DataFlavorUtil$DefaultDesktopDatatransferService::getPlatformMappingsForFlavor($DataFlavor* df) {
	return $new($LinkedHashSet);
}

void DataFlavorUtil$DefaultDesktopDatatransferService::registerTextFlavorProperties($String* nat, $String* charset, $String* eoln, $String* terminators) {
}

void clinit$DataFlavorUtil$DefaultDesktopDatatransferService($Class* class$) {
	$assignStatic(DataFlavorUtil$DefaultDesktopDatatransferService::INSTANCE, DataFlavorUtil$DefaultDesktopDatatransferService::getDesktopService());
}

DataFlavorUtil$DefaultDesktopDatatransferService::DataFlavorUtil$DefaultDesktopDatatransferService() {
}

$Class* DataFlavorUtil$DefaultDesktopDatatransferService::load$($String* name, bool initialize) {
	$loadClass(DataFlavorUtil$DefaultDesktopDatatransferService, name, initialize, &_DataFlavorUtil$DefaultDesktopDatatransferService_ClassInfo_, clinit$DataFlavorUtil$DefaultDesktopDatatransferService, allocate$DataFlavorUtil$DefaultDesktopDatatransferService);
	return class$;
}

$Class* DataFlavorUtil$DefaultDesktopDatatransferService::class$ = nullptr;

	} // datatransfer
} // sun