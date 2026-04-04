#include <com/sun/tools/sjavac/client/SjavacClient.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/client/PortFileInaccessibleException.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/server/PortFile.h>
#include <com/sun/tools/sjavac/server/SjavacServer.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/Runtime.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CONNECTION_TIMEOUT
#undef ERROR
#undef KEEPALIVE
#undef LINE_TYPE_RC
#undef MAX_CONNECT_ATTEMPTS
#undef POOLSIZE
#undef UTF_8
#undef WAIT_BETWEEN_CONNECT_ATTEMPTS

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Log = ::com::sun::tools::sjavac::Log;
using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $Util = ::com::sun::tools::sjavac::Util;
using $PortFileInaccessibleException = ::com::sun::tools::sjavac::client::PortFileInaccessibleException;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $SjavacServer = ::com::sun::tools::sjavac::server::SjavacServer;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintWriter = ::java::io::PrintWriter;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $Runtime = ::java::lang::Runtime;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace client {

class SjavacClient$$Lambda$error : public $Consumer {
	$class(SjavacClient$$Lambda$error, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* msg) override {
		$Log::error($cast($String, msg));
	}
};
$Class* SjavacClient$$Lambda$error::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SjavacClient$$Lambda$error, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SjavacClient$$Lambda$error, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.client.SjavacClient$$Lambda$error",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(SjavacClient$$Lambda$error, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SjavacClient$$Lambda$error);
	});
	return class$;
}
$Class* SjavacClient$$Lambda$error::class$ = nullptr;

int32_t SjavacClient::POOLSIZE = 0;

void SjavacClient::init$($Options* options) {
	$useLocalObjectStack();
	$var($String, serverConf, $nc(options)->getServerConf());
	$var($String, configFile, $Util::extractStringOption("conf"_s, serverConf, ""_s));
	try {
		$init($StandardCharsets);
		$var($List, configFileLines, $Files::readAllLines($($Path::of(configFile, $$new($StringArray, 0))), $StandardCharsets::UTF_8));
		$var($String, configFileContent, $String::join("\n"_s, configFileLines));
		$var($String, portfileName, $Util::extractStringOptionLine("portfile"_s, configFileContent, ""_s));
		if ($nc(portfileName)->isEmpty()) {
			$Log::error("Configuration file missing value for \'portfile\'"_s);
			$set(this, portFile, nullptr);
		} else {
			$set(this, portFile, $SjavacServer::getPortFile(portfileName));
		}
		$var($String, serverCommandString, $Util::extractStringOptionLine("servercmd"_s, configFileContent, ""_s));
		if ($nc(serverCommandString)->isEmpty()) {
			$Log::error("Configuration file missing value for \'servercmd\'"_s);
			$set(this, serverCommand, nullptr);
		} else {
			$set(this, serverCommand, serverCommandString);
		}
	} catch ($IOException& e) {
		$Log::error($$str({"Cannot read configuration file "_s, configFile}));
		$Log::debug(e);
		$set(this, portFile, nullptr);
		$set(this, serverCommand, nullptr);
	}
}

