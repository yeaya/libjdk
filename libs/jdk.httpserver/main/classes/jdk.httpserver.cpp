#include <jdk.httpserver.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/Authenticator$Failure.h>
#include <com/sun/net/httpserver/Authenticator$Result.h>
#include <com/sun/net/httpserver/Authenticator$Retry.h>
#include <com/sun/net/httpserver/Authenticator$Success.h>
#include <com/sun/net/httpserver/BasicAuthenticator.h>
#include <com/sun/net/httpserver/Filter.h>
#include <com/sun/net/httpserver/Filter$1.h>
#include <com/sun/net/httpserver/Filter$2.h>
#include <com/sun/net/httpserver/Filter$Chain.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpPrincipal.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <com/sun/net/httpserver/HttpsConfigurator.h>
#include <com/sun/net/httpserver/HttpsExchange.h>
#include <com/sun/net/httpserver/HttpsParameters.h>
#include <com/sun/net/httpserver/HttpsServer.h>
#include <com/sun/net/httpserver/spi/HttpServerProvider.h>
#include <com/sun/net/httpserver/spi/HttpServerProvider$1.h>
#include <sun/net/httpserver/AuthFilter.h>
#include <sun/net/httpserver/ChunkedInputStream.h>
#include <sun/net/httpserver/ChunkedOutputStream.h>
#include <sun/net/httpserver/Code.h>
#include <sun/net/httpserver/ContextList.h>
#include <sun/net/httpserver/DefaultHttpServerProvider.h>
#include <sun/net/httpserver/Event.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/FixedLengthInputStream.h>
#include <sun/net/httpserver/FixedLengthOutputStream.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <sun/net/httpserver/HttpConnection$State.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/HttpError.h>
#include <sun/net/httpserver/HttpExchangeImpl.h>
#include <sun/net/httpserver/HttpServerImpl.h>
#include <sun/net/httpserver/HttpsExchangeImpl.h>
#include <sun/net/httpserver/HttpsServerImpl.h>
#include <sun/net/httpserver/LeftOverInputStream.h>
#include <sun/net/httpserver/PlaceholderOutputStream.h>
#include <sun/net/httpserver/Request.h>
#include <sun/net/httpserver/Request$ReadStream.h>
#include <sun/net/httpserver/Request$WriteStream.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <sun/net/httpserver/SSLStreams$1.h>
#include <sun/net/httpserver/SSLStreams$BufType.h>
#include <sun/net/httpserver/SSLStreams$EngineWrapper.h>
#include <sun/net/httpserver/SSLStreams$InputStream.h>
#include <sun/net/httpserver/SSLStreams$OutputStream.h>
#include <sun/net/httpserver/SSLStreams$Parameters.h>
#include <sun/net/httpserver/SSLStreams$WrapperResult.h>
#include <sun/net/httpserver/ServerConfig.h>
#include <sun/net/httpserver/ServerConfig$1.h>
#include <sun/net/httpserver/ServerConfig$2.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <sun/net/httpserver/ServerImpl$1.h>
#include <sun/net/httpserver/ServerImpl$2.h>
#include <sun/net/httpserver/ServerImpl$DefaultExecutor.h>
#include <sun/net/httpserver/ServerImpl$Dispatcher.h>
#include <sun/net/httpserver/ServerImpl$Exchange.h>
#include <sun/net/httpserver/ServerImpl$Exchange$LinkHandler.h>
#include <sun/net/httpserver/ServerImpl$ServerTimerTask.h>
#include <sun/net/httpserver/ServerImpl$ServerTimerTask1.h>
#include <sun/net/httpserver/StreamClosedException.h>
#include <sun/net/httpserver/TimeSource.h>
#include <sun/net/httpserver/UndefLengthOutputStream.h>
#include <sun/net/httpserver/UnmodifiableHeaders.h>
#include <sun/net/httpserver/WriteFinishedEvent.h>


