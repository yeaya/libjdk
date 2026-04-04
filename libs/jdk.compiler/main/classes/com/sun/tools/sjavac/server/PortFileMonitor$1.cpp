#include <com/sun/tools/sjavac/server/PortFileMonitor$1.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/PortFile.h>
#include <com/sun/tools/sjavac/server/PortFileMonitor.h>
#include <com/sun/tools/sjavac/server/SjavacServer.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/util/TimerTask.h>
#include <jcpp.h>

using $Log = ::com::sun::tools::sjavac::Log;
using $PortFileMonitor = ::com::sun::tools::sjavac::server::PortFileMonitor;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

void PortFileMonitor$1::init$($PortFileMonitor* this$0, $Log* val$log) {
	$set(this, this$0, this$0);
	$set(this, val$log, val$log);
	$TimerTask::init$();
}

void PortFileMonitor$1::run() {
	$Log::setLogForCurrentThread(this->val$log);
	$Log::debug("Checking port file status..."_s);
	try {
		if (!$nc(this->this$0->portFile)->exists()) {
			$nc(this->this$0->server)->shutdown("Quitting because portfile was deleted!"_s);
		} else if (this->this$0->portFile->markedForStop()) {
			$nc(this->this$0->server)->shutdown("Quitting because a portfile.stop file was found!"_s);
		} else if (!this->this$0->portFile->stillMyValues()) {
			$nc(this->this$0->server)->shutdown("Quitting because portfile is now owned by another javac server!"_s);
		}
	} catch ($IOException& e) {
		$Log::error("IOException caught in PortFileMonitor."_s);
		$Log::debug(e);
	} catch ($InterruptedException& e) {
		$($Thread::currentThread())->interrupt();
		$Log::error(e);
	}
}

PortFileMonitor$1::PortFileMonitor$1() {
}

$Class* PortFileMonitor$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/sjavac/server/PortFileMonitor;", nullptr, $FINAL | $SYNTHETIC, $field(PortFileMonitor$1, this$0)},
		{"val$log", "Lcom/sun/tools/sjavac/Log;", nullptr, $FINAL | $SYNTHETIC, $field(PortFileMonitor$1, val$log)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/server/PortFileMonitor;Lcom/sun/tools/sjavac/Log;)V", nullptr, 0, $method(PortFileMonitor$1, init$, void, $PortFileMonitor*, $Log*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PortFileMonitor$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.sjavac.server.PortFileMonitor",
		"start",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.server.PortFileMonitor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.sjavac.server.PortFileMonitor$1",
		"java.util.TimerTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.server.PortFileMonitor"
	};
	$loadClass(PortFileMonitor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortFileMonitor$1);
	});
	return class$;
}

$Class* PortFileMonitor$1::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com