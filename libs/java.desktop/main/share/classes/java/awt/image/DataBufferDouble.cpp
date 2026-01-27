#include <java/awt/image/DataBufferDouble.h>

#include <java/awt/image/DataBuffer.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

#undef STABLE
#undef TYPE_DOUBLE
#undef UNTRACKABLE

using $doubleArray2 = $Array<double, 2>;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _DataBufferDouble_FieldInfo_[] = {
	{"bankdata", "[[D", nullptr, 0, $field(DataBufferDouble, bankdata)},
	{"data", "[D", nullptr, 0, $field(DataBufferDouble, data)},
	{}
};

$MethodInfo _DataBufferDouble_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(DataBufferDouble, init$, void, int32_t)},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(DataBufferDouble, init$, void, int32_t, int32_t)},
	{"<init>", "([DI)V", nullptr, $PUBLIC, $method(DataBufferDouble, init$, void, $doubles*, int32_t)},
	{"<init>", "([DII)V", nullptr, $PUBLIC, $method(DataBufferDouble, init$, void, $doubles*, int32_t, int32_t)},
	{"<init>", "([[DI)V", nullptr, $PUBLIC, $method(DataBufferDouble, init$, void, $doubleArray2*, int32_t)},
	{"<init>", "([[DI[I)V", nullptr, $PUBLIC, $method(DataBufferDouble, init$, void, $doubleArray2*, int32_t, $ints*)},
	{"getBankData", "()[[D", nullptr, $PUBLIC, $method(DataBufferDouble, getBankData, $doubleArray2*)},
	{"getData", "()[D", nullptr, $PUBLIC, $method(DataBufferDouble, getData, $doubles*)},
	{"getData", "(I)[D", nullptr, $PUBLIC, $method(DataBufferDouble, getData, $doubles*, int32_t)},
	{"getElem", "(I)I", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, getElem, int32_t, int32_t)},
	{"getElem", "(II)I", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, getElem, int32_t, int32_t, int32_t)},
	{"getElemDouble", "(I)D", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, getElemDouble, double, int32_t)},
	{"getElemDouble", "(II)D", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, getElemDouble, double, int32_t, int32_t)},
	{"getElemFloat", "(I)F", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, getElemFloat, float, int32_t)},
	{"getElemFloat", "(II)F", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, getElemFloat, float, int32_t, int32_t)},
	{"setElem", "(II)V", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, setElem, void, int32_t, int32_t)},
	{"setElem", "(III)V", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, setElem, void, int32_t, int32_t, int32_t)},
	{"setElemDouble", "(ID)V", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, setElemDouble, void, int32_t, double)},
	{"setElemDouble", "(IID)V", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, setElemDouble, void, int32_t, int32_t, double)},
	{"setElemFloat", "(IF)V", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, setElemFloat, void, int32_t, float)},
	{"setElemFloat", "(IIF)V", nullptr, $PUBLIC, $virtualMethod(DataBufferDouble, setElemFloat, void, int32_t, int32_t, float)},
	{}
};

$ClassInfo _DataBufferDouble_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.image.DataBufferDouble",
	"java.awt.image.DataBuffer",
	nullptr,
	_DataBufferDouble_FieldInfo_,
	_DataBufferDouble_MethodInfo_
};

$Object* allocate$DataBufferDouble($Class* clazz) {
	return $of($alloc(DataBufferDouble));
}

