#include <javax/print/PrintService.h>

#include <javax/print/DocFlavor.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/ServiceUIFactory.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/event/PrintServiceAttributeListener.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $ServiceUIFactory = ::javax::print::ServiceUIFactory;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $PrintServiceAttributeListener = ::javax::print::event::PrintServiceAttributeListener;

namespace javax {
	namespace print {

$MethodInfo _PrintService_MethodInfo_[] = {
	{"addPrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, addPrintServiceAttributeListener, void, $PrintServiceAttributeListener*)},
	{"createPrintJob", "()Ljavax/print/DocPrintJob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, createPrintJob, $DocPrintJob*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttribute", "(Ljava/lang/Class;)Ljavax/print/attribute/PrintServiceAttribute;", "<T::Ljavax/print/attribute/PrintServiceAttribute;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, getAttribute, $PrintServiceAttribute*, $Class*)},
	{"getAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, getAttributes, $PrintServiceAttributeSet*)},
	{"getDefaultAttributeValue", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, getDefaultAttributeValue, $Object*, $Class*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, getName, $String*)},
	{"getServiceUIFactory", "()Ljavax/print/ServiceUIFactory;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, getServiceUIFactory, $ServiceUIFactory*)},
	{"getSupportedAttributeCategories", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, getSupportedAttributeCategories, $ClassArray*)},
	{"getSupportedAttributeValues", "(Ljava/lang/Class;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, getSupportedAttributeValues, $Object*, $Class*, $DocFlavor*, $AttributeSet*)},
	{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, getSupportedDocFlavors, $DocFlavorArray*)},
	{"getUnsupportedAttributes", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljavax/print/attribute/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, getUnsupportedAttributes, $AttributeSet*, $DocFlavor*, $AttributeSet*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isAttributeCategorySupported", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, isAttributeCategorySupported, bool, $Class*)},
	{"isAttributeValueSupported", "(Ljavax/print/attribute/Attribute;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, isAttributeValueSupported, bool, $Attribute*, $DocFlavor*, $AttributeSet*)},
	{"isDocFlavorSupported", "(Ljavax/print/DocFlavor;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, isDocFlavorSupported, bool, $DocFlavor*)},
	{"removePrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintService, removePrintServiceAttributeListener, void, $PrintServiceAttributeListener*)},
	{}
};

$ClassInfo _PrintService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.PrintService",
	nullptr,
	nullptr,
	nullptr,
	_PrintService_MethodInfo_
};

$Object* allocate$PrintService($Class* clazz) {
	return $of($alloc(PrintService));
}

bool PrintService::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t PrintService::hashCode() {
	 return this->$Object::hashCode();
}

$Class* PrintService::load$($String* name, bool initialize) {
	$loadClass(PrintService, name, initialize, &_PrintService_ClassInfo_, allocate$PrintService);
	return class$;
}

$Class* PrintService::class$ = nullptr;

	} // print
} // javax