#include <java/util/logging/Logger$ConfigurationData.h>
#include <java/lang/InternalError.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/logging/Filter.h>
#include <java/util/logging/Handler.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

#undef INFO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $Filter = ::java::util::logging::Filter;
using $Handler = ::java::util::logging::Handler;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

void Logger$ConfigurationData::init$() {
	$set(this, handlers, $new($CopyOnWriteArrayList));
	$set(this, delegate, this);
	this->useParentHandlers = true;
	$init($Level);
	this->levelValue = $nc($Level::INFO)->intValue();
}

void Logger$ConfigurationData::setUseParentHandlers(bool flag) {
	this->useParentHandlers = flag;
	if (this->delegate != this) {
		$var(Logger$ConfigurationData, system, this->delegate);
		$synchronized(system) {
			system->useParentHandlers = this->useParentHandlers;
		}
	}
}

void Logger$ConfigurationData::setFilter($Filter* f) {
	$set(this, filter, f);
	if (this->delegate != this) {
		$var(Logger$ConfigurationData, system, this->delegate);
		$synchronized(system) {
			$set(system, filter, this->filter);
		}
	}
}

void Logger$ConfigurationData::setLevelObject($Level* l) {
	$set(this, levelObject, l);
	if (this->delegate != this) {
		$var(Logger$ConfigurationData, system, this->delegate);
		$synchronized(system) {
			$set(system, levelObject, this->levelObject);
		}
	}
}

void Logger$ConfigurationData::setLevelValue(int32_t v) {
	this->levelValue = v;
	if (this->delegate != this) {
		$var(Logger$ConfigurationData, system, this->delegate);
		$synchronized(system) {
			system->levelValue = this->levelValue;
		}
	}
}

void Logger$ConfigurationData::addHandler($Handler* h) {
	if (this->handlers->add(h)) {
		if (this->delegate != this) {
			$var(Logger$ConfigurationData, system, this->delegate);
			$synchronized(system) {
				$nc(system->handlers)->addIfAbsent(h);
			}
		}
	}
}

void Logger$ConfigurationData::removeHandler($Handler* h) {
	if (this->handlers->remove(h)) {
		if (this->delegate != this) {
			$var(Logger$ConfigurationData, system, this->delegate);
			$synchronized(system) {
				$nc(system->handlers)->remove(h);
			}
		}
	}
}

Logger$ConfigurationData* Logger$ConfigurationData::merge($Logger* systemPeer) {
	$useLocalObjectStack();
	if (!$nc(systemPeer)->isSystemLogger) {
		$throwNew($InternalError, "not a system logger"_s);
	}
	$var(Logger$ConfigurationData, system, systemPeer->config$);
	if (system == this) {
		return system;
	}
	$synchronized(system) {
		if (this->delegate == system) {
			return system;
		}
		$set(this, delegate, system);
		system->useParentHandlers = this->useParentHandlers;
		$set(system, filter, this->filter);
		$set(system, levelObject, this->levelObject);
		system->levelValue = this->levelValue;
		{
			$var($Iterator, i$, this->handlers->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Handler, h, $cast($Handler, i$->next()));
				if (!$nc(system->handlers)->contains(h)) {
					systemPeer->addHandler(h);
				}
			}
		}
		$nc(system->handlers)->retainAll(this->handlers);
		system->handlers->addAllAbsent(this->handlers);
	}
	$synchronized($Logger::treeLock) {
		systemPeer->updateEffectiveLevel();
	}
	return system;
}

Logger$ConfigurationData::Logger$ConfigurationData() {
}

$Class* Logger$ConfigurationData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delegate", "Ljava/util/logging/Logger$ConfigurationData;", nullptr, $PRIVATE | $VOLATILE, $field(Logger$ConfigurationData, delegate)},
		{"useParentHandlers", "Z", nullptr, $VOLATILE, $field(Logger$ConfigurationData, useParentHandlers)},
		{"filter", "Ljava/util/logging/Filter;", nullptr, $VOLATILE, $field(Logger$ConfigurationData, filter)},
		{"levelObject", "Ljava/util/logging/Level;", nullptr, $VOLATILE, $field(Logger$ConfigurationData, levelObject)},
		{"levelValue", "I", nullptr, $VOLATILE, $field(Logger$ConfigurationData, levelValue)},
		{"handlers", "Ljava/util/concurrent/CopyOnWriteArrayList;", "Ljava/util/concurrent/CopyOnWriteArrayList<Ljava/util/logging/Handler;>;", $FINAL, $field(Logger$ConfigurationData, handlers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Logger$ConfigurationData, init$, void)},
		{"addHandler", "(Ljava/util/logging/Handler;)V", nullptr, 0, $method(Logger$ConfigurationData, addHandler, void, $Handler*)},
		{"merge", "(Ljava/util/logging/Logger;)Ljava/util/logging/Logger$ConfigurationData;", nullptr, 0, $method(Logger$ConfigurationData, merge, Logger$ConfigurationData*, $Logger*)},
		{"removeHandler", "(Ljava/util/logging/Handler;)V", nullptr, 0, $method(Logger$ConfigurationData, removeHandler, void, $Handler*)},
		{"setFilter", "(Ljava/util/logging/Filter;)V", nullptr, 0, $method(Logger$ConfigurationData, setFilter, void, $Filter*)},
		{"setLevelObject", "(Ljava/util/logging/Level;)V", nullptr, 0, $method(Logger$ConfigurationData, setLevelObject, void, $Level*)},
		{"setLevelValue", "(I)V", nullptr, 0, $method(Logger$ConfigurationData, setLevelValue, void, int32_t)},
		{"setUseParentHandlers", "(Z)V", nullptr, 0, $method(Logger$ConfigurationData, setUseParentHandlers, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.Logger$ConfigurationData", "java.util.logging.Logger", "ConfigurationData", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.logging.Logger$ConfigurationData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.Logger"
	};
	$loadClass(Logger$ConfigurationData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Logger$ConfigurationData);
	});
	return class$;
}

$Class* Logger$ConfigurationData::class$ = nullptr;

		} // logging
	} // util
} // java