#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _jdk$httpserver_classes_[] = {
	$classEntry("com.sun.net.httpserver.Authenticator", ::com::sun::net::httpserver::Authenticator),
	$classEntry("com.sun.net.httpserver.Authenticator$Failure", ::com::sun::net::httpserver::Authenticator$Failure),
	$classEntry("com.sun.net.httpserver.Authenticator$Result", ::com::sun::net::httpserver::Authenticator$Result),
	$classEntry("com.sun.net.httpserver.Authenticator$Retry", ::com::sun::net::httpserver::Authenticator$Retry),
	$classEntry("com.sun.net.httpserver.Authenticator$Success", ::com::sun::net::httpserver::Authenticator$Success),
	$classEntry("com.sun.net.httpserver.BasicAuthenticator", ::com::sun::net::httpserver::BasicAuthenticator),
	$classEntry("com.sun.net.httpserver.Filter", ::com::sun::net::httpserver::Filter),
	$classEntry("com.sun.net.httpserver.Filter$1", ::com::sun::net::httpserver::Filter$1),
	$classEntry("com.sun.net.httpserver.Filter$2", ::com::sun::net::httpserver::Filter$2),
	$classEntry("com.sun.net.httpserver.Filter$Chain", ::com::sun::net::httpserver::Filter$Chain),
	$classEntry("com.sun.net.httpserver.Headers", ::com::sun::net::httpserver::Headers),
	$classEntry("com.sun.net.httpserver.HttpContext", ::com::sun::net::httpserver::HttpContext),
	$classEntry("com.sun.net.httpserver.HttpExchange", ::com::sun::net::httpserver::HttpExchange),
	$classEntry("com.sun.net.httpserver.HttpHandler", ::com::sun::net::httpserver::HttpHandler),
	$classEntry("com.sun.net.httpserver.HttpPrincipal", ::com::sun::net::httpserver::HttpPrincipal),
	$classEntry("com.sun.net.httpserver.HttpServer", ::com::sun::net::httpserver::HttpServer),
	$classEntry("com.sun.net.httpserver.HttpsConfigurator", ::com::sun::net::httpserver::HttpsConfigurator),
	$classEntry("com.sun.net.httpserver.HttpsExchange", ::com::sun::net::httpserver::HttpsExchange),
	$classEntry("com.sun.net.httpserver.HttpsParameters", ::com::sun::net::httpserver::HttpsParameters),
	$classEntry("com.sun.net.httpserver.HttpsServer", ::com::sun::net::httpserver::HttpsServer),
	$classEntry("com.sun.net.httpserver.spi.HttpServerProvider", ::com::sun::net::httpserver::spi::HttpServerProvider),
	$classEntry("com.sun.net.httpserver.spi.HttpServerProvider$1", ::com::sun::net::httpserver::spi::HttpServerProvider$1),
	$classEntry("sun.net.httpserver.AuthFilter", ::sun::net::httpserver::AuthFilter),
	$classEntry("sun.net.httpserver.ChunkedInputStream", ::sun::net::httpserver::ChunkedInputStream),
	$classEntry("sun.net.httpserver.ChunkedOutputStream", ::sun::net::httpserver::ChunkedOutputStream),
	$classEntry("sun.net.httpserver.Code", ::sun::net::httpserver::Code),
	$classEntry("sun.net.httpserver.ContextList", ::sun::net::httpserver::ContextList),
	$classEntry("sun.net.httpserver.DefaultHttpServerProvider", ::sun::net::httpserver::DefaultHttpServerProvider),
	$classEntry("sun.net.httpserver.Event", ::sun::net::httpserver::Event),
	$classEntry("sun.net.httpserver.ExchangeImpl", ::sun::net::httpserver::ExchangeImpl),
	$classEntry("sun.net.httpserver.FixedLengthInputStream", ::sun::net::httpserver::FixedLengthInputStream),
	$classEntry("sun.net.httpserver.FixedLengthOutputStream", ::sun::net::httpserver::FixedLengthOutputStream),
	$classEntry("sun.net.httpserver.HttpConnection", ::sun::net::httpserver::HttpConnection),
	$classEntry("sun.net.httpserver.HttpConnection$State", ::sun::net::httpserver::HttpConnection$State),
	$classEntry("sun.net.httpserver.HttpContextImpl", ::sun::net::httpserver::HttpContextImpl),
	$classEntry("sun.net.httpserver.HttpError", ::sun::net::httpserver::HttpError),
	$classEntry("sun.net.httpserver.HttpExchangeImpl", ::sun::net::httpserver::HttpExchangeImpl),
	$classEntry("sun.net.httpserver.HttpServerImpl", ::sun::net::httpserver::HttpServerImpl),
	$classEntry("sun.net.httpserver.HttpsExchangeImpl", ::sun::net::httpserver::HttpsExchangeImpl),
	$classEntry("sun.net.httpserver.HttpsServerImpl", ::sun::net::httpserver::HttpsServerImpl),
	$classEntry("sun.net.httpserver.LeftOverInputStream", ::sun::net::httpserver::LeftOverInputStream),
	$classEntry("sun.net.httpserver.PlaceholderOutputStream", ::sun::net::httpserver::PlaceholderOutputStream),
	$classEntry("sun.net.httpserver.Request", ::sun::net::httpserver::Request),
	$classEntry("sun.net.httpserver.Request$ReadStream", ::sun::net::httpserver::Request$ReadStream),
	$classEntry("sun.net.httpserver.Request$WriteStream", ::sun::net::httpserver::Request$WriteStream),
	$classEntry("sun.net.httpserver.SSLStreams", ::sun::net::httpserver::SSLStreams),
	$classEntry("sun.net.httpserver.SSLStreams$1", ::sun::net::httpserver::SSLStreams$1),
	$classEntry("sun.net.httpserver.SSLStreams$BufType", ::sun::net::httpserver::SSLStreams$BufType),
	$classEntry("sun.net.httpserver.SSLStreams$EngineWrapper", ::sun::net::httpserver::SSLStreams$EngineWrapper),
	$classEntry("sun.net.httpserver.SSLStreams$InputStream", ::sun::net::httpserver::SSLStreams$InputStream),
	$classEntry("sun.net.httpserver.SSLStreams$OutputStream", ::sun::net::httpserver::SSLStreams$OutputStream),
	$classEntry("sun.net.httpserver.SSLStreams$Parameters", ::sun::net::httpserver::SSLStreams$Parameters),
	$classEntry("sun.net.httpserver.SSLStreams$WrapperResult", ::sun::net::httpserver::SSLStreams$WrapperResult),
	$classEntry("sun.net.httpserver.ServerConfig", ::sun::net::httpserver::ServerConfig),
	$classEntry("sun.net.httpserver.ServerConfig$1", ::sun::net::httpserver::ServerConfig$1),
	$classEntry("sun.net.httpserver.ServerConfig$2", ::sun::net::httpserver::ServerConfig$2),
	$classEntry("sun.net.httpserver.ServerImpl", ::sun::net::httpserver::ServerImpl),
	$classEntry("sun.net.httpserver.ServerImpl$1", ::sun::net::httpserver::ServerImpl$1),
	$classEntry("sun.net.httpserver.ServerImpl$2", ::sun::net::httpserver::ServerImpl$2),
	$classEntry("sun.net.httpserver.ServerImpl$DefaultExecutor", ::sun::net::httpserver::ServerImpl$DefaultExecutor),
	$classEntry("sun.net.httpserver.ServerImpl$Dispatcher", ::sun::net::httpserver::ServerImpl$Dispatcher),
	$classEntry("sun.net.httpserver.ServerImpl$Exchange", ::sun::net::httpserver::ServerImpl$Exchange),
	$classEntry("sun.net.httpserver.ServerImpl$Exchange$LinkHandler", ::sun::net::httpserver::ServerImpl$Exchange$LinkHandler),
	$classEntry("sun.net.httpserver.ServerImpl$ServerTimerTask", ::sun::net::httpserver::ServerImpl$ServerTimerTask),
	$classEntry("sun.net.httpserver.ServerImpl$ServerTimerTask1", ::sun::net::httpserver::ServerImpl$ServerTimerTask1),
	$classEntry("sun.net.httpserver.StreamClosedException", ::sun::net::httpserver::StreamClosedException),
	$classEntry("sun.net.httpserver.TimeSource", ::sun::net::httpserver::TimeSource),
	$classEntry("sun.net.httpserver.UndefLengthOutputStream", ::sun::net::httpserver::UndefLengthOutputStream),
	$classEntry("sun.net.httpserver.UnmodifiableHeaders", ::sun::net::httpserver::UnmodifiableHeaders),
	$classEntry("sun.net.httpserver.WriteFinishedEvent", ::sun::net::httpserver::WriteFinishedEvent)
};

const char* _jdk$httpserver_packages_[] = {
	"com.sun.net.httpserver",
	"com.sun.net.httpserver.spi",
	"sun.net.httpserver"
};

void jdk$httpserver$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_jdk$httpserver_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$httpserver_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void jdk$httpserver$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$httpserver$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$httpserver$GetPackages() {
	int32_t length = $lengthOf(_jdk$httpserver_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_jdk$httpserver_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* jdk$httpserver$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_jdk$httpserver_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_jdk$httpserver_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* jdk$httpserver$GetResource($String* name) {
	return nullptr;
}

void jdk$httpserver::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.httpserver", "17.35", "",
		&_jdk$httpserver_ModuleInfo_,
		jdk$httpserver$LibEventAction,
		jdk$httpserver$GetPackages,
		jdk$httpserver$GetClassEntry,
		jdk$httpserver$GetResource
	};
	$System::addLibrary(&lib);
}