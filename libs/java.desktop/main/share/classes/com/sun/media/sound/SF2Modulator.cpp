#include <com/sun/media/sound/SF2Modulator.h>

#include <jcpp.h>

#undef SOURCE_CHANNEL_PRESSURE
#undef SOURCE_DIRECTION_MAX_MIN
#undef SOURCE_DIRECTION_MIN_MAX
#undef SOURCE_MIDI_CONTROL
#undef SOURCE_NONE
#undef SOURCE_NOTE_ON_KEYNUMBER
#undef SOURCE_NOTE_ON_VELOCITY
#undef SOURCE_PITCH_SENSITIVITY
#undef SOURCE_PITCH_WHEEL
#undef SOURCE_POLARITY_BIPOLAR
#undef SOURCE_POLARITY_UNIPOLAR
#undef SOURCE_POLY_PRESSURE
#undef SOURCE_TYPE_CONCAVE
#undef SOURCE_TYPE_CONVEX
#undef SOURCE_TYPE_LINEAR
#undef SOURCE_TYPE_SWITCH
#undef TRANSFORM_ABSOLUTE
#undef TRANSFORM_LINEAR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2Modulator_FieldInfo_[] = {
	{"SOURCE_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_NONE)},
	{"SOURCE_NOTE_ON_VELOCITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_NOTE_ON_VELOCITY)},
	{"SOURCE_NOTE_ON_KEYNUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_NOTE_ON_KEYNUMBER)},
	{"SOURCE_POLY_PRESSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_POLY_PRESSURE)},
	{"SOURCE_CHANNEL_PRESSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_CHANNEL_PRESSURE)},
	{"SOURCE_PITCH_WHEEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_PITCH_WHEEL)},
	{"SOURCE_PITCH_SENSITIVITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_PITCH_SENSITIVITY)},
	{"SOURCE_MIDI_CONTROL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_MIDI_CONTROL)},
	{"SOURCE_DIRECTION_MIN_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_DIRECTION_MIN_MAX)},
	{"SOURCE_DIRECTION_MAX_MIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_DIRECTION_MAX_MIN)},
	{"SOURCE_POLARITY_UNIPOLAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_POLARITY_UNIPOLAR)},
	{"SOURCE_POLARITY_BIPOLAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_POLARITY_BIPOLAR)},
	{"SOURCE_TYPE_LINEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_TYPE_LINEAR)},
	{"SOURCE_TYPE_CONCAVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_TYPE_CONCAVE)},
	{"SOURCE_TYPE_CONVEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_TYPE_CONVEX)},
	{"SOURCE_TYPE_SWITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, SOURCE_TYPE_SWITCH)},
	{"TRANSFORM_LINEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, TRANSFORM_LINEAR)},
	{"TRANSFORM_ABSOLUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SF2Modulator, TRANSFORM_ABSOLUTE)},
	{"sourceOperator", "I", nullptr, 0, $field(SF2Modulator, sourceOperator)},
	{"destinationOperator", "I", nullptr, 0, $field(SF2Modulator, destinationOperator)},
	{"amount", "S", nullptr, 0, $field(SF2Modulator, amount)},
	{"amountSourceOperator", "I", nullptr, 0, $field(SF2Modulator, amountSourceOperator)},
	{"transportOperator", "I", nullptr, 0, $field(SF2Modulator, transportOperator)},
	{}
};

$MethodInfo _SF2Modulator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SF2Modulator, init$, void)},
	{"getAmount", "()S", nullptr, $PUBLIC, $method(SF2Modulator, getAmount, int16_t)},
	{"getAmountSourceOperator", "()I", nullptr, $PUBLIC, $method(SF2Modulator, getAmountSourceOperator, int32_t)},
	{"getDestinationOperator", "()I", nullptr, $PUBLIC, $method(SF2Modulator, getDestinationOperator, int32_t)},
	{"getSourceOperator", "()I", nullptr, $PUBLIC, $method(SF2Modulator, getSourceOperator, int32_t)},
	{"getTransportOperator", "()I", nullptr, $PUBLIC, $method(SF2Modulator, getTransportOperator, int32_t)},
	{"setAmount", "(S)V", nullptr, $PUBLIC, $method(SF2Modulator, setAmount, void, int16_t)},
	{"setAmountSourceOperator", "(I)V", nullptr, $PUBLIC, $method(SF2Modulator, setAmountSourceOperator, void, int32_t)},
	{"setDestinationOperator", "(I)V", nullptr, $PUBLIC, $method(SF2Modulator, setDestinationOperator, void, int32_t)},
	{"setSourceOperator", "(I)V", nullptr, $PUBLIC, $method(SF2Modulator, setSourceOperator, void, int32_t)},
	{"setTransportOperator", "(I)V", nullptr, $PUBLIC, $method(SF2Modulator, setTransportOperator, void, int32_t)},
	{}
};

$ClassInfo _SF2Modulator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2Modulator",
	"java.lang.Object",
	nullptr,
	_SF2Modulator_FieldInfo_,
	_SF2Modulator_MethodInfo_
};

$Object* allocate$SF2Modulator($Class* clazz) {
	return $of($alloc(SF2Modulator));
}

void SF2Modulator::init$() {
}

int16_t SF2Modulator::getAmount() {
	return this->amount;
}

void SF2Modulator::setAmount(int16_t amount) {
	this->amount = amount;
}

int32_t SF2Modulator::getAmountSourceOperator() {
	return this->amountSourceOperator;
}

void SF2Modulator::setAmountSourceOperator(int32_t amountSourceOperator) {
	this->amountSourceOperator = amountSourceOperator;
}

int32_t SF2Modulator::getTransportOperator() {
	return this->transportOperator;
}

void SF2Modulator::setTransportOperator(int32_t transportOperator) {
	this->transportOperator = transportOperator;
}

int32_t SF2Modulator::getDestinationOperator() {
	return this->destinationOperator;
}

void SF2Modulator::setDestinationOperator(int32_t destinationOperator) {
	this->destinationOperator = destinationOperator;
}

int32_t SF2Modulator::getSourceOperator() {
	return this->sourceOperator;
}

void SF2Modulator::setSourceOperator(int32_t sourceOperator) {
	this->sourceOperator = sourceOperator;
}

SF2Modulator::SF2Modulator() {
}

$Class* SF2Modulator::load$($String* name, bool initialize) {
	$loadClass(SF2Modulator, name, initialize, &_SF2Modulator_ClassInfo_, allocate$SF2Modulator);
	return class$;
}

$Class* SF2Modulator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com