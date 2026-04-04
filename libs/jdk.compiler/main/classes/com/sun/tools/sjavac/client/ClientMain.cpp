#include <com/sun/tools/sjavac/client/ClientMain.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/AutoFlushWriter.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/client/SjavacClient.h>
#include <com/sun/tools/sjavac/comp/SjavacImpl.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <jcpp.h>

#undef CMDERR

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $AutoFlushWriter = ::com::sun::tools::sjavac::AutoFlushWriter;
using $Log = ::com::sun::tools::sjavac::Log;
using $SjavacClient = ::com::sun::tools::sjavac::client::SjavacClient;
using $SjavacImpl = ::com::sun::tools::sjavac::comp::SjavacImpl;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $Sjavac = ::com::sun::tools::sjavac::server::Sjavac;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace client {

void ClientMain::init$() {
}

int32_t ClientMain::run($StringArray* args) {
	$useLocalObjectStack();
	$var($Writer, var$0, $new($AutoFlushWriter, $$new($OutputStreamWriter, $System::out)));
	return run(args, var$0, $$new($AutoFlushWriter, $$new($OutputStreamWriter, $System::err)));
}

int32_t ClientMain::run($StringArray* args, $Writer* out, $Writer* err) {
	$useLocalObjectStack();
	$Log::setLogForCurrentThread($$new($Log, out, err));
	$var($Options, options, nullptr);
	try {
		$assign(options, $Options::parseArgs(args));
	} catch ($IllegalArgumentException& e) {
		$Log::error($(e->getMessage()));
		$init($Main$Result);
		return $Main$Result::CMDERR->exitCode;
	}
	$Log::setLogLevel($($nc(options)->getLogLevel()));
	$Log::debug("=========================================================="_s);
	$Log::debug("Launching sjavac client with the following parameters:"_s);
	$Log::debug($$str({"    "_s, $(options->getStateArgsString())}));
	$Log::debug("=========================================================="_s);
	bool useServer = options->getServerConf() != nullptr;
	$var($Sjavac, sjavac, useServer ? $cast($Sjavac, $new($SjavacClient, options)) : $cast($Sjavac, $new($SjavacImpl)));
	$Main$Result* result = $nc(sjavac)->compile(args);
	if (!useServer) {
		sjavac->shutdown();
	}
	return $nc(result)->exitCode;
}

ClientMain::ClientMain() {
}

$Class* ClientMain::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClientMain, init$, void)},
		{"run", "([Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(ClientMain, run, int32_t, $StringArray*)},
		{"run", "([Ljava/lang/String;Ljava/io/Writer;Ljava/io/Writer;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(ClientMain, run, int32_t, $StringArray*, $Writer*, $Writer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.client.ClientMain",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ClientMain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientMain);
	});
	return class$;
}

$Class* ClientMain::class$ = nullptr;

				} // client
			} // sjavac
		} // tools
	} // sun
} // com