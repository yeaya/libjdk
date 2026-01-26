#include <com/sun/jmx/remote/util/ClassLogger.h>

#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

#undef DEBUG
#undef ERROR
#undef INFO
#undef TRACE
#undef WARNING

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

$FieldInfo _ClassLogger_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClassLogger, className)},
	{"logger", "Ljava/lang/System$Logger;", nullptr, $PRIVATE | $FINAL, $field(ClassLogger, logger)},
	{}
};

$MethodInfo _ClassLogger_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassLogger, init$, void, $String*, $String*)},
	{"config", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, config, void, $String*, $String*)},
	{"config", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, config, void, $String*, $Throwable*)},
	{"config", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, config, void, $String*, $String*, $Throwable*)},
	{"configOn", "()Z", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, configOn, bool)},
	{"debug", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, debug, void, $String*, $String*)},
	{"debug", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, debug, void, $String*, $Throwable*)},
	{"debug", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, debug, void, $String*, $String*, $Throwable*)},
	{"debugOn", "()Z", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, debugOn, bool)},
	{"error", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, error, void, $String*, $String*)},
	{"error", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, error, void, $String*, $Throwable*)},
	{"error", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, error, void, $String*, $String*, $Throwable*)},
	{"fine", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, fine, void, $String*, $String*)},
	{"fine", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, fine, void, $String*, $Throwable*)},
	{"fine", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, fine, void, $String*, $String*, $Throwable*)},
	{"fineOn", "()Z", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, fineOn, bool)},
	{"finer", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, finer, void, $String*, $String*)},
	{"finer", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, finer, void, $String*, $Throwable*)},
	{"finer", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, finer, void, $String*, $String*, $Throwable*)},
	{"finerOn", "()Z", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, finerOn, bool)},
	{"finest", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, finest, void, $String*, $String*)},
	{"finest", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, finest, void, $String*, $Throwable*)},
	{"finest", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, finest, void, $String*, $String*, $Throwable*)},
	{"finestOn", "()Z", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, finestOn, bool)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ClassLogger, getName, $String*)},
	{"info", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, info, void, $String*, $String*)},
	{"info", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, info, void, $String*, $Throwable*)},
	{"info", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, info, void, $String*, $String*, $Throwable*)},
	{"infoOn", "()Z", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, infoOn, bool)},
	{"isLoggable", "(Ljava/lang/System$Logger$Level;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ClassLogger, isLoggable, bool, $System$Logger$Level*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ClassLogger, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $Throwable*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(ClassLogger, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"severe", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, severe, void, $String*, $String*)},
	{"severe", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, severe, void, $String*, $Throwable*)},
	{"severe", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, severe, void, $String*, $String*, $Throwable*)},
	{"trace", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, trace, void, $String*, $String*)},
	{"trace", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, trace, void, $String*, $Throwable*)},
	{"trace", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, trace, void, $String*, $String*, $Throwable*)},
	{"traceOn", "()Z", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, traceOn, bool)},
	{"warning", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, warning, void, $String*, $String*)},
	{"warning", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, warning, void, $String*, $Throwable*)},
	{"warning", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, warning, void, $String*, $String*, $Throwable*)},
	{"warningOn", "()Z", nullptr, $PUBLIC | $FINAL, $method(ClassLogger, warningOn, bool)},
	{}
};

$InnerClassInfo _ClassLogger_InnerClassesInfo_[] = {
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassLogger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.util.ClassLogger",
	"java.lang.Object",
	"java.lang.System$Logger",
	_ClassLogger_FieldInfo_,
	_ClassLogger_MethodInfo_,
	nullptr,
	nullptr,
	_ClassLogger_InnerClassesInfo_
};

$Object* allocate$ClassLogger($Class* clazz) {
	return $of($alloc(ClassLogger));
}

void ClassLogger::init$($String* subsystem, $String* className) {
	$beforeCallerSensitive();
	$set(this, logger, $System::getLogger(subsystem));
	$set(this, className, className);
}

