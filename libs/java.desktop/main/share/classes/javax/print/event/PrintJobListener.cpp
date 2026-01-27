#include <javax/print/event/PrintJobListener.h>

#include <javax/print/event/PrintJobEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintJobEvent = ::javax::print::event::PrintJobEvent;

namespace javax {
	namespace print {
		namespace event {

$MethodInfo _PrintJobListener_MethodInfo_[] = {
	{"printDataTransferCompleted", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJobListener, printDataTransferCompleted, void, $PrintJobEvent*)},
	{"printJobCanceled", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJobListener, printJobCanceled, void, $PrintJobEvent*)},
	{"printJobCompleted", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJobListener, printJobCompleted, void, $PrintJobEvent*)},
	{"printJobFailed", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJobListener, printJobFailed, void, $PrintJobEvent*)},
	{"printJobNoMoreEvents", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJobListener, printJobNoMoreEvents, void, $PrintJobEvent*)},
	{"printJobRequiresAttention", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrintJobListener, printJobRequiresAttention, void, $PrintJobEvent*)},
	{}
};

$ClassInfo _PrintJobListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.event.PrintJobListener",
	nullptr,
	nullptr,
	nullptr,
	_PrintJobListener_MethodInfo_
};

$Object* allocate$PrintJobListener($Class* clazz) {
	return $of($alloc(PrintJobListener));
}

$Class* PrintJobListener::load$($String* name, bool initialize) {
	$loadClass(PrintJobListener, name, initialize, &_PrintJobListener_ClassInfo_, allocate$PrintJobListener);
	return class$;
}

$Class* PrintJobListener::class$ = nullptr;

		} // event
	} // print
} // javax