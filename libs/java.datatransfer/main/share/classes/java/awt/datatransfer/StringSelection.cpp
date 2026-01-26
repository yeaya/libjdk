#include <java/awt/datatransfer/StringSelection.h>

#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/io/StringReader.h>
#include <jcpp.h>

#undef PLAIN_TEXT
#undef STRING

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace datatransfer {

$FieldInfo _StringSelection_FieldInfo_[] = {
	{"STRING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSelection, STRING)},
	{"PLAIN_TEXT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSelection, PLAIN_TEXT)},
	{"flavors", "[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringSelection, flavors)},
	{"data", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringSelection, data)},
	{}
};

$MethodInfo _StringSelection_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringSelection, init$, void, $String*)},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StringSelection, getTransferData, $Object*, $DataFlavor*), "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC, $virtualMethod(StringSelection, getTransferDataFlavors, $DataFlavorArray*)},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(StringSelection, isDataFlavorSupported, bool, $DataFlavor*)},
	{"lostOwnership", "(Ljava/awt/datatransfer/Clipboard;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC, $virtualMethod(StringSelection, lostOwnership, void, $Clipboard*, $Transferable*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringSelection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.datatransfer.StringSelection",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable,java.awt.datatransfer.ClipboardOwner",
	_StringSelection_FieldInfo_,
	_StringSelection_MethodInfo_
};

$Object* allocate$StringSelection($Class* clazz) {
	return $of($alloc(StringSelection));
}

int32_t StringSelection::hashCode() {
	 return this->$Transferable::hashCode();
}

bool StringSelection::equals(Object$* arg0) {
	 return this->$Transferable::equals(arg0);
}

$Object* StringSelection::clone() {
	 return this->$Transferable::clone();
}

$String* StringSelection::toString() {
	 return this->$Transferable::toString();
}

void StringSelection::finalize() {
	this->$Transferable::finalize();
}

$DataFlavorArray* StringSelection::flavors = nullptr;

void StringSelection::init$($String* data) {
	$set(this, data, data);
}

$DataFlavorArray* StringSelection::getTransferDataFlavors() {
	return $cast($DataFlavorArray, $nc(StringSelection::flavors)->clone());
}

bool StringSelection::isDataFlavorSupported($DataFlavor* flavor) {
	for (int32_t i = 0; i < $nc(StringSelection::flavors)->length; ++i) {
		if ($nc(flavor)->equals($nc(StringSelection::flavors)->get(i))) {
			return true;
		}
	}
	return false;
}

$Object* StringSelection::getTransferData($DataFlavor* flavor) {
	if ($nc(flavor)->equals($nc(StringSelection::flavors)->get(StringSelection::STRING))) {
		return $of($of(this->data));
	} else if (flavor->equals($nc(StringSelection::flavors)->get(StringSelection::PLAIN_TEXT))) {
		return $of($new($StringReader, this->data == nullptr ? ""_s : this->data));
	} else {
		$throwNew($UnsupportedFlavorException, flavor);
	}
}

void StringSelection::lostOwnership($Clipboard* clipboard, $Transferable* contents) {
}

void clinit$StringSelection($Class* class$) {
	$init($DataFlavor);
	$assignStatic(StringSelection::flavors, $new($DataFlavorArray, {
		$DataFlavor::stringFlavor,
		$DataFlavor::plainTextFlavor
	}));
}

StringSelection::StringSelection() {
}

$Class* StringSelection::load$($String* name, bool initialize) {
	$loadClass(StringSelection, name, initialize, &_StringSelection_ClassInfo_, clinit$StringSelection, allocate$StringSelection);
	return class$;
}

$Class* StringSelection::class$ = nullptr;

		} // datatransfer
	} // awt
} // java