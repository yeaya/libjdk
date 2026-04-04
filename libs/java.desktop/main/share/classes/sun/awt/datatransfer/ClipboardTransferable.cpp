#include <sun/awt/datatransfer/ClipboardTransferable.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/HashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <sun/awt/datatransfer/ClipboardTransferable$DataFactory.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/SunClipboard.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Consumer = ::java::util::function::Consumer;
using $ClipboardTransferable$DataFactory = ::sun::awt::datatransfer::ClipboardTransferable$DataFactory;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $SunClipboard = ::sun::awt::datatransfer::SunClipboard;

namespace sun {
	namespace awt {
		namespace datatransfer {

class ClipboardTransferable$$Lambda$lambda$new$0 : public $Consumer {
	$class(ClipboardTransferable$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ClipboardTransferable* inst, $SunClipboard* clipboard, $Map* cached_data) {
		$set(this, inst$, inst);
		$set(this, clipboard, clipboard);
		$set(this, cached_data, cached_data);
	}
	virtual void accept(Object$* entry) override {
		$nc(inst$)->lambda$new$0(clipboard, cached_data, $cast($Map$Entry, entry));
	}
	ClipboardTransferable* inst$ = nullptr;
	$SunClipboard* clipboard = nullptr;
	$Map* cached_data = nullptr;
};
$Class* ClipboardTransferable$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClipboardTransferable$$Lambda$lambda$new$0, inst$)},
		{"clipboard", "Lsun/awt/datatransfer/SunClipboard;", nullptr, $PUBLIC, $field(ClipboardTransferable$$Lambda$lambda$new$0, clipboard)},
		{"cached_data", "Ljava/util/Map;", nullptr, $PUBLIC, $field(ClipboardTransferable$$Lambda$lambda$new$0, cached_data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/datatransfer/ClipboardTransferable;Lsun/awt/datatransfer/SunClipboard;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(ClipboardTransferable$$Lambda$lambda$new$0, init$, void, ClipboardTransferable*, $SunClipboard*, $Map*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ClipboardTransferable$$Lambda$lambda$new$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.datatransfer.ClipboardTransferable$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClipboardTransferable$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClipboardTransferable$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* ClipboardTransferable$$Lambda$lambda$new$0::class$ = nullptr;

void ClipboardTransferable::init$($SunClipboard* clipboard) {
	$useLocalObjectStack();
	$set(this, flavorsToData, $new($HashMap));
	$set(this, flavors, $new($DataFlavorArray, 0));
	$nc(clipboard)->openClipboard(nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$var($longs, formats, clipboard->getClipboardFormats());
		if (formats != nullptr && formats->length > 0) {
			$var($Map, cached_data, $new($HashMap, formats->length, 1.0f));
			$$nc($$nc($$nc($DataTransferer::getInstance())->getFlavorsForFormats(formats, $($SunClipboard::getDefaultFlavorTable())))->entrySet())->forEach($$new(ClipboardTransferable$$Lambda$lambda$new$0, this, clipboard, cached_data));
			$set(this, flavors, $DataTransferer::setToSortedDataFlavorArray($(this->flavorsToData->keySet())));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		clipboard->closeClipboard();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool ClipboardTransferable::fetchOneFlavor($SunClipboard* clipboard, $DataFlavor* flavor, int64_t format, $Map* cached_data) {
	$useLocalObjectStack();
	if (!this->flavorsToData->containsKey(flavor)) {
		$var($Object, data, nullptr);
		if (!$nc(cached_data)->containsKey($($Long::valueOf(format)))) {
			try {
				$assign(data, $nc(clipboard)->getClipboardData(format));
			} catch ($IOException& e) {
				$assign(data, e);
			} catch ($Throwable& e) {
				e->printStackTrace();
			}
			cached_data->put($($Long::valueOf(format)), data);
		} else {
			$assign(data, cached_data->get($($Long::valueOf(format))));
		}
		if ($instanceOf($IOException, data)) {
			this->flavorsToData->put(flavor, data);
			return false;
		} else if (data != nullptr) {
			this->flavorsToData->put(flavor, $$new($ClipboardTransferable$DataFactory, this, format, $cast($bytes, data)));
			return true;
		}
	}
	return false;
}

$DataFlavorArray* ClipboardTransferable::getTransferDataFlavors() {
	return $cast($DataFlavorArray, $nc(this->flavors)->clone());
}

bool ClipboardTransferable::isDataFlavorSupported($DataFlavor* flavor) {
	return this->flavorsToData->containsKey(flavor);
}

$Object* ClipboardTransferable::getTransferData($DataFlavor* flavor) {
	$useLocalObjectStack();
	if (!isDataFlavorSupported(flavor)) {
		$throwNew($UnsupportedFlavorException, flavor);
	}
	$var($Object, ret, this->flavorsToData->get(flavor));
	if ($instanceOf($IOException, ret)) {
		$throwNew($IOException, "Exception fetching data: "_s, $cast($IOException, ret));
	} else if ($instanceOf($ClipboardTransferable$DataFactory, ret)) {
		$var($ClipboardTransferable$DataFactory, factory, $cast($ClipboardTransferable$DataFactory, ret));
		$assign(ret, factory->getTransferData(flavor));
	}
	return ret;
}

void ClipboardTransferable::lambda$new$0($SunClipboard* clipboard, $Map* cached_data, $Map$Entry* entry) {
	$useLocalObjectStack();
	$var($DataFlavor, var$0, $cast($DataFlavor, $nc(entry)->getKey()));
	fetchOneFlavor(clipboard, var$0, $$sure($Long, entry->getValue())->longValue(), cached_data);
}

ClipboardTransferable::ClipboardTransferable() {
}

$Class* ClipboardTransferable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.datatransfer.ClipboardTransferable$$Lambda$lambda$new$0")) {
			return ClipboardTransferable$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"flavorsToData", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/datatransfer/DataFlavor;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(ClipboardTransferable, flavorsToData)},
		{"flavors", "[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE, $field(ClipboardTransferable, flavors)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/datatransfer/SunClipboard;)V", nullptr, $PUBLIC, $method(ClipboardTransferable, init$, void, $SunClipboard*)},
		{"fetchOneFlavor", "(Lsun/awt/datatransfer/SunClipboard;Ljava/awt/datatransfer/DataFlavor;JLjava/util/Map;)Z", "(Lsun/awt/datatransfer/SunClipboard;Ljava/awt/datatransfer/DataFlavor;JLjava/util/Map<Ljava/lang/Long;Ljava/lang/Object;>;)Z", $PRIVATE, $method(ClipboardTransferable, fetchOneFlavor, bool, $SunClipboard*, $DataFlavor*, int64_t, $Map*)},
		{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ClipboardTransferable, getTransferData, $Object*, $DataFlavor*), "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
		{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC, $virtualMethod(ClipboardTransferable, getTransferDataFlavors, $DataFlavorArray*)},
		{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(ClipboardTransferable, isDataFlavorSupported, bool, $DataFlavor*)},
		{"lambda$new$0", "(Lsun/awt/datatransfer/SunClipboard;Ljava/util/Map;Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ClipboardTransferable, lambda$new$0, void, $SunClipboard*, $Map*, $Map$Entry*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.datatransfer.ClipboardTransferable$DataFactory", "sun.awt.datatransfer.ClipboardTransferable", "DataFactory", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.datatransfer.ClipboardTransferable",
		"java.lang.Object",
		"java.awt.datatransfer.Transferable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.datatransfer.ClipboardTransferable$DataFactory"
	};
	$loadClass(ClipboardTransferable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClipboardTransferable);
	});
	return class$;
}

$Class* ClipboardTransferable::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun