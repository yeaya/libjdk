#include <javax/swing/TransferHandler$PropertyTransferable.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/TransferHandler.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $JComponent = ::javax::swing::JComponent;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace javax {
	namespace swing {

void TransferHandler$PropertyTransferable::init$($PropertyDescriptor* p, $JComponent* c) {
	$set(this, property, p);
	$set(this, component, c);
}

$DataFlavorArray* TransferHandler$PropertyTransferable::getTransferDataFlavors() {
	$useLocalObjectStack();
	$var($DataFlavorArray, flavors, $new($DataFlavorArray, 1));
	$Class* propertyType = $nc(this->property)->getPropertyType();
	$var($String, mimeType, $str({$DataFlavor::javaJVMLocalObjectMimeType, ";class="_s, $($nc(propertyType)->getName())}));
	try {
		flavors->set(0, $$new($DataFlavor, mimeType));
	} catch ($ClassNotFoundException& cnfe) {
		$assign(flavors, $new($DataFlavorArray, 0));
	}
	return flavors;
}

bool TransferHandler$PropertyTransferable::isDataFlavorSupported($DataFlavor* flavor) {
	$useLocalObjectStack();
	$Class* propertyType = $nc(this->property)->getPropertyType();
	bool var$1 = "application"_s->equals($($nc(flavor)->getPrimaryType()));
	bool var$0 = var$1 && "x-java-jvm-local-objectref"_s->equals($(flavor->getSubType()));
	if (var$0 && $nc(flavor->getRepresentationClass())->isAssignableFrom(propertyType)) {
		return true;
	}
	return false;
}

$Object* TransferHandler$PropertyTransferable::getTransferData($DataFlavor* flavor) {
	$useLocalObjectStack();
	if (!isDataFlavorSupported(flavor)) {
		$throwNew($UnsupportedFlavorException, flavor);
	}
	$var($Method, reader, $nc(this->property)->getReadMethod());
	$var($Object, value, nullptr);
	try {
		$assign(value, $MethodUtil::invoke(reader, this->component, ($ObjectArray*)nullptr));
	} catch ($Exception& ex) {
		$throwNew($IOException, $$str({"Property read failed: "_s, $($nc(this->property)->getName())}));
	}
	return value;
}

TransferHandler$PropertyTransferable::TransferHandler$PropertyTransferable() {
}

$Class* TransferHandler$PropertyTransferable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"component", "Ljavax/swing/JComponent;", nullptr, 0, $field(TransferHandler$PropertyTransferable, component)},
		{"property", "Ljava/beans/PropertyDescriptor;", nullptr, 0, $field(TransferHandler$PropertyTransferable, property)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/PropertyDescriptor;Ljavax/swing/JComponent;)V", nullptr, 0, $method(TransferHandler$PropertyTransferable, init$, void, $PropertyDescriptor*, $JComponent*)},
		{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TransferHandler$PropertyTransferable, getTransferData, $Object*, $DataFlavor*), "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
		{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC, $virtualMethod(TransferHandler$PropertyTransferable, getTransferDataFlavors, $DataFlavorArray*)},
		{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(TransferHandler$PropertyTransferable, isDataFlavorSupported, bool, $DataFlavor*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TransferHandler$PropertyTransferable", "javax.swing.TransferHandler", "PropertyTransferable", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.TransferHandler$PropertyTransferable",
		"java.lang.Object",
		"java.awt.datatransfer.Transferable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.TransferHandler"
	};
	$loadClass(TransferHandler$PropertyTransferable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferHandler$PropertyTransferable);
	});
	return class$;
}

$Class* TransferHandler$PropertyTransferable::class$ = nullptr;

	} // swing
} // javax