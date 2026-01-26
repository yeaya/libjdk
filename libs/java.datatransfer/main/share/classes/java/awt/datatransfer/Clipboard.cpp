#include <java/awt/datatransfer/Clipboard.h>

#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorEvent.h>
#include <java/awt/datatransfer/FlavorListener.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <sun/datatransfer/DesktopDatatransferService.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $FlavorListenerArray = $Array<::java::awt::datatransfer::FlavorListener>;
using $ClipboardOwner = ::java::awt::datatransfer::ClipboardOwner;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorEvent = ::java::awt::datatransfer::FlavorEvent;
using $FlavorListener = ::java::awt::datatransfer::FlavorListener;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;
using $DesktopDatatransferService = ::sun::datatransfer::DesktopDatatransferService;

namespace java {
	namespace awt {
		namespace datatransfer {

class Clipboard$$Lambda$lambda$setContents$0 : public $Runnable {
	$class(Clipboard$$Lambda$lambda$setContents$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Clipboard* inst, $ClipboardOwner* oldOwner, $Transferable* oldContents) {
		$set(this, inst$, inst);
		$set(this, oldOwner, oldOwner);
		$set(this, oldContents, oldContents);
	}
	virtual void run() override {
		$nc(inst$)->lambda$setContents$0(oldOwner, oldContents);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Clipboard$$Lambda$lambda$setContents$0>());
	}
	Clipboard* inst$ = nullptr;
	$ClipboardOwner* oldOwner = nullptr;
	$Transferable* oldContents = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Clipboard$$Lambda$lambda$setContents$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Clipboard$$Lambda$lambda$setContents$0, inst$)},
	{"oldOwner", "Ljava/awt/datatransfer/ClipboardOwner;", nullptr, $PUBLIC, $field(Clipboard$$Lambda$lambda$setContents$0, oldOwner)},
	{"oldContents", "Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC, $field(Clipboard$$Lambda$lambda$setContents$0, oldContents)},
	{}
};
$MethodInfo Clipboard$$Lambda$lambda$setContents$0::methodInfos[3] = {
	{"<init>", "(Ljava/awt/datatransfer/Clipboard;Ljava/awt/datatransfer/ClipboardOwner;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC, $method(Clipboard$$Lambda$lambda$setContents$0, init$, void, Clipboard*, $ClipboardOwner*, $Transferable*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Clipboard$$Lambda$lambda$setContents$0, run, void)},
	{}
};
$ClassInfo Clipboard$$Lambda$lambda$setContents$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.datatransfer.Clipboard$$Lambda$lambda$setContents$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Clipboard$$Lambda$lambda$setContents$0::load$($String* name, bool initialize) {
	$loadClass(Clipboard$$Lambda$lambda$setContents$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Clipboard$$Lambda$lambda$setContents$0::class$ = nullptr;

class Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1 : public $Consumer {
	$class(Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Clipboard* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* listener) override {
		$nc(inst$)->lambda$fireFlavorsChanged$2($cast($FlavorListener, listener));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1>());
	}
	Clipboard* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1, inst$)},
	{}
};
$MethodInfo Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/datatransfer/Clipboard;)V", nullptr, $PUBLIC, $method(Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1, init$, void, Clipboard*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1, accept, void, Object$*)},
	{}
};
$ClassInfo Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.datatransfer.Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1::load$($String* name, bool initialize) {
	$loadClass(Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1::class$ = nullptr;

class Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2 : public $Runnable {
	$class(Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Clipboard* inst, $FlavorListener* listener) {
		$set(this, inst$, inst);
		$set(this, listener, listener);
	}
	virtual void run() override {
		$nc(inst$)->lambda$fireFlavorsChanged$1(listener);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2>());
	}
	Clipboard* inst$ = nullptr;
	$FlavorListener* listener = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2, inst$)},
	{"listener", "Ljava/awt/datatransfer/FlavorListener;", nullptr, $PUBLIC, $field(Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2, listener)},
	{}
};
$MethodInfo Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2::methodInfos[3] = {
	{"<init>", "(Ljava/awt/datatransfer/Clipboard;Ljava/awt/datatransfer/FlavorListener;)V", nullptr, $PUBLIC, $method(Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2, init$, void, Clipboard*, $FlavorListener*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2, run, void)},
	{}
};
$ClassInfo Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.datatransfer.Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2::load$($String* name, bool initialize) {
	$loadClass(Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2::class$ = nullptr;

$FieldInfo _Clipboard_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(Clipboard, name)},
	{"owner", "Ljava/awt/datatransfer/ClipboardOwner;", nullptr, $PROTECTED, $field(Clipboard, owner)},
	{"contents", "Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED, $field(Clipboard, contents)},
	{"flavorListeners", "Ljava/util/Set;", "Ljava/util/Set<Ljava/awt/datatransfer/FlavorListener;>;", $PRIVATE, $field(Clipboard, flavorListeners)},
	{"currentDataFlavors", "Ljava/util/Set;", "Ljava/util/Set<Ljava/awt/datatransfer/DataFlavor;>;", $PRIVATE, $field(Clipboard, currentDataFlavors)},
	{}
};

$MethodInfo _Clipboard_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Clipboard, init$, void, $String*)},
	{"addFlavorListener", "(Ljava/awt/datatransfer/FlavorListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Clipboard, addFlavorListener, void, $FlavorListener*)},
	{"fireFlavorsChanged", "()V", nullptr, $PRIVATE, $method(Clipboard, fireFlavorsChanged, void)},
	{"getAvailableDataFlavorSet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/awt/datatransfer/DataFlavor;>;", $PRIVATE, $method(Clipboard, getAvailableDataFlavorSet, $Set*)},
	{"getAvailableDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC, $virtualMethod(Clipboard, getAvailableDataFlavors, $DataFlavorArray*)},
	{"getContents", "(Ljava/lang/Object;)Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Clipboard, getContents, $Transferable*, Object$*)},
	{"getData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Clipboard, getData, $Object*, $DataFlavor*), "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getFlavorListeners", "()[Ljava/awt/datatransfer/FlavorListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Clipboard, getFlavorListeners, $FlavorListenerArray*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Clipboard, getName, $String*)},
	{"isDataFlavorAvailable", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(Clipboard, isDataFlavorAvailable, bool, $DataFlavor*)},
	{"lambda$fireFlavorsChanged$1", "(Ljava/awt/datatransfer/FlavorListener;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Clipboard, lambda$fireFlavorsChanged$1, void, $FlavorListener*)},
	{"lambda$fireFlavorsChanged$2", "(Ljava/awt/datatransfer/FlavorListener;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Clipboard, lambda$fireFlavorsChanged$2, void, $FlavorListener*)},
	{"lambda$setContents$0", "(Ljava/awt/datatransfer/ClipboardOwner;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Clipboard, lambda$setContents$0, void, $ClipboardOwner*, $Transferable*)},
	{"removeFlavorListener", "(Ljava/awt/datatransfer/FlavorListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Clipboard, removeFlavorListener, void, $FlavorListener*)},
	{"setContents", "(Ljava/awt/datatransfer/Transferable;Ljava/awt/datatransfer/ClipboardOwner;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Clipboard, setContents, void, $Transferable*, $ClipboardOwner*)},
	{}
};

$ClassInfo _Clipboard_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.datatransfer.Clipboard",
	"java.lang.Object",
	nullptr,
	_Clipboard_FieldInfo_,
	_Clipboard_MethodInfo_
};

$Object* allocate$Clipboard($Class* clazz) {
	return $of($alloc(Clipboard));
}

void Clipboard::init$($String* name) {
	$set(this, name, name);
}

$String* Clipboard::getName() {
	return this->name;
}

void Clipboard::setContents($Transferable* contents, $ClipboardOwner* owner) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ClipboardOwner, oldOwner, this->owner);
		$var($Transferable, oldContents, this->contents);
		$set(this, owner, owner);
		$set(this, contents, contents);
		if (oldOwner != nullptr && oldOwner != owner) {
			$nc($($DataFlavorUtil::getDesktopService()))->invokeOnEventThread(static_cast<$Runnable*>($$new(Clipboard$$Lambda$lambda$setContents$0, this, oldOwner, oldContents)));
		}
		fireFlavorsChanged();
	}
}

$Transferable* Clipboard::getContents(Object$* requestor) {
	$synchronized(this) {
		return this->contents;
	}
}

$DataFlavorArray* Clipboard::getAvailableDataFlavors() {
	$var($Transferable, cntnts, getContents(nullptr));
	if (cntnts == nullptr) {
		return $new($DataFlavorArray, 0);
	}
	return $nc(cntnts)->getTransferDataFlavors();
}

bool Clipboard::isDataFlavorAvailable($DataFlavor* flavor) {
	if (flavor == nullptr) {
		$throwNew($NullPointerException, "flavor"_s);
	}
	$var($Transferable, cntnts, getContents(nullptr));
	if (cntnts == nullptr) {
		return false;
	}
	return $nc(cntnts)->isDataFlavorSupported(flavor);
}

$Object* Clipboard::getData($DataFlavor* flavor) {
	if (flavor == nullptr) {
		$throwNew($NullPointerException, "flavor"_s);
	}
	$var($Transferable, cntnts, getContents(nullptr));
	if (cntnts == nullptr) {
		$throwNew($UnsupportedFlavorException, flavor);
	}
	return $of($nc(cntnts)->getTransferData(flavor));
}

void Clipboard::addFlavorListener($FlavorListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		if (this->flavorListeners == nullptr) {
			$set(this, flavorListeners, $new($HashSet));
			$set(this, currentDataFlavors, getAvailableDataFlavorSet());
		}
		$nc(this->flavorListeners)->add(listener);
	}
}

void Clipboard::removeFlavorListener($FlavorListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->flavorListeners == nullptr) {
			return;
		}
		$nc(this->flavorListeners)->remove(listener);
	}
}

$FlavorListenerArray* Clipboard::getFlavorListeners() {
	$synchronized(this) {
		return this->flavorListeners == nullptr ? $new($FlavorListenerArray, 0) : $fcast($FlavorListenerArray, $nc(this->flavorListeners)->toArray($$new($FlavorListenerArray, $nc(this->flavorListeners)->size())));
	}
}

void Clipboard::fireFlavorsChanged() {
	$useLocalCurrentObjectStackCache();
	if (this->flavorListeners == nullptr) {
		return;
	}
	$var($Set, prevDataFlavors, this->currentDataFlavors);
	$set(this, currentDataFlavors, getAvailableDataFlavorSet());
	if ($Objects::equals(prevDataFlavors, this->currentDataFlavors)) {
		return;
	}
	$nc(this->flavorListeners)->forEach(static_cast<$Consumer*>($$new(Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1, this)));
}

$Set* Clipboard::getAvailableDataFlavorSet() {
	$useLocalCurrentObjectStackCache();
	$var($Set, set, $new($HashSet));
	$var($Transferable, contents, getContents(nullptr));
	if (contents != nullptr) {
		$var($DataFlavorArray, flavors, contents->getTransferDataFlavors());
		if (flavors != nullptr) {
			set->addAll($($Arrays::asList(flavors)));
		}
	}
	return set;
}

