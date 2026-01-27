#include <javax/print/DocPrintJob.h>

#include <javax/print/Doc.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/event/PrintJobAttributeListener.h>
#include <javax/print/event/PrintJobListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Doc = ::javax::print::Doc;
using $PrintService = ::javax::print::PrintService;
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $PrintJobAttributeListener = ::javax::print::event::PrintJobAttributeListener;
using $PrintJobListener = ::javax::print::event::PrintJobListener;

namespace javax {
	namespace print {

$MethodInfo _DocPrintJob_MethodInfo_[] = {
	{"addPrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocPrintJob, addPrintJobAttributeListener, void, $PrintJobAttributeListener*, $PrintJobAttributeSet*)},
	{"addPrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocPrintJob, addPrintJobListener, void, $PrintJobListener*)},
	{"getAttributes", "()Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocPrintJob, getAttributes, $PrintJobAttributeSet*)},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocPrintJob, getPrintService, $PrintService*)},
	{"print", "(Ljavax/print/Doc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocPrintJob, print, void, $Doc*, $PrintRequestAttributeSet*), "javax.print.PrintException"},
	{"removePrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocPrintJob, removePrintJobAttributeListener, void, $PrintJobAttributeListener*)},
	{"removePrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocPrintJob, removePrintJobListener, void, $PrintJobListener*)},
	{}
};

$ClassInfo _DocPrintJob_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.DocPrintJob",
	nullptr,
	nullptr,
	nullptr,
	_DocPrintJob_MethodInfo_
};

$Object* allocate$DocPrintJob($Class* clazz) {
	return $of($alloc(DocPrintJob));
}

$Class* DocPrintJob::load$($String* name, bool initialize) {
	$loadClass(DocPrintJob, name, initialize, &_DocPrintJob_ClassInfo_, allocate$DocPrintJob);
	return class$;
}

$Class* DocPrintJob::class$ = nullptr;

	} // print
} // javax