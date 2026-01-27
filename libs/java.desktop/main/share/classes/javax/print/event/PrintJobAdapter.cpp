#include <javax/print/event/PrintJobAdapter.h>

#include <javax/print/event/PrintJobEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintJobEvent = ::javax::print::event::PrintJobEvent;

namespace javax {
	namespace print {
		namespace event {

$MethodInfo _PrintJobAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(PrintJobAdapter, init$, void)},
	{"printDataTransferCompleted", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintJobAdapter, printDataTransferCompleted, void, $PrintJobEvent*)},
	{"printJobCanceled", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintJobAdapter, printJobCanceled, void, $PrintJobEvent*)},
	{"printJobCompleted", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintJobAdapter, printJobCompleted, void, $PrintJobEvent*)},
	{"printJobFailed", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintJobAdapter, printJobFailed, void, $PrintJobEvent*)},
	{"printJobNoMoreEvents", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintJobAdapter, printJobNoMoreEvents, void, $PrintJobEvent*)},
	{"printJobRequiresAttention", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintJobAdapter, printJobRequiresAttention, void, $PrintJobEvent*)},
	{}
};

$ClassInfo _PrintJobAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.event.PrintJobAdapter",
	"java.lang.Object",
	"javax.print.event.PrintJobListener",
	nullptr,
	_PrintJobAdapter_MethodInfo_
};

$Object* allocate$PrintJobAdapter($Class* clazz) {
	return $of($alloc(PrintJobAdapter));
}

void PrintJobAdapter::init$() {
}

void PrintJobAdapter::printDataTransferCompleted($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobCompleted($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobFailed($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobCanceled($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobNoMoreEvents($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobRequiresAttention($PrintJobEvent* pje) {
}

PrintJobAdapter::PrintJobAdapter() {
}

$Class* PrintJobAdapter::load$($String* name, bool initialize) {
	$loadClass(PrintJobAdapter, name, initialize, &_PrintJobAdapter_ClassInfo_, allocate$PrintJobAdapter);
	return class$;
}

$Class* PrintJobAdapter::class$ = nullptr;

		} // event
	} // print
} // javax