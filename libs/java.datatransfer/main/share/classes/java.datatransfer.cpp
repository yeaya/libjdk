#include <java.datatransfer.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorEvent.h>
#include <java/awt/datatransfer/FlavorListener.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/MimeType.h>
#include <java/awt/datatransfer/MimeTypeParameterList.h>
#include <java/awt/datatransfer/MimeTypeParseException.h>
#include <java/awt/datatransfer/StringSelection.h>
#include <java/awt/datatransfer/SystemFlavorMap.h>
#include <java/awt/datatransfer/SystemFlavorMap$SoftCache.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <sun/datatransfer/DataFlavorUtil$CharsetComparator.h>
#include <sun/datatransfer/DataFlavorUtil$DataFlavorComparator.h>
#include <sun/datatransfer/DataFlavorUtil$DefaultDesktopDatatransferService.h>
#include <sun/datatransfer/DataFlavorUtil$IndexOrderComparator.h>
#include <sun/datatransfer/DataFlavorUtil$RMI.h>
#include <sun/datatransfer/DataFlavorUtil$StandardEncodingsHolder.h>
#include <sun/datatransfer/DataFlavorUtil$TextFlavorComparator.h>
#include <sun/datatransfer/DesktopDatatransferService.h>
#include <sun/datatransfer/resources/flavormap.properties.resource.h>


#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _java$datatransfer_classes_[] = {
	$classEntry("java.awt.datatransfer.Clipboard", ::java::awt::datatransfer::Clipboard),
	$classEntry("java.awt.datatransfer.ClipboardOwner", ::java::awt::datatransfer::ClipboardOwner),
	$classEntry("java.awt.datatransfer.DataFlavor", ::java::awt::datatransfer::DataFlavor),
	$classEntry("java.awt.datatransfer.FlavorEvent", ::java::awt::datatransfer::FlavorEvent),
	$classEntry("java.awt.datatransfer.FlavorListener", ::java::awt::datatransfer::FlavorListener),
	$classEntry("java.awt.datatransfer.FlavorMap", ::java::awt::datatransfer::FlavorMap),
	$classEntry("java.awt.datatransfer.FlavorTable", ::java::awt::datatransfer::FlavorTable),
	$classEntry("java.awt.datatransfer.MimeType", ::java::awt::datatransfer::MimeType),
	$classEntry("java.awt.datatransfer.MimeTypeParameterList", ::java::awt::datatransfer::MimeTypeParameterList),
	$classEntry("java.awt.datatransfer.MimeTypeParseException", ::java::awt::datatransfer::MimeTypeParseException),
	$classEntry("java.awt.datatransfer.StringSelection", ::java::awt::datatransfer::StringSelection),
	$classEntry("java.awt.datatransfer.SystemFlavorMap", ::java::awt::datatransfer::SystemFlavorMap),
	$classEntry("java.awt.datatransfer.SystemFlavorMap$SoftCache", ::java::awt::datatransfer::SystemFlavorMap$SoftCache),
	$classEntry("java.awt.datatransfer.Transferable", ::java::awt::datatransfer::Transferable),
	$classEntry("java.awt.datatransfer.UnsupportedFlavorException", ::java::awt::datatransfer::UnsupportedFlavorException),
	$classEntry("sun.datatransfer.DataFlavorUtil", ::sun::datatransfer::DataFlavorUtil),
	$classEntry("sun.datatransfer.DataFlavorUtil$CharsetComparator", ::sun::datatransfer::DataFlavorUtil$CharsetComparator),
	$classEntry("sun.datatransfer.DataFlavorUtil$DataFlavorComparator", ::sun::datatransfer::DataFlavorUtil$DataFlavorComparator),
	$classEntry("sun.datatransfer.DataFlavorUtil$DefaultDesktopDatatransferService", ::sun::datatransfer::DataFlavorUtil$DefaultDesktopDatatransferService),
	$classEntry("sun.datatransfer.DataFlavorUtil$IndexOrderComparator", ::sun::datatransfer::DataFlavorUtil$IndexOrderComparator),
	$classEntry("sun.datatransfer.DataFlavorUtil$RMI", ::sun::datatransfer::DataFlavorUtil$RMI),
	$classEntry("sun.datatransfer.DataFlavorUtil$StandardEncodingsHolder", ::sun::datatransfer::DataFlavorUtil$StandardEncodingsHolder),
	$classEntry("sun.datatransfer.DataFlavorUtil$TextFlavorComparator", ::sun::datatransfer::DataFlavorUtil$TextFlavorComparator),
	$classEntry("sun.datatransfer.DesktopDatatransferService", ::sun::datatransfer::DesktopDatatransferService)
};

#define $resourceEntry(name, clazz) {name, clazz::get}
::java::lang::ResourceEntry _java$datatransfer_resources_[] = {
	$resourceEntry("sun/datatransfer/resources/flavormap.properties", ::sun::datatransfer::resources::flavormap$properties$resource)
};

const char* _java$datatransfer_packages_[] = {
	"java.awt.datatransfer",
	"sun.datatransfer"
};

void java$datatransfer$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_java$datatransfer_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$datatransfer_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void java$datatransfer$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$datatransfer$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$datatransfer$GetPackages() {
	int32_t length = $lengthOf(_java$datatransfer_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_java$datatransfer_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* java$datatransfer$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$datatransfer_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_java$datatransfer_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* java$datatransfer$GetResource($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$datatransfer_resources_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ResourceEntry* resourceEntry = &_java$datatransfer_resources_[mid];
		int32_t ret = name->compareTo(resourceEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			int32_t length = 0;
			int8_t* data = resourceEntry->getResource(length);
			$var($bytes, bytes, $new($bytes, length));
			bytes->setRegion(0, length, data);
			return bytes;
		}
	}
	return nullptr;
}

void java$datatransfer::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"java.datatransfer", "17.35", "",
		&_java$datatransfer_ModuleInfo_,
		java$datatransfer$LibEventAction,
		java$datatransfer$GetPackages,
		java$datatransfer$GetClassEntry,
		java$datatransfer$GetResource
	};
	$System::addLibrary(&lib);
}