void Clipboard::lambda$fireFlavorsChanged$2($FlavorListener* listener) {
	$useLocalCurrentObjectStackCache();
	$nc($($DataFlavorUtil::getDesktopService()))->invokeOnEventThread(static_cast<$Runnable*>($$new(Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2, this, listener)));
}

void Clipboard::lambda$fireFlavorsChanged$1($FlavorListener* listener) {
	$nc(listener)->flavorsChanged($$new($FlavorEvent, this));
}

void Clipboard::lambda$setContents$0($ClipboardOwner* oldOwner, $Transferable* oldContents) {
	$nc(oldOwner)->lostOwnership(this, oldContents);
}

Clipboard::Clipboard() {
}

$Class* Clipboard::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Clipboard$$Lambda$lambda$setContents$0::classInfo$.name)) {
			return Clipboard$$Lambda$lambda$setContents$0::load$(name, initialize);
		}
		if (name->equals(Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1::classInfo$.name)) {
			return Clipboard$$Lambda$lambda$fireFlavorsChanged$2$1::load$(name, initialize);
		}
		if (name->equals(Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2::classInfo$.name)) {
			return Clipboard$$Lambda$lambda$fireFlavorsChanged$1$2::load$(name, initialize);
		}
	}
	$loadClass(Clipboard, name, initialize, &_Clipboard_ClassInfo_, allocate$Clipboard);
	return class$;
}

$Class* Clipboard::class$ = nullptr;

		} // datatransfer
	} // awt
} // java