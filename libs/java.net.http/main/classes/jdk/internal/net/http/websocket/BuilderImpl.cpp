#include <jdk/internal/net/http/websocket/BuilderImpl.h>
#include <java/lang/AssertionError.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/WebSocket$Builder.h>
#include <java/net/http/WebSocket$Listener.h>
#include <java/time/Duration.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jdk/internal/net/http/common/Pair.h>
#include <jdk/internal/net/http/websocket/WebSocketImpl.h>
#include <jcpp.h>

using $PairArray = $Array<::jdk::internal::net::http::common::Pair>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $WebSocket$Builder = ::java::net::http::WebSocket$Builder;
using $WebSocket$Listener = ::java::net::http::WebSocket$Listener;
using $Duration = ::java::time::Duration;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Pair = ::jdk::internal::net::http::common::Pair;
using $WebSocketImpl = ::jdk::internal::net::http::websocket::WebSocketImpl;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

bool BuilderImpl::$assertionsDisabled = false;

void BuilderImpl::init$($HttpClient* client, $ProxySelector* proxySelector) {
	$useLocalObjectStack();
	$var($Optional, var$0, $Optional::ofNullable(proxySelector));
	$var($Collection, var$1, $cast($AbstractCollection, $new($ArrayList)));
	BuilderImpl::init$(client, nullptr, nullptr, var$0, var$1, $$cast($AbstractCollection, $new($ArrayList)), nullptr);
}