bool ClassLogger::traceOn() {
	$init($System$Logger$Level);
	return $nc(this->logger)->isLoggable($System$Logger$Level::TRACE);
}

bool ClassLogger::debugOn() {
	$init($System$Logger$Level);
	return $nc(this->logger)->isLoggable($System$Logger$Level::DEBUG);
}

bool ClassLogger::warningOn() {
	$init($System$Logger$Level);
	return $nc(this->logger)->isLoggable($System$Logger$Level::WARNING);
}

bool ClassLogger::infoOn() {
	$init($System$Logger$Level);
	return $nc(this->logger)->isLoggable($System$Logger$Level::INFO);
}

bool ClassLogger::configOn() {
	$init($System$Logger$Level);
	return $nc(this->logger)->isLoggable($System$Logger$Level::DEBUG);
}

bool ClassLogger::fineOn() {
	$init($System$Logger$Level);
	return $nc(this->logger)->isLoggable($System$Logger$Level::DEBUG);
}

bool ClassLogger::finerOn() {
	$init($System$Logger$Level);
	return $nc(this->logger)->isLoggable($System$Logger$Level::TRACE);
}

bool ClassLogger::finestOn() {
	$init($System$Logger$Level);
	return $nc(this->logger)->isLoggable($System$Logger$Level::TRACE);
}

void ClassLogger::debug($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, msg);
}

void ClassLogger::debug($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::debug($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, msg, t);
}

void ClassLogger::trace($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::TRACE, msg);
}

void ClassLogger::trace($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::TRACE, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::trace($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::TRACE, msg, t);
}

void ClassLogger::error($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::ERROR, msg);
}

void ClassLogger::error($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::ERROR, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::error($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::ERROR, msg, t);
}

void ClassLogger::finest($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::TRACE, msg);
}

void ClassLogger::finest($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::TRACE, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::finest($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::TRACE, msg, t);
}

void ClassLogger::finer($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::TRACE, msg);
}

void ClassLogger::finer($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::TRACE, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::finer($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, msg, t);
}

void ClassLogger::fine($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, msg);
}

void ClassLogger::fine($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::fine($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, msg, t);
}

void ClassLogger::config($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, msg);
}

void ClassLogger::config($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::config($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::DEBUG, msg, t);
}

void ClassLogger::info($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::INFO, msg);
}

void ClassLogger::info($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::INFO, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::info($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::INFO, msg, t);
}

void ClassLogger::warning($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::WARNING, msg);
}

void ClassLogger::warning($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::WARNING, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::warning($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::WARNING, msg, t);
}

void ClassLogger::severe($String* func, $String* msg) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::ERROR, msg);
}

void ClassLogger::severe($String* func, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::ERROR, $$str({this->className, "::"_s, func}), t);
}

void ClassLogger::severe($String* func, $String* msg, $Throwable* t) {
	$init($System$Logger$Level);
	$nc(this->logger)->log($System$Logger$Level::ERROR, msg, t);
}

$String* ClassLogger::getName() {
	return $nc(this->logger)->getName();
}

bool ClassLogger::isLoggable($System$Logger$Level* level) {
	return $nc(this->logger)->isLoggable(level);
}

void ClassLogger::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* msg, $Throwable* thrown) {
	$nc(this->logger)->log(level, bundle, msg, thrown);
}

void ClassLogger::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* format, $ObjectArray* params) {
	$nc(this->logger)->log(level, bundle, format, params);
}

ClassLogger::ClassLogger() {
}

$Class* ClassLogger::load$($String* name, bool initialize) {
	$loadClass(ClassLogger, name, initialize, &_ClassLogger_ClassInfo_, allocate$ClassLogger);
	return class$;
}

$Class* ClassLogger::class$ = nullptr;

				} // util
			} // remote
		} // jmx
	} // sun
} // com