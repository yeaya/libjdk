#include <com/sun/media/sound/DLSSampleLoop.h>

#include <jcpp.h>

#undef LOOP_TYPE_FORWARD
#undef LOOP_TYPE_RELEASE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DLSSampleLoop_FieldInfo_[] = {
	{"LOOP_TYPE_FORWARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSSampleLoop, LOOP_TYPE_FORWARD)},
	{"LOOP_TYPE_RELEASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSSampleLoop, LOOP_TYPE_RELEASE)},
	{"type", "J", nullptr, 0, $field(DLSSampleLoop, type)},
	{"start", "J", nullptr, 0, $field(DLSSampleLoop, start)},
	{"length", "J", nullptr, 0, $field(DLSSampleLoop, length)},
	{}
};

$MethodInfo _DLSSampleLoop_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DLSSampleLoop, init$, void)},
	{"getLength", "()J", nullptr, $PUBLIC, $method(DLSSampleLoop, getLength, int64_t)},
	{"getStart", "()J", nullptr, $PUBLIC, $method(DLSSampleLoop, getStart, int64_t)},
	{"getType", "()J", nullptr, $PUBLIC, $method(DLSSampleLoop, getType, int64_t)},
	{"setLength", "(J)V", nullptr, $PUBLIC, $method(DLSSampleLoop, setLength, void, int64_t)},
	{"setStart", "(J)V", nullptr, $PUBLIC, $method(DLSSampleLoop, setStart, void, int64_t)},
	{"setType", "(J)V", nullptr, $PUBLIC, $method(DLSSampleLoop, setType, void, int64_t)},
	{}
};

$ClassInfo _DLSSampleLoop_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSSampleLoop",
	"java.lang.Object",
	nullptr,
	_DLSSampleLoop_FieldInfo_,
	_DLSSampleLoop_MethodInfo_
};

$Object* allocate$DLSSampleLoop($Class* clazz) {
	return $of($alloc(DLSSampleLoop));
}

void DLSSampleLoop::init$() {
}

int64_t DLSSampleLoop::getLength() {
	return this->length;
}

void DLSSampleLoop::setLength(int64_t length) {
	this->length = length;
}

int64_t DLSSampleLoop::getStart() {
	return this->start;
}

void DLSSampleLoop::setStart(int64_t start) {
	this->start = start;
}

int64_t DLSSampleLoop::getType() {
	return this->type;
}

void DLSSampleLoop::setType(int64_t type) {
	this->type = type;
}

DLSSampleLoop::DLSSampleLoop() {
}

$Class* DLSSampleLoop::load$($String* name, bool initialize) {
	$loadClass(DLSSampleLoop, name, initialize, &_DLSSampleLoop_ClassInfo_, allocate$DLSSampleLoop);
	return class$;
}

$Class* DLSSampleLoop::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com