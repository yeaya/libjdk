#include <javax/management/monitor/MonitorSettingException.h>
#include <javax/management/JMRuntimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMRuntimeException = ::javax::management::JMRuntimeException;

namespace javax {
	namespace management {
		namespace monitor {

void MonitorSettingException::init$() {
	$JMRuntimeException::init$();
}

void MonitorSettingException::init$($String* message) {
	$JMRuntimeException::init$(message);
}

MonitorSettingException::MonitorSettingException() {
}

MonitorSettingException::MonitorSettingException(const MonitorSettingException& e) : $JMRuntimeException(e) {
}

void MonitorSettingException::throw$() {
	throw *this;
}

$Class* MonitorSettingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MonitorSettingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MonitorSettingException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MonitorSettingException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.monitor.MonitorSettingException",
		"javax.management.JMRuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MonitorSettingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MonitorSettingException);
	});
	return class$;
}

$Class* MonitorSettingException::class$ = nullptr;

		} // monitor
	} // management
} // javax