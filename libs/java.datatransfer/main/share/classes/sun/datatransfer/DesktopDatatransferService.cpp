#include <sun/datatransfer/DesktopDatatransferService.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/lang/Runnable.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Supplier = ::java::util::function::Supplier;

namespace sun {
	namespace datatransfer {

$Class* DesktopDatatransferService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDefaultUnicodeEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopDatatransferService, getDefaultUnicodeEncoding, $String*)},
		{"getFlavorMap", "(Ljava/util/function/Supplier;)Ljava/awt/datatransfer/FlavorMap;", "(Ljava/util/function/Supplier<Ljava/awt/datatransfer/FlavorMap;>;)Ljava/awt/datatransfer/FlavorMap;", $PUBLIC | $ABSTRACT, $virtualMethod(DesktopDatatransferService, getFlavorMap, $FlavorMap*, $Supplier*)},
		{"getPlatformMappingsForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DesktopDatatransferService, getPlatformMappingsForFlavor, $LinkedHashSet*, $DataFlavor*)},
		{"getPlatformMappingsForNative", "(Ljava/lang/String;)Ljava/util/LinkedHashSet;", "(Ljava/lang/String;)Ljava/util/LinkedHashSet<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DesktopDatatransferService, getPlatformMappingsForNative, $LinkedHashSet*, $String*)},
		{"invokeOnEventThread", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopDatatransferService, invokeOnEventThread, void, $Runnable*)},
		{"isDesktopPresent", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopDatatransferService, isDesktopPresent, bool)},
		{"registerTextFlavorProperties", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopDatatransferService, registerTextFlavorProperties, void, $String*, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.datatransfer.DesktopDatatransferService",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DesktopDatatransferService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DesktopDatatransferService);
	});
	return class$;
}

$Class* DesktopDatatransferService::class$ = nullptr;

	} // datatransfer
} // sun