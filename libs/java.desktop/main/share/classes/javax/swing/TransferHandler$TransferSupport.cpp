#include <javax/swing/TransferHandler$TransferSupport.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetDropEvent.h>
#include <java/awt/dnd/DropTargetEvent.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/SwingAccessor$JTextComponentAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetDropEvent = ::java::awt::dnd::DropTargetDropEvent;
using $DropTargetEvent = ::java::awt::dnd::DropTargetEvent;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $JComponent = ::javax::swing::JComponent;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JTextComponentAccessor = ::sun::swing::SwingAccessor$JTextComponentAccessor;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler$TransferSupport_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TransferHandler$TransferSupport, $assertionsDisabled)},
	{"isDrop", "Z", nullptr, $PRIVATE, $field(TransferHandler$TransferSupport, isDrop$)},
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(TransferHandler$TransferSupport, component)},
	{"showDropLocationIsSet", "Z", nullptr, $PRIVATE, $field(TransferHandler$TransferSupport, showDropLocationIsSet)},
	{"showDropLocation", "Z", nullptr, $PRIVATE, $field(TransferHandler$TransferSupport, showDropLocation)},
	{"dropAction", "I", nullptr, $PRIVATE, $field(TransferHandler$TransferSupport, dropAction)},
	{"source", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(TransferHandler$TransferSupport, source)},
	{"dropLocation", "Ljavax/swing/TransferHandler$DropLocation;", nullptr, $PRIVATE, $field(TransferHandler$TransferSupport, dropLocation)},
	{}
};

$MethodInfo _TransferHandler$TransferSupport_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/awt/dnd/DropTargetEvent;)V", nullptr, $PRIVATE, $method(TransferHandler$TransferSupport, init$, void, $Component*, $DropTargetEvent*)},
	{"<init>", "(Ljava/awt/Component;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, init$, void, $Component*, $Transferable*)},
	{"assureIsDrop", "()V", nullptr, $PRIVATE, $method(TransferHandler$TransferSupport, assureIsDrop, void)},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, getComponent, $Component*)},
	{"getDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, getDataFlavors, $DataFlavorArray*)},
	{"getDropAction", "()I", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, getDropAction, int32_t)},
	{"getDropLocation", "()Ljavax/swing/TransferHandler$DropLocation;", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, getDropLocation, $TransferHandler$DropLocation*)},
	{"getSourceDropActions", "()I", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, getSourceDropActions, int32_t)},
	{"getTransferable", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, getTransferable, $Transferable*)},
	{"getUserDropAction", "()I", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, getUserDropAction, int32_t)},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, isDataFlavorSupported, bool, $DataFlavor*)},
	{"isDrop", "()Z", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, isDrop, bool)},
	{"setDNDVariables", "(Ljava/awt/Component;Ljava/awt/dnd/DropTargetEvent;)V", nullptr, $PRIVATE, $method(TransferHandler$TransferSupport, setDNDVariables, void, $Component*, $DropTargetEvent*)},
	{"setDropAction", "(I)V", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, setDropAction, void, int32_t)},
	{"setShowDropLocation", "(Z)V", nullptr, $PUBLIC, $method(TransferHandler$TransferSupport, setShowDropLocation, void, bool)},
	{}
};

$InnerClassInfo _TransferHandler$TransferSupport_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$TransferSupport", "javax.swing.TransferHandler", "TransferSupport", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _TransferHandler$TransferSupport_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.TransferHandler$TransferSupport",
	"java.lang.Object",
	nullptr,
	_TransferHandler$TransferSupport_FieldInfo_,
	_TransferHandler$TransferSupport_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler$TransferSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$TransferSupport($Class* clazz) {
	return $of($alloc(TransferHandler$TransferSupport));
}

bool TransferHandler$TransferSupport::$assertionsDisabled = false;

void TransferHandler$TransferSupport::init$($Component* component, $DropTargetEvent* event) {
	this->dropAction = -1;
	this->isDrop$ = true;
	setDNDVariables(component, event);
}

void TransferHandler$TransferSupport::init$($Component* component, $Transferable* transferable) {
	this->dropAction = -1;
	if (component == nullptr) {
		$throwNew($NullPointerException, "component is null"_s);
	}
	if (transferable == nullptr) {
		$throwNew($NullPointerException, "transferable is null"_s);
	}
	this->isDrop$ = false;
	$set(this, component, component);
	$set(this, source, transferable);
}

void TransferHandler$TransferSupport::setDNDVariables($Component* component, $DropTargetEvent* event) {
	$useLocalCurrentObjectStackCache();
	if (!TransferHandler$TransferSupport::$assertionsDisabled && !this->isDrop$) {
		$throwNew($AssertionError);
	}
	$set(this, component, component);
	$set(this, source, event);
	$set(this, dropLocation, nullptr);
	this->dropAction = -1;
	this->showDropLocationIsSet = false;
	if (this->source == nullptr) {
		return;
	}
	if (!TransferHandler$TransferSupport::$assertionsDisabled && !($instanceOf($DropTargetDragEvent, this->source) || $instanceOf($DropTargetDropEvent, this->source))) {
		$throwNew($AssertionError);
	}
	$var($Point, p, $instanceOf($DropTargetDragEvent, this->source) ? $nc(($cast($DropTargetDragEvent, this->source)))->getLocation() : $nc(($cast($DropTargetDropEvent, this->source)))->getLocation());
	if ($SunToolkit::isInstanceOf($of(component), "javax.swing.text.JTextComponent"_s)) {
		$set(this, dropLocation, $nc($($SwingAccessor::getJTextComponentAccessor()))->dropLocationForPoint($cast($JTextComponent, component), p));
	} else if ($instanceOf($JComponent, component)) {
		$set(this, dropLocation, $nc(($cast($JComponent, component)))->dropLocationForPoint(p));
	}
}

