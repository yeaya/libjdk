#include <com/sun/tools/sjavac/server/ServerMain.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/SjavacServer.h>
#include <com/sun/tools/sjavac/server/log/LazyInitFileLog.h>
#include <com/sun/tools/sjavac/server/log/LoggingOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef CMDERR
#undef ERROR
#undef INFO

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Log = ::com::sun::tools::sjavac::Log;
using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $SjavacServer = ::com::sun::tools::sjavac::server::SjavacServer;
using $LazyInitFileLog = ::com::sun::tools::sjavac::server::log::LazyInitFileLog;
using $LoggingOutputStream = ::com::sun::tools::sjavac::server::log::LoggingOutputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class ServerMain$$Lambda$lambda$run$0 : public $Thread$UncaughtExceptionHandler {
	$class(ServerMain$$Lambda$lambda$run$0, $NO_CLASS_INIT, $Thread$UncaughtExceptionHandler)
public:
	void init$() {
	}
	virtual void uncaughtException($Thread* t, $Throwable* e) override {
		ServerMain::lambda$run$0(t, e);
	}
};
$Class* ServerMain$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ServerMain$$Lambda$lambda$run$0, init$, void)},
		{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(ServerMain$$Lambda$lambda$run$0, uncaughtException, void, $Thread*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.server.ServerMain$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.lang.Thread$UncaughtExceptionHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(ServerMain$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerMain$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* ServerMain$$Lambda$lambda$run$0::class$ = nullptr;

$LazyInitFileLog* ServerMain::errorLog = nullptr;

void ServerMain::init$() {
}

int32_t ServerMain::run($StringArray* args) {
	$useLocalObjectStack();
	$init(ServerMain);
	$Log::setLogForCurrentThread($assignStatic(ServerMain::errorLog, $new($LazyInitFileLog, "server.log"_s)));
	$init($Log$Level);
	$Log::setLogLevel($Log$Level::ERROR);
	$Thread::setDefaultUncaughtExceptionHandler($$new(ServerMain$$Lambda$lambda$run$0));
	$System::setOut($$new($PrintStream, $$new($LoggingOutputStream, $System::out, $Log$Level::INFO, "[stdout] "_s)));
	$System::setErr($$new($PrintStream, $$new($LoggingOutputStream, $System::err, $Log$Level::ERROR, "[stderr] "_s)));
	if ($nc(args)->length > 1) {
		$Log::error("When spawning a background server, only a single --startserver argument is allowed."_s);
		$init($Main$Result);
		return $Main$Result::CMDERR->exitCode;
	}
	int32_t exitCode = 0;
	try {
		$var($SjavacServer, server, $new($SjavacServer, args->get(0)));
		exitCode = server->startServer();
	} catch ($IOException& ex) {
		ex->printStackTrace();
		$init($Main$Result);
		exitCode = $Main$Result::ERROR->exitCode;
	} catch ($InterruptedException& ex) {
		ex->printStackTrace();
		$init($Main$Result);
		exitCode = $Main$Result::ERROR->exitCode;
	}
	return exitCode;
}

$LazyInitFileLog* ServerMain::getErrorLog() {
	$init(ServerMain);
	return ServerMain::errorLog;
}

void ServerMain::lambda$run$0($Thread* t, $Throwable* e) {
	$init(ServerMain);
	$Log::setLogForCurrentThread(ServerMain::errorLog);
	$Log::error(e);
}

ServerMain::ServerMain() {
}

$Class* ServerMain::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.sjavac.server.ServerMain$$Lambda$lambda$run$0")) {
			return ServerMain$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"errorLog", "Lcom/sun/tools/sjavac/server/log/LazyInitFileLog;", nullptr, $PRIVATE | $STATIC, $staticField(ServerMain, errorLog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ServerMain, init$, void)},
		{"getErrorLog", "()Lcom/sun/tools/sjavac/server/log/LazyInitFileLog;", nullptr, $PUBLIC | $STATIC, $staticMethod(ServerMain, getErrorLog, $LazyInitFileLog*)},
		{"lambda$run$0", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ServerMain, lambda$run$0, void, $Thread*, $Throwable*)},
		{"run", "([Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(ServerMain, run, int32_t, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.server.ServerMain",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServerMain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerMain);
	});
	return class$;
}

$Class* ServerMain::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com