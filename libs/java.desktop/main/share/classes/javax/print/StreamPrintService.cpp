#include <javax/print/StreamPrintService.h>

#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$FieldInfo _StreamPrintService_FieldInfo_[] = {
	{"outStream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(StreamPrintService, outStream)},
	{"disposed", "Z", nullptr, $PRIVATE, $field(StreamPrintService, disposed)},
	{}
};

$MethodInfo _StreamPrintService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(StreamPrintService, init$, void)},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PROTECTED, $method(StreamPrintService, init$, void, $OutputStream*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(StreamPrintService, dispose, void)},
	{"getOutputFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StreamPrintService, getOutputFormat, $String*)},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(StreamPrintService, getOutputStream, $OutputStream*)},
	{"isDisposed", "()Z", nullptr, $PUBLIC, $virtualMethod(StreamPrintService, isDisposed, bool)},
	{}
};

$ClassInfo _StreamPrintService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.StreamPrintService",
	"java.lang.Object",
	"javax.print.PrintService",
	_StreamPrintService_FieldInfo_,
	_StreamPrintService_MethodInfo_
};

$Object* allocate$StreamPrintService($Class* clazz) {
	return $of($alloc(StreamPrintService));
}

void StreamPrintService::init$() {
	this->disposed = false;
}

void StreamPrintService::init$($OutputStream* out) {
	this->disposed = false;
	$set(this, outStream, out);
}

$OutputStream* StreamPrintService::getOutputStream() {
	return this->outStream;
}

void StreamPrintService::dispose() {
	this->disposed = true;
}

bool StreamPrintService::isDisposed() {
	return this->disposed;
}

StreamPrintService::StreamPrintService() {
}

$Class* StreamPrintService::load$($String* name, bool initialize) {
	$loadClass(StreamPrintService, name, initialize, &_StreamPrintService_ClassInfo_, allocate$StreamPrintService);
	return class$;
}

$Class* StreamPrintService::class$ = nullptr;

	} // print
} // javax