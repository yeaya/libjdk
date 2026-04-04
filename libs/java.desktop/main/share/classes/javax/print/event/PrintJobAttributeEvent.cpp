#include <javax/print/event/PrintJobAttributeEvent.h>
#include <java/util/EventObject.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <javax/print/event/PrintEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;
using $PrintEvent = ::javax::print::event::PrintEvent;

namespace javax {
	namespace print {
		namespace event {

void PrintJobAttributeEvent::init$($DocPrintJob* source, $PrintJobAttributeSet* attributes) {
	$PrintEvent::init$(source);
	$set(this, attributes, $AttributeSetUtilities::unmodifiableView(attributes));
}

$DocPrintJob* PrintJobAttributeEvent::getPrintJob() {
	return $cast($DocPrintJob, getSource());
}

$PrintJobAttributeSet* PrintJobAttributeEvent::getAttributes() {
	return this->attributes;
}

PrintJobAttributeEvent::PrintJobAttributeEvent() {
}

$Class* PrintJobAttributeEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintJobAttributeEvent, serialVersionUID)},
		{"attributes", "Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PRIVATE, $field(PrintJobAttributeEvent, attributes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/print/DocPrintJob;Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC, $method(PrintJobAttributeEvent, init$, void, $DocPrintJob*, $PrintJobAttributeSet*)},
		{"getAttributes", "()Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PUBLIC, $virtualMethod(PrintJobAttributeEvent, getAttributes, $PrintJobAttributeSet*)},
		{"getPrintJob", "()Ljavax/print/DocPrintJob;", nullptr, $PUBLIC, $virtualMethod(PrintJobAttributeEvent, getPrintJob, $DocPrintJob*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.print.event.PrintJobAttributeEvent",
		"javax.print.event.PrintEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrintJobAttributeEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintJobAttributeEvent);
	});
	return class$;
}

$Class* PrintJobAttributeEvent::class$ = nullptr;

		} // event
	} // print
} // javax