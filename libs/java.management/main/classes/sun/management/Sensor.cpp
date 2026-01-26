#include <sun/management/Sensor.h>

#include <java/lang/management/MemoryUsage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryUsage = ::java::lang::management::MemoryUsage;

namespace sun {
	namespace management {

$FieldInfo _Sensor_FieldInfo_[] = {
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Sensor, lock)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Sensor, name)},
	{"count", "J", nullptr, $PRIVATE, $field(Sensor, count)},
	{"on", "Z", nullptr, $PRIVATE, $field(Sensor, on)},
	{}
};

$MethodInfo _Sensor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Sensor, init$, void, $String*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Sensor, clear, void)},
	{"clear", "(I)V", nullptr, $PUBLIC, $virtualMethod(Sensor, clear, void, int32_t)},
	{"clearAction", "()V", nullptr, $ABSTRACT, $virtualMethod(Sensor, clearAction, void)},
	{"getCount", "()J", nullptr, $PUBLIC, $virtualMethod(Sensor, getCount, int64_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Sensor, getName, $String*)},
	{"isOn", "()Z", nullptr, $PUBLIC, $virtualMethod(Sensor, isOn, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Sensor, toString, $String*)},
	{"trigger", "()V", nullptr, $PUBLIC, $virtualMethod(Sensor, trigger, void)},
	{"trigger", "(I)V", nullptr, $PUBLIC, $virtualMethod(Sensor, trigger, void, int32_t)},
	{"trigger", "(ILjava/lang/management/MemoryUsage;)V", nullptr, $PUBLIC, $virtualMethod(Sensor, trigger, void, int32_t, $MemoryUsage*)},
	{"triggerAction", "()V", nullptr, $ABSTRACT, $virtualMethod(Sensor, triggerAction, void)},
	{"triggerAction", "(Ljava/lang/management/MemoryUsage;)V", nullptr, $ABSTRACT, $virtualMethod(Sensor, triggerAction, void, $MemoryUsage*)},
	{}
};

$ClassInfo _Sensor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.management.Sensor",
	"java.lang.Object",
	nullptr,
	_Sensor_FieldInfo_,
	_Sensor_MethodInfo_
};

$Object* allocate$Sensor($Class* clazz) {
	return $of($alloc(Sensor));
}

void Sensor::init$($String* name) {
	$set(this, lock, $new($Object));
	$set(this, name, name);
}

$String* Sensor::getName() {
	return this->name;
}

int64_t Sensor::getCount() {
	$synchronized(this->lock) {
		return this->count;
	}
}

bool Sensor::isOn() {
	$synchronized(this->lock) {
		return this->on;
	}
}

void Sensor::trigger() {
	$synchronized(this->lock) {
		this->on = true;
		++this->count;
	}
	triggerAction();
}

void Sensor::trigger(int32_t increment) {
	$synchronized(this->lock) {
		this->on = true;
		this->count += increment;
	}
	triggerAction();
}

void Sensor::trigger(int32_t increment, $MemoryUsage* usage) {
	$synchronized(this->lock) {
		this->on = true;
		this->count += increment;
	}
	triggerAction(usage);
}

void Sensor::clear() {
	$synchronized(this->lock) {
		this->on = false;
	}
	clearAction();
}

void Sensor::clear(int32_t increment) {
	$synchronized(this->lock) {
		this->on = false;
		this->count += increment;
	}
	clearAction();
}

$String* Sensor::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({"Sensor - "_s, $(getName())}));
	$var($String, var$1, $$concat(var$2, (isOn() ? " on "_s : " off "_s)));
	$var($String, var$0, $$concat(var$1, " count = "_s));
	return $concat(var$0, $$str(getCount()));
}

Sensor::Sensor() {
}

$Class* Sensor::load$($String* name, bool initialize) {
	$loadClass(Sensor, name, initialize, &_Sensor_ClassInfo_, allocate$Sensor);
	return class$;
}

$Class* Sensor::class$ = nullptr;

	} // management
} // sun