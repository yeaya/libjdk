#include <sun/java2d/DefaultDisposerRecord.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$FieldInfo _DefaultDisposerRecord_FieldInfo_[] = {
	{"dataPointer", "J", nullptr, $PRIVATE, $field(DefaultDisposerRecord, dataPointer)},
	{"disposerMethodPointer", "J", nullptr, $PRIVATE, $field(DefaultDisposerRecord, disposerMethodPointer)},
	{}
};

$MethodInfo _DefaultDisposerRecord_MethodInfo_[] = {
	{"<init>", "(JJ)V", nullptr, $PUBLIC, $method(DefaultDisposerRecord, init$, void, int64_t, int64_t)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultDisposerRecord, dispose, void)},
	{"getDataPointer", "()J", nullptr, $PUBLIC, $virtualMethod(DefaultDisposerRecord, getDataPointer, int64_t)},
	{"getDisposerMethodPointer", "()J", nullptr, $PUBLIC, $virtualMethod(DefaultDisposerRecord, getDisposerMethodPointer, int64_t)},
	{"invokeNativeDispose", "(JJ)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(DefaultDisposerRecord, invokeNativeDispose, void, int64_t, int64_t)},
	{}
};

#define _METHOD_INDEX_invokeNativeDispose 4

$ClassInfo _DefaultDisposerRecord_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.DefaultDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_DefaultDisposerRecord_FieldInfo_,
	_DefaultDisposerRecord_MethodInfo_
};

$Object* allocate$DefaultDisposerRecord($Class* clazz) {
	return $of($alloc(DefaultDisposerRecord));
}

void DefaultDisposerRecord::init$(int64_t disposerMethodPointer, int64_t dataPointer) {
	this->disposerMethodPointer = disposerMethodPointer;
	this->dataPointer = dataPointer;
}

void DefaultDisposerRecord::dispose() {
	invokeNativeDispose(this->disposerMethodPointer, this->dataPointer);
}

int64_t DefaultDisposerRecord::getDataPointer() {
	return this->dataPointer;
}

int64_t DefaultDisposerRecord::getDisposerMethodPointer() {
	return this->disposerMethodPointer;
}

void DefaultDisposerRecord::invokeNativeDispose(int64_t disposerMethodPointer, int64_t dataPointer) {
	$init(DefaultDisposerRecord);
	$prepareNativeStatic(DefaultDisposerRecord, invokeNativeDispose, void, int64_t disposerMethodPointer, int64_t dataPointer);
	$invokeNativeStatic(disposerMethodPointer, dataPointer);
	$finishNativeStatic();
}

DefaultDisposerRecord::DefaultDisposerRecord() {
}

$Class* DefaultDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(DefaultDisposerRecord, name, initialize, &_DefaultDisposerRecord_ClassInfo_, allocate$DefaultDisposerRecord);
	return class$;
}

$Class* DefaultDisposerRecord::class$ = nullptr;

	} // java2d
} // sun