$Main$Result* SjavacClient::compile($StringArray* args) {
	$useLocalObjectStack();
	if (this->portFile == nullptr || this->serverCommand == nullptr) {
		$Log::error("Incorrect configuration, portfile and/or servercmd missing"_s);
		$init($Main$Result);
		return $Main$Result::ERROR;
	}
	$Main$Result* result = nullptr;
	try {
		$var($Socket, socket, tryConnect());
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($PrintWriter, out, $new($PrintWriter, $$new($OutputStreamWriter, $($nc(socket)->getOutputStream()))));
				$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $(socket->getInputStream()))));
				out->println($nc(args)->length);
				{
					$var($StringArray, arr$, args);
					for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
						$var($String, arg, arr$->get(i$));
						out->println(arg);
					}
				}
				out->flush();
				$var($String, line, nullptr);
				while (nullptr != ($assign(line, in->readLine()))) {
					if (!$nc(line)->contains(":"_s)) {
						$throwNew($AssertionError, $$of($str({"Could not parse protocol line: >>\""_s, line, "\"<<"_s})));
					}
					$var($StringArray, typeAndContent, line->split(":"_s, 2));
					$var($String, type, typeAndContent->get(0));
					$var($String, content, typeAndContent->get(1));
					try {
						if ($Log::isDebugging()) {
							$assign(content, $str({"[sjavac-server] "_s, content}));
						}
						$Log::log($($Log$Level::valueOf(type)), content);
						continue;
					} catch ($IllegalArgumentException& e) {
					}
					$init($SjavacServer);
					if ($nc(type)->equals($SjavacServer::LINE_TYPE_RC)) {
						result = $Main$Result::valueOf(content);
					}
				}
			} catch ($Throwable& t$) {
				if (socket != nullptr) {
					try {
						socket->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (socket != nullptr) {
				socket->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($PortFileInaccessibleException& e) {
		$Log::error("Port file inaccessible."_s);
		$init($Main$Result);
		result = $Main$Result::ERROR;
	} catch ($IOException& ioe) {
		$Log::error($$str({"IOException caught during compilation: "_s, $(ioe->getMessage())}));
		$Log::debug(ioe);
		$init($Main$Result);
		result = $Main$Result::ERROR;
	} catch ($InterruptedException& ie) {
		$($Thread::currentThread())->interrupt();
		$Log::error("Compilation interrupted."_s);
		$Log::debug(ie);
		$init($Main$Result);
		result = $Main$Result::ERROR;
	}
	if (result == nullptr) {
		$init($Main$Result);
		result = $Main$Result::ERROR;
	}
	return result;
}

$Socket* SjavacClient::tryConnect() {
	$useLocalObjectStack();
	makeSureServerIsRunning();
	int32_t attempt = 0;
	while (true) {
		$Log::debug($$str({"Trying to connect. Attempt "_s, $$str((++attempt)), " of "_s, $$str(SjavacClient::MAX_CONNECT_ATTEMPTS)}));
		try {
			return makeConnectionAttempt();
		} catch ($IOException& ex) {
			$Log::error($$str({"Connection attempt failed: "_s, $(ex->getMessage())}));
			if (attempt >= SjavacClient::MAX_CONNECT_ATTEMPTS) {
				$Log::error("Giving up"_s);
				$throwNew($IOException, "Could not connect to server"_s, ex);
			}
		}
		$Thread::sleep(SjavacClient::WAIT_BETWEEN_CONNECT_ATTEMPTS);
	}
	$shouldNotReachHere();
}

$Socket* SjavacClient::makeConnectionAttempt() {
	$useLocalObjectStack();
	$var($Socket, socket, $new($Socket));
	$var($InetAddress, localhost, $InetAddress::getByName(nullptr));
	$var($InetSocketAddress, address, $new($InetSocketAddress, localhost, $nc(this->portFile)->getPort()));
	socket->connect(address, SjavacClient::CONNECTION_TIMEOUT);
	$Log::debug("Connected"_s);
	return socket;
}

void SjavacClient::makeSureServerIsRunning() {
	if ($nc(this->portFile)->exists()) {
		$nc(this->portFile)->lock();
		$nc(this->portFile)->getValues();
		$nc(this->portFile)->unlock();
		if ($nc(this->portFile)->containsPortInfo()) {
			return;
		}
	}
	startNewServer();
}

void SjavacClient::shutdown() {
}

void SjavacClient::startNewServer() {
	$useLocalObjectStack();
	$var($List, cmd, $new($ArrayList));
	cmd->addAll($($Arrays::asList($($nc(this->serverCommand)->split(" "_s)))));
	cmd->add($$str({"--startserver:portfile="_s, $($nc(this->portFile)->getFilename()), ",poolsize="_s, $$str(SjavacClient::POOLSIZE), ",keepalive="_s, $$str(SjavacClient::KEEPALIVE)}));
	$var($Process, serverProcess, nullptr);
	$Log::debug($$str({"Starting server. Command: "_s, $($String::join(" "_s, cmd))}));
	try {
		$assign(serverProcess, $$nc($$new($ProcessBuilder, cmd)->redirectErrorStream(true))->start());
	} catch ($IOException& ex) {
		$Log::error($$str({"Failed to create server process: "_s, $(ex->getMessage())}));
		$Log::debug(ex);
		$throwNew($IOException, ex);
	}
	try {
		$nc(this->portFile)->waitForValidValues();
	} catch ($IOException& ex) {
		$Log::error($$str({"Sjavac server failed to initialize: "_s, $(ex->getMessage())}));
		$Log::error("Process output:"_s);
		$var($Reader, serverStdoutStderr, $new($InputStreamReader, $($nc(serverProcess)->getInputStream())));
		{
			$var($BufferedReader, br, $new($BufferedReader, serverStdoutStderr));
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$$nc(br->lines())->forEach($$new(SjavacClient$$Lambda$error));
				} catch ($Throwable& t$) {
					try {
						br->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				br->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		$Log::error("<End of process output>"_s);
		try {
			$Log::error($$str({"Process exit code: "_s, $$str(serverProcess->exitValue())}));
		} catch ($IllegalThreadStateException& e) {
		}
		$throwNew($IOException, $$str({"Server failed to initialize: "_s, $(ex->getMessage())}), ex);
	}
}

void SjavacClient::clinit$($Class* clazz) {
	SjavacClient::POOLSIZE = $$nc($Runtime::getRuntime())->availableProcessors();
}

SjavacClient::SjavacClient() {
}

$Class* SjavacClient::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.sjavac.client.SjavacClient$$Lambda$error")) {
			return SjavacClient$$Lambda$error::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"portFile", "Lcom/sun/tools/sjavac/server/PortFile;", nullptr, $PRIVATE, $field(SjavacClient, portFile)},
		{"serverCommand", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SjavacClient, serverCommand)},
		{"KEEPALIVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SjavacClient, KEEPALIVE)},
		{"POOLSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SjavacClient, POOLSIZE)},
		{"CONNECTION_TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SjavacClient, CONNECTION_TIMEOUT)},
		{"MAX_CONNECT_ATTEMPTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SjavacClient, MAX_CONNECT_ATTEMPTS)},
		{"WAIT_BETWEEN_CONNECT_ATTEMPTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SjavacClient, WAIT_BETWEEN_CONNECT_ATTEMPTS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC, $method(SjavacClient, init$, void, $Options*)},
		{"compile", "([Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC, $virtualMethod(SjavacClient, compile, $Main$Result*, $StringArray*)},
		{"makeConnectionAttempt", "()Ljava/net/Socket;", nullptr, $PRIVATE, $method(SjavacClient, makeConnectionAttempt, $Socket*), "java.io.IOException"},
		{"makeSureServerIsRunning", "()V", nullptr, $PRIVATE, $method(SjavacClient, makeSureServerIsRunning, void), "java.io.IOException,java.lang.InterruptedException"},
		{"shutdown", "()V", nullptr, $PUBLIC, $virtualMethod(SjavacClient, shutdown, void)},
		{"startNewServer", "()V", nullptr, $PUBLIC, $virtualMethod(SjavacClient, startNewServer, void), "java.io.IOException,java.lang.InterruptedException"},
		{"tryConnect", "()Ljava/net/Socket;", nullptr, $PRIVATE, $method(SjavacClient, tryConnect, $Socket*), "java.io.IOException,java.lang.InterruptedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.client.SjavacClient",
		"java.lang.Object",
		"com.sun.tools.sjavac.server.Sjavac",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SjavacClient, name, initialize, &classInfo$$, SjavacClient::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SjavacClient);
	});
	return class$;
}

$Class* SjavacClient::class$ = nullptr;

				} // client
			} // sjavac
		} // tools
	} // sun
} // com