void DataBufferDouble::init$(int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_DOUBLE, size);
	$set(this, data, $new($doubles, size));
	$set(this, bankdata, $new($doubleArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferDouble::init$(int32_t size, int32_t numBanks) {
	$useLocalCurrentObjectStackCache();
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::STABLE, $DataBuffer::TYPE_DOUBLE, size, numBanks);
	$set(this, bankdata, $new($doubleArray2, numBanks));
	for (int32_t i = 0; i < numBanks; ++i) {
		$nc(this->bankdata)->set(i, $$new($doubles, size));
	}
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferDouble::init$($doubles* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_DOUBLE, size);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($doubleArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferDouble::init$($doubles* dataArray, int32_t size, int32_t offset) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_DOUBLE, size, 1, offset);
	$set(this, data, dataArray);
	$set(this, bankdata, $new($doubleArray2, 1));
	$nc(this->bankdata)->set(0, this->data);
}

void DataBufferDouble::init$($doubleArray2* dataArray, int32_t size) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_DOUBLE, size, $nc(dataArray)->length);
	$set(this, bankdata, $cast($doubleArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

void DataBufferDouble::init$($doubleArray2* dataArray, int32_t size, $ints* offsets) {
	$init($StateTrackable$State);
	$DataBuffer::init$($StateTrackable$State::UNTRACKABLE, $DataBuffer::TYPE_DOUBLE, size, $nc(dataArray)->length, offsets);
	$set(this, bankdata, $cast($doubleArray2, $nc(dataArray)->clone()));
	$set(this, data, $nc(this->bankdata)->get(0));
}

$doubles* DataBufferDouble::getData() {
	$nc(this->theTrackable)->setUntrackable();
	return this->data;
}

$doubles* DataBufferDouble::getData(int32_t bank) {
	$nc(this->theTrackable)->setUntrackable();
	return $nc(this->bankdata)->get(bank);
}

$doubleArray2* DataBufferDouble::getBankData() {
	$nc(this->theTrackable)->setUntrackable();
	return $cast($doubleArray2, $nc(this->bankdata)->clone());
}

int32_t DataBufferDouble::getElem(int32_t i) {
	return $cast(int32_t, ($nc(this->data)->get(i + this->offset)));
}

int32_t DataBufferDouble::getElem(int32_t bank, int32_t i) {
	return $cast(int32_t, ($nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank))));
}

void DataBufferDouble::setElem(int32_t i, int32_t val) {
	$nc(this->data)->set(i + this->offset, (double)val);
	$nc(this->theTrackable)->markDirty();
}

void DataBufferDouble::setElem(int32_t bank, int32_t i, int32_t val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), (double)val);
	$nc(this->theTrackable)->markDirty();
}

float DataBufferDouble::getElemFloat(int32_t i) {
	return (float)$nc(this->data)->get(i + this->offset);
}

float DataBufferDouble::getElemFloat(int32_t bank, int32_t i) {
	return (float)$nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank));
}

void DataBufferDouble::setElemFloat(int32_t i, float val) {
	$nc(this->data)->set(i + this->offset, (double)val);
	$nc(this->theTrackable)->markDirty();
}

void DataBufferDouble::setElemFloat(int32_t bank, int32_t i, float val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), (double)val);
	$nc(this->theTrackable)->markDirty();
}

double DataBufferDouble::getElemDouble(int32_t i) {
	return $nc(this->data)->get(i + this->offset);
}

double DataBufferDouble::getElemDouble(int32_t bank, int32_t i) {
	return $nc($nc(this->bankdata)->get(bank))->get(i + $nc(this->offsets)->get(bank));
}

void DataBufferDouble::setElemDouble(int32_t i, double val) {
	$nc(this->data)->set(i + this->offset, val);
	$nc(this->theTrackable)->markDirty();
}

void DataBufferDouble::setElemDouble(int32_t bank, int32_t i, double val) {
	$nc($nc(this->bankdata)->get(bank))->set(i + $nc(this->offsets)->get(bank), val);
	$nc(this->theTrackable)->markDirty();
}

DataBufferDouble::DataBufferDouble() {
}

$Class* DataBufferDouble::load$($String* name, bool initialize) {
	$loadClass(DataBufferDouble, name, initialize, &_DataBufferDouble_ClassInfo_, allocate$DataBufferDouble);
	return class$;
}

$Class* DataBufferDouble::class$ = nullptr;

		} // image
	} // awt
} // java