bool TransferHandler$TransferSupport::isDrop() {
	return this->isDrop$;
}

$Component* TransferHandler$TransferSupport::getComponent() {
	return this->component;
}

void TransferHandler$TransferSupport::assureIsDrop() {
	if (!this->isDrop$) {
		$throwNew($IllegalStateException, "Not a drop"_s);
	}
}

$TransferHandler$DropLocation* TransferHandler$TransferSupport::getDropLocation() {
	assureIsDrop();
	if (this->dropLocation == nullptr) {
		$var($Point, p, $instanceOf($DropTargetDragEvent, this->source) ? $nc(($cast($DropTargetDragEvent, this->source)))->getLocation() : $nc(($cast($DropTargetDropEvent, this->source)))->getLocation());
		$set(this, dropLocation, $new($TransferHandler$DropLocation, p));
	}
	return this->dropLocation;
}

void TransferHandler$TransferSupport::setShowDropLocation(bool showDropLocation) {
	assureIsDrop();
	this->showDropLocation = showDropLocation;
	this->showDropLocationIsSet = true;
}

void TransferHandler$TransferSupport::setDropAction(int32_t dropAction) {
	$useLocalCurrentObjectStackCache();
	assureIsDrop();
	int32_t action = (int32_t)(dropAction & (uint32_t)getSourceDropActions());
	if (!(action == 1 || action == 2 || action == 0x40000000)) {
		$throwNew($IllegalArgumentException, $$str({"unsupported drop action: "_s, $$str(dropAction)}));
	}
	this->dropAction = dropAction;
}

int32_t TransferHandler$TransferSupport::getDropAction() {
	return this->dropAction == -1 ? getUserDropAction() : this->dropAction;
}

int32_t TransferHandler$TransferSupport::getUserDropAction() {
	assureIsDrop();
	return ($instanceOf($DropTargetDragEvent, this->source)) ? $nc(($cast($DropTargetDragEvent, this->source)))->getDropAction() : $nc(($cast($DropTargetDropEvent, this->source)))->getDropAction();
}

int32_t TransferHandler$TransferSupport::getSourceDropActions() {
	assureIsDrop();
	return ($instanceOf($DropTargetDragEvent, this->source)) ? $nc(($cast($DropTargetDragEvent, this->source)))->getSourceActions() : $nc(($cast($DropTargetDropEvent, this->source)))->getSourceActions();
}

$DataFlavorArray* TransferHandler$TransferSupport::getDataFlavors() {
	if (this->isDrop$) {
		if ($instanceOf($DropTargetDragEvent, this->source)) {
			return $nc(($cast($DropTargetDragEvent, this->source)))->getCurrentDataFlavors();
		} else {
			return $nc(($cast($DropTargetDropEvent, this->source)))->getCurrentDataFlavors();
		}
	}
	return $nc(($cast($Transferable, this->source)))->getTransferDataFlavors();
}

bool TransferHandler$TransferSupport::isDataFlavorSupported($DataFlavor* df) {
	if (this->isDrop$) {
		if ($instanceOf($DropTargetDragEvent, this->source)) {
			return $nc(($cast($DropTargetDragEvent, this->source)))->isDataFlavorSupported(df);
		} else {
			return $nc(($cast($DropTargetDropEvent, this->source)))->isDataFlavorSupported(df);
		}
	}
	return $nc(($cast($Transferable, this->source)))->isDataFlavorSupported(df);
}

$Transferable* TransferHandler$TransferSupport::getTransferable() {
	if (this->isDrop$) {
		if ($instanceOf($DropTargetDragEvent, this->source)) {
			return $nc(($cast($DropTargetDragEvent, this->source)))->getTransferable();
		} else {
			return $nc(($cast($DropTargetDropEvent, this->source)))->getTransferable();
		}
	}
	return $cast($Transferable, this->source);
}

void clinit$TransferHandler$TransferSupport($Class* class$) {
	$load($TransferHandler);
	TransferHandler$TransferSupport::$assertionsDisabled = !$TransferHandler::class$->desiredAssertionStatus();
}

TransferHandler$TransferSupport::TransferHandler$TransferSupport() {
}

$Class* TransferHandler$TransferSupport::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$TransferSupport, name, initialize, &_TransferHandler$TransferSupport_ClassInfo_, clinit$TransferHandler$TransferSupport, allocate$TransferHandler$TransferSupport);
	return class$;
}

$Class* TransferHandler$TransferSupport::class$ = nullptr;

	} // swing
} // javax