void BuilderImpl::init$($HttpClient* client, $URI* uri, $WebSocket$Listener* listener, $Optional* proxySelector, $Collection* headers, $Collection* subprotocols, $Duration* timeout) {
	$useLocalObjectStack();
	$set(this, client, client);
	$set(this, uri, uri);
	$set(this, listener, listener);
	$set(this, proxySelector, proxySelector);
	bool var$0 = !BuilderImpl::$assertionsDisabled;
	if (var$0) {
		bool var$1 = !$$nc($nc(client)->proxy())->isPresent();
		var$0 = !(var$1 || $$nc(client->proxy())->equals(proxySelector));
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$set(this, headers, headers);
	$set(this, subprotocols$, subprotocols);
	$set(this, timeout, timeout);
}

$WebSocket$Builder* BuilderImpl::header($String* name, $String* value) {
	$Objects::requireNonNull(name, "name"_s);
	$Objects::requireNonNull(value, "value"_s);
	$nc(this->headers)->add($($Pair::pair(name, value)));
	return this;
}

$WebSocket$Builder* BuilderImpl::subprotocols($String* mostPreferred, $StringArray* lesserPreferred) {
	$useLocalObjectStack();
	$Objects::requireNonNull(mostPreferred, "mostPreferred"_s);
	$Objects::requireNonNull(lesserPreferred, "lesserPreferred"_s);
	$var($List, subprotocols, $new($ArrayList, $nc(lesserPreferred)->length + 1));
	subprotocols->add(mostPreferred);
	for (int32_t i = 0; i < lesserPreferred->length; ++i) {
		$var($String, p, lesserPreferred->get(i));
		$Objects::requireNonNull(p, $$str({"lesserPreferred["_s, $$str(i), "]"_s}));
		subprotocols->add(p);
	}
	$nc(this->subprotocols$)->clear();
	this->subprotocols$->addAll(subprotocols);
	return this;
}

$WebSocket$Builder* BuilderImpl::connectTimeout($Duration* timeout) {
	$set(this, timeout, $cast($Duration, $Objects::requireNonNull(timeout, "timeout"_s)));
	return this;
}

$CompletableFuture* BuilderImpl::buildAsync($URI* uri, $WebSocket$Listener* listener) {
	$set(this, uri, $cast($URI, $Objects::requireNonNull(uri, "uri"_s)));
	$set(this, listener, $cast($WebSocket$Listener, $Objects::requireNonNull(listener, "listener"_s)));
	$var(BuilderImpl, copy, immutableCopy());
	return $WebSocketImpl::newInstanceAsync(copy);
}

$HttpClient* BuilderImpl::getClient() {
	return this->client;
}

$URI* BuilderImpl::getUri() {
	return this->uri;
}

$WebSocket$Listener* BuilderImpl::getListener() {
	return this->listener;
}

$Collection* BuilderImpl::getHeaders() {
	return this->headers;
}

$Collection* BuilderImpl::getSubprotocols() {
	return this->subprotocols$;
}

$Duration* BuilderImpl::getConnectTimeout() {
	return this->timeout;
}

$Optional* BuilderImpl::getProxySelector() {
	return this->proxySelector;
}

BuilderImpl* BuilderImpl::immutableCopy() {
	$useLocalObjectStack();
	$var($HttpClient, var$0, this->client);
	$var($URI, var$1, this->uri);
	$var($WebSocket$Listener, var$2, this->listener);
	$var($Optional, var$3, this->proxySelector);
	$var($Collection, var$4, $List::of($$cast($PairArray, $nc(this->headers)->toArray($$new($PairArray, 0)))));
	$var(BuilderImpl, copy, $new(BuilderImpl, var$0, var$1, var$2, var$3, var$4, $($List::of($$cast($StringArray, $nc(this->subprotocols$)->toArray($$new($StringArray, 0))))), this->timeout));
	return copy;
}

void BuilderImpl::clinit$($Class* clazz) {
	BuilderImpl::$assertionsDisabled = !BuilderImpl::class$->desiredAssertionStatus();
}

BuilderImpl::BuilderImpl() {
}

$Class* BuilderImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BuilderImpl, $assertionsDisabled)},
		{"client", "Ljava/net/http/HttpClient;", nullptr, $PRIVATE | $FINAL, $field(BuilderImpl, client)},
		{"uri", "Ljava/net/URI;", nullptr, $PRIVATE, $field(BuilderImpl, uri)},
		{"listener", "Ljava/net/http/WebSocket$Listener;", nullptr, $PRIVATE, $field(BuilderImpl, listener)},
		{"proxySelector", "Ljava/util/Optional;", "Ljava/util/Optional<Ljava/net/ProxySelector;>;", $PRIVATE | $FINAL, $field(BuilderImpl, proxySelector)},
		{"headers", "Ljava/util/Collection;", "Ljava/util/Collection<Ljdk/internal/net/http/common/Pair<Ljava/lang/String;Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(BuilderImpl, headers)},
		{"subprotocols", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(BuilderImpl, subprotocols$)},
		{"timeout", "Ljava/time/Duration;", nullptr, $PRIVATE, $field(BuilderImpl, timeout)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpClient;Ljava/net/ProxySelector;)V", nullptr, $PUBLIC, $method(BuilderImpl, init$, void, $HttpClient*, $ProxySelector*)},
		{"<init>", "(Ljava/net/http/HttpClient;Ljava/net/URI;Ljava/net/http/WebSocket$Listener;Ljava/util/Optional;Ljava/util/Collection;Ljava/util/Collection;Ljava/time/Duration;)V", "(Ljava/net/http/HttpClient;Ljava/net/URI;Ljava/net/http/WebSocket$Listener;Ljava/util/Optional<Ljava/net/ProxySelector;>;Ljava/util/Collection<Ljdk/internal/net/http/common/Pair<Ljava/lang/String;Ljava/lang/String;>;>;Ljava/util/Collection<Ljava/lang/String;>;Ljava/time/Duration;)V", $PRIVATE, $method(BuilderImpl, init$, void, $HttpClient*, $URI*, $WebSocket$Listener*, $Optional*, $Collection*, $Collection*, $Duration*)},
		{"buildAsync", "(Ljava/net/URI;Ljava/net/http/WebSocket$Listener;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/net/URI;Ljava/net/http/WebSocket$Listener;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC, $virtualMethod(BuilderImpl, buildAsync, $CompletableFuture*, $URI*, $WebSocket$Listener*)},
		{"connectTimeout", "(Ljava/time/Duration;)Ljava/net/http/WebSocket$Builder;", nullptr, $PUBLIC, $virtualMethod(BuilderImpl, connectTimeout, $WebSocket$Builder*, $Duration*)},
		{"getClient", "()Ljava/net/http/HttpClient;", nullptr, 0, $method(BuilderImpl, getClient, $HttpClient*)},
		{"getConnectTimeout", "()Ljava/time/Duration;", nullptr, 0, $method(BuilderImpl, getConnectTimeout, $Duration*)},
		{"getHeaders", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljdk/internal/net/http/common/Pair<Ljava/lang/String;Ljava/lang/String;>;>;", 0, $method(BuilderImpl, getHeaders, $Collection*)},
		{"getListener", "()Ljava/net/http/WebSocket$Listener;", nullptr, 0, $method(BuilderImpl, getListener, $WebSocket$Listener*)},
		{"getProxySelector", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/ProxySelector;>;", 0, $method(BuilderImpl, getProxySelector, $Optional*)},
		{"getSubprotocols", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/String;>;", 0, $method(BuilderImpl, getSubprotocols, $Collection*)},
		{"getUri", "()Ljava/net/URI;", nullptr, 0, $method(BuilderImpl, getUri, $URI*)},
		{"header", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/http/WebSocket$Builder;", nullptr, $PUBLIC, $virtualMethod(BuilderImpl, header, $WebSocket$Builder*, $String*, $String*)},
		{"immutableCopy", "()Ljdk/internal/net/http/websocket/BuilderImpl;", nullptr, $PRIVATE, $method(BuilderImpl, immutableCopy, BuilderImpl*)},
		{"subprotocols", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/net/http/WebSocket$Builder;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(BuilderImpl, subprotocols, $WebSocket$Builder*, $String*, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.WebSocket$Builder", "java.net.http.WebSocket", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.websocket.BuilderImpl",
		"java.lang.Object",
		"java.net.http.WebSocket$Builder",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(BuilderImpl, name, initialize, &classInfo$$, BuilderImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BuilderImpl);
	});
	return class$;
}

$Class* BuilderImpl::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk