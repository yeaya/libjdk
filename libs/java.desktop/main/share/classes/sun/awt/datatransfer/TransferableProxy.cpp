#include <sun/awt/datatransfer/TransferableProxy.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/util/Map.h>
#include <sun/awt/datatransfer/ClassLoaderObjectInputStream.h>
#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassLoaderObjectInputStream = ::sun::awt::datatransfer::ClassLoaderObjectInputStream;
using $ClassLoaderObjectOutputStream = ::sun::awt::datatransfer::ClassLoaderObjectOutputStream;

namespace sun {
	namespace awt {
		namespace datatransfer {

void TransferableProxy::init$($Transferable* t, bool local) {
	$set(this, transferable, t);
	this->isLocal = local;
}

$DataFlavorArray* TransferableProxy::getTransferDataFlavors() {
	return $nc(this->transferable)->getTransferDataFlavors();
}

bool TransferableProxy::isDataFlavorSupported($DataFlavor* flavor) {
	return $nc(this->transferable)->isDataFlavorSupported(flavor);
}

$Object* TransferableProxy::getTransferData($DataFlavor* df) {
	$useLocalObjectStack();
	$var($Object, data, $nc(this->transferable)->getTransferData(df));
	if (data != nullptr && this->isLocal && $nc(df)->isFlavorSerializedObjectType()) {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($ClassLoaderObjectOutputStream, oos, $new($ClassLoaderObjectOutputStream, baos));
		oos->writeObject(data);
		$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, $(baos->toByteArray())));
		try {
			$var($ClassLoaderObjectInputStream, ois, $new($ClassLoaderObjectInputStream, bais, $(oos->getClassLoaderMap())));
			$assign(data, ois->readObject());
		} catch ($ClassNotFoundException& cnfe) {
			$throw($$cast($IOException, $$new($IOException)->initCause(cnfe)));
		}
	}
	return data;
}

TransferableProxy::TransferableProxy() {
}

$Class* TransferableProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"transferable", "Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED | $FINAL, $field(TransferableProxy, transferable)},
		{"isLocal", "Z", nullptr, $PROTECTED | $FINAL, $field(TransferableProxy, isLocal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/datatransfer/Transferable;Z)V", nullptr, $PUBLIC, $method(TransferableProxy, init$, void, $Transferable*, bool)},
		{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TransferableProxy, getTransferData, $Object*, $DataFlavor*), "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
		{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC, $virtualMethod(TransferableProxy, getTransferDataFlavors, $DataFlavorArray*)},
		{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(TransferableProxy, isDataFlavorSupported, bool, $DataFlavor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.datatransfer.TransferableProxy",
		"java.lang.Object",
		"java.awt.datatransfer.Transferable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TransferableProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferableProxy);
	});
	return class$;
}

$Class* TransferableProxy::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun